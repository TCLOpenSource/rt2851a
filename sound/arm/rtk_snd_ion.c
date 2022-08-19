#include <linux/init.h>
#include <linux/slab.h>
#include <linux/compat.h>
#include <linux/nospec.h>
#include <linux/dma-buf.h>
#include <sound/core.h>
#include <sound/minors.h>
#include <sound/hwdep.h>
#include "ion.h"
#include <sound/rtk_snd.h>
#include <sound/memalloc.h>

extern struct ion_device *rtk_ion_device;

int rtk_snd_ion_allocate(struct snd_pcm_substream *substream,
			size_t size, struct snd_dma_buffer *dmab)
{
	struct snd_card_mars *mars = (struct snd_card_mars *) substream->pcm->card->private_data;
	phys_addr_t phy_addr;
	size_t phy_size;
	int fd = 0;
	struct dma_buf *buf;
	int ret = 0;

	if (WARN_ON(!size))
		return -ENXIO;
	if (WARN_ON(!dmab))
		return -ENXIO;

	dmab->dev.type = substream->dma_buffer.dev.type;
	dmab->dev.dev = substream->dma_buffer.dev.dev;
	dmab->bytes = 0;
	switch (substream->dma_buffer.dev.type) {
	case SNDRV_RTK_DMA_TYPE:
		fd = ion_alloc(size, (1 << mars->snd_client_ion), ION_FLAG_FROM_DCU1);
		if (IS_ERR(fd)) {
			pr_err("[ALSA] rtk-snd-malloc: SNDRV_RTK_DMA_TYPE failed, fd=%d\n", fd);
			break;
		}
		buf = dma_buf_get(fd);
		if (IS_ERR(buf)) {
			pr_err("[ALSA] rtk-snd-malloc: SNDRV_RTK_DMA_TYPE failed, dma-buf=0x%x\n", buf);
			break;
		}
		mars->snd_dma_buf[substream->pcm->device] = buf;

		ret = dma_buf_begin_cpu_access(mars->snd_dma_buf[substream->pcm->device], DMA_FROM_DEVICE);
		if (ret) {
			pr_err("[ALSA] rtk-snd-malloc: SNDRV_RTK_DMA_TYPE failed, ret=%d\n", ret);
			break;
		}
		dmab->area = dma_buf_kmap(mars->snd_dma_buf[substream->pcm->device], 0);
		if (!dmab->area) {
			pr_err("[ALSA] rtk-snd-malloc: SNDRV_RTK_DMA_TYPE failed\n");
		} else {
			phy_addr = ion_to_phys(fd);
			dmab->addr = phy_addr;
			pr_info("[ALSA] rtk-snd-malloc: phys %x, virt %x, handle %x, size %x, pid %d\n",
				(unsigned int) dmab->addr, (unsigned int) dmab->area, (unsigned int) fd, size, task_pid_nr(current->group_leader));

			if (mars->snd_ion_handle[substream->pcm->device] < 0) {
				mars->snd_ion_handle[substream->pcm->device] = fd;
			} else {
				pr_err("[ALSA] rtk-snd-malloc: ion handle has leak %x!!!!\n", (unsigned int) mars->snd_ion_handle[substream->pcm->device]);
			}
		}
		break;
	default:
		pr_err("[ALSA] rtk-snd-malloc: invalid device type %d\n", (int) substream->dma_buffer.dev.type);
		dmab->area = NULL;
		dmab->addr = 0;
		return -ENXIO;
	}
	if (! dmab->area)
		return -ENOMEM;
	dmab->bytes = size;

	return 0;
}

