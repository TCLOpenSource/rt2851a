#include <mach/timex.h>
#include <tvscalercontrol/scaler/scalerstruct.h>
#include <tvscalercontrol/hdmirx/hdmi_vfe.h>
#include <tvscalercontrol/scalerdrv/scalerdrv.h>
#include <tvscalercontrol/scalerdrv/scalermemory.h>
#include <tvscalercontrol/vip/scalerColor.h>
#include <asm/cacheflush.h>
#include <tvscalercontrol/scaler/scalercolorlib.h>
#include <crypto/akcipher.h>
#include <include/rtk_kdriver/rtk_otp_region_api.h>
//#include <linux/tee.h>
#define CFG_RTK_CMA_MAP 0
#include <linux/tee_drv.h>
#include <rtk_mcp.h>
#include "dolby_device.h"
#include "dolby_facade.h"
#include "dolby_gdbs_delay.h"
#include <tvscalercontrol/vo/rtk_vo.h>

//extern void dmac_inv_range(const void *, const void *);
//extern void dmac_flush_range(const void *, const void *);

int dolby_facade_rtk_timer_set_value(unsigned char id, unsigned int value)
{
	return rtk_timer_set_value(id, value);
}
EXPORT_SYMBOL(dolby_facade_rtk_timer_set_value);

void dolby_facade_set_OTT_HDR_mode(HDR_MODE mode)
{
	if (mode == HDR_DOLBY_COMPOSER)
		Scaler_color_set_HDR_Type(HDR_DM_DOLBY);

	return set_OTT_HDR_mode(mode);
}
EXPORT_SYMBOL(dolby_facade_set_OTT_HDR_mode);

HDR_MODE dolby_facade_get_OTT_HDR_mode(void)
{
	return get_OTT_HDR_mode();
}
EXPORT_SYMBOL(dolby_facade_get_OTT_HDR_mode);

HDR_MODE dolby_facade_get_HDMI_HDR_mode(void)
{
	return get_HDMI_HDR_mode();
}
EXPORT_SYMBOL(dolby_facade_get_HDMI_HDR_mode);

unsigned int dolby_facade_drvif_memory_get_data_align(unsigned int Value, unsigned int unit)
{
	return drvif_memory_get_data_align(Value, unit);
}
EXPORT_SYMBOL(dolby_facade_drvif_memory_get_data_align);

unsigned char dolby_facade_get_cur_hdmi_dolby_apply_state(void)
{
	extern unsigned char get_cur_hdmi_dolby_apply_state(void);
	return get_cur_hdmi_dolby_apply_state();
}
EXPORT_SYMBOL(dolby_facade_get_cur_hdmi_dolby_apply_state);

int dolby_facade_rtk_timer_control(unsigned char id, unsigned int cmd)
{
	return rtk_timer_control(id, cmd);
}
EXPORT_SYMBOL(dolby_facade_rtk_timer_control);

int dolby_facade_rtk_timer_set_mode(unsigned char id, unsigned char mode)
{
	return rtk_timer_set_mode(id, mode);
}
EXPORT_SYMBOL(dolby_facade_rtk_timer_set_mode);

int dolby_facade_rtk_timer_set_target(unsigned char id, unsigned int value)
{
	return rtk_timer_set_target(id, value);
}
EXPORT_SYMBOL(dolby_facade_rtk_timer_set_target);

void dolby_facade_dolby_ott_dm_init(void)
{
	dolby_ott_dm_init();
}
EXPORT_SYMBOL(dolby_facade_dolby_ott_dm_init);

unsigned short dolby_facade_Scaler_DispGetInputInfoByDisp(unsigned char channel, SLR_INPUT_INFO infoList)
{
	return Scaler_DispGetInputInfoByDisp(channel, infoList);
}
EXPORT_SYMBOL(dolby_facade_Scaler_DispGetInputInfoByDisp);

unsigned int dolby_facade_Scaler_GetShareMemVirAddr(unsigned int a_ulCmd)
{
	return Scaler_GetShareMemVirAddr(a_ulCmd);
}
EXPORT_SYMBOL(dolby_facade_Scaler_GetShareMemVirAddr);

unsigned int dolby_facade_get_query_start_address(unsigned char idx)
{
	extern unsigned int get_query_start_address(unsigned char idx);
	return get_query_start_address(idx);
}
EXPORT_SYMBOL(dolby_facade_get_query_start_address);

