#ifndef AUDIO_HW_IOCTL_H
#define AUDIO_HW_IOCTL_H

#define AUDIO_DEVICE_NAME					"audio_hw"

/*
 * audio ATV commands
 */
#define AUDIO_IOC_ATV_MAGIC					'v'
#define AUDIO_IOC_ATV_ENABLE_AUTO_CHANGE_STD_FLAG		_IOW(AUDIO_IOC_ATV_MAGIC, 0, int)
#define AUDIO_IOC_ATV_AUTO_CHANGE_TO_MONO			_IOW(AUDIO_IOC_ATV_MAGIC, 1, int)
#define AUDIO_IOC_ATV_SET_SOUND_STD				_IOW(AUDIO_IOC_ATV_MAGIC, 2, ATV_SET_SOUND_STD_T)
#define AUDIO_IOC_ATV_SET_PLAY_CHANNEL				_IOW(AUDIO_IOC_ATV_MAGIC, 3, ATV_SET_PLAY_CHANNEL_T)
#define AUDIO_IOC_ATV_SET_SOUND_SELECT				_IOW(AUDIO_IOC_ATV_MAGIC, 4, ATV_SOUND_SEL)
//#define AUDIO_IOC_ATV_SET_BTSC_MTS_VOLUME			_IOW(AUDIO_IOC_ATV_MAGIC, 5, ATV_SET_BTSC_MTS_VOLUME_T)
#define AUDIO_IOC_ATV_SET_MTS_PRIORITY				_IOW(AUDIO_IOC_ATV_MAGIC, 6, ATV_MTS_PRIORITY)
#define AUDIO_IOC_ATV_GET_SOUND_STD				_IOW(AUDIO_IOC_ATV_MAGIC, 7, ATV_SOUND_INFO)
#define AUDIO_IOC_ATV_SCAN_SOUND_STD				_IOWR(AUDIO_IOC_ATV_MAGIC, 8, ATV_SCAN_SOUND_STD_T)
#define AUDIO_IOC_ATV_SCAN_SOUND_STD_FMRADIO			_IOWR(AUDIO_IOC_ATV_MAGIC, 9, ATV_SCAN_SOUND_STD_FMRADIO_T)
#define AUDIO_IOC_ATV_SET_AREA					_IOW(AUDIO_IOC_ATV_MAGIC, 10, ATV_FIELD_AREA)
#define AUDIO_IOC_ATV_SET_DATA_SRC				_IOW(AUDIO_IOC_ATV_MAGIC, 11, ATV_DATA_SRC)
#define AUDIO_IOC_ATV_GET_MN_STATUS				_IOWR(AUDIO_IOC_ATV_MAGIC, 12, ATV_GET_MN_STATUS_T)
#define AUDIO_IOC_ATV_HWP_AAD_SIF_INIT				_IOWR(AUDIO_IOC_ATV_MAGIC, 13, ATV_CFG)
#define AUDIO_IOC_ATV_INIT					_IOWR(AUDIO_IOC_ATV_MAGIC, 14, ATV_CFG)
#define AUDIO_IOC_ATV_DEINIT					_IO(AUDIO_IOC_ATV_MAGIC, 15)
#define AUDIO_IOC_ATV_HWP_AAD_SIF_FINALIZE			_IO(AUDIO_IOC_ATV_MAGIC, 16)
#define AUDIO_IOC_ATV_SET_HW_MUTE				_IOW(AUDIO_IOC_ATV_MAGIC, 17, ATV_SET_HW_MUTE_T)
#define AUDIO_IOC_ATV_CLEAN_TV_SOURCE_DATA			_IO(AUDIO_IOC_ATV_MAGIC, 18)
#define AUDIO_IOC_ATV_SET_BTSC_SOUND_CHANGE_DEBOUNCE		_IOW(AUDIO_IOC_ATV_MAGIC, 19, ATV_SET_BTSC_SOUND_CHANGE_DEBOUNCE_T)
#define AUDIO_IOC_ATV_ENTER_AUTO_SCAN				_IO(AUDIO_IOC_ATV_MAGIC, 20)
#define AUDIO_IOC_ATV_EXIT_AUTO_SCAN				_IO(AUDIO_IOC_ATV_MAGIC, 21)
#define AUDIO_IOC_ATV_ENTER_SET_CHANNEL				_IO(AUDIO_IOC_ATV_MAGIC, 22)
#define AUDIO_IOC_ATV_FINISH_SET_CHANNEL			_IO(AUDIO_IOC_ATV_MAGIC, 23)
#define AUDIO_IOC_ATV_IS_TV_READY				_IOR(AUDIO_IOC_ATV_MAGIC, 24, uint32_t)
#define AUDIO_IOC_ATV_ENTER_ATV_SOURCE				_IO(AUDIO_IOC_ATV_MAGIC, 25)
#define AUDIO_IOC_ATV_START_DECODING				_IO(AUDIO_IOC_ATV_MAGIC, 26)
#define AUDIO_IOC_ATV_STOP_DECODING				_IO(AUDIO_IOC_ATV_MAGIC, 27)
#define AUDIO_IOC_ATV_SET_BTSC_SOUND_SELECT			_IOW(AUDIO_IOC_ATV_MAGIC, 28, ATV_SET_BTSC_SOUND_SELECT_T)
#define AUDIO_IOC_ATV_SET_NICAM_SOUND_SELECT			_IOW(AUDIO_IOC_ATV_MAGIC, 29, ATV_SET_NICAM_SOUND_SELECT_T)
#define AUDIO_IOC_ATV_SET_A2_SOUND_SELECT			_IOW(AUDIO_IOC_ATV_MAGIC, 30, ATV_SET_A2_SOUND_SELECT_T)
#define AUDIO_IOC_ATV_IS_BTSC_MTS_SELECT_FINISH			_IOR(AUDIO_IOC_ATV_MAGIC, 31, int)
#define AUDIO_IOC_ATV_GET_BTSC_MTS_SELECT			_IOWR(AUDIO_IOC_ATV_MAGIC, 32, uint32_t)
#define AUDIO_IOC_ATV_GET_A2_SOUND_SELECT			_IOWR(AUDIO_IOC_ATV_MAGIC, 33, ATV_A2_SEL)
#define AUDIO_IOC_ATV_IS_A2_SOUND_SELECT_FINISH			_IOR(AUDIO_IOC_ATV_MAGIC, 34, int)
#define AUDIO_IOC_ATV_ENABLE_PRINT_SW_SCAN			_IOW(AUDIO_IOC_ATV_MAGIC, 35, uint32_t)
#define AUDIO_IOC_ATV_ENABLE_TV_PRINT				_IOW(AUDIO_IOC_ATV_MAGIC, 36, uint32_t)
#define AUDIO_IOC_ATV_GET_NICAM_SOUND_SELECT			_IOWR(AUDIO_IOC_ATV_MAGIC, 37, ATV_NICAM_SEL)
#define AUDIO_IOC_ATV_IS_NICAM_SOUND_SELECT_FINISH		_IOR(AUDIO_IOC_ATV_MAGIC, 38, int)
#define AUDIO_IOC_ATV_IFD_INIT_FINISH				_IO(AUDIO_IOC_ATV_MAGIC, 39)
#define AUDIO_IOC_ATV_RESET_IFD_INIT_FLAG			_IO(AUDIO_IOC_ATV_MAGIC, 40)
#define AUDIO_IOC_ATV_SET_LOW_THRESHOLD_FLAG			_IOW(AUDIO_IOC_ATV_MAGIC, 41, int)
#define AUDIO_IOC_ATV_SET_AUDIO_IN_HANDLE			_IOW(AUDIO_IOC_ATV_MAGIC, 42, long)
#define AUDIO_IOC_ATV_SET_SUB_AUDIO_IN_HANDLE			_IOW(AUDIO_IOC_ATV_MAGIC, 43, long)
#define AUDIO_IOC_ATV_SET_TV_FLAG				_IOW(AUDIO_IOC_ATV_MAGIC, 44, ATV_SET_TV_FLAG_T)
#define AUDIO_IOC_ATV_START_TO_NORMAL_PROCESS			_IO(AUDIO_IOC_ATV_MAGIC, 45)
#define AUDIO_IOC_ATV_FORCE_FIRST_TIME_MONO_SOUND_FLAG		_IOW(AUDIO_IOC_ATV_MAGIC, 46, int)
#define AUDIO_IOC_ATV_FORCE_SOUND_SEL				_IOW(AUDIO_IOC_ATV_MAGIC, 47, bool)
#define AUDIO_IOC_ATV_NICAM_AUTO_RECOVERY_FLAG			_IOW(AUDIO_IOC_ATV_MAGIC, 48, int)
#define AUDIO_IOC_ATV_ENABLE_AUTO_CHANGE_SOUND_MODE_FLAG	_IOW(AUDIO_IOC_ATV_MAGIC, 49, int)
#define AUDIO_IOC_ATV_SET_NICAM_ERROR_RATE_THRESHOLD		_IOW(AUDIO_IOC_ATV_MAGIC, 50, ATV_SET_NICAM_ERROR_RATE_THRESHOLD_T)
#define AUDIO_IOC_ATV_SET_NICAM_ERROR_RATE_DEBOUNCE		_IOW(AUDIO_IOC_ATV_MAGIC, 51, int)
#define AUDIO_IOC_ATV_CHANGE_TV_DEVIATION_CONFIG		_IOW(AUDIO_IOC_ATV_MAGIC, 52, uint32_t)
#define AUDIO_IOC_ATV_SET_DEVIATION_METHOD			_IOW(AUDIO_IOC_ATV_MAGIC, 53, ATV_DEV_METHOD)
#define AUDIO_IOC_ATV_SET_DEV_BANDWIDTH				_IOW(AUDIO_IOC_ATV_MAGIC, 54, ATV_SET_DEV_BANDWIDTH_T)
#define AUDIO_IOC_ATV_SET_FM_OUT_DOWN_GAIN			_IOW(AUDIO_IOC_ATV_MAGIC, 55, int)
#define AUDIO_IOC_ATV_SET_AM_OUT_DOWN_GAIN			_IOW(AUDIO_IOC_ATV_MAGIC, 56, int)
#define AUDIO_IOC_ATV_SET_AM_WIDE_BW				_IOW(AUDIO_IOC_ATV_MAGIC, 57, int)
#define AUDIO_IOC_ATV_GET_NICAM_SIGNAL_STABLE			_IOR(AUDIO_IOC_ATV_MAGIC, 58, int)
#define AUDIO_IOC_ATV_CONFIG_NO_SIGNAL_NEED_TO_MUTE		_IOW(AUDIO_IOC_ATV_MAGIC, 59, uint32_t)
#define AUDIO_IOC_ATV_CHANGE_TV_SUB_RATIO			_IOW(AUDIO_IOC_ATV_MAGIC, 60, ATV_SUB_TONE_RATIO)
#define AUDIO_IOC_ATV_CHANGE_BTSC_PILOT_PHASE_DELTA		_IOW(AUDIO_IOC_ATV_MAGIC, 61, ATV_PILOT_PHASE_DELTA)
#define AUDIO_IOC_ATV_SET_FM_NORMALIZATION			_IOW(AUDIO_IOC_ATV_MAGIC, 62, uint32_t)
#define AUDIO_IOC_ATV_SET_DURING_CHANGE_STATUS_FLAG		_IOW(AUDIO_IOC_ATV_MAGIC, 63, uint8_t)
#define AUDIO_IOC_ATV_GET_DURING_CHANGE_STATUS_FLAG		_IOR(AUDIO_IOC_ATV_MAGIC, 64, uint8_t)
#define AUDIO_IOC_ATV_SET_SOUND_SYSTEM				_IOW(AUDIO_IOC_ATV_MAGIC, 65, DRV_ATV_SOUND_SYSTEM)
#define AUDIO_IOC_ATV_GET_SOUND_SYSTEM				_IOR(AUDIO_IOC_ATV_MAGIC, 66, ATV_SOUND_STD_MAIN_SYSTEM)
#define AUDIO_IOC_ATV_PATH_IS					_IOW(AUDIO_IOC_ATV_MAGIC, 67, ATV_PATH_PB_TS)
#define AUDIO_IOC_ATV_FORCE_NOT_MUTE				_IOW(AUDIO_IOC_ATV_MAGIC, 68, ATVFORCENOTMUTE_PB_TS)
#define AUDIO_IOC_ATV_HWP_SET_SIF_DATA_SOURCE			_IOW(AUDIO_IOC_ATV_MAGIC, 69, SIF_INPUT_SOURCE)
#define AUDIO_IOC_ATV_HWP_SIF_SET_IFD_BAND			_IOW(AUDIO_IOC_ATV_MAGIC, 70, ATV_HWP_SIF_SET_IFD_BAND_T)
#define AUDIO_IOC_ATV_HWP_SIF_SET_A2_STEREO_DUAL_TH		_IOW(AUDIO_IOC_ATV_MAGIC, 71, uint32_t)
#define AUDIO_IOC_ATV_HWP_SIF_GET_A2_STEREO_DUAL_TH		_IOWR(AUDIO_IOC_ATV_MAGIC, 72, uint32_t)
#define AUDIO_IOC_ATV_HWP_SIF_SET_NICAM_TH			_IOW(AUDIO_IOC_ATV_MAGIC, 73, ATV_HWP_SIF_SET_NICAM_TH_T)
#define AUDIO_IOC_ATV_HWP_SIF_GET_NICAM_TH			_IOWR(AUDIO_IOC_ATV_MAGIC, 74, ATV_HWP_SIF_GET_NICAM_TH_T)
#define AUDIO_IOC_ATV_HWP_SIF_GET_MAIN_TONE_MAG			_IOWR(AUDIO_IOC_ATV_MAGIC, 75, ATV_HWP_SIF_GET_MAIN_TONE_MAG_T)
#define AUDIO_IOC_ATV_HWP_SIF_GET_MAIN_TONE_SNR			_IOWR(AUDIO_IOC_ATV_MAGIC, 76, ATV_HWP_SIF_GET_MAIN_TONE_SNR_T)
#define AUDIO_IOC_ATV_HWP_SIF_GET_A2DK_SUB_TONE_MAG		_IOWR(AUDIO_IOC_ATV_MAGIC, 77, ATV_HWP_SIF_GET_A2DK_SUB_TONE_MAG_T)
#define AUDIO_IOC_ATV_HWP_SIF_CHECK_NICAM_DIGITAL		_IOWR(AUDIO_IOC_ATV_MAGIC, 78, int)
#define AUDIO_IOC_ATV_HWP_SIF_DETECTED_SOUND_SYSTEM		_IOWR(AUDIO_IOC_ATV_MAGIC, 79, ATV_SOUND_STD_MAIN_SYSTEM)
#define AUDIO_IOC_ATV_HWP_SIF_DETECTED_SOUND_STANDARD		_IOWR(AUDIO_IOC_ATV_MAGIC, 80, ATV_SOUND_STD)
#define AUDIO_IOC_ATV_HWP_SIF_ENABLE_MUTE_PB			_IOW(AUDIO_IOC_ATV_MAGIC, 81, bool)
#define AUDIO_IOC_ATV_HWP_SIF_ENABLE_MUTE_TS			_IOW(AUDIO_IOC_ATV_MAGIC, 82, bool)
#define AUDIO_IOC_ATV_GET_CURRENT_DETECT_UPDATE			_IOWR(AUDIO_IOC_ATV_MAGIC, 83, int)
#define AUDIO_IOC_ATV_HWP_SET_ATV_AUDIO_BAND			_IOW(AUDIO_IOC_ATV_MAGIC, 84, ATV_HWP_SET_ATV_AUDIO_BAND_T)
#define AUDIO_IOC_ATV_HWP_SIF_GET_SOURCE			_IOWR(AUDIO_IOC_ATV_MAGIC, 85, SIF_INPUT_SOURCE)
#define AUDIO_IOC_ATV_HWP_SIF_GET_DEV_BANDWIDTH			_IOWR(AUDIO_IOC_ATV_MAGIC, 86, A2_BW_SEL_T)
#define AUDIO_IOC_ATV_HWP_SIF_GET_BAND_SETUP			_IOWR(AUDIO_IOC_ATV_MAGIC, 87, uint32_t)
#define AUDIO_IOC_ATV_HWP_SIF_GET_MODE_SETUP			_IOWR(AUDIO_IOC_ATV_MAGIC, 88, ATV_SOUND_STD)
#define AUDIO_IOC_ATV_HW_SET_APVR_ENABLE_FLAG			_IOW(AUDIO_IOC_ATV_MAGIC, 89, uint8_t)
#define AUDIO_IOC_ATV_HWP_SET_CHANNEL_CHANGE			_IO(AUDIO_IOC_ATV_MAGIC, 90)
#define AUDIO_IOC_ATV_HWP_SET_BAND_DELAY			_IO(AUDIO_IOC_ATV_MAGIC, 91)
#define AUDIO_IOC_ATV_HWP_CUR_SIF_TYPE				_IOW(AUDIO_IOC_ATV_MAGIC, 92, ATV_AUDIO_SIF_TYPE_T)
#define AUDIO_IOC_ATV_SET_DEV_ON_OFF				_IOW(AUDIO_IOC_ATV_MAGIC, 93, bool)
#define AUDIO_IOC_ATV_HWP_SET_DECODER_INPUT_MUTE		_IOW(AUDIO_IOC_ATV_MAGIC, 94, bool)
#define AUDIO_IOC_ATV_HWP_SET_VOLUME_SIF			_IOW(AUDIO_IOC_ATV_MAGIC, 95, int32_t)
#define AUDIO_IOC_ATV_HWP_SIF_EQ_COEF				_IOWR(AUDIO_IOC_ATV_MAGIC, 96, ATV_SIF_EQ_48K_CFG)
#define AUDIO_IOC_ATV_HWP_SIF_RETURN_SOUND_STANDARD		_IOWR(AUDIO_IOC_ATV_MAGIC, 97, int)
#define AUDIO_IOC_ATV_SIF_SET_BAND_SETUP			_IOW(AUDIO_IOC_ATV_MAGIC, 98, ATV_SIF_SET_BAND_SETUP_T)
#define AUDIO_IOC_ATV_PAUSE_TV_STD_DETECTION			_IOW(AUDIO_IOC_ATV_MAGIC, 99, bool)
#define AUDIO_IOC_ATV_GET_MODE_MUTE				_IOR(AUDIO_IOC_ATV_MAGIC, 100, int)
#define AUDIO_IOC_ATV_SET_INTERNAL_DECODER_0_FAIL		_IOW(AUDIO_IOC_ATV_MAGIC, 101, int)
#define AUDIO_IOC_ATV_SET_INTERNAL_DECODER_1_FAIL		_IOW(AUDIO_IOC_ATV_MAGIC, 102, int)
#define AUDIO_IOC_ATV_REG_MUTE_CALLBACK				_IOW(AUDIO_IOC_ATV_MAGIC, 103, ATV_REG_MUTE_CALLBACK_T)
#define AUDIO_IOC_ATV_SET_AUDIO_HW_CONFIG			_IOW(AUDIO_IOC_ATV_MAGIC, 104, int32_t)
#define AUDIO_IOC_ATV_STATUS_CHANGE_CALLBACK_FN_CONFIG		_IOW(AUDIO_IOC_ATV_MAGIC, 105, FP_AUDIOSTATUSCHANGE)
#define AUDIO_IOC_ATV_SET_AUDIO_BP				_IOW(AUDIO_IOC_ATV_MAGIC, 106, ATV_AUDIO_BP_SEL)
#define AUDIO_IOC_ATV_SET_FM_RADIO_MODE			_IOW(AUDIO_IOC_ATV_MAGIC, 107, AUDIO_ATV_FM_RADIO_MODE)
#define AUDIO_IOC_ATV_VERIFY_SET_PATH				_IO(AUDIO_IOC_ATV_MAGIC, 108)
#define AUDIO_IOC_ATV_SET_SCAN_STD_FLAG				_IOW(AUDIO_IOC_ATV_MAGIC, 109, bool)
#define AUDIO_IOC_ATV_SET_STD_FW_PRIORITY		_IOW(AUDIO_IOC_ATV_MAGIC, 110, uint16_t)
/* if add any new ioc cmd here, don't forget to increase the AUDIO_IOC_ATV_MAXNR number */

