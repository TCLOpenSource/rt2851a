#include <linux/init.h>
#include <linux/slab.h>
#include <linux/compat.h>
#include <linux/nospec.h>
#include <sound/core.h>
#include <sound/minors.h>
#include <sound/hwdep.h>
#include "ion.h"
#include <sound/rtk_snd.h>

extern struct ion_device *rtk_ion_device;

/*
 */
static int rtk_hwdep_ioctl(struct snd_hwdep *hw, struct file *file,
			   unsigned int cmd, unsigned long arg)
{
	struct snd_card_mars *mars = (struct snd_card_mars *) hw->private_data;
	int tmpfd = -1;
	struct snd_mmap_data data;

	switch (cmd) {
	case SNDRV_PCM_IOCTL_MMAP_DATA_FD:
		if (copy_from_user((void*)&data, (const void __user*)arg, sizeof(data))) {
			return -EFAULT;
		}

		tmpfd = rtk_snd_ion_get_share_fd(mars, data.dev);

		if (tmpfd < 0) {
			pr_err("[ALSA][rtk_hwdep_ioctl] get shared fd failed\n");
			tmpfd = -1;

			return -EFAULT;
		}

		data.fd = tmpfd;
		if (copy_to_user((void __user *) arg, &data, sizeof(data))) {
			return -EFAULT;
		}

		return 0;
	}

	return -ENOIOCTLCMD;
}

#ifdef CONFIG_COMPAT
static int rtk_hwdep_ioctl_compat(struct snd_hwdep *hw, struct file *file,
				  unsigned int cmd, unsigned long arg)
{
	return rtk_hwdep_ioctl(hw, file, cmd, (unsigned long)compat_ptr(arg));
}
#endif

static int rtk_hwdep_open(struct snd_hwdep *hw, struct file *file)
{
	return 0;
}

int rtk_snd_create_hwdep(struct snd_card_mars *mars, int dev)
{
	char hwname[16];
	struct snd_hwdep *hwdep;
	int err;
	char debug_name[64];
	struct ion_heap_data heap_data[ION_NUM_HEAP_IDS];
    struct ion_heap_query query = {
        .cnt = ION_NUM_HEAP_IDS, .heaps = (__u64)heap_data,
    };

	snprintf(hwname, sizeof(hwname), "Mars hwdep %d", dev);
	err = snd_hwdep_new(mars->card, hwname, dev, &hwdep);
	if (err < 0)
		return err;
	mars->rtk_hwdep = hwdep;
	snprintf(hwdep->name, sizeof(hwdep->name), "Mars hwdep %d", dev);
	hwdep->private_data = (void *)mars;
	hwdep->exclusive = 1;

	hwdep->ops.open = rtk_hwdep_open;
	hwdep->ops.ioctl = rtk_hwdep_ioctl;
#ifdef CONFIG_COMPAT
	hwdep->ops.ioctl_compat = rtk_hwdep_ioctl_compat;
#endif

	snprintf(debug_name, 64, "snd_%u", task_pid_nr(current->group_leader));

	mars->snd_client_ion = -1; // init
	err = ion_query_heaps(&query);
	if (err) {
		pr_err("%s ion heap query error(%d)\n", __func__, err);
	} else {
		int i = 0;
		for (i = 0; i < query.cnt; i++) {
			if (heap_data[i].type == ION_HEAP_TYPE_CUSTOM) {
				mars->snd_client_ion = heap_data[i].heap_id;
				break;
			} else
				continue;
		}
	}
	pr_info("mars->snd_client_ion %x, %s\n", (unsigned int) mars->snd_client_ion, debug_name);

	return 0;
}