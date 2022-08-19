
#ifndef __AMW_RPC_H__
#define __AMW_RPC_H__


#if defined(SYS_ROS)
#include <rt/misc/types.h>
#endif


#if !defined(SYS_ROS) && defined(GNU_TOOL)
typedef long long					int64_t;
typedef unsigned long long			u_int64_t;
#endif

#if defined(WIN32)
typedef unsigned char   u_char;
typedef unsigned short  u_short;
typedef unsigned int    u_int;
typedef unsigned long   u_long;
typedef signed __int64	int64_t;
#endif

#include "AudioRPCBaseDS_data.h"
#include "RPCBaseDS_data.h"
#include "AudioInbandAPI.h"

#if defined(SYS_ROS)
#include <rt/misc/RPCstruct.h>
#else
#include "RPCstruct.h"
#endif


#define RPC_TOAGENT_CREATE(x,y,z)			AUDIO_RPC_ToAgent_Create_0(x,y)

#define RPC_TOAGENT_KARAOKE_CONTROL(x,y,z)		AUDIO_RPC_ToAgent_Karaoke_Control_0(x,y)
#define RPC_AO_TOAGENT_MUTE(x,y,z)			AUDIO_RPC_AO_ToAgent_Mute_0(x,y)
#define RPC_TOAGENT_AOUT_SPDIF_SOURCE(x,y,z)		AUDIO_RPC_ToAgent_AOUT_SPDIF_Source_0(x,y)
#define RPC_TOAGENT_AOUT_VOLUME_CONTROL(x,y,z)		AUDIO_RPC_ToAgent_AOUT_Volume_Control_0(x,y)
#define RPC_TOAGENT_AOUT_PINK_WHITE_NOISE(x,y,z)		AUDIO_RPC_ToAgent_AOUT_Pink_White_Noise_0(x,y)
#define RPC_TOAGENT_AOUT_SEND_SPECTRUM_DATA(x,y,z)		AUDIO_RPC_ToAgent_AOUT_Send_Spectrum_Data_0(x,y)
#define RPC_TOAGENT_PLAYSOUNDEVENT(x,y,z)				AUDIO_RPC_ToAgent_PlaySoundEvent_0(x,y)
#define RPC_TOAGENT_AOUT_HDMI_SET(x,y,z)				AUDIO_RPC_ToAgent_AOUT_HDMI_Set_0(x,y)
#define RPC_TOAGENT_HDMI_MUTE(x,y,z)					AUDIO_RPC_ToAgent_HDMI_Mute_0(x,y)
#define RPC_TOAGENT_AO_ONLY_SWITCHFOCUS(x,y,z)			AUDIO_RPC_ToAgent_AO_Only_Switchfocus_0(x,y)