/* 
 * audio ATV command max number
 */
#define AUDIO_IOC_ATV_MAXNR					111

/*
 * audio ATV command parameter structures
 */
typedef struct {
	ATV_SOUND_STD_MAIN_SYSTEM main_system;
	ATV_SOUND_STD sound_std;
} ATV_SET_SOUND_STD_T;

typedef struct {
	ATV_PLAY_CH_SEL l_sel;
	ATV_PLAY_CH_SEL r_sel;
} ATV_SET_PLAY_CHANNEL_T;

typedef struct {
	int32_t comp_mono;
	int32_t comp_stereo;
	int32_t comp_sap;
} ATV_SET_BTSC_MTS_VOLUME_T;

typedef struct {
	ATV_SOUND_STD sound_std;
	uint32_t flag;
} ATV_SCAN_SOUND_STD_T;

typedef struct {
	ATV_SOUND_STD sound_std;
	ATV_Carrier_INFO carrier_info;
} ATV_SCAN_SOUND_STD_FMRADIO_T;

typedef struct {
	int32_t status;
	int32_t energy;
} ATV_GET_MN_STATUS_T;

typedef struct {
	int32_t para;
	uint32_t ch_id;
} ATV_SET_HW_MUTE_T;

typedef struct {
	int sound_change_max;
	int sound_change_min;
} ATV_SET_BTSC_SOUND_CHANGE_DEBOUNCE_T;

