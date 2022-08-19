/****************************************************************************
* This product contains one or more programs protected under international
* and U.S. copyright laws as unpublished works.  They are confidential and
* proprietary to Dolby Laboratories.  Their reproduction or disclosure, in
* whole or in part, or the production of derivative works therefrom without
* the express permission of Dolby Laboratories is prohibited.
*
*             Copyright 2011 - 2013 by Dolby Laboratories.
*                         All rights reserved.
****************************************************************************/

/*! Copyright &copy; 2013 Dolby Laboratories, Inc.
    All Rights Reserved

    @file  edbec_api.cpp
    @brief EDR decoder backend control software module implementation.

    This file implement the EDR decoder backend control software module.
*/
#include <generated/autoconf.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/init.h>
#include <linux/string.h>
#include <linux/kernel.h>
#include <linux/slab.h>
#include <linux/fs.h>
#include <linux/errno.h>
#include <linux/types.h>
#include <linux/cdev.h>
#include <linux/dma-mapping.h>
#include <linux/uaccess.h>
#include <asm/barrier.h>
#include <asm/cacheflush.h>
#include <mach/irqs.h>
#include <mach/platform.h>
#include <mach/system.h>
#include <mach/timex.h>

#include <linux/interrupt.h>
#include <linux/device.h>
#include <linux/delay.h>
#include <linux/platform_device.h>
#include <linux/dma-mapping.h>
#include <linux/random.h>
#ifdef CONFIG_CMA_RTK_ALLOCATOR
#include <linux/pageremap.h>
#endif
#include <linux/kthread.h>  /* for threads */
#include <linux/time.h>   /* for using jiffies */
#include <linux/hrtimer.h>

#include <linux/proc_fs.h>

#include <rbus/timer_reg.h>
#include <rbus/dmato3dtable_reg.h>
#include <rbus/vgip_reg.h>
#include <scaler/scalerCommon.h>
#include <tvscalercontrol/scalerdrv/scalermemory.h>
#include <tvscalercontrol/scalerdrv/scaler_hdr_ctrl.h>
#include <rtk_kdriver/tvscalercontrol/vip/scalerColor.h>

#include <tvscalercontrol/hdmirx/hdmi_vfe.h>
#include <tvscalercontrol/scaler_vpqmemcdev.h>
#include <tvscalercontrol/vip/scalerColor_tv006.h>

#include "dolby_adapter.h"
#include "dolby_device.h"
#include "dolby_debug.h"
#include "dolby_gdbs_delay.h"

/* for HDMI interrupt control */
extern spinlock_t *dolby_hdmi_ui_change_spinlock(void);
static struct class *dolbyvisionEDR_class;

typedef struct {
	int		initialized;
	struct cdev	cdev ;         /* Char device structure          */
	struct device	*dev;
	int		reserved;
} DOLBYVISIONEDR_DEV;
DOLBYVISIONEDR_DEV *dolbyvisionEDR_devices;          /* allocated in dolby_device_init */

//>>>>> start ,20180131 pinyen, hdmi vsif flow
vfe_hdmi_vsi_t hdmi_dolby_vsi_content;
//<<<<< end ,20180131 pinyen, hdmi vsif flow


#define DRV_NAME        "dolbyvisionEDR"
static const char  drv_name[] = DRV_NAME;

// for DOLBY picture mode

unsigned int  *b05_aligned_vir_addr = NULL;

/*-----------------------------------------------------------------------------+
 |  Configure the DM for NORMAL mode
 +----------------------------------------------------------------------------*/

int dolbyvisionEDR_major = 0;
int dolbyvisionEDR_minor = 0;
int dolbyvisionEDR_nr_devs = 1;
#ifdef CONFIG_HIBERNATION
extern int in_suspend;
#endif
//RTK add fix compile error

void *get_dolby_vision_devices(void)
{
	return (void *)dolbyvisionEDR_devices;
}
#ifdef CONFIG_PM
static struct platform_device *dolbyvisionEDR_devs;

static const struct dev_pm_ops dolbyvisionEDR_pm_ops = {
	.suspend    = dolby_adapter_dolby_vision_suspend,
	.resume     = dolby_adapter_dolby_vision_resume,
#ifdef CONFIG_HIBERNATION
	.freeze     = dolby_adapter_dolby_vision_suspend,
	.thaw       = dolby_adapter_dolby_vision_resume,
	.poweroff   = dolby_adapter_dolby_vision_suspend,
	.restore    = dolby_adapter_dolby_vision_resume,
#endif
};

static struct platform_driver dolbyvisionEDR_driver = {
	.driver = {
		.name         = (char *)drv_name,
		.bus          = &platform_bus_type,
#ifdef CONFIG_PM
		.pm           = &dolbyvisionEDR_pm_ops,
#endif
	},
};
#endif /* CONFIG_PM */