int rtk_snd_ion_free(struct snd_pcm_substream *substream)
{
	struct snd_card_mars *mars = (struct snd_card_mars *) substream->pcm->card->private_data;
	struct snd_pcm_runtime *runtime = substream->runtime;
	struct snd_dma_buffer *dmab = runtime->dma_buffer_p;

	switch (dmab->dev.type) {
	case SNDRV_RTK_DMA_TYPE:
		pr_info("[ALSA] rtk-snd-free: phys %x, virt %x, handle %x\n",
			(unsigned int) dmab->addr, (unsigned int) dmab->area, (unsigned int) mars->snd_ion_handle[substream->pcm->device]);

		if (mars->snd_dma_buf[substream->pcm->device]) {
			pr_info("[ALSA] release shared dma\n");

			dma_buf_kunmap(mars->snd_dma_buf[substream->pcm->device], 0, 0); // leave empty
			dma_buf_end_cpu_access(mars->snd_dma_buf[substream->pcm->device], DMA_TO_DEVICE);
			dma_buf_put(mars->snd_dma_buf[substream->pcm->device]);

			mars->snd_dma_buf[substream->pcm->device] =  NULL;
		}

		mars->snd_ion_handle[substream->pcm->device] = -1;
		break;
	default:
		pr_err("snd-malloc: invalid device type %d\n", dmab->dev.type);
	}

	return 0;
}

int rtk_snd_ion_allocate_pages(struct snd_pcm_substream *substream, size_t size)
{
	struct snd_dma_buffer *dmab = NULL;
	struct snd_pcm_runtime *runtime = substream->runtime;

	if (PCM_RUNTIME_CHECK(substream)) {
		pr_err("[ALSA][%s] status wrong\n", __func__);
		return -EINVAL;
	}

	if (snd_BUG_ON(substream->dma_buffer.dev.type == SNDRV_DMA_TYPE_UNKNOWN)) {
		pr_err("[ALSA][%s] dev type is UNKNOWN\n", __func__);
		return -EINVAL;
	}

	dmab = kzalloc(sizeof(*dmab), GFP_KERNEL);
	if (!dmab) {
		pr_err("[ALSA][%s] dma buffer allocate failed\n", __func__);
		return -ENOMEM;
	}
	dmab->dev = substream->dma_buffer.dev;
	if (rtk_snd_ion_allocate(substream, size, dmab) < 0) {
		kfree(dmab);
		pr_err("[ALSA][%s] rtk snd ion allocate failed\n", __func__);
		return -ENOMEM;
	}
	snd_pcm_set_runtime_buffer(substream, dmab);
	runtime->dma_bytes = size;

	return 0;
}

int rtk_snd_ion_free_pages(struct snd_pcm_substream *substream)
{
	struct snd_pcm_runtime *runtime = substream->runtime;

	if (PCM_RUNTIME_CHECK(substream))
		return -EINVAL;
	runtime = substream->runtime;
	if (runtime->dma_area == NULL)
		return 0;
	if (runtime->dma_buffer_p != &substream->dma_buffer) {
		/* it's a newly allocated buffer.  release it now. */
		rtk_snd_ion_free(substream);
		kfree(runtime->dma_buffer_p);
	}
	snd_pcm_set_runtime_buffer(substream, NULL);

	return 0;
}

int rtk_snd_ion_mmap(struct snd_pcm_substream *substream, struct vm_area_struct *area)
{
	struct dma_buf *buf;
	struct snd_card_mars *mars = (struct snd_card_mars *) substream->pcm->card->private_data;
	int ret = 0;

	buf = mars->snd_dma_buf[substream->pcm->device];
	if (IS_ERR(buf)) {
		pr_err("[ALSA][%s,%d] ERR\n", __func__, __LINE__);
		return PTR_ERR(buf);
	}

	if(buf == NULL) {
		pr_err("[ALSA][%s,%d] ERR, buf is NULL\n", __func__, __LINE__);
		return -EINVAL;
	}

	if (buf->ops->map) {
		ret = buf->ops->mmap(buf, area);

		if (ret) {
			pr_err("[ALSA] mmap error\n");
			ret = -EINVAL;
		}

	} else {
		pr_err("[ALSA] no mmap ops\n");
		ret = -EINVAL;
	}

	pr_info("[ALSA][%s,%d] return %d, handle %x\n", __func__, __LINE__, ret, (unsigned int) mars->snd_ion_handle[substream->pcm->device]);
	return ret;
}

int rtk_snd_ion_get_share_fd(struct snd_card_mars *mars, int dev)
{
	int fd = mars->snd_ion_handle[dev];

	pr_info("[ALSA][%s,%d] handle %x, fd %d\n", __func__, __LINE__, (unsigned int) mars->snd_ion_handle[dev], fd);
	return fd;
}