typedef struct {
	uint32_t play_stereo;
	uint32_t play_sap;
} ATV_SET_BTSC_SOUND_SELECT_T;

typedef struct {
	uint32_t nicam_digital;
	uint32_t dual_lang_index;
} ATV_SET_NICAM_SOUND_SELECT_T;

typedef struct {
	uint32_t play_stereo;
	uint32_t dual_lang_index;
} ATV_SET_A2_SOUND_SELECT_T;

typedef struct {
	uint32_t mask;
	uint32_t new_setting;
} ATV_SET_TV_FLAG_T;

typedef struct {
	int upper_bound;
	int low_bound;
} ATV_SET_NICAM_ERROR_RATE_THRESHOLD_T;

typedef struct {
	A2_BW_SEL_T bw_sel;
	A2_BW_SEL_T sub_bw_sel;
} ATV_SET_DEV_BANDWIDTH_T;

typedef struct {
	ATV_SOUND_STD sound_std;
	ATV_SOUND_STD_MAIN_SYSTEM main_system;
} ATV_HWP_SIF_SET_IFD_BAND_T;

typedef struct {
	uint8_t hi_th;
	uint8_t lo_th;
} ATV_HWP_SIF_SET_NICAM_TH_T;

typedef struct {
	uint8_t hi_th;
	uint8_t lo_th;
} ATV_HWP_SIF_GET_NICAM_TH_T;