#define RPC_TOAGENT_AOUT_DROP_SAMPLE(x,y,z)		AUDIO_RPC_ToAgent_AOUT_Drop_Sample_0(x,y)
#define RPC_TOAGENT_AOUT_COPY_SOURCE(x,y,z)		AUDIO_RPC_ToAgent_AOUT_Copy_Source_0(x,y)
#define RPC_TOAGENT_AIN_CONFIG_TSD(x,y,z)		AUDIO_RPC_ToAgent_AIN_Config_TSD_0(x,y)
#define RPC_TOAGENT_AIN_DATA_MEASUREMENT(x,y,z)	AUDIO_RPC_ToAgent_AIN_Data_Measurement_0(x,y)
#define RPC_TOAGENT_AIN_SWITCH_FOCUS(x,y,z)		AUDIO_RPC_ToAgent_AIN_Switch_Focus_0(x,y)
#define RPC_TOAGENT_AIN_MUTE(x,y,z)				AUDIO_RPC_ToAgent_AIN_Mute_0(x,y)
#define RPC_TOAGENT_ADC0_CONFIG(x,y,z)			AUDIO_RPC_ToAgent_ADC0_Config_0(x,y)
#define RPC_TOAGENT_ADC1_CONFIG(x,y,z)			AUDIO_RPC_ToAgent_ADC1_Config_0(x,y)
#define RPC_TOAGENT_ADC2_CONFIG(x,y,z)			AUDIO_RPC_ToAgent_ADC2_Config_0(x,y)
#define RPC_TOAGENT_AFC_CONFIG(x,y,z)			AUDIO_RPC_ToAgent_AFC_Config_0(x,y)
#define RPC_TOAGENT_BBADC_CONFIG(x,y,z)			AUDIO_RPC_ToAgent_BBADC_Config_0(x,y)
#define RPC_TOAGENT_I2SI_CONFIG(x,y,z)			AUDIO_RPC_ToAgent_I2SI_Config_0(x,y)
#define RPC_TOAGENT_SPDIFI_CONFIG(x,y,z)		AUDIO_RPC_ToAgent_SPDIFI_Config_0(x,y)
#define RPC_TOAGENT_CHG_IPT_SRC(x,y,z)			AUDIO_RPC_ToAgent_ChangeInputSource_0(x,y)
#define RPC_TOAGENT_SET_AUTHORITY_KEY(x,y,z)	AUDIO_RPC_ToAgent_SetAuthorityKey_0(x,y)
#define RPC_TOAGENT_SPDIF_CONFIG(x,y,z)         AUDIO_RPC_ToAgent_SPDIF_Config_0(x,y)
#define RPC_TOAGENT_SPDIF_ERR_THRESHOLD_CONFIG(x,y,z)	AUDIO_RPC_ToAgent_SPDIF_Err_Threshold_Config_0(x,y)
#define RPC_TOAGENT_AUDIO_AI_BACKDOOR_INIT(x,y,z)	AUDIO_RPC_ToAgent_AI_BackDoor_Init_0(x,y)

#define RPC_TOAGENT_DAC_I2S_CONFIG(x,y,z)		AUDIO_RPC_ToAgent_DAC_I2S_Config_0(x,y)
#define RPC_TOAGENT_AUDISTRY_CONFIG(x,y,z)		AUDIO_RPC_ToAgent_Audistry_Config_0(x,y)
#define RPC_TOAGENT_DAC_SPDIF_CONFIG(x,y,z)		AUDIO_RPC_ToAgent_DAC_SPDIF_Config_0(x,y)

#define RPC_TOAGENT_CONNECT(x,y,z)			AUDIO_RPC_ToAgent_Connect_0(x,y)
#define RPC_TOAGENT_DISCONNECT(x,y,z)       AUDIO_RPC_ToAgent_DisConnect_0(x,y)
#define RPC_TOAGENT_DESTROY(x,y,z)			AUDIO_RPC_ToAgent_Destroy_0(x,y)
#define RPC_TOAGENT_RUN(x,y,z)			AUDIO_RPC_ToAgent_Run_0(x,y)
#define RPC_TOAGENT_PAUSE(x,y,z)			AUDIO_RPC_ToAgent_Pause_0(x,y)
#define RPC_TOAGENT_STOP(x,y,z)			AUDIO_RPC_ToAgent_Stop_0(x,y)
#define RPC_TOAGENT_GETSTATUS(x,y,z)		AUDIO_RPC_ToAgent_GetStatus_0(x,y)
#define RPC_TOAGENT_SEEK(x,y,z)			AUDIO_RPC_ToAgent_Seek_0(x,y)
#define RPC_TOAGENT_UPDATEWRITEPTR(x,y,z)	AUDIO_RPC_ToAgent_UpdateWritePtr_0(x,y)
#define RPC_TOAGENT_UPDATEREADPTR(x,y,z)	AUDIO_RPC_ToAgent_UpdateReadPtr_0(x,y)
#define RPC_TOAGENT_PRIVATEINFO(x,y,z)		AUDIO_RPC_ToAgent_PrivateInfo_0(x,y)

///////////////////////////////////////////////////////////////////////////////
#define RPC_TOAGENT_ENDOFSTREAM(x,y,z)		AUDIO_RPC_ToAgent_EndOfStream_0(x,y)
#define RPC_TOAGENT_RECEIVE(x,y,z)			AUDIO_RPC_ToAgent_Receive_0(x,y)