/* drv_memory_wait_cap_last_write_done() */
void dolby_facade_drv_memory_wait_cap_last_write_done(unsigned char display, unsigned char wait_frame, unsigned char game_mode_case)
{
	drv_memory_wait_cap_last_write_done(display, wait_frame, game_mode_case);
}
EXPORT_SYMBOL(dolby_facade_drv_memory_wait_cap_last_write_done);

void dolby_facade_fwif_color_disable_VIP(unsigned char flag)
{
	fwif_color_disable_VIP(flag);
}
EXPORT_SYMBOL(dolby_facade_fwif_color_disable_VIP);

void *dolby_facade_get_dolby_device(void)
{
	extern void *get_dolby_vision_devices(void);
	return get_dolby_vision_devices();
}
EXPORT_SYMBOL(dolby_facade_get_dolby_device);

void dolby_facade_dmac_inv_range(const void *start, const void *end)
{
	dmac_inv_range(start, end);
}
EXPORT_SYMBOL(dolby_facade_dmac_inv_range);

void dolby_facade_dmac_flush_range(const void *start, const void *end)
{
	dmac_flush_range(start, end);
}
EXPORT_SYMBOL(dolby_facade_dmac_flush_range);

DOLBY_HDMI_VSIF_T dolby_facade_get_HDMI_Dolby_VSIF_mode(void)
{
	return get_HDMI_Dolby_VSIF_mode();
}
EXPORT_SYMBOL(dolby_facade_get_HDMI_Dolby_VSIF_mode);

void *dolby_facade_get_hdmi_dolby_vsi_content(void)
{
	extern vfe_hdmi_vsi_t hdmi_dolby_vsi_content;
	return &hdmi_dolby_vsi_content;
}
EXPORT_SYMBOL(dolby_facade_get_hdmi_dolby_vsi_content);

VSC_INPUT_TYPE_T dolby_facade_Get_DisplayMode_Src(unsigned char display)
{
	return Get_DisplayMode_Src(display);
}
EXPORT_SYMBOL(dolby_facade_Get_DisplayMode_Src);

void dolby_facade_set_hdr_type_dolby(void)
{
	Scaler_color_set_HDR_Type(HDR_DM_DOLBY);
}
EXPORT_SYMBOL(dolby_facade_set_hdr_type_dolby);

bool dolby_facade_rtk_is_dobly_vision_supported(void)
{
	return rtk_is_dobly_Vision_supported();
}
EXPORT_SYMBOL(dolby_facade_rtk_is_dobly_vision_supported);

bool dolby_facade_is_memc_low_latency(void)
{
	extern bool is_memc_low_latency(void);
	return is_memc_low_latency();
}
EXPORT_SYMBOL(dolby_facade_is_memc_low_latency);

void dolby_facade_set_pwm_duty(int duty)
{
	extern int rtk_pwm_backlight_set_duty(int duty);

	unsigned int framerate = 24;
	int delay = 0;
	struct dolby_vision_gdbs_delay_data *delay_table = get_gdbs_delay_matrix_table();

	/*Obtain framerate*/
	SLR_VOINFO VOInfo;
	SLR_VOINFO *pVOInfo = NULL;

	unsigned int i = 0, ulVOInfoItemCount = 0;
        unsigned int *pulTemp;

	pVOInfo = &VOInfo;
	memcpy(pVOInfo, (unsigned char *)Scaler_GetShareMemVirAddr(SCALERIOC_GETVOINFO), sizeof(SLR_VOINFO));

	/* change endian */
        ulVOInfoItemCount = sizeof(SLR_VOINFO) /  sizeof(UINT32);
        pulTemp = (unsigned int *)pVOInfo;
        for (i = 0; i < ulVOInfoItemCount; i++)
                *(pulTemp + i) = Scaler_ChangeUINT32Endian(*(pulTemp + i));

	//printk(KERN_EMERG "====== dolby_facade_set_pwm_duty(%d)  =====\n", duty);
	
	//framerate = dolby_facade_Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_V_FREQ)/10;
	framerate = (int)pVOInfo->src_v_freq/10;
        //printk(KERN_EMERG "====== framerate=%d  =====\n", framerate);
	
	if(Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_HDMI) {
                 //printk(KERN_EMERG "====== Get_DisplayMode_Src=VSC_INPUTSRC_HDMI  =====\n");
		 if(framerate == 24) {
			delay = delay_table->delay_hdmi_fps_24;
		 } else if(framerate == 30) {
			delay = delay_table->delay_hdmi_fps_30;
		 } else if(framerate == 50) {
			delay = delay_table->delay_hdmi_fps_50;
		 } else {
			delay = delay_table->delay_hdmi_fps_60;
		 }
        } else {
		//printk(KERN_EMERG "====== Get_DisplayMode_Src=VSC_INPUTSRC_VDEC  =====\n");	
		if(framerate == 24) {
			delay = delay_table->delay_ott_fhd_fps_24;
                 } else if(framerate == 30) {
			delay = delay_table->delay_ott_fhd_fps_30;
                 } else if(framerate == 50) {
			delay = delay_table->delay_ott_fhd_fps_50;
                 } else {
			delay = delay_table->delay_ott_fhd_fps_60;
                 }
	}

	//printk(KERN_EMERG "====== set_global_dimming_duty(%d, %d)  =====\n", duty, delay);

	set_global_dimming_duty(duty, delay);

	//rtk_pwm_backlight_set_duty(duty);
}
EXPORT_SYMBOL(dolby_facade_set_pwm_duty);