typedef struct {
	ATV_SOUND_STD_MAIN_SYSTEM main_sys;
	int32_t pToneMag;
} ATV_HWP_SIF_GET_MAIN_TONE_MAG_T;

typedef struct {
	ATV_SOUND_STD_MAIN_SYSTEM main_sys;
	ATV_SOUND_STD_MAIN_SYSTEM hw_detected_main_sys;
	ATV_SOUND_STD hw_detected_sound_std;
	uint32_t pToneSNR;
} ATV_HWP_SIF_GET_MAIN_TONE_SNR_T;

typedef struct {
	ATV_SOUND_STD sound_std;
	int32_t pToneMag;
} ATV_HWP_SIF_GET_A2DK_SUB_TONE_MAG_T;

typedef struct {
	SIF_INPUT_SOURCE sif_source;
	ATV_SOUND_STD_MAIN_SYSTEM atv_main_system;
} ATV_HWP_SET_ATV_AUDIO_BAND_T;

typedef struct {
	ATV_AUDIO_SIF_TYPE_T eSifType;
	ATV_SOUND_STD_MAIN_SYSTEM sifBand;
} ATV_SIF_SET_BAND_SETUP_T;

typedef struct {
	int decindex;
	pfnMuteHandling  pfnCallBack;
} ATV_REG_MUTE_CALLBACK_T;