#define RPC_TOAGENT_FLUSH(x,y,z)           AUDIO_RPC_ToAgent_Flush_0(x,y)
#define RPC_TOAGENT_SET_SEEKING(x,y,z)     AUDIO_RPC_ToAgent_SetSeeking_0(x,y)

#define RPC_TOAGENT_DECODERCONFIG(x,y,z)	AUDIO_RPC_ToAgent_DecoderConfig_0(x,y)
#define RPC_TOAGENT_EXTBSEXIST(x,y,z)		AUDIO_RPC_ToAgent_ExtBSExist_0(x,y)
#define RPC_TOAGENT_PCMFORMAT(x,y,z)		AUDIO_RPC_ToAgent_PCMFormat_0(x,y)
#define RPC_TOAGENT_SWITCH_AGENT(x,y,z)	AUDIO_RPC_ToAgent_SwitchAgent_0(x,y)
#define RPC_TOAGENT_UPDATEPTS(x,y,z)		AUDIO_RPC_ToAgent_UpdatePTS_0(x,y)
#define RPC_TOAGENT_SETREFCLOCK(x,y,z)		AUDIO_RPC_ToAgent_SetRefClock_0	(x,y)
#define RPC_TOAGENT_INITRINGBUFFER_HEADER(x,y,z)	AUDIO_RPC_ToAgent_InitRingBufferHeader_0(x,y)
#define RPC_TOAGENT_SWITCHFOCUS(x,y,z)			AUDIO_RPC_ToAgent_SwitchFocus_0(x,y)
#define RPC_TOAGENT_SUBCHANNEL(x,y,z)      AUDIO_RPC_ToAgent_SubChannel_0(x,y)
#define RPC_TOAGENT_HDMI_OUT_EDID(x,y,z)		AUDIO_RPC_ToAgent_HDMI_OUT_EDID_0(x,y)
#define RPC_TOAGENT_HDMI_OUT_VSDB(x,y,z)		AUDIO_RPC_ToAgent_HDMI_OUT_VSDB_0(x,y)
#define RPC_TOAGENT_HDMI_INFO(x,y,z)		AUDIO_RPC_ToAgent_HDMI_INFO_0(x,y)

#define RPC_TOAGENT_PP_FUNCTION(x,y,z)		AUDIO_RPC_ToAgent_PP_Config_0(x,y)
#define RPC_TOAGENT_PP_SRC_CONFIG(x,y,z)	AUDIO_RPC_ToAgent_PP_SRC_Config_0(x,y)
#define RPC_TOAGENT_PP_PL2_CONFIG(x,y,z)	AUDIO_RPC_ToAgent_PP_PL2_Config_0(x,y)
#define RPC_TOAGENT_PP_MIXER_CONFIG(x,y,z)	AUDIO_RPC_ToAgent_PP_MIXER_Config_0(x,y)
#define RPC_TOAGENT_PP_PTS_MIXER_CONFIG(x,y,z)	AUDIO_RPC_ToAgent_PP_PTS_MIXER_Config_0(x,y)
#define RPC_TOAGENT_PP_DVS_CONFIG(x,y,z)	AUDIO_RPC_ToAgent_PP_DVS_Config_0(x,y)
#define RPC_TOAGENT_PP_BASS_MANAGEMENT_CONFIG(x,y,z)	AUDIO_RPC_ToAgent_PP_BASS_MANAGEMENT_Config_0(x,y)
#define RPC_TOAGENT_PP_KEY_SHIFT_CONFIG(x,y,z)		AUDIO_RPC_ToAgent_PP_KEY_SHIFT_Config_0(x,y)
#define RPC_TOAGENT_PP_REVERB_CONFIG(x,y,z)		AUDIO_RPC_ToAgent_PP_REVERB_Config_0(x,y)
#define RPC_TOAGENT_PP_EQ_CONFIG(x,y,z)		AUDIO_RPC_ToAgent_PP_EQ_Config_0(x,y)
#define RPC_TOAGENT_PP_VOCAL_REMOVER_CONFIG(x,y,z)	AUDIO_RPC_ToAgent_PP_VOCAL_REMOVER_Config_0(x,y)
#define RPC_TOAGENT_NIGHTMODE(x,y,z)		AUDIO_RPC_ToAgent_NightMode_0(x,y)
#define RPC_TOAGENT_PP_INIT_PIN(x,y,z)		AUDIO_RPC_ToAgent_PP_InitPin_0(x,y)
#define RPC_TOAGENT_AI_DEVICE_USBINFO(x,y,z)    AUDIO_RPC_ToAgent_AI_Device_USBinfo(x,y)


