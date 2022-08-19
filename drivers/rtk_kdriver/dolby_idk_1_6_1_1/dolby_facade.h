#ifndef	__DOLBY_IDK_1_6_1_1_DOLBY_FACADE_H__
#define	__DOLBY_IDK_1_6_1_1_DOLBY_FACADE_H__

int dolby_facade_rtk_timer_set_value(unsigned char id, unsigned int value);
void dolby_facade_set_OTT_HDR_mode(HDR_MODE mode);
HDR_MODE dolby_facade_get_OTT_HDR_mode(void);
HDR_MODE dolby_facade_get_HDMI_HDR_mode(void);
unsigned int dolby_facade_drvif_memory_get_data_align(unsigned int Value, unsigned int unit);
unsigned char dolby_facade_get_cur_hdmi_dolby_apply_state(void);
int dolby_facade_rtk_timer_control(unsigned char id, unsigned int cmd);
int dolby_facade_rtk_timer_set_mode(unsigned char id, unsigned char mode);
int dolby_facade_rtk_timer_set_target(unsigned char id, unsigned int value);
void dolby_facade_dolby_ott_dm_init(void);
unsigned short dolby_facade_Scaler_DispGetInputInfoByDisp(unsigned char channel, SLR_INPUT_INFO infoList);
unsigned int dolby_facade_Scaler_GetShareMemVirAddr(unsigned int a_ulCmd);
unsigned int dolby_facade_get_query_start_address(unsigned char idx);
void dolby_facade_drv_memory_wait_cap_last_write_done(unsigned char display, unsigned char wait_frame, unsigned char game_mode_case);
void dolby_facade_fwif_color_disable_VIP(unsigned char flag);
void *dolby_facade_get_dolby_device(void);
void dolby_facade_dmac_inv_range(const void *start, const void *end);
void dolby_facade_dmac_flush_range(const void *start, const void *end);
DOLBY_HDMI_VSIF_T dolby_facade_get_HDMI_Dolby_VSIF_mode(void);
void *dolby_facade_get_hdmi_dolby_vsi_content(void);
void dolby_facade_set_hdr_type_dolby(void);
bool dolby_facade_is_memc_low_latency(void);
VSC_INPUT_TYPE_T dolby_facade_Get_DisplayMode_Src(unsigned char display);
bool dolby_facade_rtk_is_dobly_vision_supported(void);
void dolby_facade_set_pwm_duty(int duty);
int dolby_facade_MCP_AES_CBC_Decryption(
		unsigned char               key[16],
		unsigned char               iv[16],
		unsigned char*              p_in,
		unsigned char*              p_out,
		unsigned long               len);
int dolby_facade_ta_init(void *data, struct teec_uuid *uuid);
int dolby_facade_ta_exit(void *data);
long dolby_facade_register_tee_share_memory(struct tee_context *ctx, void *data);
void dolby_facade_release_tee_share_memory(void *data);
int dolby_facade_execute_ta_command(void *ta, int command, void *param1, void *param2);

#ifdef CONFIG_DOLBY_BACKLIGHT_CTRL_ADIM_PDIM
void dolby_facade_set_dolby_duty_by_dim(int duty);
#endif

void dolby_facade_trigger_dolby_vision_worker(void);
#endif	/* __DOLBY_IDK_1_6_1_1_DOLBY_FACADE_H__ */