/*
 * audio APP commands
 */
#define AUDIO_IOC_APP_MAGIC					'p'
#define AUDIO_IOC_APP_HWP_SET_BALANCE_LR			_IOW(AUDIO_IOC_APP_MAGIC, 0, int32_t)
#define AUDIO_IOC_APP_HWP_SET_BALANCE_TS			_IOW(AUDIO_IOC_APP_MAGIC, 1, int32_t)
#define AUDIO_IOC_APP_HWP_PRESCALE				_IOW(AUDIO_IOC_APP_MAGIC, 2, APP_HWP_PRESCALE_T)
#define AUDIO_IOC_APP_HWP_SET_VOLUME				_IOW(AUDIO_IOC_APP_MAGIC, 3, APP_HWP_SET_VOLUME_T)
#define AUDIO_IOC_APP_HWP_SET_VOLUME_COMPENSATION		_IOW(AUDIO_IOC_APP_MAGIC, 4, APP_HWP_SET_VOLUME_COMPENSATION_T)
#define AUDIO_IOC_APP_HWP_SET_VOLUME_TS				_IOW(AUDIO_IOC_APP_MAGIC, 5, APP_HWP_SET_VOLUME_TS_T)
#define AUDIO_IOC_APP_HWP_SET_MUTE				_IOW(AUDIO_IOC_APP_MAGIC, 6, APP_HWP_SET_MUTE_T)
#define AUDIO_IOC_APP_GET_MUTE_ID_PB				_IOR(AUDIO_IOC_APP_MAGIC, 7, int32_t)
#define AUDIO_IOC_APP_HWP_SET_MUTE_TS				_IOW(AUDIO_IOC_APP_MAGIC, 8, APP_HWP_SET_MUTE_TS_T)
#define AUDIO_IOC_APP_GET_MUTE_ID_TS				_IOR(AUDIO_IOC_APP_MAGIC, 9, int32_t)
#define AUDIO_IOC_APP_HWP_GET_MUTE_STATUS			_IOWR(AUDIO_IOC_APP_MAGIC, 10, APP_HWP_GET_MUTE_STATUS_T)
#define AUDIO_IOC_APP_HWP_GET_MUTE_STATUS_TS			_IOWR(AUDIO_IOC_APP_MAGIC, 11, APP_HWP_GET_MUTE_STATUS_TS_T)
#define AUDIO_IOC_APP_HWP_CFG_VOLUME				_IOWR(AUDIO_IOC_APP_MAGIC, 12, APP_DVOL_CFG)
#define AUDIO_IOC_APP_HWP_CFG_VOLUME_TS				_IOWR(AUDIO_IOC_APP_MAGIC, 13, APP_DVOL_CFG)
#define AUDIO_IOC_APP_HWP_CFG_MUTE				_IOWR(AUDIO_IOC_APP_MAGIC, 14, APP_MUTE_CFG)
#define AUDIO_IOC_APP_HWP_CFG_MUTE_TS				_IOWR(AUDIO_IOC_APP_MAGIC, 15, APP_MUTE_CFG)
#define AUDIO_IOC_APP_HWP_SET_MUTE_INTERNAL			_IOW(AUDIO_IOC_APP_MAGIC, 16, APP_HWP_SET_MUTE_INTERNAL_T)
#define AUDIO_IOC_APP_HWP_SET_MUTE_INTERNAL_TS			_IOW(AUDIO_IOC_APP_MAGIC, 17, APP_HWP_SET_MUTE_INTERNAL_TS_T)
#define AUDIO_IOC_APP_HWP_CALIBRATE_ADDA			_IO(AUDIO_IOC_APP_MAGIC, 18)
#define AUDIO_IOC_APP_HWP_SET_AVC				_IOWR(AUDIO_IOC_APP_MAGIC, 19, APP_HWP_APP_HWP_SET_AVC_T)
#define AUDIO_IOC_APP_HWP_SET_AVC2				_IOWR(AUDIO_IOC_APP_MAGIC, 20, APP_HWP_APP_HWP_SET_AVC2_T)
#define AUDIO_IOC_APP_HWP_SET_DISTORTION_CTRL			_IOWR(AUDIO_IOC_APP_MAGIC, 21, APP_HWP_SET_DISTORTION_CTRL_T)
#define AUDIO_IOC_APP_HWP_SET_BASS_VALUE			_IOWR(AUDIO_IOC_APP_MAGIC, 22, APP_HWP_SET_BASS_VALUE_T)
#define AUDIO_IOC_APP_HWP_SET_BASS_VALUE_48K			_IOWR(AUDIO_IOC_APP_MAGIC, 23, APP_HWP_SET_BASS_VALUE_48K_T)
#define AUDIO_IOC_APP_HWP_SET_TREBLE_VALUE			_IOWR(AUDIO_IOC_APP_MAGIC, 24, APP_HWP_SET_TREBLE_VALUE_T)
#define AUDIO_IOC_APP_HWP_SET_TREBLE_VALUE_48K			_IOWR(AUDIO_IOC_APP_MAGIC, 25, APP_HWP_SET_TREBLE_VALUE_48K_T)
#define AUDIO_IOC_APP_HWP_SET_TREBLE2_VALUE			_IOWR(AUDIO_IOC_APP_MAGIC, 26, APP_HWP_SET_TREBLE2_VALUE_T)
#define AUDIO_IOC_APP_HWP_SET_TREBLE2_VALUE_48K			_IOWR(AUDIO_IOC_APP_MAGIC, 27, APP_HWP_SET_TREBLE2_VALUE_48K_T)
#define AUDIO_IOC_APP_HWP_SET_TREBLE_COEF			_IOWR(AUDIO_IOC_APP_MAGIC, 28, APP_TREBLE_CFG)
#define AUDIO_IOC_APP_HWP_SET_TREBLE_COEF_48K			_IOWR(AUDIO_IOC_APP_MAGIC, 29, APP_TREBLE_48K_CFG)
#define AUDIO_IOC_APP_HWP_SET_TREBLE2_COEF			_IOWR(AUDIO_IOC_APP_MAGIC, 30, APP_TREBLE_CFG)
#define AUDIO_IOC_APP_HWP_SET_TREBLE2_COEF_48K			_IOWR(AUDIO_IOC_APP_MAGIC, 31, APP_TREBLE_48K_CFG)
#define AUDIO_IOC_APP_HWP_SET_BASS_COEF				_IOWR(AUDIO_IOC_APP_MAGIC, 32, APP_BASS_CFG)
#define AUDIO_IOC_APP_HWP_SET_BASS_COEF_48K			_IOWR(AUDIO_IOC_APP_MAGIC, 33, APP_BASS_48K_CFG)
#define AUDIO_IOC_APP_HWP_SET_EQ_VALUE				_IOWR(AUDIO_IOC_APP_MAGIC, 34, APP_HWP_SET_EQ_VALUE_T)
#define AUDIO_IOC_APP_HWP_SET_EQ_VALUE_48K			_IOWR(AUDIO_IOC_APP_MAGIC, 35, APP_HWP_SET_EQ_VALUE_48K_T)
#define AUDIO_IOC_APP_HWP_SET_EQ_COEF				_IOWR(AUDIO_IOC_APP_MAGIC, 36, APP_EQ_CFG)
#define AUDIO_IOC_APP_HWP_SET_EQ_COEF_48K			_IOWR(AUDIO_IOC_APP_MAGIC, 37, APP_EQ_48K_CFG)
#define AUDIO_IOC_APP_HWP_SET_EQ_LOUD_VALUE_CHANGE_MODE		_IOW(AUDIO_IOC_APP_MAGIC, 38, APP_EQ_LOUD_VALUE_CHANGE_MODE)
#define AUDIO_IOC_APP_HWP_SET_DVC_VALUE_CHANGE_MODE		_IOW(AUDIO_IOC_APP_MAGIC, 39, APP_DVC_VALUE_CHANGE_MODE)
#define AUDIO_IOC_APP_HWP_SET_EQ_VALUE_9BAND			_IOWR(AUDIO_IOC_APP_MAGIC, 40, APP_HWP_SET_EQ_VALUE_9BAND_T)
#define AUDIO_IOC_APP_HWP_SET_EQ_COEF_9BAND			_IOWR(AUDIO_IOC_APP_MAGIC, 41, APP_9BAND_EQ_CFG)
#define AUDIO_IOC_APP_HWP_SET_SPATIAL_EFFECT			_IOWR(AUDIO_IOC_APP_MAGIC, 42, APP_HWP_SET_SPATIAL_EFFECT_T)
#define AUDIO_IOC_APP_INIT					_IO(AUDIO_IOC_APP_MAGIC, 43)
#define AUDIO_IOC_APP_DEINIT					_IO(AUDIO_IOC_APP_MAGIC, 44)
#define AUDIO_IOC_APP_GET_INFO					_IOW(AUDIO_IOC_APP_MAGIC, 45, APP_GET_INFO)
#define AUDIO_IOC_APP_ENABLE_PRINTF				_IOW(AUDIO_IOC_APP_MAGIC, 46, uint32_t)
#define AUDIO_IOC_APP_HWP_SET_LIMIT_OUTPUT			_IOW(AUDIO_IOC_APP_MAGIC, 47, APP_HWP_SET_LIMIT_OUTPUT_T)
#define AUDIO_IOC_APP_FACTORY_DISABLE_HW_PP			_IO(AUDIO_IOC_APP_MAGIC, 48)
#define AUDIO_IOC_APP_FACTORY_DISABLE_SW_PP			_IO(AUDIO_IOC_APP_MAGIC, 49)
#define AUDIO_IOC_APP_FACTORY_AVC				_IOW(AUDIO_IOC_APP_MAGIC, 50, APP_FACTORY_AVC_T)
#define AUDIO_IOC_APP_HWP_SET_SPDIF_OUT_MUTE			_IOW(AUDIO_IOC_APP_MAGIC, 51, Audio_HwpSetSpdifOut_Mute)
#define AUDIO_IOC_APP_ENABLE_COMPENSATE_AUDIO_OUTPUT		_IOW(AUDIO_IOC_APP_MAGIC, 52, APP_ENABLE_COMPENSATE_AUDIO_OUTPUT_T)
#define AUDIO_IOC_APP_HWP_SET_EQ_PARAMETER			_IOW(AUDIO_IOC_APP_MAGIC, 53, APP_HWP_SET_EQ_PARAMETER_T)
#define AUDIO_IOC_APP_HWP_SET_LOUD_PARAMETER			_IOW(AUDIO_IOC_APP_MAGIC, 54, APP_HWP_SET_LOUD_PARAMETER_T)
#define AUDIO_IOC_APP_HWP_WRITE_EQ_CONTROL_ENABLE		_IOW(AUDIO_IOC_APP_MAGIC, 55, APP_HWP_WRITE_EQ_CTRL_EN_T)
#define AUDIO_IOC_APP_HWP_WRITE_LOUD_CONTROL_ENABLE		_IOW(AUDIO_IOC_APP_MAGIC, 56, APP_HWP_WRITE_LOUD_CTRL_EN_T)
#define AUDIO_IOC_APP_HWP_READ_EQ_CONTROL_ENABLE		_IOWR(AUDIO_IOC_APP_MAGIC, 57, uint32_t)
#define AUDIO_IOC_APP_HWP_READ_LOUD_CONTROL_ENABLE		_IOWR(AUDIO_IOC_APP_MAGIC, 58, uint32_t)
#define AUDIO_IOC_APP_HWP_SET_DRC_HIGH_BAND			_IOWR(AUDIO_IOC_APP_MAGIC, 59, APP_HWP_SET_DRC_HIGH_BAND_T)
#define AUDIO_IOC_APP_HWP_SET_DRC_LOW_BAND			_IOWR(AUDIO_IOC_APP_MAGIC, 60, APP_HWP_SET_DRC_LOW_BAND_T)
#define AUDIO_IOC_APP_FACTORY_ENABLE_HW_PP			_IO(AUDIO_IOC_APP_MAGIC, 61)
#define AUDIO_IOC_APP_HWP_GET_MAX_EQ_BAND_NUM			_IOR(AUDIO_IOC_APP_MAGIC, 62, int32_t)
#define AUDIO_IOC_APP_HWP_SET_BALANCE				_IOW(AUDIO_IOC_APP_MAGIC, 63, APP_HWP_SET_BALANCE_T)
/* if add any new ioc cmd here, don't forget to increase the AUDIO_IOC_APP_MAXNR number */