#define RPC_TOAGENT_CREATE_SVC			AUDIO_RPC_ToAgent_Create_0_svc

#define RPC_TOAGENT_KARAOKE_CONTROL_SVC			AUDIO_RPC_ToAgent_Karaoke_Control_0_svc
#define RPC_AO_TOAGENT_MUTE_SVC				AUDIO_RPC_AO_ToAgent_Mute_0_svc
#define RPC_TOAGENT_AOUT_SPDIF_SOURCE_SVC		AUDIO_RPC_ToAgent_AOUT_SPDIF_Source_0_svc
#define RPC_TOAGENT_AOUT_VOLUME_CONTROL_SVC		AUDIO_RPC_ToAgent_AOUT_Volume_Control_0_svc
#define RPC_TOAGENT_AOUT_DROP_SAMPLE_SVC		AUDIO_RPC_ToAgent_AOUT_Drop_Sample_0_svc
#define RPC_TOAGENT_AOUT_PINK_WHITE_NOISE_SVC	AUDIO_RPC_ToAgent_AOUT_Pink_White_Noise_0_svc
#define RPC_TOAGENT_AOUT_SEND_SPECTRUM_DATA_SVC	AUDIO_RPC_ToAgent_AOUT_Send_Spectrum_Data_0_svc
#define RPC_TOAGENT_PLAYSOUNDEVENT_SVC			AUDIO_RPC_ToAgent_PlaySoundEvent_0_svc
#define RPC_TOAGENT_AOUT_HDMI_SET_SVC			AUDIO_RPC_ToAgent_AOUT_HDMI_Set_0_svc
#define RPC_TOAGENT_HDMI_MUTE_SVC				AUDIO_RPC_ToAgent_HDMI_Mute_0_svc
#define RPC_TOAGENT_AO_ONLY_SWITCHFOCUS_SVC		AUDIO_RPC_ToAgent_AO_Only_Switchfocus_0_svc