typedef enum e_dv_mode_ {
	DV_DISABLE_MODE = 0x0,
	DV_HDMI_MODE = 0x1,
	DV_DM_CRF_422_MODE = 0x4,
	DV_DM_CRF_420_MODE = 0x5,
	DV_NORMAL_MODE = 0x2,
	DV_COMPOSER_CRF_MODE = 0x6,
} E_DV_MODE;

typedef struct {

	int pxlBdp;     /* output pixel definition as a bit field */
	int RowNumTtl;
	int ColNumTtl;

	int BL_EL_ratio;        /* for normal mode; 0=> 1:1;  1=> 4:1 */

	char file1Inpath[100/*500*/];
	char file2Inpath[100/*500*/];
	char fileOutpath[100/*500*/];
	char fileMdInpath[100/*500*/];

	unsigned long file1InSize;
	unsigned long file2InSize;
	unsigned long fileMdInSize;

	int frameNo;

	E_DV_MODE dolby_mode;
	char caseNum[10];

} DOLBYVISION_PATTERN;

bool is_memc_low_latency(void)
{
	return ((Scaler_MEMC_GetMotionType() == VPQ_MEMC_TYPE_OFF)
			&& (fwif_color_get_cinema_mode_en() == 0));
}


int dolbyvisionEDR_open(struct inode *inode, struct file *filp)
{
	return 0;
}
int dolbyvisionEDR_release(struct inode *inode, struct file *filp)
{
	return 0;
}

static int dolby_ambient_weight = 1 << 16;

int get_dolby_ambient_weight(void)
{
	return dolby_ambient_weight;
}