/* 
 * audio APP command max number
 */
#define AUDIO_IOC_APP_MAXNR					64

/*
 * audio APP command parameter structures
 */
typedef struct {
	int vol;
	int ch_id;
} APP_HWP_PRESCALE_T;

typedef struct {
	uint32_t ch_id;
	int32_t vol;
} APP_HWP_SET_VOLUME_T;

typedef struct {
	uint32_t ch_id;
	int32_t vol;
	uint32_t comp_id;
} APP_HWP_SET_VOLUME_COMPENSATION_T;

typedef struct {
	uint32_t ch_id;
	int32_t vol;
} APP_HWP_SET_VOLUME_TS_T;

typedef struct {
	bool para;
	uint32_t ch_id;
	uint32_t mute_id;
} APP_HWP_SET_MUTE_T;

typedef struct {
	bool para;
	uint32_t ch_id;
	uint32_t mute_id;
} APP_HWP_SET_MUTE_TS_T;

typedef struct {
	uint32_t ch_id;
	uint32_t p_status;
} APP_HWP_GET_MUTE_STATUS_T;

typedef struct {
	uint32_t ch_id;
	uint32_t p_status;
} APP_HWP_GET_MUTE_STATUS_TS_T;

typedef struct {
	bool para;
	uint32_t ch_id;
	uint32_t mute_id;
} APP_HWP_SET_MUTE_INTERNAL_T;