int dolby_facade_MCP_AES_CBC_Decryption(
		unsigned char               key[16],
		unsigned char               iv[16],
		unsigned char*              p_in,
		unsigned char*              p_out,
		unsigned long               len)
{
       return MCP_AES_CBC_Decryption(key, iv, p_in, p_out, len);
}
EXPORT_SYMBOL(dolby_facade_MCP_AES_CBC_Decryption);

struct ta {
	struct tee_context *ctx;
	__u32 session;
};

static int optee_dolby_vision_match(struct tee_ioctl_version_data *data, const void *vers)
{
	return -1;
}

int dolby_facade_ta_init(void *data, struct teec_uuid *uuid)
{
	struct ta *ta_data = data;

	int ret = 0, rc = 0;

	struct tee_ioctl_open_session_arg arg;
	struct tee_ioctl_version_data vers = {
		.impl_id = TEE_IMPL_ID_OPTEE,
		.impl_caps = TEE_OPTEE_CAP_TZ,
		.gen_caps = TEE_GEN_CAP_GP,
	};

	memset(ta_data, 0, sizeof(*ta_data));
	ta_data->ctx = tee_client_open_context(NULL, optee_dolby_vision_match, NULL, &vers);
	if(IS_ERR(ta_data->ctx)) {
		pr_emerg("[DolbyVision]: no ta context\n");
		ret = -EINVAL;
		goto dolby_facade_ta_init_err;
	}

	memset(&arg, 0, sizeof(arg));
	memcpy(&arg.uuid, uuid, sizeof(struct teec_uuid));
	arg.clnt_login = TEE_IOCTL_LOGIN_PUBLIC;
	pr_debug("arg uuid %pUl \n", arg.uuid);

	rc = tee_client_open_session(ta_data->ctx, &arg, NULL);
	if(rc){
		pr_emerg("[DolbyVision]: open ta session failed ret %x arg %x", rc, arg.ret);
		ret = -EINVAL;
		goto dolby_facade_ta_init_err;
	}

	if (arg.ret) {
		pr_emerg("[DolbyVision]: open ta session failed ret %x arg %x", rc, arg.ret);
		ret = -EINVAL;
		goto dolby_facade_ta_init_err;
	}

	ta_data->session = arg.session;

	return ret;

dolby_facade_ta_init_err:
	if (ta_data->session) {
		tee_client_close_session(ta_data->ctx, ta_data->session);
		pr_emerg("optee_dolby_vision: open failed close session \n");
		ta_data->session = 0;
	}
	if (ta_data->ctx) {
		tee_client_close_context(ta_data->ctx);
		pr_emerg("optee_dolby_vision: open failed close context\n");
		ta_data->ctx = NULL;
	}
	pr_emerg("[DolbyVision] open_session fail\n");

	return ret;
}
EXPORT_SYMBOL(dolby_facade_ta_init);

int dolby_facade_ta_exit(void *data)
{
	struct ta *ta_data = data;

	if (ta_data->session) {
		tee_client_close_session(ta_data->ctx, ta_data->session);
		ta_data->session = 0;
	}

	if (ta_data->ctx) {
		tee_client_close_context(ta_data->ctx);
		ta_data->ctx = NULL;
	}

	return 0;
}
EXPORT_SYMBOL(dolby_facade_ta_exit);