#define RPC_TOAGENT_AOUT_COPY_SOURCE_SVC		AUDIO_RPC_ToAgent_AOUT_Copy_Source_0_svc
#define RPC_TOAGENT_AIN_CONFIG_TSD_SVC		AUDIO_RPC_ToAgent_AIN_Config_TSD_0_svc
#define RPC_TOAGENT_AIN_DATA_MEASUREMENT_SVC	AUDIO_RPC_ToAgent_AIN_Data_Measurement_0_svc
#define RPC_TOAGENT_AIN_SWITCH_FOCUS_SVC		AUDIO_RPC_ToAgent_AIN_Switch_Focus_0_svc
#define RPC_TOAGENT_AIN_MUTE_SVC				AUDIO_RPC_ToAgent_AIN_Mute_0_svc
#define RPC_TOAGENT_ADC0_CONFIG_SVC			AUDIO_RPC_ToAgent_ADC0_Config_0_svc
#define RPC_TOAGENT_ADC1_CONFIG_SVC			AUDIO_RPC_ToAgent_ADC1_Config_0_svc
#define RPC_TOAGENT_ADC2_CONFIG_SVC			AUDIO_RPC_ToAgent_ADC2_Config_0_svc
#define RPC_TOAGENT_AFC_CONFIG_SVC			AUDIO_RPC_ToAgent_AFC_Config_0_svc
#define RPC_TOAGENT_BBADC_CONFIG_SVC		AUDIO_RPC_ToAgent_BBADC_Config_0_svc
#define RPC_TOAGENT_I2SI_CONFIG_SVC			AUDIO_RPC_ToAgent_I2SI_Config_0_svc
#define RPC_TOAGENT_SPDIFI_CONFIG_SVC		AUDIO_RPC_ToAgent_SPDIFI_Config_0_svc
#define RPC_TOAGENT_CHG_IPT_SRC_SVC			AUDIO_RPC_ToAgent_ChangeInputSource_0_svc
#define RPC_TOAGENT_SET_ATV_CLOCK_SVC		AUDIO_RPC_ToAgent_SET_ATV_CLOCK_0_svc
#define RPC_TOAGENT_SET_SIF_ADC_INIT_SVC	AUDIO_RPC_ToAgent_SET_SIF_ADC_INIT_0_svc
#define RPC_TOAGENT_INOUT_CH_SELECT_SVC		AUDIO_RPC_ToAgent_INOUT_CH_SELECT_0_svc
#define RPC_TOAGENT_SET_FS_CLOCKSRC_SVC		AUDIO_RPC_ToAgent_SET_FS_CLOCKSRC_0_svc
#define RPC_TOAGENT_SET_PATH_DATA_OUT_SVC	AUDIO_RPC_ToAgent_SET_PATH_DATA_OUT_0_svc
#define RPC_TOAGENT_SET_INTERLEAVE_OUT_SVC	AUDIO_RPC_ToAgent_SET_INTERLEAVE_OUT_0_svc
#define RPC_TOAGENT_SET_AUTHORITY_KEY_SVC	AUDIO_RPC_ToAgent_SetAuthorityKey_0_svc
#define RPC_TOAGENT_GET_SPDIF_CS_SVC        AUDIO_RPC_ToAgent_GET_SPDIF_CS_0_svc
#define RPC_TOAGENT_SPDIF_CONFIG_SVC                    AUDIO_RPC_ToAgent_SPDIF_Config_0_svc
#define RPC_TOAGENT_SPDIF_ERR_THRESHOLD_CONFIG_SVC	AUDIO_RPC_ToAgent_SPDIF_Err_Threshold_Config_0_svc
#define RPC_TOAGENT_AUDIO_AI_BACKDOOR_INIT_SVC		AUDIO_RPC_ToAgent_AI_BackDoor_Init_0_svc

#define RPC_TOAGENT_DAC_I2S_CONFIG_SVC			AUDIO_RPC_ToAgent_DAC_I2S_Config_0_svc
#define RPC_TOAGENT_AUDISTRY_CONFIG_SVC			AUDIO_RPC_ToAgent_Audistry_Config_0_svc
#define RPC_TOAGENT_DAC_SPDIF_CONFIG_SVC		AUDIO_RPC_ToAgent_DAC_SPDIF_Config_0_svc

#define RPC_TOAGENT_CONNECT_SVC			AUDIO_RPC_ToAgent_Connect_0_svc
#define RPC_TOAGENT_DISCONNECT_SVC      AUDIO_RPC_ToAgent_DisConnect_0_svc
#define RPC_TOAGENT_DESTROY_SVC			AUDIO_RPC_ToAgent_Destroy_0_svc
#define RPC_TOAGENT_RUN_SVC				AUDIO_RPC_ToAgent_Run_0_svc
#define RPC_TOAGENT_PAUSE_SVC			AUDIO_RPC_ToAgent_Pause_0_svc
#define RPC_TOAGENT_STOP_SVC			AUDIO_RPC_ToAgent_Stop_0_svc
#define RPC_TOAGENT_GETSTATUS_SVC		AUDIO_RPC_ToAgent_GetStatus_0_svc
#define RPC_TOAGENT_SEEK_SVC			AUDIO_RPC_ToAgent_Seek_0_svc
#define RPC_TOAGENT_UPDATEWRITEPTR_SVC	AUDIO_RPC_ToAgent_UpdateWritePtr_0_svc
#define RPC_TOAGENT_UPDATEREADPTR_SVC	AUDIO_RPC_ToAgent_UpdateReadPtr_0_svc
#define RPC_TOAGENT_PRIVATEINFO_SVC		AUDIO_RPC_ToAgent_PrivateInfo_0_svc

///////////////////////////////////////////////////////////////////////////////
#define RPC_TOAGENT_ENDOFSTREAM_SVC		AUDIO_RPC_ToAgent_EndOfStream_0_svc
#define RPC_TOAGENT_RECEIVE_SVC			AUDIO_RPC_ToAgent_Receive_0_svc