typedef struct {
	bool para;
	uint32_t ch_id;
	uint32_t mute_id;
} APP_HWP_SET_MUTE_INTERNAL_TS_T;

typedef struct {
	bool para;
	APP_AVC_CFG p_cfg_avc;
} APP_HWP_APP_HWP_SET_AVC_T;

typedef struct {
	bool para;
	APP_AVC2_CFG p_cfg_avc2;
} APP_HWP_APP_HWP_SET_AVC2_T;

typedef struct {
	bool para;
	APP_DIST_CTRL_CFG p_cfg_dist;
} APP_HWP_SET_DISTORTION_CTRL_T;

typedef struct {
	bool para;
	APP_BASS_VAL p_val_bass;
} APP_HWP_SET_BASS_VALUE_T;

typedef struct {
	bool para;
	APP_BASS_VAL p_val_bass_48k;
} APP_HWP_SET_BASS_VALUE_48K_T;

typedef struct {
	bool para;
	APP_TREBLE_VAL p_val_treble;
} APP_HWP_SET_TREBLE_VALUE_T;

typedef struct {
	bool para;
	APP_TREBLE_VAL p_val_treble_48k;
} APP_HWP_SET_TREBLE_VALUE_48K_T;

typedef struct {
	bool para;
	APP_TREBLE_VAL p_val_treble2;
} APP_HWP_SET_TREBLE2_VALUE_T;

typedef struct {
	bool para;
	APP_TREBLE_VAL p_val_treble2_48k;
} APP_HWP_SET_TREBLE2_VALUE_48K_T;

typedef struct {
	bool para;
	APP_EQ_VAL p_val_eq;
} APP_HWP_SET_EQ_VALUE_T;

typedef struct {
	uint32_t band_enable;
	APP_EQ_VAL p_val_eq_48k;
} APP_HWP_SET_EQ_VALUE_48K_T;

typedef struct {
	bool para;
	APP_9BAND_EQ_VAL p_val_eq_9band;
} APP_HWP_SET_EQ_VALUE_9BAND_T;

typedef struct {
	bool para;
	APP_SE_CFG p_cfg_se;
} APP_HWP_SET_SPATIAL_EFFECT_T;