struct share_memory {
	struct tee_shm *shm;
	uint8_t *buffer;
	size_t size;
};

long dolby_facade_register_tee_share_memory(struct tee_context *ctx, void *data)
{
	struct share_memory *shm_buffer = data;

	if(shm_buffer->size > 0) {
		/* alloc send share memory */
		shm_buffer->shm = tee_shm_alloc(ctx, shm_buffer->size, TEE_SHM_MAPPED | TEE_SHM_DMA_BUF);
		if (IS_ERR(shm_buffer->shm)) {
			pr_emerg("optee_dolby_vision: no shm_buffer\n");
			goto register_tee_share_memory_out;
		}

		/* get share memory virtual addr for data accessing */
		shm_buffer->buffer = tee_shm_get_va(shm_buffer->shm, 0);
		if (shm_buffer->buffer == NULL) {
			goto register_tee_share_memory_out;
		}
		pr_debug("[DolbyVision][%s:%s:%d] shm  %p size %d buffer %p\n", __FILE__, __func__, __LINE__, shm_buffer->shm, shm_buffer->size, shm_buffer->buffer);
	}

	return 0;

register_tee_share_memory_out:

	if (!IS_ERR(shm_buffer->shm))
		tee_shm_free(shm_buffer->shm);

	shm_buffer->shm = NULL;

	return -1;
}
EXPORT_SYMBOL(dolby_facade_register_tee_share_memory);

void dolby_facade_release_tee_share_memory(void *data)
{
	struct share_memory *shm_buffer = data;
	if (shm_buffer->shm) {
		tee_shm_free(shm_buffer->shm);
		memset(shm_buffer, 0, sizeof(struct share_memory));
	}
}
EXPORT_SYMBOL(dolby_facade_release_tee_share_memory);

#define TEE_NUM_PARAM 4
int dolby_facade_execute_ta_command(void *ta, int command, void *param1, void *param2)
{
	struct ta *ta_data = ta;
	struct share_memory *shm_param1 = param1;
	struct share_memory *shm_param2 = param2;

	struct tee_ioctl_invoke_arg arg;
	struct tee_param *param = NULL;

	int ret = 0, rc = 0;

	memset(&arg, 0, sizeof(arg));
	arg.func = command;
	arg.session = ta_data->session;
	arg.num_params = TEE_NUM_PARAM;

	param = kcalloc(TEE_NUM_PARAM, sizeof(struct tee_param), GFP_KERNEL);
	if(param == NULL)
	{
		pr_emerg("%s kcalloc param fail\n",__FUNCTION__);
		ret = -ENOMEM;
		return ret;
	}

	memset(param, 0, sizeof(struct tee_param) * TEE_NUM_PARAM);

	param[0].attr = TEE_IOCTL_PARAM_ATTR_TYPE_MEMREF_INOUT;
	param[0].u.memref.shm = shm_param1->shm;
	param[0].u.memref.size = shm_param1->size;

	param[1].attr = TEE_IOCTL_PARAM_ATTR_TYPE_MEMREF_INOUT;
	param[1].u.memref.shm = shm_param2->shm;
	param[1].u.memref.size = shm_param2->size;

	param[2].attr = TEE_IOCTL_PARAM_ATTR_TYPE_NONE;
	param[3].attr = TEE_IOCTL_PARAM_ATTR_TYPE_NONE;

	rc = tee_client_invoke_func(ta_data->ctx, &arg, param);
	kfree(param);

	if (rc || arg.ret) {
		pr_emerg("optee_dolby_vision: invoke failed ret %x arg.ret %x\n", rc, arg.ret);
		ret = -EINVAL;
	}

	return ret;
}
EXPORT_SYMBOL(dolby_facade_execute_ta_command);

#ifdef CONFIG_DOLBY_BACKLIGHT_CTRL_ADIM_PDIM
void dolby_facade_set_dolby_duty_by_dim(int duty)
{
	extern void set_dolby_duty_by_dim(int duty);
	
	set_dolby_duty_by_dim(duty);
}
EXPORT_SYMBOL(dolby_facade_set_dolby_duty_by_dim);
#endif

void dolby_facade_trigger_dolby_vision_worker(void)
{
	extern void trigger_dolby_vision_worker(void);
	trigger_dolby_vision_worker();
}
EXPORT_SYMBOL(dolby_facade_trigger_dolby_vision_worker);