int dolbyvisionEDR_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
{
	int ret =  0;

	if (cmd != DOLBYVISIONEDR_DRV_VPQ_GETDOLBY_WAIT_CFG_PATH)
		pr_info("dolbyvisionEDR: dolbyvisionEDR_ioctl, %d\n", _IOC_NR(cmd));
	if (_IOC_TYPE(cmd) != DOLBYVISIONEDR_IOC_MAGIC || _IOC_NR(cmd) > DOLBYVISIONEDR_IOC_MAXNR)
		return -ENOTTY;

	switch (cmd) {

	case DOLBYVISIONEDR_IOC_RB_INIT: {
		DOLBYVISION_INIT_STRUCT data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DOLBYVISION_INIT_STRUCT))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!!!!!!!!!!!!!!!\n", _IOC_NR(cmd));
		} else {
			pr_debug("data.inband_rbh_addr = 0x%x \n", data.inband_rbh_addr);
			pr_debug("data.md_rbh_addr = 0x%x \n", data.md_rbh_addr);
			pr_debug("data.md_output_buf_addr = 0x%x \n", data.md_output_buf_addr);
			pr_debug("data.md_output_buf_size = 0x%x \n", data.md_output_buf_size);
			ret = dolby_adapter_dolby_vision_ringbuffer_init(&data);
			dolby_adapter_set_g_picModeUpdateFlag(1);
		}
		break;
	}

	case DOLBYVISIONEDR_IOC_RUN: {
		ret = dolby_adapter_dolby_vision_run();
		break;
	}
	case DOLBYVISIONEDR_IOC_STOP: {
		ret = dolby_adapter_dolby_vision_stop();
		break;
	}
	case DOLBYVISIONEDR_IOC_PAUSE: {
		ret = dolby_adapter_dolby_vision_pause();
		break;
	}
	case DOLBYVISIONEDR_IOC_RB_FLUSH: {
		ret = dolby_adapter_dolby_vision_flush();
		break;
	}
	case DOLBYVISIONEDR_HDMI_IN_TEST: {
		pr_debug("dolbyvisionEDR: DOLBYVISIONEDR_HDMI_IN_TEST ioctl code!!!!!!!!!!!!!!!\n");
		break;
	}
	case DOLBYVISIONEDR_NORMAL_IN_TEST: {
		pr_debug(KERN_DEBUG"dolbyvisionEDR: DOLBYVISIONEDR_NORMAL_IN_TEST ioctl code!!!!!!!!!!!!!!!\n");
		break;
	}
	case DOLBYVISIONEDR_DM_CRF_420_TEST: {
		pr_debug("dolbyvisionEDR: DOLBYVISIONEDR_DM_CRF_420_TEST ioctl code!!!!!!!!!!!!!!!\n");
		break;
	}
	case DOLBYVISIONEDR_DM_CRF_422_TEST: {
		pr_debug("dolbyvisionEDR: DOLBYVISIONEDR_DM_CRF_422_TEST ioctl code!!!!!!!!!!!!!!!\n");
		break;
	}
	case DOLBYVISIONEDR_COMPOSER_CRF_TEST: {
		pr_debug("dolbyvisionEDR: DOLBYVISIONEDR_COMPOSER_CRF_TEST ioctl code!!!!!!!!!!!!!!!\n");
		break;
	}
	case DOLBYVISIONEDR_CRF_DUMP_TEST: {
		DOLBYVISION_PATTERN data;

		pr_debug("dolbyvisionEDR: DOLBYVISIONEDR_CRF_DUMP_TEST ioctl code!!!!!!!!!!!!!!!\n");

		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DOLBYVISION_PATTERN))) {
		        ret = -EFAULT;
		        pr_err("dolbyvisionEDR: ioctl code = %d failed!!!!!!!!!!!!!!!\n", _IOC_NR(cmd));
		} else {

			pr_debug("pxlBdp=%d, RowNumTtl=%d, ColNumTtl=%d \n", data.pxlBdp, data.RowNumTtl, data.ColNumTtl);
			pr_debug("BL_EL_ratio=%d \n", data.BL_EL_ratio);
			pr_debug("file1Inpath=%s \n", data.file1Inpath);
			pr_debug("file2Inpath=%s \n", data.file2Inpath);
			pr_debug("fileOutpath=%s \n", data.fileOutpath);
			pr_debug("fileMdInpath=%s \n", data.fileMdInpath);
			pr_debug("file1InSize=%ld \n", data.file1InSize);
			pr_debug("file2InSize=%ld \n", data.file2InSize);
			pr_debug("fileMdInSize=%ld \n", data.fileMdInSize);
			pr_debug("frameNo=%d \n", data.frameNo);
			pr_debug("caseNum=%s \n", data.caseNum);
			dolby_adapter_dm_crf_dump_testflow(&data);
		}
		break;
	}
	case DOLBYVISIONEDR_CRF_TRIGGER_TEST: {
		break;
	}
	case DOLBYVISIONEDR_TEST_TEST: {
		break;
	}
	case DOLBYVISIONEDR_DRV_VPQ_SETDOLBYPICMODE: {
		uint8_t pic_mode;
		if (copy_from_user((void *)&pic_mode, (const void __user *)arg, sizeof(uint8_t))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!!!!!!!!!!!!!!!\n", _IOC_NR(cmd));
			return ret;
		}

		if (dolby_adapter_get_ui_dv_picmode() == pic_mode) {
			pr_notice("\r\ndolbyvisionEDR: the same picture mode\n");
			break;
		}
		//Change picture mode //
		dolby_adapter_g_dv_pq_sem_down();
		dolby_adapter_set_ui_dv_picmode(pic_mode);

		dolby_adapter_g_dv_pq_sem_up();
		dolby_adapter_set_hdmi_ui_change_flag(TRUE);
		pr_notice("\r\nchange picture mode %d\n", pic_mode);
		break;
	}
	case DOLBYVISIONEDR_DRV_VPQ_SETDOLBYBACKLIGHT: {
		UINT8 uBacklight;

		if (copy_from_user((void *)&uBacklight, (const void __user *)arg, sizeof(UINT8))) {
			ret = -EFAULT;
			pr_err(KERN_DEBUG"dolbyvisionEDR: ioctl code = %d failed!!!!!!!!!!!!!!!\n", _IOC_NR(cmd));
		} else {
			if (dolby_adapter_get_ui_dv_backlight_value() == uBacklight) {
				pr_notice("dolbyvisionEDR: the same backlight value\n");
				break;
			}
			if (uBacklight > 100) {
				pr_debug(KERN_DEBUG"dolbyvisionEDR: uBacklight=%d is too big !!!!!!!!!!!!!!!\n", uBacklight);
				break;
			}
			dolby_adapter_g_dv_pq_sem_down();
			dolby_adapter_set_ui_dv_backlight_value(uBacklight);
			dolby_adapter_g_dv_pq_sem_up();

			dolby_adapter_set_hdmi_ui_change_flag(TRUE);
			pr_notice("\r\nchange back light value %d\n", uBacklight);
		}
		break;
	}
	case DOLBYVISIONEDR_DRV_VPQ_SETDOLBYCONTRAST: {
		UINT8 uContrast;
		if (copy_from_user((void *)&uContrast, (const void __user *)arg, sizeof(UINT8))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!!!!!!!!!!!!!!!\n", _IOC_NR(cmd));
		} else {
			// do nothing
			pr_debug("%s: uContrast=%d \n", __func__, uContrast);
		}
		break;
	}
	case DOLBYVISIONEDR_DRV_VPQ_SETDOLBYBRIGHTNESS: {
		UINT8 uBrightness;
		if (copy_from_user((void *)&uBrightness, (const void __user *)arg, sizeof(UINT8))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!!!!!!!!!!!!!!!\n", _IOC_NR(cmd));
		} else {
			// do nothing
			pr_debug("%s: uBrightness=%d \n", __func__, uBrightness);
		}
		break;
	}
	case DOLBYVISIONEDR_DRV_VPQ_SETDOLBYCOLOR: {
		UINT8 uColor;
		if (copy_from_user((void *)&uColor, (const void __user *)arg, sizeof(UINT8))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!!!!!!!!!!!!!!!\n", _IOC_NR(cmd));
		}
		break;
	}
	case DOLBYVISIONEDR_DRV_VPQ_INITDOLBYPICCONFIG: {
		char *configFilePath[5] = {NULL};
		if (copy_from_user((void *)&configFilePath, (const void __user *)arg, sizeof(configFilePath))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!!!!!!!!!!!!!!!\n", _IOC_NR(cmd));
		} else {
			char *pq_table_filepath = (char *)kzalloc(strnlen_user(configFilePath[0], PATH_MAX) + 1, GFP_KERNEL);
			strncpy_from_user(pq_table_filepath, configFilePath[0], strnlen_user(configFilePath[0], PATH_MAX));
			pr_info("%s: pq table path=%s\n", __func__, pq_table_filepath);

			dolby_adapter_g_dv_pq_sem_down();
			ret = dolby_adapter_dolby_load_pq_file(pq_table_filepath);
			if (ret == 0) {
				pr_err("load dolby vision pq table file fail\n");
				ret = -EFAULT;
			}
			dolby_adapter_g_dv_pq_sem_up();
			kfree(pq_table_filepath);
		}
		break;
	}
	case DOLBYVISIONEDR_DRV_VPQ_GETDOLBYSWVERSION: {
		char sw_version[64];
		int size = sizeof(sw_version);

		memset(sw_version, 0, size);
		strncpy(sw_version, dolby_adapter_get_dolby_vision_software_version(), size - 1);
		if (copy_to_user((void *)arg, sw_version, strlen(sw_version))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed\n", _IOC_NR(cmd));
		} else {
			pr_debug("dolbyvisionEDR: ioctl code = %d success\n", _IOC_NR(cmd));
		}
		break;
	}
	case DOLBYVISIONEDR_DRV_SUPPORT_STATUS: {
		unsigned int st = 0x20 | 0x100 | 0x200 | 0x00100000; //dolby_adapter_get_support_status();
		ret = 0;
		if (copy_to_user((void __user *)arg, &st, sizeof(unsigned int))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!!!!!!!!!!!!!!!\n", _IOC_NR(cmd));
		}
		break;
	}
	case DOLBYVISIONEDR_DRV_VPQ_GETDOLBYIDKVERSION:
	{
		char idk_version[64];
		int size = sizeof(idk_version);

		ret = 0;

		memset(idk_version, 0, size);

		dolby_adapter_get_dolby_vision_idk_version(idk_version, size);
		if (copy_to_user((void *)arg, idk_version, strlen(idk_version))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
		}
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_GETDOLBYDMVERSION:
	{
		char dm_version[64];
		int size = sizeof(dm_version);

		ret = 0;

		memset(dm_version, 0, size);

		dolby_adapter_get_dolby_vision_dm_version(dm_version, size);
		if (copy_to_user((void *)arg, dm_version, strlen(dm_version))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
		}
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_GET_CURRENT_GD_DELAY:
	{
		int gd_delay = dolby_adapter_get_current_gd_delay();

		ret = 0;
		if (copy_to_user((int *)arg, &gd_delay, sizeof(gd_delay))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
		}
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_GET_GD_DELAY_TABLE:
	{
		int size;
		const uint8_t *ptr = dolby_adapter_get_gd_delay_table(&size);

		ret = 0;
		if (copy_to_user((uint8_t *)arg, ptr, size)) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
		}
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_GET_CURRENT_TARGET_CONFIG:
	{
		int size;
		const uint8_t *ptr = dolby_adapter_get_current_target_config(&size);

		ret = 0;
		if (copy_to_user((uint8_t *)arg, ptr, size)) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
		}
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_GETDOLBYPICMODE:
	{
		int pic_mode = dolby_adapter_get_ui_dv_picmode();
		if (copy_to_user((int *)arg, &pic_mode, sizeof(int))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
		}
		break;
	}
	case DOLBYVISIONEDR_DRV_VPQ_GETDOLBYBACKLIGHT:
	{
		int backlight = dolby_adapter_get_ui_dv_backlight_value();
		if (copy_to_user((int *)arg, &backlight, sizeof(int))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
		}
		break;

	}
	case DOLBYVISIONEDR_DRV_VPQ_GETDOLBYCONTRAST:
	{
		int contrast = dolby_adapter_get_ui_dv_contrast_value();
		if (copy_to_user((int *)arg, &contrast, sizeof(int))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
		}
		break;
	}
	case DOLBYVISIONEDR_DRV_VPQ_GETDOLBYBRIGHTNESS:
	{
		int brightness = dolby_adapter_get_ui_dv_brightness_value();
		if (copy_to_user((int *)arg, &brightness, sizeof(int))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
		}
		break;
	}
	case DOLBYVISIONEDR_DRV_VPQ_GETDOLBY_CFG_PATH:
	{
		char cfg_path[128];
		int size = sizeof(cfg_path);

		ret = 0;

		memset(cfg_path, 0, size);

		dolby_adapter_get_pq_table_cfg_path(cfg_path, size);
		if (copy_to_user((void *)arg, cfg_path, strlen(cfg_path))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
		}
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_GETDOLBY_RUNNING_MODE:
	{
		int running_mode = dolby_adapter_get_running_mode();
		if (copy_to_user((int *)arg, &running_mode, sizeof(int))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
		}
		break;
	}
	case DOLBYVISIONEDR_DRV_VPQ_GETDOLBY_RESOLUTION:
	{
		int resolution[2] = { 0 };
		dolby_adapter_get_resolution(resolution);
		if (copy_to_user((int *)arg, resolution, sizeof(resolution))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
		}
		break;
	}
	case DOLBYVISIONEDR_DRV_VPQ_GETDOLBY_WAIT_CFG_PATH:
	{
		char cfg_path[128];
		int size = sizeof(cfg_path);

		ret = 0;

		memset(cfg_path, 0, size);

		ret = dolby_adapter_wait_pq_table_cfg_path(cfg_path, size);
		if (ret < 0) {
			break;
		}

		if (copy_to_user((void *)arg, cfg_path, size)) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
		}
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_SETDOLBY_CFG_PATH:
	{
		char cfg_path[128];
		char **path = kzalloc(sizeof(char *) * 3, GFP_KERNEL);
		int size = sizeof(cfg_path);

		ret = 0;

		memset(cfg_path, 0, size);
		if (copy_from_user(cfg_path, (void *)arg, size)) {
			ret = -EFAULT;
			kfree(path);
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
			break;
		}

		path[0] = cfg_path;
		ret = dolby_adapter_set_pq_table_cfg_path(path, 3);
		if (ret < 0) {
			ret = -EFAULT;
		}

		kfree(path);

	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_SET_DOLBY_AMBIENT_MODE:
	{
		int mode = (int)arg;

		dolby_ambient_weight = mode;
		dolby_adapter_set_ambient_mode(mode);
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_GET_DOLBY_AMBIENT_MODE:
	{
		int mode = dolby_adapter_get_ambient_mode();
		if (copy_to_user((int *)arg, &mode, sizeof(int))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
		}
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_SET_DOLBY_AMBIENT_FRONT:
	{
		int64_t tFrontLux;
		if (copy_from_user((void *)&tFrontLux, (const void __user *)arg, sizeof(tFrontLux))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!!!!!!!!!!!!!!!\n", _IOC_NR(cmd));
			break;
		}

		dolby_adapter_set_ambient_front(tFrontLux);
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_GET_DOLBY_AMBIENT_FRONT:
	{
		int64_t tFrontLux = dolby_adapter_get_ambient_front();
		if (copy_to_user((int *)arg, &tFrontLux, sizeof(tFrontLux))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
		}
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_SET_DOLBY_AMBIENT_REAR:
	{
		int64_t tRearLum;
		if (copy_from_user((void *)&tRearLum, (const void __user *)arg, sizeof(tRearLum))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!!!!!!!!!!!!!!!\n", _IOC_NR(cmd));
			break;
		}

		dolby_adapter_set_ambient_rear(tRearLum);
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_GET_DOLBY_AMBIENT_REAR:
	{
		int64_t tRearLum = dolby_adapter_get_ambient_rear();
		if (copy_to_user((int *)arg, &tRearLum, sizeof(tRearLum))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
		}
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_SET_DOLBY_AMBIENT_WHITEXY:
	{
		int tWhiteXY[2];
		if (copy_from_user((void *)tWhiteXY, (const void __user *)arg, sizeof(tWhiteXY))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!!!!!!!!!!!!!!!\n", _IOC_NR(cmd));
			break;
		}

		dolby_adapter_set_ambient_whitexy(tWhiteXY[0], tWhiteXY[1]);
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_GET_DOLBY_AMBIENT_WHITEXY:
	{
		int tWhiteXY[2];
		dolby_adapter_get_ambient_whitexy(&tWhiteXY[0], &tWhiteXY[1]);
		if (copy_to_user((int *)arg, tWhiteXY, sizeof(tWhiteXY))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
		}
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_CLEAR_VIEW_MODE_ID:
	{
		dolby_adapter_clear_view_mode_id();
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_SET_BLOCK_AMBIENT_CALL:
	{
		bool enable = (bool) arg;

		dolby_adapter_set_block_ambient_call(enable);
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_GET_BLOCK_AMBIENT_CALL:
	{
		bool enable = dolby_adapter_get_block_ambient_call();
		if (copy_to_user((bool *)arg, &enable, sizeof(enable))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
		}
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_SET_DOLBY_AMBIENT_FRONT_FORCE:
	{
		int64_t tFrontLux;
		if (copy_from_user((void *)&tFrontLux, (const void __user *)arg, sizeof(tFrontLux))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!!!!!!!!!!!!!!!\n", _IOC_NR(cmd));
			break;
		}

		dolby_adapter_set_ambient_front_force(tFrontLux);
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_SET_DOLBY_AMBIENT_MODE_FORCE:
	{
		int mode = arg;

		dolby_ambient_weight = mode;
		dolby_adapter_set_ambient_mode_force(mode);
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_SET_DOLBY_AMBIENT_FORNT_LUX:
	{
		int lux = (int)arg;

		dolby_adapter_set_ambient_front_lux(lux);
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_GET_DOLBY_AMBIENT_FRONT_LUX:
	{
		int lux = dolby_adapter_get_ambient_front_lux();

		if (copy_to_user((int *)arg, &lux, sizeof(lux))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
		}
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_SET_DOLBY_GD_DELAY_BASE_HDMI:
	{
		int delay = (int)arg;
		dolby_adapter_set_gd_delay_base_hdmi(delay);
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_SET_DOLBY_GD_DELAY_BASE_OTT:
	{
		int delay = (int)arg;
		dolby_adapter_set_gd_delay_base_ott(delay);
	}
	break;
	case DOLBYVISIONEDR_DRV_VPQ_SET_DOLBY_GD_DELAY_BASE_HDMILL:
	{
		int delay = (int)arg;
		dolby_adapter_set_gd_delay_base_hdmi_ll(delay);
	}
	break;
	case DOLBYVISIONEDR_DRV_SET_OTT_PAUSE:
	{
		bool enable = (bool)arg;
		dolby_adapater_set_ott_pause(enable);
	}
	break;
	case DOLBYVISIONEDR_DRV_GET_OTT_PAUSE_STATUS:
	{
		bool enable = dolby_adapater_get_ott_pause_status();

		if (copy_to_user((bool *)arg, &enable, sizeof(bool))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!\n", _IOC_NR(cmd));
		}
	}
	break;
	case DOLBYVISIONEDR_DRV_CHECK_VIDEO_CAP:
	{
		struct dolby_vision_capability_data data;
		void *capability_table;

		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(struct dolby_vision_capability_data))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: DOLBYVISIONEDR_DRV_CHECK_VIDEO_CAP failed!\n");
			goto DOLBYVISIONEDR_DRV_CHECK_VIDEO_CAP_ERR;
		}

		capability_table = kzalloc(data.size, GFP_KERNEL);

		if (capability_table == NULL) {
			pr_err("dolbyvisionEDR: allocate data error\n");
			ret = -EFAULT;
			goto DOLBYVISIONEDR_DRV_CHECK_VIDEO_CAP_ERR;
		}

		if (copy_from_user((void *)capability_table, data.data, data.size)) {
			ret = -EFAULT;
			goto DOLBYVISIONEDR_DRV_CHECK_VIDEO_CAP_COPY_ERROR;
		}

		dolby_adapter_check_capability(capability_table, data.size);

DOLBYVISIONEDR_DRV_CHECK_VIDEO_CAP_COPY_ERROR:
		kfree(capability_table);
DOLBYVISIONEDR_DRV_CHECK_VIDEO_CAP_ERR:
		pr_debug("ioctl DOLBYVISIONEDR_DRV_CHECK_VIDEO_CAP\n");
	}
	break;
	case DOLBYVISIONEDR_DRV_SET_MODEL_HASH:
	{
		const int hash_size = 32;
		char model_hash[32];

		if (copy_from_user((void *)model_hash, (const void __user *)arg, hash_size)) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: DOLBYVISIONEDR_DRV_SET_MODEL_HASH failed!\n");
		} else {
			dolby_adapter_set_model_hash((void *)model_hash, hash_size);
		}

	}
	break;
	case DOLBYVISIONEDR_DRV_SET_GDBS_DELAY_MATRIX_TABLE:
	{
		struct dolby_vision_gdbs_delay_data table;
		printk(KERN_EMERG "====== DOLBYVISIONEDR_DRV_SET_GDBS_DELAY_MATRIX_TABLE  =====\n");

                if (copy_from_user((void *)&table, (const void __user *)arg, sizeof(struct dolby_vision_gdbs_delay_data))) {
                        ret = -EFAULT;
                        pr_err("dolbyvisionEDR: ioctl code = %d failed!!!!!!!!!!!!!!!\n", _IOC_NR(cmd));
                } else {
			printk(KERN_EMERG "====== DOLBYVISIONEDR_DRV_SET_GDBS_DELAY_MATRIX_TABLE, FHD delay=%d, %d, %d, %d  =====\n", table.delay_ott_fhd_fps_24, table.delay_ott_fhd_fps_30, table.delay_ott_fhd_fps_50, table.delay_ott_fhd_fps_60);
			printk(KERN_EMERG "====== DOLBYVISIONEDR_DRV_SET_GDBS_DELAY_MATRIX_TABLE, UHD delay=%d, %d, %d, %d  =====\n", table.delay_ott_uhd_fps_24, table.delay_ott_uhd_fps_30, table.delay_ott_uhd_fps_50, table.delay_ott_uhd_fps_60);
			printk(KERN_EMERG "====== DOLBYVISIONEDR_DRV_SET_GDBS_DELAY_MATRIX_TABLE, HDMI delay=%d, %d, %d, %d  =====\n", table.delay_hdmi_fps_24, table.delay_hdmi_fps_30, table.delay_hdmi_fps_50, table.delay_hdmi_fps_60);
			
			set_gdbs_delay_matrix_table(table);
                }
	}
	break;
	case DOLBYVISIONEDR_DRV_GET_CONTENT_TYPE:
	{
		int8_t content_type[4];
		dolby_adapter_get_l11_content_type(content_type);
		if (copy_to_user((int *)arg, content_type, sizeof(content_type))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: ioctl code = %d failed!!!!!!!!!!!!!!!\n", _IOC_NR(cmd));
			break;
		}
	}
	break;
	case DOLBYVISIONEDR_DRV_PQ_TEXT2BIN:
	{
		struct dolby_vision_pq_text_buf pq_text_buf;
		if (copy_from_user(&pq_text_buf, (struct dolby_vision_pq_text_buf *)arg, sizeof(struct dolby_vision_pq_text_buf))) {
			ret = -EFAULT;
			pr_err("dolbyvisionEDR: DOLBYVISIONEDR_DRV_PQ_TEXT2BIN failed!\n");
		} else {
			char *buf_factory = NULL;
			size_t size_factory = 0;
			char *buf_best_pq = NULL;
			size_t size_best_pq = 0;
			char *buf_pq_bin = NULL;

			size_t pq_bin_total_size;

			if (pq_text_buf.size_factory) {
				buf_factory = vmalloc(pq_text_buf.size_factory);
				size_factory = pq_text_buf.size_factory;
				if(copy_from_user(buf_factory, pq_text_buf.buf_factory, pq_text_buf.size_factory)) {
					ret = -EFAULT;
					pr_err("dolbyvisionEDR: pq_text_buf.buf_factory failed\n");
				}
			}

			if (pq_text_buf.size_best_pq) {
				buf_best_pq = vmalloc(pq_text_buf.size_best_pq);
				size_best_pq = pq_text_buf.size_best_pq;
				if(copy_from_user(buf_best_pq, pq_text_buf.buf_best_pq, pq_text_buf.size_best_pq)) {
					ret = -EFAULT;
					pr_err("dolbyvisionEDR: pq_text_buf.buf_best_pq failed\n");
				}
			}

			buf_pq_bin = dolby_adapter_pq_text2bin(buf_factory, size_factory, buf_best_pq, size_best_pq, &pq_bin_total_size);
			if (buf_pq_bin != NULL) {
				if(copy_to_user(pq_text_buf.buf_pq_bin, buf_pq_bin, min(pq_text_buf.size_pq_bin, pq_bin_total_size))) {
					ret = -EFAULT;
					pr_err("dolbyvisionEDR: pq_text_buf.buf_pq_bin failed\n");
				}
				vfree(buf_pq_bin);
			}

			vfree(buf_factory);
			vfree(buf_best_pq);

			ret = pq_bin_total_size;
		}
	}
	break;
	default:
		pr_debug(KERN_DEBUG"dolbyvisionEDR: ioctl code = %d is invalid!!!!!!!!!!!!!!!\n", _IOC_NR(cmd));
		break;
	}

	return ret;
}

ssize_t dolbyvisionEDR_write(struct file *filp, const char __user *buffer, size_t count, loff_t *ppos)
{
	pr_info("[%s:%d][Dolby] get buffer count = %d offset = %lld\n", __func__, __LINE__, count, *ppos);
	return dolby_adapter_pq_table_bin_write((void *)filp, buffer, count, ppos);
}

struct file_operations dolbyvisionEDR_fops
	= {
	.owner    =    THIS_MODULE,
	.unlocked_ioctl    = (void *)dolbyvisionEDR_ioctl,
	.open     =    dolbyvisionEDR_open,
	.release  =    dolbyvisionEDR_release,
	.write    =    dolbyvisionEDR_write,
};

static void dolbyvisionEDR_setup_cdev(DOLBYVISIONEDR_DEV *dev, int index)
{
	int err, devno = MKDEV(dolbyvisionEDR_major, dolbyvisionEDR_minor + index);

	cdev_init(&dev->cdev, &dolbyvisionEDR_fops);
	dev->cdev.owner = THIS_MODULE;
	dev->cdev.ops   = &dolbyvisionEDR_fops;
	err = cdev_add(&dev->cdev, devno, 1);

	if (err)
		pr_err("Error %d adding se%d", err, index);

	device_create(dolbyvisionEDR_class, NULL, MKDEV(dolbyvisionEDR_major, index), NULL, "dolbyvisionEDR%d", index);
}

static char *dolbyvisionEDR_devnode(struct device *dev, mode_t *mode)
{
	*mode = 0666;//set Permissions
	return NULL;
}

void dolby_device_exit(void)
{
	int i = 0;
	dev_t devno;

	remove_dolby_debugfs();
	devno = MKDEV(dolbyvisionEDR_major, dolbyvisionEDR_minor);

	pr_info("dolbyvisionEDR clean module dolbyvisionEDR_major = %d\n", dolbyvisionEDR_major);

	if (dolbyvisionEDR_devices) {
		for (i = 0; i < dolbyvisionEDR_nr_devs; i++) {
			cdev_del(&dolbyvisionEDR_devices[i].cdev);
			device_destroy(dolbyvisionEDR_class, MKDEV(dolbyvisionEDR_major, i));
		}
		kfree(dolbyvisionEDR_devices);
	}


	class_destroy(dolbyvisionEDR_class);

	/* cleanup_module is never called if registering failed */
	unregister_chrdev_region(devno, dolbyvisionEDR_nr_devs);

}

static int dolbyvisionEDR_register_device(DOLBYVISIONEDR_DEV *dolbyvisionEDR)
{
	dev_t dev = 0;
	int result, i;

	if (dolbyvisionEDR_major) {
		dev = MKDEV(dolbyvisionEDR_major, dolbyvisionEDR_minor);
		result = register_chrdev_region(dev, dolbyvisionEDR_nr_devs, "dolbyvisionEDR");
	} else {
		result = alloc_chrdev_region(&dev, dolbyvisionEDR_minor, dolbyvisionEDR_nr_devs, "dolbyvisionEDR");
		dolbyvisionEDR_major = MAJOR(dev);
	}

	if (result < 0) {
		pr_err("dolbyvisionEDR: can't get major %d\n", dolbyvisionEDR_major);
		return result;
	}

	pr_info("dolbyvisionEDR init module major number = %d\n", dolbyvisionEDR_major);

	dolbyvisionEDR_class = class_create(THIS_MODULE, "dolbyvisionEDR");
	if (IS_ERR((dolbyvisionEDR_class)))
		return PTR_ERR(dolbyvisionEDR_class);

	dolbyvisionEDR_class->devnode = dolbyvisionEDR_devnode;

	dolbyvisionEDR_devices = kmalloc(dolbyvisionEDR_nr_devs * sizeof(DOLBYVISIONEDR_DEV), GFP_KERNEL);
	if (!(dolbyvisionEDR_devices)) {
		result = -ENOMEM;
		dolby_device_exit();   /* fail */
		return result;
	}

#ifdef CONFIG_PM
	dolbyvisionEDR_devs = platform_device_register_simple(DRV_NAME, -1, NULL, 0);
	result = platform_driver_register(&dolbyvisionEDR_driver);
	if ((result) != 0) {
		pr_err("Can't register dolbyvisionEDR device driver...\n");
	} else {
		pr_info("register dolbyvisionEDR device driver...\n");
	}
#endif

	memset(dolbyvisionEDR_devices, 0, dolbyvisionEDR_nr_devs * sizeof(DOLBYVISIONEDR_DEV));

	for (i = 0; i < dolbyvisionEDR_nr_devs; i++) {
		dolbyvisionEDR = &dolbyvisionEDR_devices[i];
		dolbyvisionEDR_setup_cdev(dolbyvisionEDR, i);
	}

#ifdef CONFIG_PM
	dolbyvisionEDR_devices->dev = &(dolbyvisionEDR_devs->dev);
	dolbyvisionEDR_devices->dev->dma_mask = &dolbyvisionEDR_devices->dev->coherent_dma_mask;
	if (dma_set_mask(dolbyvisionEDR_devices->dev, DMA_BIT_MASK(32))) {
		pr_info("[dolbyvisionEDR] DMA not supported\n");
	}
#endif

	dev = MKDEV(dolbyvisionEDR_major, dolbyvisionEDR_minor + dolbyvisionEDR_nr_devs);

	return result;
}

static void dolby_vision_worker(struct work_struct *work)
{
	dolby_adapter_worker();
}

static DECLARE_WORK(dolby_vision_work, dolby_vision_worker);

struct workqueue_struct *dolby_vision_wq;
void trigger_dolby_vision_worker(void)
{
	if (dolby_vision_wq != NULL)
		queue_work(dolby_vision_wq, &dolby_vision_work);
}

int dolby_device_init(void)
{
	DOLBYVISIONEDR_DEV *dolbyvisionEDR = &dolbyvisionEDR_devices[0];

	pr_info("[%s:%s] Dolby Vision dirver\n", __FILE__, __func__);

	if (dolbyvisionEDR_register_device(dolbyvisionEDR) < 0) {
		return -1;
	}

	create_dolby_debugfs();
	dolby_vision_wq = alloc_workqueue("events_dolby_vision", WQ_HIGHPRI | WQ_UNBOUND, 0);
	pr_info("dolbyvisionEDR module_init finish\n");

	initial_timer_work();

	return 0;
}

module_init(dolby_device_init);
module_exit(dolby_device_exit);
MODULE_LICENSE("GPL");