typedef struct {
	bool para;
	uint32_t maxLevelThresdhold;
} APP_HWP_SET_LIMIT_OUTPUT_T;

typedef struct {
	bool enable;
	uint32_t value;
} APP_FACTORY_AVC_T;

typedef struct {
	bool para;
	uint32_t mute_id;
} APP_HWP_SET_SPDIF_OUT_MUTE_T;

typedef struct {
	uint32_t enable;
	APP_AUDIO_PATH path;
} APP_ENABLE_COMPENSATE_AUDIO_OUTPUT_T;

typedef struct {
	bool para;
	APP_DRC_CFG p_cfg_drc;
} APP_HWP_SET_DRC_HIGH_BAND_T;

typedef struct {
	bool para;
	APP_DRC_LPF_CFG p_cfg_drc_lpf;
} APP_HWP_SET_DRC_LOW_BAND_T;

typedef struct {
	APP_EQ_ALL_BAND band_id;
	APP_EQ_COEF eq_coef;
} APP_HWP_SET_EQ_PARAMETER_T;

typedef struct {
	APP_LOUD_ALL_BAND band_id;
	APP_EQ_COEF loud_coef;
} APP_HWP_SET_LOUD_PARAMETER_T;

typedef struct {
	APP_EQ_ALL_BAND band_id;
	bool enable;
} APP_HWP_WRITE_EQ_CTRL_EN_T;

typedef struct {
	APP_LOUD_ALL_BAND band_id;
	bool enable;
} APP_HWP_WRITE_LOUD_CTRL_EN_T;



typedef struct {
	int32_t Balance;
	APP_BALANCE_CH_ID Channel;
} APP_HWP_SET_BALANCE_T;

/*
 * audio AIO commands
 */
#define AUDIO_IOC_AIO_MAGIC					'o'
#define AUDIO_IOC_AIO_GET_PATH_SRC				_IOWR(AUDIO_IOC_AIO_MAGIC, 0, AIO_PATH_CFG)
#define AUDIO_IOC_AIO_INIT					_IOWR(AUDIO_IOC_AIO_MAGIC, 1, ATV_CFG)
#define AUDIO_IOC_AIO_DEINIT					_IO(AUDIO_IOC_AIO_MAGIC, 2)
#define AUDIO_IOC_AIO_MUTE_SPDIF				_IOW(AUDIO_IOC_AIO_MAGIC, 3, bool)
#define AUDIO_IOC_AIO_HW_AQ_INIT				_IOWR(AUDIO_IOC_AIO_MAGIC, 4, ATV_CFG)
#define AUDIO_IOC_AIO_HW_AQ_DEINIT				_IO(AUDIO_IOC_AIO_MAGIC, 5)
#define AUDIO_IOC_AIO_SET_OPT_SRC_SPDIF				_IOW(AUDIO_IOC_AIO_MAGIC, 6, AIO_SPDIFO_SRC)
#define AUDIO_IOC_AIO_CFG_OPT_SRC_HEADPHONE				_IOW(AUDIO_IOC_AIO_MAGIC, 7, AIO_HEADPHONE_CFG)
#define AUDIO_IOC_AIO_SET_MUTE				_IOW(AUDIO_IOC_AIO_MAGIC, 8, AIO_SET_MUTE_T)
#define AUDIO_IOC_AIO_DIO_SET_OPT_CHANNEL_ALL				_IOW(AUDIO_IOC_AIO_MAGIC, 9, DIO_OPT_CHANNEL)
#define AUDIO_IOC_AIO_SET_OPT_SRC_I2S				_IOW(AUDIO_IOC_AIO_MAGIC, 10, AIO_I2SO_SRC)
#define AUDIO_IOC_AIO_EARC_INIT						_IO(AUDIO_IOC_AIO_MAGIC, 11)
#define AUDIO_IOC_AIO_EARC_DEINIT						_IO(AUDIO_IOC_AIO_MAGIC, 12)
#define AUDIO_IOC_AIO_EARC_GET_CONNECT_STATE		_IOR(AUDIO_IOC_AIO_MAGIC, 13, AIO_EARC_STATE_T)
#define AUDIO_IOC_AIO_EARC_GET_RX_STATUS			_IOR(AUDIO_IOC_AIO_MAGIC, 14, AIO_AUDIO_EARC_RX_STATUS_T)
#define AUDIO_IOC_AIO_EARC_READ_TRANSACTION		_IOWR(AUDIO_IOC_AIO_MAGIC, 15, AIO_AUDIO_EARC_CMDC_READ_T)
#define AUDIO_IOC_AIO_EARC_WRITE_LATENCY			_IOW(AUDIO_IOC_AIO_MAGIC, 16, uint8_t)
#define AUDIO_IOC_AIO_EARC_ARC_SWITCH					_IOW(AUDIO_IOC_AIO_MAGIC, 17, AIO_AUDIO_EARC_ARC_SWITCH_T)
#define AUDIO_IOC_AIO_AQ_LOOPBACK_VERIFY					_IOW(AUDIO_IOC_AIO_MAGIC, 18, AIO_HWP_SET_DMA_T)
/* if add any new ioc cmd here, don't forget to increase the AUDIO_IOC_APP_MAXNR number */

/* 
 * audio AIO command max nr
 */
#define AUDIO_IOC_AIO_MAXNR					19

/*
 * audio AIO command parameter structures
 */
typedef struct {
	ATV_CFG p_atv_cfg;
} AIO_INIT_T;

typedef struct {
	int32_t para;
	uint32_t ch_id;
	AIO_AMPMUTE_ID mute_by_who;
} AIO_SET_MUTE_T;

/* 
 * NOTICE: kernel space routines. Should not be exported to the user space api
 */
#ifdef __KERNEL__

struct file;

long audio_hw_ioctl(struct file *filp, unsigned int cmd, unsigned long arg);

#endif /* __KERNEL__ */

#endif