#define RPC_TOAGENT_FLUSH_SVC           AUDIO_RPC_ToAgent_Flush_0_svc
#define RPC_TOAGENT_SET_SEEKING_SVC     AUDIO_RPC_ToAgent_SetSeeking_0_svc

#define RPC_TOAGENT_DECODERCONFIG_SVC	AUDIO_RPC_ToAgent_DecoderConfig_0_svc
#define RPC_TOAGENT_EXTBSEXIST_SVC		AUDIO_RPC_ToAgent_ExtBSExist_0_svc
#define RPC_TOAGENT_PCMFORMAT_SVC		AUDIO_RPC_ToAgent_PCMFormat_0_svc
#define RPC_TOAGENT_SWITCH_AGENT_SVC	AUDIO_RPC_ToAgent_SwitchAgent_0_svc
#define RPC_TOAGENT_UPDATEPTS_SVC		AUDIO_RPC_ToAgent_UpdatePTS_0_svc
#define RPC_TOAGENT_SETREFCLOCK_SVC		AUDIO_RPC_ToAgent_SetRefClock_0_svc
#define RPC_TOAGENT_INITRINGBUFFER_HEADER_SVC	AUDIO_RPC_ToAgent_InitRingBufferHeader_0_svc
#define RPC_TOAGENT_SWITCHFOCUS_SVC		AUDIO_RPC_ToAgent_SwitchFocus_0_svc
#define RPC_TOAGENT_SUBCHANNEL_SVC		AUDIO_RPC_ToAgent_SubChannel_0_svc
#define RPC_TOAGENT_HDMI_OUT_EDID_SVC		AUDIO_RPC_ToAgent_HDMI_OUT_EDID_0_svc
#define RPC_TOAGENT_HDMI_OUT_VSDB_SVC		AUDIO_RPC_ToAgent_HDMI_OUT_VSDB_0_svc
#define RPC_TOAGENT_HDMI_INFO_SVC		AUDIO_RPC_ToAgent_HDMI_INFO_0_svc

#define RPC_TOAGENT_PP_FUNCTION_SVC		AUDIO_RPC_ToAgent_PP_Config_0_svc
#define RPC_TOAGENT_PP_SRC_CONFIG_SVC	AUDIO_RPC_ToAgent_PP_SRC_Config_0_svc
#define RPC_TOAGENT_PP_PL2_CONFIG_SVC	AUDIO_RPC_ToAgent_PP_PL2_Config_0_svc
#define RPC_TOAGENT_PP_MIXER_CONFIG_SVC	AUDIO_RPC_ToAgent_PP_MIXER_Config_0_svc
#define RPC_TOAGENT_PP_PTS_MIXER_CONFIG_SVC	AUDIO_RPC_ToAgent_PP_PTS_MIXER_Config_0_svc
#define RPC_TOAGENT_PP_DVS_CONFIG_SVC	AUDIO_RPC_ToAgent_PP_DVS_Config_0_svc
#define RPC_TOAGENT_PP_BASS_MANAGEMENT_CONFIG_SVC	AUDIO_RPC_ToAgent_PP_BASS_MANAGEMENT_Config_0_svc
#define RPC_TOAGENT_PP_KEY_SHIFT_CONFIG_SVC	AUDIO_RPC_ToAgent_PP_KEY_SHIFT_Config_0_svc
#define RPC_TOAGENT_PP_REVERB_CONFIG_SVC	AUDIO_RPC_ToAgent_PP_REVERB_Config_0_svc
#define RPC_TOAGENT_PP_EQ_CONFIG_SVC	AUDIO_RPC_ToAgent_PP_EQ_Config_0_svc
#define RPC_TOAGENT_PP_VOCAL_REMOVER_CONFIG_SVC	AUDIO_RPC_ToAgent_PP_VOCAL_REMOVER_Config_0_svc

