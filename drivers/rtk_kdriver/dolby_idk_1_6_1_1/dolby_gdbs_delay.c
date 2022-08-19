#include <linux/list.h>
#include <linux/timer.h>
#include <linux/spinlock.h>
#include <linux/kernel.h>
#include <linux/slab.h>
#include <rtk_pwm.h>

#include <tvscalercontrol/io/ioregdrv.h>
#include <rtk_kdriver/io.h>
#include <rbus/timer_reg.h>

#include "dolby_gdbs_delay.h"

#define DELAY_OTT_FPS_24 145
#define DELAY_OTT_FPS_30 145
#define DELAY_OTT_FPS_50 73
#define DELAY_OTT_FPS_60 58

#define DELAY_HDMI_FPS_24 100
#define DELAY_HDMI_FPS_30 111
#define DELAY_HDMI_FPS_50 53
#define DELAY_HDMI_FPS_60 45

struct dolby_vision_gdbs_delay_data g_delay_table;

struct timer_work {
	struct list_head list;
	struct timer_list timer;
	spinlock_t lock;
	int32_t val;
	uint32_t start_time;
	uint32_t expect_delay;
};

const int max_timer_work_size = 32;
atomic_t timer_work_number;

struct queue {
	struct list_head list;
	spinlock_t lock;
};

struct queue free_queue, active_queue;

static void set_backlight_duty(struct timer_list *timer)
{
	struct timer_work *work = container_of(timer, struct timer_work, timer);
	int32_t val = work->val;
	unsigned long flags;

#if 0
	uint32_t time_start = work->start_time;
	uint32_t time_now;
#endif

	spin_lock_irqsave(&active_queue.lock, flags);
	list_del(&work->list);
	spin_unlock_irqrestore(&active_queue.lock, flags);

	rtk_pwm_backlight_set_duty(val);

	spin_lock_irqsave(&free_queue.lock, flags);
	list_add_tail(&work->list, &free_queue.list);
	spin_unlock_irqrestore(&free_queue.lock, flags);

#if 0
	time_now = rtd_inl(TIMER_VCPU_CLK90K_LO_reg);
	pr_info("[DolbyVision][%s:%d] delay %03u (%03d) msec pwm %03d (%02d)\n",
					__func__, __LINE__,
					(time_now - time_start) / 90,
					work->expect_delay,
					val,
					atomic_read(&timer_work_number));
#endif
	/*printk(KERN_EMERG "====== [DolbyVision][%s:%d] delay %03u (%03d) msec pwm %03d (%02d) =====\n", __func__, __LINE__,
                                        (time_now - time_start) / 90,
                                        work->expect_delay,
                                        val,
                                        atomic_read(&timer_work_number));*/
}

static struct timer_work *get_free_timer_work(void)
{
	unsigned long flags;
	struct timer_work *work = NULL;

	spin_lock_irqsave(&free_queue.lock, flags);

	if (list_empty(&free_queue.list)) {
		spin_unlock_irqrestore(&free_queue.lock, flags);

		if (atomic_read(&timer_work_number) < max_timer_work_size)
			work = kzalloc(sizeof(struct timer_work), GFP_ATOMIC);
		if (work == NULL)
			goto get_free_timer_work_alloc_memory_error;

		atomic_inc(&timer_work_number);
		timer_setup(&work->timer, set_backlight_duty, 0);
		INIT_LIST_HEAD(&work->list);
	} else {
		struct list_head *next  = free_queue.list.next;

		work = list_entry(next, struct timer_work, list);

		list_del(&work->list);
		spin_unlock_irqrestore(&free_queue.lock, flags);
	}

get_free_timer_work_alloc_memory_error:

	return work;
}

int set_global_dimming_duty(int32_t val, int32_t msec)
{
	int ret = -1;

	struct timer_work *work = get_free_timer_work();

	//printk(KERN_EMERG "====== set_global_dimming_duty(%d, %d) =====\n", val, msec);

	if (work) {
		struct timer_list *timer = &work->timer;
		unsigned long flags;

		work->val = val;
		work->start_time = rtd_inl(TIMER_VCPU_CLK90K_LO_reg);
		work->expect_delay = msec;

		spin_lock_irqsave(&free_queue.lock, flags);
		list_add_tail(&work->list, &active_queue.list);
		spin_unlock_irqrestore(&free_queue.lock, flags);

		mod_timer(timer, jiffies + msecs_to_jiffies(msec));

		ret = 0;
	}

	return ret;
}

void set_gdbs_delay_matrix_table(struct dolby_vision_gdbs_delay_data table) {
	memcpy(&g_delay_table, &table, sizeof(g_delay_table));
}

struct dolby_vision_gdbs_delay_data *get_gdbs_delay_matrix_table(void) {
	return &g_delay_table;
}

void initial_timer_work(void)
{
	g_delay_table.delay_ott_fhd_fps_24 = DELAY_OTT_FPS_24;
	g_delay_table.delay_ott_fhd_fps_30 = DELAY_OTT_FPS_30;
	g_delay_table.delay_ott_fhd_fps_50 = DELAY_OTT_FPS_50;
	g_delay_table.delay_ott_fhd_fps_60 = DELAY_OTT_FPS_60;

	g_delay_table.delay_ott_uhd_fps_24 = DELAY_OTT_FPS_24;
        g_delay_table.delay_ott_uhd_fps_30 = DELAY_OTT_FPS_30;
        g_delay_table.delay_ott_uhd_fps_50 = DELAY_OTT_FPS_50;
        g_delay_table.delay_ott_uhd_fps_60 = DELAY_OTT_FPS_60;

	g_delay_table.delay_hdmi_fps_24 = DELAY_HDMI_FPS_24;
	g_delay_table.delay_hdmi_fps_30 = DELAY_HDMI_FPS_30;
	g_delay_table.delay_hdmi_fps_50 = DELAY_HDMI_FPS_50;
	g_delay_table.delay_hdmi_fps_60 = DELAY_HDMI_FPS_60;

	INIT_LIST_HEAD(&free_queue.list);
	INIT_LIST_HEAD(&active_queue.list);

	spin_lock_init(&free_queue.lock);
	spin_lock_init(&active_queue.lock);
}

void del_timer_work(void)
{
	return;
}