#define RPC_TOAGENT_PP_FREQ_EQ_CONFIG_SVC   AUDIO_RPC_ToAgent_PP_FREQ_EQ_Config_0_svc
#define RPC_TOAGENT_PP_TRUVOLUME_CONFIG_SVC   AUDIO_RPC_ToAgent_PP_TRUVOLUME_Config_0_svc
#define RPC_TOAGENT_PP_TSXT_CONFIG_SVC   AUDIO_RPC_ToAgent_PP_TSXT_Config_0_svc
#define RPC_TOAGENT_PP_TSHD_CONFIG_SVC   AUDIO_RPC_ToAgent_PP_TSHD_Config_0_svc
#define RPC_TOAGENT_PP_BASSBACK_PCBU_CONFIG_SVC   AUDIO_RPC_ToAgent_PP_BASSBACK_PCBU_Config_0_svc
#define RPC_TOAGENT_PP_BASSBACK_TV_CONFIG_SVC   AUDIO_RPC_ToAgent_PP_BASSBACK_TV_Config_0_svc
#define RPC_TOAGENT_PP_BASSBACK_CHAGE_BASS_GAIN_SVC   AUDIO_RPC_ToAgent_PP_BASSBACK_Change_Bass_Gain_0_svc

#define RPC_ToAgent_AO_LGSE_SetMode_SVC  AUDIO_RPC_ToAgent_AO_LGSE_SetMode_0_svc
#define RPC_ToAgent_AO_LGSE_SetMain_SVC  AUDIO_RPC_ToAgent_AO_LGSE_SetMain_0_svc
#define RPC_ToAgent_AO_LGSE_SetFn000_SVC  AUDIO_RPC_ToAgent_AO_LGSE_SetFn000_0_svc
#define RPC_ToAgent_AO_LGSE_SetFn001_SVC  AUDIO_RPC_ToAgent_AO_LGSE_SetFn001_0_svc
#define RPC_ToAgent_AO_LGSE_SetFn009_SVC  AUDIO_RPC_ToAgent_AO_LGSE_SetFn009_0_svc
#define RPC_ToAgent_AO_LGSE_SetFn010_SVC  AUDIO_RPC_ToAgent_AO_LGSE_SetFn010_0_svc
#define RPC_ToAgent_AO_LGSE_SetFn004_SVC  AUDIO_RPC_ToAgent_AO_LGSE_SetFn004_0_svc
#define RPC_ToAgent_AO_LGSE_SetFn005_SVC  AUDIO_RPC_ToAgent_AO_LGSE_SetFn005_0_svc
#define RPC_ToAgent_AO_LGSE_SetFn008_SVC  AUDIO_RPC_ToAgent_AO_LGSE_SetFn008_0_svc

#define RPC_TOAGENT_PP_ASF_VOLUME_CONFIG_SVC   AUDIO_RPC_ToAgent_PP_ASF_VOLUME_Config_0_svc
#define RPC_TOAGENT_PP_ASF_BALANCE_CONFIG_SVC   AUDIO_RPC_ToAgent_PP_ASF_BALANCE_Config_0_svc
#define RPC_TOAGENT_PP_ASF_ON_OFF_CONFIG_SVC   AUDIO_RPC_ToAgent_PP_ASF_ON_OFF_Config_0_svc

#define RPC_TOAGENT_AO_SPDIFO_SOURCE_CONFIG_SVC AUDIO_RPC_AO_ToAgent_SPDIFO_Source_Config_0_svc
#define RPC_TOAGENT_SET_CHANNEL_OUT_SWAP_SVC   AUDIO_RPC_ToAgent_SET_CHANNEL_OUT_SWAP_0_svc
#define RPC_TOAGENT_AO_RESAMPLE_TABLE_SVC AUDIO_RPC_AO_ToAgent_ResampleTable_0_svc


#define RPC_TOAGENT_NIGHTMODE_SVC		AUDIO_RPC_ToAgent_NightMode_0_svc
#define RPC_TOAGENT_PP_AGC_SVC		    AUDIO_RPC_ToAgent_PP_AGC_0_svc
#define RPC_TOAGENT_PP_INIT_PIN_SVC		AUDIO_RPC_ToAgent_PP_InitPin_0_svc

#define RPC_TOAGENT_AI_DEVICE_USBINFO_SVC   AUDIO_RPC_ToAgent_AI_Device_USBinfo_0_svc
#endif

