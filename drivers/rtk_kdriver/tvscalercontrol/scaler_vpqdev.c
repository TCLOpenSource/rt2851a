/*Kernel Header file*/
#include <linux/kernel.h>
#include <linux/delay.h>
#include <linux/device.h>
#include <linux/module.h>
#include <linux/fs.h>		/* everything... */
#include <linux/cdev.h>
#include <linux/platform_device.h>

#include <linux/init.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/uaccess.h>
#include <linux/pageremap.h>
#include <linux/kthread.h>
#include <linux/freezer.h>
#include <linux/hrtimer.h>
#include <linux/vmalloc.h>

#ifdef CONFIG_ARM64
#include <asm/io.h>
#endif

/*RBUS Header file*/
#include <scaler/scalerCommon.h>

/*TVScaler Header file*/
#include "tvscalercontrol/io/ioregdrv.h"
#include <tvscalercontrol/scaler/scalercolorlib.h>
#include <tvscalercontrol/vip/scalerColor.h>
#include <tvscalercontrol/vip/scalerColor_tv006.h>
#include <tvscalercontrol/vip/viptable.h>
#include <tvscalercontrol/scaler_vpqmemcdev.h>
#include "scaler_vpqdev.h"
#include "scaler_vscdev.h"
#include "ioctrl/vpq/vpq_cmd_id.h"
#include <tvscalercontrol/vip/pq_rpc.h>
//#include <mach/RPCDriver.h>
#include <rbus/sys_reg_reg.h>
#include <rbus/pll27x_reg_reg.h>
#include <tvscalercontrol/vip/vip_reg_def.h>
#include <tvscalercontrol/vip/gibi_od.h>
#include <tvscalercontrol/vip/pcid.h>
#include <tvscalercontrol/vip/ultrazoom.h>
#include <tvscalercontrol/scalerdrv/scalermemory.h>
#include <tvscalercontrol/scalerdrv/scalerip.h>
#include <tvscalercontrol/scalerdrv/scalerdisplay.h>
#include <mach/rtk_log.h>
#include <tvscalercontrol/panel/panelapi.h>
//#include <tvscalercontrol/vo/rtk_vo.h>
#include "vgip_isr/scalerAI.h"
#include "vgip_isr/scalerVIP.h"
#include <rtk_ai.h>
#include <rtk_kdriver/rtk_semaphore.h>
#include <tvscalercontrol/scaler/scalercolorlib_tv001.h>
#include <tvscalercontrol/scaler_vpqdev_extern.h>


#define TAG_NAME "VPQ"

static dev_t vpq_devno;/*vpq device number*/
static struct cdev vpq_cdev;

static struct semaphore VPQ_Semaphore;
struct semaphore VPQ_DM_DMA_TBL_Semaphore;
//struct semaphore VPQ_DM_3DLUT_Semaphore;
extern struct semaphore Gamma_Semaphore;
extern int D_3DLUT_Reseult[VIP_D_3D_LUT_SIZE][VIP_8VERTEX_RGB_MAX];
extern int D_3DLUT[VIP_D_3D_LUT_SIZE][VIP_8VERTEX_RGB_MAX];
extern HAL_VPQ_Panel_Dither_T Panel_Dither_Info;

#define CSOT_LMMH_W_Size_481 481
#define CSOT_DEMURA_TABLE_ADDR_START  0x000042
#define CSOT_43D01_DEMURA_TABLE_PLANE1_ADDR_START  0x000024
#define CSOT_43D01_DEMURA_TABLE_PLANE2_ADDR_START  0x0000334
#define CSOT_43D01_DEMURA_TABLE_PLANE3_ADDR_START  0x0000644
#define CSOT_43D01_DEMURA_PLANE_LINE_OFFSET  0x000930

//for MONO demura
#define CSOT_MONO_DEMURA_TABLE_PLANE1_ADDR_START  0x0000110
#define CSOT_MONO_DEMURA_TABLE_PLANE2_ADDR_START  0x0000420
#define CSOT_MONO_DEMURA_TABLE_PLANE3_ADDR_START  0x0000730
#define CSOT_MONO_DEMURA_PLANE_LINE_OFFSET  0x000930


#define demura_mac6_pos_clip			31
#define demura_mac6_neg_clip			(-32)

unsigned char *CSOT_Demura_TBL = NULL;
unsigned char *AUO_Demura_TBL = NULL;

unsigned char *MONO_Demura_TBL = NULL;

#define ABS_VLAUE(X) (X>0?X:(-X))

#if 1
/* for demura hal function */
#define DeMura_tv006FMT_to_tv001FMT(arg) ((arg>127)?((128-arg)):(arg))
#define Demura_LMMH_R_SD_check_BIT  0x1
#define Demura_LMMH_G_SD_check_BIT  0x2
#define Demura_LMMH_B_SD_check_BIT  0x4
#define Demura_LMMH_W_SD_check_BIT  0x8
#define Demura_LMMH_W_Size (481)
#define Demura_LMMH_H_Size (271)
#define Demura_LMMH_1Lv_Size (Demura_LMMH_W_Size * Demura_LMMH_H_Size)
#define Demura_LMMH_1ch_Size (Demura_LMMH_1Lv_Size * 4)
#define Demura_LMMH_4ch_Size (Demura_LMMH_1ch_Size *4)
#define Demura_LMMH_TBL_Size (Demura_LMMH_4ch_Size + 8)
#define Demura_LMMH_4ch_R_sta  (4+0*Demura_LMMH_1ch_Size)
#define Demura_LMMH_4ch_G_sta  (4+1*Demura_LMMH_1ch_Size)
#define Demura_LMMH_4ch_B_sta  (4+2*Demura_LMMH_1ch_Size)
#define Demura_LMMH_4ch_W_sta  (4+3*Demura_LMMH_1ch_Size)
#define Demura_LMMH_4ch_CRC_sta  (4+4*Demura_LMMH_1ch_Size)
#define Demura_LMMH_4ch_WL_sta  Demura_LMMH_4ch_W_sta
#define Demura_LMMH_4ch_WM1_sta  (Demura_LMMH_4ch_W_sta + Demura_LMMH_1Lv_Size)
#define Demura_LMMH_4ch_WM2_sta  (Demura_LMMH_4ch_W_sta + Demura_LMMH_1Lv_Size*2)
#define Demura_LMMH_4ch_WH_sta  (Demura_LMMH_4ch_W_sta + Demura_LMMH_1Lv_Size*3)

#define deMura_7blk_Block 63

#define CSOT_Demura_Convert_SignedData(demura12bit) ((demura12bit>=2048)?(demura12bit-4096):demura12bit)

unsigned char deMura_7Blk_Decode_TBL[deMura_7blk_Block] = {
   /*R_L,  R_M,  R_H,  G_L,  G_M,  G_H,  B_L,  B_M,  B_H,  */
     0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,    /* block 0*/
     0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,    /* block 1*/
     0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,    /* block 2*/
     0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,    /* block 3*/
     0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,    /* block 4*/
     0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,    /* block 5*/
     0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,    /* block 6*/
};
#if 0	/* "Demura_LMMH_4ch_TBL" is too large, use dynamic allocate */
unsigned char Demura_LMMH_4ch_TBL[Demura_LMMH_TBL_Size];
#else
unsigned char *Demura_LMMH_4ch_TBL = NULL;
#endif
extern VIP_DeMura_TBL DeMura_TBL;
#endif

#if 1
/*========================= for INNX demura =================================*/
#if 0	/* use dynamic alloc*/
extern char INNX_Demura_DeLut1[INNX_Demura_h_271][INNX_Demura_W16];
extern char INNX_Demura_DeLut2[INNX_Demura_h_271][INNX_Demura_W16];
extern char INNX_Demura_DeLut3[INNX_Demura_h_271][INNX_Demura_W16];
extern char INNX_Demura_DeLut4[INNX_Demura_h_271][INNX_Demura_W16];
extern char INNX_Demura_DeLut5[INNX_Demura_h_271][INNX_Demura_W16];
#else
char *pINNX_Demura_DeLut;
#endif
unsigned char *INNX_Demura_TBL = NULL;
extern unsigned int INNX_Demura_gray_setting[7];
/*========================= for INNX demura =================================*/
#endif
/*========================= for Himax demura =================================*/
unsigned char *Himax_Demura_TBL = NULL;

#define Himax_DEMURA_TABLE_ADDR_START  0x000200
#define Himax_DEMURA_TABLE_ADDLine  726

#define CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START 0x00200
#define CSOT_Himax_DEMURA_TABLE_PLANE1_ADDR_START 0x3028A
#define CSOT_Himax_DEMURA_TABLE_PLANE2_ADDR_START 0x60314
#define Himax_Demura_LMMH_W_Size (484)

#if 1
/*========================= for AUO demura Checksum =================================*/
#define AUO_Demura_FLASH_SIZE 				456608      //456590+18 for checksum
#define	AUO_Demura_FLASH_ADDR 				0x00010000
#define	AUO_Demura_FLASH_END  				0x0007F78E
#define	AUO_Demura_W						481
#define	AUO_Low_addr_str						0
#define	AUO_Mid_addr_str						130351
#define	AUO_Hig_addr_str						260702

#define AUO_Demura_PARA_Checksum_ADDR   	0x00000000
#define AUO_Demura_PARA_Checksum_END		0x00000001
#define AUO_Demura_PARA_ADDR				0x00000002
#define AUO_Demura_PARA_END					0x0000009E	//158

#define AUO_Demura_LUT_Checksum_ADDR		0x00010000	//65536
#define AUO_Demura_LUT_Checksum_END			0x00010001	//65537
#define AUO_Demura_LUT_ADDR					0x00010002	//65538
#define AUO_Demura_LUT_END					0x0006F78E  //456590

#define AUO_Demura_LUT_SIZE					391053
#define AUO_Demura_LUT_Checksum_SIZE		391072		// (391052+20)/32=12221
unsigned char *AUO_Demura_TBL_ALL = NULL;
unsigned char* AUO_Demura_para = NULL;
short** tbl_dec;
short** tbl_raw;
#if 1
/*========================= for auo demura =================================*/
#define AUO_Demura_Para_Size 0xA0
#define AUO_Demura_Para_addr 0x00
#define AUO_Demura_TBL_addr_size 391053 //271*481*3
#define AUO_Demura_TBL_addr 0x10000	// the different is 0x10000 between para tbl and tbl
#define VIP_Demura_Adaptive_Scale_LV_NUM 10
#define VIP_Demura_Encode_TBL_ROW 271/*136*/
#define VIP_Demura_Encode_TBL_COL 3312/*1680*/
#define VIP_DemuraTBL_LineSize_RGB_481x271 3312
#define VIP_DemuraTBL_LineSize_Y_481x271 1104
#define VIP_DemuraTBL_LineSize_RGB_241x136 1680
#define VIP_DemuraTBL_LineSize_Y_241x136 560

typedef struct _DMC_Parameter_TBL {
	unsigned char RGB_MODE;
	unsigned char DMC_BLOCK_SIZE;
	unsigned char DMC_PLANE_NUM;
	unsigned char DMC_H_BLOCK;
	unsigned char DMC_V_BLOCK;
	unsigned short DMC_H_LUT_NUM;
	unsigned short DMC_V_LUT_NUM;
	unsigned short DMC_BLACK_LIMIT;
	unsigned short DMC_PLANE_LEVEL[8];
	unsigned short DMC_WHITE_LIMIT;
	unsigned char DMC_DATA_R_MAG[8];
	unsigned char DMC_DATA_G_MAG[8];
	unsigned char DMC_DATA_B_MAG[8];
	unsigned short DMC_DATA_R_OFFSET[8];
	unsigned short DMC_DATA_G_OFFSET[8];
	unsigned short DMC_DATA_B_OFFSET[8];
} AUO_DMC_Para_TBL;

AUO_DMC_Para_TBL DMC_para;

/*========================= for auo demura =================================*/
#endif

#endif

extern unsigned int PCID_ValueTBL[81];
extern unsigned int POD_ValueTBL_1[81];
extern unsigned int POD_ValueTBL_2[81];

//extern UINT32 EOTF_LUT_HLG_DEFAULT[1025];
//extern UINT16 OETF_LUT_HLG_DEFAULT_DCC_OFF[1025];
extern UINT16 HDR10_3DLUT_24x24x24[24*24*24*3];
extern UINT32 EOTF_LUT_R[1025];
extern UINT16 OETF_LUT_R[1025];
unsigned char od_table_store_r[OD_table_length];
unsigned char od_table_store_g[OD_table_length];
unsigned char od_table_store_b[OD_table_length];
unsigned char od_table_store_w[OD_table_length];
unsigned int od_delta_table_resume[OD_table_length];

static unsigned char PQ_Dev_Status = PQ_DEV_NOTHING;
static unsigned char Demo_Flag = false;
UINT8 g_InvGamma=0;
static GAMMA_RGB_T gamma;
extern COLORELEM_TAB_T icm_tab_elem_of_vip_table;
extern COLORELEM_TAB_T icm_tab_elem_write;
UINT8 g_Color_Mode = COLOR_MODE_ADV;
UINT8 g_flag_cm_adv_init_ok;
UINT8 g_flag_cm_exp_init_ok;
CHIP_CM_REGION_T g_cm_rgn_adv = {{
	{{	TRUE,
		CHIP_CM_COLOR_REGION_RED,		//INDEX_0	//INDEX_1	//INDEX_2	//INDEX_3	//INDEX_4	//INDEX_5//INDEX_6//INDEX_7
		{5632, 5760, 5888, 5888, 0, 64, 128, 192 }, //HUE_index //0~6016
		{174, 220, 220, 220, 220, 220, 190, 170 }, //HUE_gain //0~255
		{384, 512, 1024, 1536, 2048, 3072, 3584, 4096 }, //SAT_index //0~4095
		{128, 215, 230, 220, 200, 201, 180, 130 }, //SAT_gain //0~255
		{512, 1024, 1536, 2048, 2560, 3072, 3584, 4096 }, //ITN_index //0~4095
		{128, 250, 250, 250, 250, 180, 180, 160 }, //ITN_gain //0~255
	},

	{	TRUE,
		CHIP_CM_COLOR_REGION_GRN,		//INDEX_0	//INDEX_1	//INDEX_2	//INDEX_3	//INDEX_4	//INDEX_5//INDEX_6//INDEX_7
		{1152, 1216, 1408, 1536, 2432, 2560, 2688, 2752 }, //HUE_index //0~6016
		{174, 220, 220, 220, 220, 220, 190, 170 }, //HUE_gain //0~255
		{384, 512, 1024, 1536, 2048, 3072, 3584, 4096 }, //SAT_index //0~4095
		{128, 215, 230, 220, 200, 201, 180, 130 }, //SAT_gain //0~255
		{512, 1024, 1536, 2048, 2560, 3072, 3584, 4096 }, //ITN_index //0~4095
		{128, 250, 250, 250, 250, 180, 180, 160 }, //ITN_gain //0~255
	},

	{	TRUE,
		CHIP_CM_COLOR_REGION_BLU,		//INDEX_0	//INDEX_1	//INDEX_2	//INDEX_3	//INDEX_4	//INDEX_5//INDEX_6//INDEX_7
		{2752, 2816, 2944, 3072, 3456, 3584, 3712, 3840 }, //HUE_index //0~6016
		{174, 218, 220, 220, 220, 220, 190, 170 }, //HUE_gain //0~255
		{384, 512, 1024, 1536, 2048, 3072, 3584, 4096 }, //SAT_index //0~4095
		{128, 193, 230, 220, 200, 201, 180, 130 }, //SAT_gain //0~255
		{512, 1024, 1536, 2048, 2560, 3072, 3584, 4096 }, //ITN_index //0~4095
		{110, 160, 220, 220, 220, 180, 180, 160 }, //ITN_gain //0~255
	},

	{	TRUE,
		CHIP_CM_COLOR_REGION_CYN,		//INDEX_0	//INDEX_1	//INDEX_2	//INDEX_3	//INDEX_4	//INDEX_5//INDEX_6//INDEX_7
		{3840, 3840, 3968, 4096, 4224, 4352, 4480, 4480 }, //HUE_index //0~6016
		{174, 174, 220, 220, 220, 220, 190, 190 }, //HUE_gain //0~255
		{384, 512, 1024, 1536, 2048, 3072, 3584, 4096 }, //SAT_index //0~4095
		{128, 206, 230, 220, 200, 201, 180, 130 }, //SAT_gain //0~255
		{0, 512, 1536, 2048, 2560, 3072, 3584, 4096 }, //ITN_index //0~4095
		{128, 250, 250, 250, 250, 180, 180, 160 }, //ITN_gain //0~255
	},

	{	TRUE,
		CHIP_CM_COLOR_REGION_MGT,		//INDEX_0	//INDEX_1	//INDEX_2	//INDEX_3	//INDEX_4	//INDEX_5//INDEX_6//INDEX_7
		{4672, 4736, 4864, 5120, 5248, 5504, 5760, 5888 }, //HUE_index //0~6016
		{174, 220, 220, 220, 220, 220, 190, 170 }, //HUE_gain //0~255
		{384, 512, 1024, 1536, 2048, 3072, 3584, 4096 }, //SAT_index //0~4095
		{128, 215, 230, 220, 200, 201, 180, 130 }, //SAT_gain //0~255
		{0, 512, 1536, 2048, 2560, 3072, 3584, 4096 }, //ITN_index //0~4095
		{128, 250, 250, 250, 250, 180, 180, 160 }, //ITN_gain //0~255
	},

	{	TRUE,
		CHIP_CM_COLOR_REGION_YLW,		//INDEX_0	//INDEX_1	//INDEX_2	//INDEX_3	//INDEX_4	//INDEX_5//INDEX_6//INDEX_7
		{640, 704, 704, 768, 832, 832, 896, 1024 }, //HUE_index //0~6016
		{174, 220, 220, 220, 220, 220, 190, 170 }, //HUE_gain //0~255
		{384, 512, 1024, 1536, 2048, 3072, 3584, 4096 }, //SAT_index //0~4095
		{128, 215, 230, 220, 200, 201, 180, 130 }, //SAT_gain //0~255
		{0, 512, 1536, 2048, 2560, 3072, 3584, 4096 }, //ITN_index //0~4095
		{128, 250, 250, 250, 250, 180, 180, 160 }, //ITN_gain //0~255
	},

	{	TRUE,
		CHIP_CM_COLOR_REGION_SKIN,		//INDEX_0	//INDEX_1	//INDEX_2	//INDEX_3	//INDEX_4	//INDEX_5//INDEX_6//INDEX_7
		{256, 320, 320, 384, 384, 384, 512, 640 }, //HUE_index //0~6016
		{174, 220, 220, 220, 220, 220, 190, 170 }, //HUE_gain //0~255
		{384, 512, 1024, 1536, 2048, 3072, 3584, 4096 }, //SAT_index //0~4095
		{128, 215, 230, 220, 200, 201, 180, 130 }, //SAT_gain //0~255
		{0, 512, 1536, 2048, 2560, 3072, 3584, 4096 }, //ITN_index //0~4095
		{128, 250, 250, 250, 250, 180, 180, 160 }, //ITN_gain //0~255
	},},
	0,
}};
CHIP_CM_REGION_T g_cm_rgn_exp;
CHIP_COLOR_CONTROL_T g_cm_ctrl_adv;
CHIP_COLOR_CONTROL_T g_cm_ctrl_exp;
unsigned char g_cm_need_refresh = 1;
unsigned char g_cm_keep_Y = 0;

extern UINT16 GOut_R[1025];
extern UINT16 GOut_G[1025];
extern UINT16 GOut_B[1025];

extern unsigned int final_GAMMA_R[512];
extern unsigned int final_GAMMA_G[512];
extern unsigned int final_GAMMA_B[512];

unsigned char g_InvGammaPowerMode=0;
unsigned char g_IsInvGammaPowerNewMode=0;
unsigned char g_HDR3DLUTForceWrite = 1;
extern unsigned short Power1div22Gamma[1025];
extern unsigned short Power22InvGamma[1025];
unsigned short g_GammaRemap[4097];

unsigned char uc3DCorrectionEn;
extern unsigned char bForceHist3DCtrl;

unsigned char g_srgbForceUpdate=1;

static unsigned char ucColorFilterMode;
static COLORTEMP_ELEM_T curColorTemp = {512, 512, 512, 512, 512, 512};
DRV_Sharpness_Table tDRV_Sharpness_Table;

//Game mode cmd checking flow @Cixus 20161204
extern unsigned int game_mode_cmd_check;

CHIP_SHARPNESS_UI_T tCurCHIP_SHARPNESS_UI_T;
CHIP_SHARPNESS_UI_T t3DCHIP_SHARPNESS_UI_T;
CHIP_EDGE_ENHANCE_UI_T tCurCHIP_EDGE_ENHANCE_UI_T;
CHIP_SR_UI_T tCurCHIP_SR_UI_T;
CHIP_LOCAL_CONTRAST_T glc_param={
	0,0,0,128,
	{0,0,1,1,2,2,2,2},
	{32,64,128,192,704,83,896,960},
	{
		0,64,128,192,256,320,384,448,512,576,640,704,768,832,896,960,1024,1088,1152,1216,1280,1344,1408,1472,1536,1600,1664,1728,1792,1856,1920,1984,
		0,64,128,192,256,320,384,448,512,576,640,704,768,832,896,960,1024,1088,1152,1216,1280,1344,1408,1472,1536,1600,1664,1728,1792,1856,1920,1984,
		0,128,256,384,512,640,768,896,1024,1152,1280,1408,1536,1664,1792,1920,2048,2176,2304,2432,2560,2688,2816,2944,3072,3200,3328,3456,3584,3712,3840,3968,
		0,128,256,384,512,640,768,896,1024,1152,1280,1408,1536,1664,1792,1920,2048,2176,2304,2432,2560,2688,2816,2944,3072,3200,3328,3456,3584,3712,3840,3968,
		0,2048,2112,2176,2240,2304,2368,2432,2496,2560,2624,2688,2752,2816,2880,2944,3008,3072,3136,3200,3264,3328,3392,3456,3520,3584,3648,3712,3776,3840,3904,4032,
		0,2048,2112,2176,2240,2304,2368,2432,2496,2560,2624,2688,2752,2816,2880,2944,3008,3072,3136,3200,3264,3328,3392,3456,3520,3584,3648,3712,3776,3840,3904,4032,
		0,2048,2112,2176,2240,2304,2368,2432,2496,2560,2624,2688,2752,2816,2880,2944,3008,3072,3136,3200,3264,3328,3392,3456,3520,3584,3648,3712,3776,3840,3904,4032,
		0,2048,2112,2176,2240,2304,2368,2432,2496,2560,2624,2688,2752,2816,2880,2944,3008,3072,3136,3200,3264,3328,3392,3456,3520,3584,3648,3712,3776,3840,3904,4032,
	},
};

/*sycn TV030*/
extern unsigned char VALC_Table[6][17][17];
extern DRV_pcid_valc_t  pVALCprotectSetting[2];
/*sycn TV030 end*/

//TV030
unsigned char str_resume_do_picturemode=0;

unsigned short tShp_Val[7];

unsigned char g_bAPLColorGainClr = 1;
unsigned char g_bGamut3DLUT_LGDB_NeedUpdated = 0;
unsigned char g_3DLUT_LastInternalSelect = 0; // 0: RTK DB, 1: LG DB
unsigned char g_3DLUT_LastEnableSatus = 0;
unsigned char g_3DLUT_Resume = 0;
extern GAMUT_3D_LUT_17x17x17_T g_LGDB_3D_LUT_BUF[1];
GAMUT_3D_LUT_17x17x17_T g_buf3DLUT_LGDB;

extern struct semaphore Memc_Realcinema_Semaphore;/*For adaptive streaming info Semaphore*/
extern DEBUG_SCALER_VSC_STRUCT DbgSclrFlgTkr;//extern char memc_realcinema_run_flag;

unsigned char g_bDIGameModeOnlyDebug = FALSE;

UINT8 g_pcid_en = 0;
UINT8 g_pcid2_en = 0;
extern unsigned char rtk_vsc_setFilmMode(bool value);
unsigned char rtk_hal_vsc_GetInputRegion(VIDEO_WID_T wid, KADP_VIDEO_RECT_T * pinregion);
extern unsigned char rtk_hal_vsc_SetInputRegion(VIDEO_WID_T wid, KADP_VIDEO_RECT_T  inregion);
unsigned char rtk_hal_vsc_GetOutputRegion(VIDEO_WID_T wid, KADP_VIDEO_RECT_T * poutregion);
unsigned char rtk_hal_vsc_SetOutputRegion(VIDEO_WID_T wid, KADP_VIDEO_RECT_T outregion);

extern void memc_realcinema_framerate(void);
extern unsigned char get_sub_OutputVencMode(void);

extern PQ_device_struct *g_Share_Memory_PQ_device_struct;

//#ifdef CONFIG_HDR_SDR_SEAMLESS
#ifdef CONFIG_VDEC_HDR_SDR_SEAMLESS
extern HDR_SDR_SEAMLESS_PQ_STRUCT HDR_SDR_SEAMLESS_PQ;
#endif

#if defined(CONFIG_RTK_AI_DRV)
UINT8 vpq_stereo_face = 0;//0: off, 1: on, 2: demo
extern unsigned char signal_cnt;
#endif

int vpq_open(struct inode *inode, struct file *filp)
{
	return 0;
}

ssize_t  vpq_read(struct file *filep, char *buffer, size_t count, loff_t *offp)
{
#if 1
	return count;
#else
	return 0;
#endif

}

ssize_t vpq_write(struct file *filep, const char *buffer, size_t count, loff_t *offp)
{
#if 1
	printk(KERN_EMERG "vpqdev cmd : %s \n", buffer);

	if(strcmp(buffer, "testmode=1\n") == 0){
		Scaler_Set_VIP_Disable_PQ(VPQ_ModuleTestMode_PQByPass, 1);
		Scaler_Set_PQ_ModuleTest(VPQ_ModuleTestMode_PQByPass);
		printk(KERN_EMERG "PQ_bypass_mode1\n");
	}else if (strcmp(buffer, "testmode=2\n") == 0){
		Scaler_Set_VIP_Disable_PQ(VPQ_ModuleTestMode_HDRPQByPass, 1);
		Scaler_Set_PQ_ModuleTest(VPQ_ModuleTestMode_HDRPQByPass);
		printk(KERN_EMERG "PQ_bypass_mode2\n");
	}else if (strcmp(buffer, "testmode=0\n") == 0){
		Scaler_Set_PQ_ModuleTest(VPQ_ModuleTestMode_MAX);
		printk(KERN_EMERG "PQ_bypass_mode0\n");
	}


	if(NULL == g_Share_Memory_PQ_device_struct){
		return count;
	}else{
		if(strcmp(buffer, "enable_pqautocheck\n") == 0){
			g_Share_Memory_PQ_device_struct->pqautocheck_en=1;
			printk(KERN_EMERG "enable_pqautocheck\n");
		}

		if(strcmp(buffer, "disable_pqautocheck\n") == 0){
			g_Share_Memory_PQ_device_struct->pqautocheck_en=0;
			printk(KERN_EMERG "disable_pqautocheck\n");
		}

		if(strcmp(buffer, "pqautocheck_all\n") == 0){
			unsigned int PQ_check_error[200];
			vpq_PQ_check_timming("all", PQ_check_error);
			printk(KERN_EMERG "pqautocheck_all\n");
		}
	}

	return count;
#else
	return 0;
#endif
}

int vpq_release(struct inode *inode, struct file *filep)
{
	return 0;
}

void vpq_set_color_temp_filter(void)
{
	COLORTEMP_ELEM_T ct;
	static COLORTEMP_ELEM_T ctStore = {0};
	static unsigned char ucColorFilterModeStore = 0;
	unsigned char waitSync = 0;
	memcpy(&ct, &curColorTemp, sizeof(COLORTEMP_ELEM_T));

	if (ucColorFilterModeStore != ucColorFilterMode ) {
		waitSync = 1;
		ucColorFilterModeStore = ucColorFilterMode;
	}

	if (memcmp(&ctStore, &curColorTemp, sizeof(COLORTEMP_ELEM_T)) != 0) {
		waitSync = 1;
		memcpy(&ctStore, &curColorTemp, sizeof(COLORTEMP_ELEM_T));
	}

	switch (ucColorFilterMode) {
	case 1: /*SET filter gain value to RED only*/
			ct.Green_Gain = ct.Blue_Gain = 0;
			break;
	case 2: /*SET filter gain value to GREEN only*/
			ct.Red_Gain = ct.Blue_Gain = 0;
			break;
	case 3: /*SET filter gain value to BLUE only*/
			ct.Red_Gain = ct.Green_Gain = 0;
			break;
	case 0: /*SET filter gain value to off mode*/
	default:
			break;
			;
	}

	/*
	fwif_color_setrgbcontrast_By_Table(ct.Red_Gain, ct.Green_Gain, ct.Blue_Gain, 0);
	fwif_color_setrgbbrightness_By_Table(ct.Red_Offset, ct.Green_Offset, ct.Blue_Offset);
	*/
	fwif_color_set_color_temp(FALSE, ct.Red_Gain<<2, ct.Green_Gain<<2, ct.Blue_Gain<<2, (ct.Red_Offset<<2)-2048, (ct.Green_Offset<<2)-2048, (ct.Blue_Offset<<2)-2048, waitSync);
}

void vpq_init_gamma(void)
{
	int i;

	for (i = 0; i < 1024; i++)
		gamma.Gamme_Red[i] = gamma.Gamme_Green[i] = gamma.Gamme_Blue[i] = i;
}

void vpq_gamma_multiply_remap(GAMMA_RGB_T *pGammaRGBIn)
{
	int i, j, hdiff, qdiff;
	if (NULL == pGammaRGBIn)
		return;

	// R
	for (i = 0, j = 0; i < 4096; i+=4, j++) {
		g_GammaRemap[i] = pGammaRGBIn->Gamme_Red[j] << 2;
	}
	g_GammaRemap[4096] = (pGammaRGBIn->Gamme_Red[1023] << 2) + (pGammaRGBIn->Gamme_Red[1023] >> 8);

	for (i = 0; i < 4096; i+=4) {
		hdiff = (g_GammaRemap[i+4]-g_GammaRemap[i])>>1;
		qdiff = hdiff>>1;
		g_GammaRemap[i+1] = g_GammaRemap[i]+qdiff;
		g_GammaRemap[i+2] = g_GammaRemap[i]+hdiff;
		g_GammaRemap[i+3] = g_GammaRemap[i+2]+qdiff;
	}

	for (i = 0; i < 1025; i++) {
		GOut_R[i] = g_GammaRemap[Power1div22Gamma[i]];
	}

	// G
	for (i = 0, j = 0; i < 4096; i+=4, j++) {
		g_GammaRemap[i] = pGammaRGBIn->Gamme_Green[j] << 2;
	}
	g_GammaRemap[4096] = (pGammaRGBIn->Gamme_Green[1023] << 2) + (pGammaRGBIn->Gamme_Green[1023] >> 8);

	for (i = 0; i < 4096; i+=4) {
		hdiff = (g_GammaRemap[i+4]-g_GammaRemap[i])>>1;
		qdiff = hdiff>>1;
		g_GammaRemap[i+1] = g_GammaRemap[i]+qdiff;
		g_GammaRemap[i+2] = g_GammaRemap[i]+hdiff;
		g_GammaRemap[i+3] = g_GammaRemap[i+2]+qdiff;
	}

	for (i = 0; i < 1025; i++) {
		GOut_G[i] = g_GammaRemap[Power1div22Gamma[i]];
	}


	// B
	for (i = 0, j = 0; i < 4096; i+=4, j++) {
		g_GammaRemap[i] = pGammaRGBIn->Gamme_Blue[j] << 2;
	}
	g_GammaRemap[4096] = (pGammaRGBIn->Gamme_Blue[1023] << 2) + (pGammaRGBIn->Gamme_Blue[1023] >> 8);

	for (i = 0; i < 4096; i+=4) {
		hdiff = (g_GammaRemap[i+4]-g_GammaRemap[i])>>1;
		qdiff = hdiff>>1;
		g_GammaRemap[i+1] = g_GammaRemap[i]+qdiff;
		g_GammaRemap[i+2] = g_GammaRemap[i]+hdiff;
		g_GammaRemap[i+3] = g_GammaRemap[i+2]+qdiff;
	}

	for (i = 0; i < 1025; i++) {
		GOut_B[i] = g_GammaRemap[Power1div22Gamma[i]];
	}

}

void vpq_mapping_gamma_by_gamut_mode(void)
{
	int i;
	unsigned char bGammaDo2p2 = FALSE;

	switch(g_InvGammaPowerMode) {
	case VPQ_GAMMA_MODE_INV_OFF_INNER_BYPASS:
	case VPQ_GAMMA_MODE_INV_ON_INNER_BYPASS:
	default:
		bGammaDo2p2 = FALSE;
		break;
	case VPQ_GAMMA_MODE_INV_OFF_INNER_ON:
	case VPQ_GAMMA_MODE_INV_ON_INNER_ON:
		bGammaDo2p2 = TRUE;
		break;
	}

	if (bGammaDo2p2) {
		vpq_gamma_multiply_remap(&gamma);
	} else {
		for (i = 0; i < 1024; i++) {
			GOut_R[i] = (gamma.Gamme_Red[i] << 2) + (gamma.Gamme_Red[i] >> 8);
			GOut_G[i] = (gamma.Gamme_Green[i] << 2) + (gamma.Gamme_Green[i] >> 8);
			GOut_B[i] = (gamma.Gamme_Blue[i] << 2) + (gamma.Gamme_Blue[i] >> 8);
		}

		GOut_R[1024] = GOut_R[1023];
		GOut_G[1024] = GOut_G[1023];
		GOut_B[1024] = GOut_B[1023];
	}

}

void vpq_set_gamma(unsigned char ucDoCtrlBack, unsigned char useRPC)
{
	extern struct semaphore Gamma_Semaphore;

	down(&Gamma_Semaphore);
	vpq_mapping_gamma_by_gamut_mode();
	fwif_color_gamma_encode(final_GAMMA_R, final_GAMMA_G, final_GAMMA_B, GOut_R, GOut_G, GOut_B);
	if (!useRPC || !fwif_color_set_ddomainISR_gamma_encode(final_GAMMA_R, final_GAMMA_G, final_GAMMA_B)) {
		fwif_color_gamma_control_front(SLR_MAIN_DISPLAY);
		fwif_color_set_gamma_encode(final_GAMMA_R, final_GAMMA_G, final_GAMMA_B);
		if (ucDoCtrlBack)
			fwif_color_gamma_control_back(SLR_MAIN_DISPLAY, 1);
	}/* else {
		ISR_GAMMA_WRITE_ST *p_stISRGamma = (ISR_GAMMA_WRITE_ST *)Scaler_GetShareMemVirAddr(SCALERIOC_SET_GAMMA);
		extern unsigned int isr_write_gamma_SN;

		if (p_stISRGamma != NULL) {
			isr_write_gamma_SN++;
			fwif_color_ChangeUINT32Endian_Copy(&isr_write_gamma_SN, sizeof(unsigned int), &p_stISRGamma->write_SerialNumber_start, 1);
			fwif_color_ChangeUINT32Endian_Copy(final_GAMMA_R, sizeof(final_GAMMA_R)/sizeof(unsigned int), p_stISRGamma->encoded_GAMMA_R, 1);
			fwif_color_ChangeUINT32Endian_Copy(final_GAMMA_G, sizeof(final_GAMMA_G)/sizeof(unsigned int), p_stISRGamma->encoded_GAMMA_G, 1);
			fwif_color_ChangeUINT32Endian_Copy(final_GAMMA_B, sizeof(final_GAMMA_B)/sizeof(unsigned int), p_stISRGamma->encoded_GAMMA_B, 1);
			p_stISRGamma->write_SerialNumber_end = p_stISRGamma->write_SerialNumber_start;

			if ((Scaler_SendRPC(SCALERIOC_SET_GAMMA, 0, 0)) < 0) {
				rtd_printk(KERN_ERR, TAG_NAME, " update GAMMA to driver fail !!!\n");
			}
		}

	}*/
	up(&Gamma_Semaphore);

}

void vpq_set_inv_gamma(unsigned char ucDoCtrlBack)
{
	down(&VPQ_Semaphore);
	fwif_color_inv_gamma_control_front(SLR_MAIN_DISPLAY);
	fwif_color_gamma_encode(final_GAMMA_R, final_GAMMA_G, final_GAMMA_B, Power22InvGamma, Power22InvGamma, Power22InvGamma);
	fwif_color_set_inv_gamma_encode_tv006();
	if (ucDoCtrlBack)
		fwif_color_inv_gamma_control_back(SLR_MAIN_DISPLAY, 1);

	up(&VPQ_Semaphore);
}

unsigned int out_GAMMA_R[128], out_GAMMA_G[128], out_GAMMA_B[128];
void vpq_set_out_gamma(void)
{
#ifdef VPQ_COMPILER_ERROR_ENABLE

	extern unsigned short LEDOutGamma[257];
	static unsigned char panelTypeDef = 0;
	unsigned char panel_type=((IoReg_Read32(MISC_GPIO_GP2DATI_VADDR)>>18)&0x1);//0xb801bd38[18]=1 OLED
	if (panel_type)
		panelTypeDef = 1;

	down(&VPQ_Semaphore);
	if (panel_type || panelTypeDef) {
		fwif_color_out_gamma_control_front();
		fwif_color_out_gamma_encode(out_GAMMA_R, out_GAMMA_G, out_GAMMA_B, LEDOutGamma, LEDOutGamma, LEDOutGamma);
		fwif_color_set_out_gamma_encode_tv006();
		fwif_color_out_gamma_control_back();
		fwif_color_out_gamma_control_enable(1);
	} else
		fwif_color_out_gamma_control_enable(0);

	up(&VPQ_Semaphore);
#endif
}

void vpq_update_icm(unsigned char waiting)
{
	down(&VPQ_Semaphore);
	fwif_color_set_ICM_table_driver_tv006(&icm_tab_elem_write, waiting);
	up(&VPQ_Semaphore);
}

void vpq_cm_global_init(void)
{
	int rgn;
	memcpy(&g_cm_rgn_exp, &g_cm_rgn_adv, sizeof(CHIP_CM_REGION_T));

	for (rgn = 0; rgn < CHIP_CM_COLOR_REGION_MAX; rgn++) {
		g_cm_ctrl_adv.stColor[rgn].masterGain = 0;
		g_cm_ctrl_adv.stColor[rgn].stColorGain.stColorGainHue = 128;
		g_cm_ctrl_adv.stColor[rgn].stColorGain.stColorGainSat = 128;
		g_cm_ctrl_adv.stColor[rgn].stColorGain.stColorGainInt = 128;
	}

	memcpy(&g_cm_ctrl_exp, &g_cm_ctrl_adv, sizeof(CHIP_COLOR_CONTROL_T));
}

void vpq_set_3d_lut_index(unsigned char idx, unsigned char bForceWrite)
{
	static unsigned char last3dlut_idx = 0xff;

	if (idx > IDX_3DLUT_MAX)
		return;

	if (bForceWrite || (last3dlut_idx > 0 && (last3dlut_idx-1) != fwif_color_3d_lut_access_index(ACCESS_MODE_GET, 0)))
		bForceWrite = 1;

	down(&VPQ_Semaphore);
	if (last3dlut_idx != idx || bForceWrite) {
		fwif_color_set_3dLUT(idx);
		last3dlut_idx = idx;
	}
	if (idx > 0)
		fwif_color_3d_lut_access_index(ACCESS_MODE_SET, idx-1);
	up(&VPQ_Semaphore);
}

unsigned char vpq_set_Gamut_3D_Lut_LGDB(GAMUT_3D_LUT_17x17x17_T *pLut, unsigned int iEnable, unsigned char bOnlySetEnable)
{
	int idx;
	static unsigned int pLUT3D[LUT3D_TBL_ITEM];
	extern unsigned char lastLUT_tbl_index;// RTK last index

	if (NULL == pLut)
		return FALSE;

	down(&VPQ_Semaphore);
	lastLUT_tbl_index = 0xff; //clear rtk DB last index
	fwif_color_3d_lut_access_index(ACCESS_MODE_SET, 0); //clear rtk DB index

	if (bOnlySetEnable && iEnable) {
		fwif_color_WaitFor_DEN_STOP_UZUDTG();
		drvif_color_D_3dLUT_Enable(1);
	} else {
		for (idx = 0; idx < 4913; idx++) {
			pLUT3D[idx<<1] = (pLut->pt[idx].r_data<<16)+pLut->pt[idx].g_data;
			pLUT3D[(idx<<1)+1] = pLut->pt[idx].b_data;
		}

		fwif_color_WaitFor_DEN_STOP_UZUDTG();

		if (iEnable)
			drvif_color_D_3dLUT(1, pLUT3D);
		else
			drvif_color_D_3dLUT(0, pLUT3D);
	}
	up(&VPQ_Semaphore);
	return TRUE;
}

extern DRV_POD_DATA_table_t POD_DATA[3];
//unsigned char InputLUT[578] = {0};
void vpq_boot_init(void)
{
#ifdef CONFIG_CUSTOMER_TV030
	//unsigned char VALC_DeltaTbl[PCID_TABLE_LEN] = {0};
#endif
	DRV_Sharpness_Level Sharpness_Level;
	fwif_color_DI_IP_ini();
	fwif_color_DI_IEGSM_ini();
	vpq_cm_global_init();
	vpq_init_gamma();
	vpq_set_inv_gamma(0);
	vpq_set_out_gamma();
	vpq_set_gamma(0, 0);
	fwif_color_inv_gamma_control_back(SLR_MAIN_DISPLAY, 0);
	fwif_color_gamma_control_back(SLR_MAIN_DISPLAY, 0);
	//20210114 roger, mark vivid color for boot logo video path issue(color wrong)
	//drvif_color_set_Vivid_Color_Enable(TRUE);
	//20190118 roger, mark ICM init for boot logo video path issue
	//fwif_color_set_ICM_table_driver_init_tv006();
	//fwif_color_set_ICM_table_driver_init_elem_tv006(&icm_tab_elem_write);
	//memcpy(&icm_tab_elem_of_vip_table, &icm_tab_elem_write, sizeof(COLORELEM_TAB_T));
	//vpq_update_icm(FALSE);
	fwif_color_SetDNR_tv006(2);
	memset(&Sharpness_Level, 0, sizeof(DRV_Sharpness_Level));
	memcpy(D_3DLUT_Reseult, D_3DLUT, VIP_D_3D_LUT_SIZE * VIP_8VERTEX_RGB_MAX * sizeof(UINT32));
	drvif_color_set_Sharpness_level(&Sharpness_Level);
	fwif_color_3d_lut_init_tv006();
	fwif_color_set_DCC_Init(SLR_MAIN_DISPLAY);

#if 0//def CONFIG_HDR_SDR_SEAMLESS //mark due to seamless no need work 2017/11
	{
		static PQ_HDR_3dLUT_16_PARAM args;

		/* set defautl table and ini clk.*/
		rtd_printk(KERN_INFO, TAG_NAME, "boot ini!!!\n");
		fwif_color_set_DM2_EOTF_TV006(EOTF_LUT_R);
		fwif_color_set_DM2_OETF_TV006(OETF_LUT_R);
		/* set default 3D LUT for seamless*/
		/*printk("[elieli]VIP_system_info_structure_table->HDR_info.Ctrl_Item[TV006_HDR_En]=%d\n", VIP_system_info_structure_table->HDR_info.Ctrl_Item[TV006_HDR_En]);*/
		//extern struct semaphore VPQ_DM_3DLUT_Semaphore;
		args.c3dLUT_16_enable = 1;
		args.a3dLUT_16_pArray = (UINT16*)&HDR10_3DLUT_24x24x24[0];
		fwif_color_set_DM_HDR_3dLUT_24x24x24_16_TV006(&args);
	}
#endif
	fwif_color_set_DM2_OE_EO_CSC3_Sram_init_Flag_TV006(1);
	drvif_DM2_B0203_noSram_Enable(1);
#ifdef CONFIG_SNR_CLOCK_HW_ISSUE
	/* always on for snr hw issue, elieli*/
	if (drvif_color_Get_DRV_SNR_Clock(0) == 1) {
		drvif_color_Set_DRV_SNR_Clock(0);
		drvif_color_DRV_SNR_Mosquito_NR_En(0xF);
		drvif_color_iEdgeSmooth_en(0xF);
		drvif_color_Set_DRV_SNR_Clock(1);
	} else {
		drvif_color_DRV_SNR_Mosquito_NR_En(0xF);
		drvif_color_iEdgeSmooth_en(0xF);
	}
#endif
	/* always on for UZU_Bypass_No_PwrSave hw issue, elieli*/
	//drvif_color_Access_UZU_Bypass_No_PwrSave(1, 1);

	/* set panel dither*/
	#if 0
	if (Get_DISPLAY_PANEL_MPLUS_RGBW() == TRUE || Get_DISPLAY_PANEL_BOW_RGBW() == TRUE)
		fwif_color_set_Panel_Dither(TRUE,VIP_PANEL_BIT8,VIP_DITHER_PANELTABLE_BLANCE_ROLL_15);
	else
		fwif_color_set_Panel_Dither(TRUE,VIP_PANEL_BIT10,VIP_DITHER_PANELTABLE_BLANCE_ROLL_15);
	#endif
	
#if 0//OD load from bootcode //mac7p booycode OD not ready, enable for bringup test first
	if (Scaler_Init_OD()) {
		fwif_color_set_liner_od_table();
		Scaler_Set_OD_Bit_By_XML();
	}
#endif
	/* demura ini */
	//fwif_color_DeMura_init();

	/* ST2094 Ctrl ini*/
	fwif_color_ST2094_Ctrl_Structure_ini();

#if defined(CONFIG_RTK_AI_DRV)
	/* NN init*/
	scalerAI_Init();
#endif

#if 0 //def CONFIG_CUSTOMER_TV030

	if(Get_DISPLAY_PANEL_TYPE()==  P_MINI_LVDS){

		fwif_color_DeMura_init();
		fwif_color_set_DeMura_En(1);

		//Scaler_color_colorwrite_Output_InvOutput_gamma(2); //bootcode load bin
#if 0
		drvif_color_pcid2_pixel_setting(&(POD_DATA[1].pcid2_data));
		drvif_color_pcid2_poltable(&(POD_DATA[1].pPcid2PolTable[_PCID2_COLOR_R][0]),_PCID2_COLOR_R);
		drvif_color_pcid2_poltable(&(POD_DATA[1].pPcid2PolTable[_PCID2_COLOR_G][0]),_PCID2_COLOR_G);
		drvif_color_pcid2_poltable(&(POD_DATA[1].pPcid2PolTable[_PCID2_COLOR_B][0]),_PCID2_COLOR_B);
		drvif_color_pcid_VALC_protection(&(POD_DATA[1].pcid_valc));

		// R1
		memcpy(VALC_DeltaTbl, &(POD_DATA[1].POD_DATA[_PCID2_COLOR_R*2][0]), sizeof(char)*PCID_TABLE_LEN);
		//drvif_color_pcid_TblTrans_Target2Delta(VALC_DeltaTbl);
		fwif_color_set_pcid_single_valuetable(VALC_DeltaTbl, 0, _PCID2_COLOR_R);
		// R2
		memcpy(VALC_DeltaTbl, &(POD_DATA[1].POD_DATA[_PCID2_COLOR_R*2+1][0]), sizeof(char)*PCID_TABLE_LEN);
		//drvif_color_pcid_TblTrans_Target2Delta(VALC_DeltaTbl);
		fwif_color_set_pcid_single_valuetable(VALC_DeltaTbl, 1, _PCID2_COLOR_R);
		// G1
		memcpy(VALC_DeltaTbl, &(POD_DATA[1].POD_DATA[_PCID2_COLOR_G*2][0]), sizeof(char)*PCID_TABLE_LEN);
		//drvif_color_pcid_TblTrans_Target2Delta(VALC_DeltaTbl);
		fwif_color_set_pcid_single_valuetable(VALC_DeltaTbl, 0, _PCID2_COLOR_G);
		// G2
		memcpy(VALC_DeltaTbl, &(POD_DATA[1].POD_DATA[_PCID2_COLOR_G*2+1][0]), sizeof(char)*PCID_TABLE_LEN);
		//drvif_color_pcid_TblTrans_Target2Delta(VALC_DeltaTbl);
		fwif_color_set_pcid_single_valuetable(VALC_DeltaTbl, 1, _PCID2_COLOR_G);
		// B1
		memcpy(VALC_DeltaTbl, &(POD_DATA[1].POD_DATA[_PCID2_COLOR_B*2][0]), sizeof(char)*PCID_TABLE_LEN);
		//drvif_color_pcid_TblTrans_Target2Delta(VALC_DeltaTbl);
		fwif_color_set_pcid_single_valuetable(VALC_DeltaTbl, 0, _PCID2_COLOR_B);
		// B2
		memcpy(VALC_DeltaTbl, &(POD_DATA[1].POD_DATA[_PCID2_COLOR_B*2+1][0]), sizeof(char)*PCID_TABLE_LEN);
		//drvif_color_pcid_TblTrans_Target2Delta(VALC_DeltaTbl);
		fwif_color_set_pcid_single_valuetable(VALC_DeltaTbl, 1, _PCID2_COLOR_B);
#endif

	}

#endif
}

void *vpq_demo_overscan_func(void *param)
{
	VIDEO_WID_T wid;
	KADP_VIDEO_RECT_T inregion;
	KADP_VIDEO_RECT_T outregion;

	wid = VIDEO_WID_0;
	if(Scaler_InputRegionType_Get(wid) == INPUT_BASE_ON_DISP_WIN){
		StructSrcRect newInput = cal_new_input_base_on_display_win(wid);
		inregion.x = newInput.srcx;
		inregion.y = newInput.srcy;
		inregion.h = newInput.src_height;
		inregion.w = newInput.src_wid;
	}else{
		rtk_hal_vsc_GetInputRegion(wid, &inregion);
	}

	if ( !rtk_hal_vsc_GetOutputRegion(wid, &outregion))
		return NULL;

	if (param != NULL) {
		unsigned short *ocInfo = (unsigned short *)param;
		switch(ocInfo[0]) {
		case 1:/*read*/
			ocInfo[1] = inregion.x;
			ocInfo[2] = inregion.y;
			ocInfo[3] = inregion.w;
			ocInfo[4] = inregion.h;

			ocInfo[5] = outregion.x;
			ocInfo[6] = outregion.y;
			ocInfo[7] = outregion.w;
			ocInfo[8] = outregion.h;
			return NULL;
			break;
		case 2:/*write*/
			if (ocInfo[3] && ocInfo[4]) {
				inregion.x = ocInfo[1];
				inregion.y = ocInfo[2];
				inregion.w = ocInfo[3];
				inregion.h = ocInfo[4];
			}

			if (ocInfo[7] && ocInfo[8]) {
				outregion.x = ocInfo[5];
				outregion.y = ocInfo[6];
				outregion.w = ocInfo[7];
				outregion.h = ocInfo[8];
			}
			break;
		default:
			return NULL;
		}
	}else {/*custom overscan by source*/
		_RPC_system_setting_info *VIP_RPC_system_info_structure_table = (_RPC_system_setting_info *)Scaler_GetShareMemVirAddr(SCALERIOC_VIP_RPC_system_info_structure);

		switch (VIP_RPC_system_info_structure_table->VIP_source) {

			case VIP_QUALITY_HDMI_1080I:
			case VIP_QUALITY_HDMI_1080P:

				inregion.x = 39;
				inregion.y = 23;
				inregion.w = 1847;
				inregion.h = 1037;

				break;
			case VIP_QUALITY_CVBS_PAL:
			case VIP_QUALITY_CVBS_S_PAL:
			case VIP_QUALITY_TV_PAL:
				inregion.x = 18;
				inregion.y = 18;
				inregion.w = 668;
				inregion.h = 539;

				break;


		default:
			return NULL;
		}
	}

	rtk_hal_vsc_SetInputRegion(wid, inregion);
	rtk_hal_vsc_SetOutputRegion(wid, outregion);

	return NULL;
}

void *vpq_demo_pq_func(void *param)
{
	unsigned char enable;

	if (param == NULL)
		return NULL;

	enable = *((unsigned char*)param);

	if (enable==1 && fwif_VIP_get_Project_ID() != VIP_Project_ID_TV001) {
		fwif_color_set_pq_demo_flag_rpc(1);
		fwif_VIP_set_Project_ID(VIP_Project_ID_TV001);
		fwif_color_handler();
		fwif_color_video_quality_handler();
		fwif_color_vpq_pic_init();
		Scaler_SetDNR(4);
		Scaler_SetMPEGNR(4, CALLED_NOT_BY_OSD);
		fwif_color_set_PQA_motion_threshold_TV006();
		fwif_color_SetAutoMAFlag(1);
		vpq_demo_overscan_func(NULL);
		Demo_Flag = 1;
	} else if (enable==0 && fwif_VIP_get_Project_ID() != VIP_Project_ID_TV006) {
		g_InvGammaPowerMode = 0;
		g_IsInvGammaPowerNewMode = 0;
		fwif_color_set_pq_demo_flag_rpc(0);
		fwif_VIP_set_Project_ID(VIP_Project_ID_TV006);
		vpq_boot_init();
		fwif_color_inv_gamma_control_back(SLR_MAIN_DISPLAY, 0);
		drvif_color_inv_gamma_enable(SLR_MAIN_DISPLAY, 0, 0);
		drvif_color_inv_gamma_enable(SLR_SUB_DISPLAY, 0, 0);
		fwif_color_gamma_control_back(SLR_MAIN_DISPLAY, 1);
		fwif_color_SetDNR_tv006(0);
		fwif_color_set_DCC_Init(SLR_MAIN_DISPLAY);
		fwif_color_handler();
		fwif_color_video_quality_handler();
		fwif_color_vpq_pic_init();
		fwif_color_SetAutoMAFlag(1);
		Demo_Flag = 0;
	} else if (enable==2 && fwif_VIP_get_Project_ID() != VIP_Project_ID_TV001) {			//rock_rau 20150813 PQ by pass
		DRV_VIP_YUV2RGB_CSMatrix drv_vipCSMatrix_t;
		fwif_color_set_pq_demo_flag_rpc(1);
		fwif_VIP_set_Project_ID(VIP_Project_ID_TV001);
		fwif_color_handler();
		fwif_color_video_quality_handler();
		fwif_color_vpq_pic_init();
		fwif_color_SetAutoMAFlag(1);
/*==============================================*/
		Scaler_SetContrast(50);
		Scaler_SetBrightness(50);
		Scaler_SetSaturation(50);
		Scaler_SetHue(50);
		fwif_color_RHAL_SetDNR(0);

		Scaler_SetMPEGNR(0, CALLED_NOT_BY_OSD);
		Scaler_SetDNR(0);
		Scaler_SetSharpness(50);
		Scaler_SetDCC_Mode(0);

		Scaler_set_ICM_table(255, 0);
		Scaler_SetSharpnessTable(255);
		Scaler_SetMBPeaking(255);
		Scaler_SetMBSUPeaking(255);
		memset(&drv_vipCSMatrix_t, 0, sizeof(DRV_VIP_YUV2RGB_CSMatrix));
		drvif_color_setYUV2RGB_CSMatrix(&drv_vipCSMatrix_t, VIP_CSMatrix_UVOffset_ctrl, VIP_YUV2RGB_Y_Seg_0, SLR_MAIN_DISPLAY, VIP_Table_Select_1);


//		Color_Fun_Bypass color_fun_bypass[3];
//		color_fun_bypass[0].idIP = BYPASS_RGB_CON;
//		color_fun_bypass[0].bypass_switch = 0;
//		color_fun_bypass[1].idIP = BYPASS_RGB_BRI;
//		color_fun_bypass[1].bypass_switch = 0;
//		color_fun_bypass[2].idIP = BYPASS_GAMMA;
//		color_fun_bypass[2].bypass_switch = 0;
//		color_fun_bypass[3].idIP = BYPASS_D_DITHER;
//		color_fun_bypass[3].bypass_switch = 0;
//		color_fun_bypass[4].idIP = BYPASS_SRGB;
//		color_fun_bypass[4].bypass_switch = 0;
//		drvif_color_bypass(&color_fun_bypass, 3);

		vpq_demo_overscan_func(NULL);
		Demo_Flag = 1;
/*==============================================*/


	}

	return NULL;
}

#ifdef CONFIG_PM
OD_SUSPEND_RESUME_T od_suspend_resume;
unsigned char OD_Y_RGB_mode=OD_RGB_Mode;
void od_do_suspend(void)
{
	//extern unsigned char bODInited;
	//int i = 0;
	od_od_ctrl_RBUS od_ctrl_reg;
	od_ymode_ctrl_RBUS od_ymode_ctrl_reg;
	//if (!bODInited)
		//return;
	od_ctrl_reg.regValue = IoReg_Read32(OD_OD_CTRL_reg);
	od_ymode_ctrl_reg.regValue = IoReg_Read32(OD_YMODE_CTRL_reg);
	od_suspend_resume.od_enable = od_ctrl_reg.od_en;
	OD_Y_RGB_mode = od_ymode_ctrl_reg.od_ymode_en;
	drvif_color_od_table_seperate_read(&(od_table_store_r[0]), 0);//R
	drvif_color_od_table_seperate_read(&(od_table_store_g[0]), 1);//G
	drvif_color_od_table_seperate_read(&(od_table_store_b[0]), 2);//B
	//drvif_color_od_table_seperate_read(&(od_table_store_w[0]), 4);//W
}

DEMURA_SUSPEND_RESUME_T demura_suspend_resume;

void demura_do_suspend(void)
{
    demura_demura_control_RBUS demura_ctrl_reg;
	demura_ctrl_reg.regValue = IoReg_Read32(DEMURA_DEMURA_CONTROL_reg);

	demura_suspend_resume.demura_enable = demura_ctrl_reg.demura_en;	
}

DRV_pcid_valc_t Setting;
unsigned char pcid_en = 0;
unsigned char pcid2_en = 0;
DRV_pcid2_data_t Pcid2Setting;

void pcid_do_suspend(void)
{	
	char InputLUT[289] = {0};
	int i=0;
	for(i=0; i<81; i++)
	{
		PCID_ValueTBL[i] = 0;
		POD_ValueTBL_1[i] = 0;
		POD_ValueTBL_2[i] = 0;
	}
	drvif_color_get_pcid_enable(&pcid_en);
	drvif_color_get_pcid2_enable(&pcid2_en);
	drvif_color_get_pcid2_pixel_setting(&Pcid2Setting);

	drvif_color_get_pcid2_poltable(&(POD_DATA[1].pPcid2PolTable[_PCID2_COLOR_R][0]),_PCID2_COLOR_R);
	drvif_color_get_pcid2_poltable(&(POD_DATA[1].pPcid2PolTable[_PCID2_COLOR_G][0]),_PCID2_COLOR_G);
	drvif_color_get_pcid2_poltable(&(POD_DATA[1].pPcid2PolTable[_PCID2_COLOR_B][0]),_PCID2_COLOR_B);
	//PCID value table
	//R
	fwif_color_get_pcid_valuetable(InputLUT, 0,_PCID2_COLOR_R);
	memcpy(&((POD_DATA[1]).POD_DATA[_PCID2_COLOR_R*2][0]), &(InputLUT[0]), sizeof(char)*289);
	fwif_color_get_pcid_valuetable(InputLUT, 1,_PCID2_COLOR_R);
	memcpy(&((POD_DATA[1]).POD_DATA[_PCID2_COLOR_R*2+1][0]), &(InputLUT[0]), sizeof(char)*289);
	//G
	fwif_color_get_pcid_valuetable(InputLUT, 0,_PCID2_COLOR_G);
	memcpy(&((POD_DATA[1]).POD_DATA[_PCID2_COLOR_G*2][0]), &(InputLUT[0]), sizeof(char)*289);
	fwif_color_get_pcid_valuetable(InputLUT, 1,_PCID2_COLOR_G);
	memcpy(&((POD_DATA[1]).POD_DATA[_PCID2_COLOR_G*2+1][0]), &(InputLUT[0]),  sizeof(char)*289);
	//B
	fwif_color_get_pcid_valuetable(InputLUT, 0,_PCID2_COLOR_B);
	memcpy(&((POD_DATA[1]).POD_DATA[_PCID2_COLOR_B*2][0]), &(InputLUT[0]), sizeof(char)*289);
	fwif_color_get_pcid_valuetable(InputLUT, 1,_PCID2_COLOR_B);
	memcpy(&((POD_DATA[1]).POD_DATA[_PCID2_COLOR_B*2+1][0]), &(InputLUT[0]), sizeof(char)*289);

	drvif_color_get_pcid_VALC_protection((DRV_pcid_valc_t*)&(POD_DATA[1].pcid_valc.valc_en));
	fwif_color_get_PCID_RgnWeightSetting(&Setting);
}

VPQ_SUSPEND_RESUME_T vpq_suspend_resume;
void vpq_do_suspend(void)
{
	*((unsigned char *)Scaler_GetShareMemVirAddr(SCALERIOC_SETAUTOMAFLAG)) = 0;

	vpq_suspend_resume.CRT_PLL_SSC0_S_R = IoReg_Read32(PLL27X_REG_PLL_SSC0_reg);
  	vpq_suspend_resume.CRT_PLL_SSC3_S_R = IoReg_Read32(PLL27X_REG_PLL_SSC3_reg);
	vpq_suspend_resume.CRT_PLL_SSC4_S_R = IoReg_Read32(PLL27X_REG_PLL_SSC4_reg);
	vpq_suspend_resume.CRT_SYS_DCLKSS_S_R = IoReg_Read32(PLL27X_REG_SYS_DCLKSS_reg);
	vpq_suspend_resume.CRT_SYS_PLL_DISP1_S_R = IoReg_Read32(PLL27X_REG_SYS_PLL_DISP1_reg);
	vpq_suspend_resume.CRT_SYS_PLL_DISP2_S_R = IoReg_Read32(PLL27X_REG_SYS_PLL_DISP2_reg);
	vpq_suspend_resume.CRT_SYS_PLL_DISP3_S_R = IoReg_Read32(PLL27X_REG_SYS_PLL_DISP3_reg);
	vpq_suspend_resume.CRT_SYS_DISPCLKSEL_S_R = IoReg_Read32(SYS_REG_SYS_DISPCLKSEL_reg);
	fwif_color_read_output_gamma(Output_InvOutput_Gamma_TBL_Reserved04);
	od_do_suspend();
	pcid_do_suspend();
	demura_do_suspend();
}

void vpq_do_resume_instanboot(void)
{
	IoReg_Write32(PLL27X_REG_PLL_SSC0_reg, vpq_suspend_resume.CRT_PLL_SSC0_S_R&~_BIT0);
	IoReg_Write32(PLL27X_REG_PLL_SSC3_reg, vpq_suspend_resume.CRT_PLL_SSC3_S_R);
	IoReg_Write32(PLL27X_REG_PLL_SSC4_reg, vpq_suspend_resume.CRT_PLL_SSC4_S_R);
	IoReg_Write32(PLL27X_REG_SYS_DCLKSS_reg, vpq_suspend_resume.CRT_SYS_DCLKSS_S_R);
	IoReg_Write32(PLL27X_REG_SYS_PLL_DISP1_reg, vpq_suspend_resume.CRT_SYS_PLL_DISP1_S_R);
	IoReg_Write32(PLL27X_REG_SYS_PLL_DISP2_reg, vpq_suspend_resume.CRT_SYS_PLL_DISP2_S_R);
	IoReg_Write32(PLL27X_REG_SYS_PLL_DISP3_reg, vpq_suspend_resume.CRT_SYS_PLL_DISP3_S_R);
	IoReg_Write32(SYS_REG_SYS_DISPCLKSEL_reg, vpq_suspend_resume.CRT_SYS_DISPCLKSEL_S_R);
 	IoReg_Write32(PLL27X_REG_PLL_SSC0_reg, (vpq_suspend_resume.CRT_PLL_SSC0_S_R|_BIT0));
	mdelay(1);
	IoReg_Write32(PLL27X_REG_PLL_SSC0_reg, (vpq_suspend_resume.CRT_PLL_SSC0_S_R&~_BIT0));

	vpq_do_resume();
}

void od_do_resume(void)
{
	extern unsigned char bODInited;
	od_od_ctrl_RBUS od_ctrl_reg;
	//extern unsigned char bODTableLoaded;
	//extern char od_table_mode_store;// 0:target mode 1:delta mode -1:inverse mode

	if(od_suspend_resume.od_enable == 0){
		od_ctrl_reg.regValue = IoReg_Read32(OD_OD_CTRL_reg);
		od_suspend_resume.od_enable = od_ctrl_reg.od_en;
	}

	if(od_suspend_resume.od_enable == 0)
		return;
	
	bODInited = 0;
	if (Scaler_Init_OD()) {
#if 0
		if (bODTableLoaded && od_table_mode_store == 1)
			fwif_color_od_table_restore();
		else
			fwif_color_set_liner_od_table();
#endif
		fwif_color_od_table_17x17_transform(0, od_table_store_r, od_delta_table_resume);
		drvif_color_od_table_seperate_write(&(od_delta_table_resume[0]), 0, 0);// 0:delta mode 1:target mode(output mode) R
		fwif_color_od_table_17x17_transform(0, od_table_store_g, od_delta_table_resume);
		drvif_color_od_table_seperate_write(&(od_delta_table_resume[0]), 0, 1);// 0:delta mode 1:target mode(output mode) G
		fwif_color_od_table_17x17_transform(0, od_table_store_b, od_delta_table_resume);
		drvif_color_od_table_seperate_write(&(od_delta_table_resume[0]), 0, 2);// 0:delta mode 1:target mode(output mode) B
		/*
		if (fwif_VIP_get_Project_ID() != VIP_Project_ID_TV006) {
			if (od_suspend_resume.od_enable)
				fwif_color_set_od(TRUE);
			else
				fwif_color_set_od(FALSE);
			//Scaler_Set_OD_Bit_By_XML();
		} else
			fwif_color_set_od(1);
		*/
		if (od_suspend_resume.od_enable)
			fwif_color_set_od(TRUE);
	}
	//drvif_color_od_table_seperate_write(&(od_table_store_w[0]), 1, 4);// 0:delta mode 1:target mode(output mode) W
	//drvif_color_od(od_suspend_resume.od_enable);
	//od_ctrl_reg.regValue = IoReg_Read32(OD_OD_CTRL_reg);
	//od_ctrl_reg.od_en = od_suspend_resume.od_enable;
	//IoReg_Write32(OD_OD_CTRL_reg, (od_ctrl_reg.regValue));
}

void pcid_do_resume()
{
	fwif_color_set_POD_DATA_table(&(POD_DATA[1]));
	//
	drvif_color_pcid_enable(pcid_en); // PCID and PCID2 cannot enable at the same time
	drvif_color_pcid2_enable(pcid2_en);
	//fwif_color_set_pcid2_valuetable(pLUT);
	//fwif_color_set_pcid2_pixel_setting();
	fwif_color_set_PCID_RgnWeightSetting(&Setting);
}

extern VIP_YUV2RGB_LEVEL_SELECT m_uv_offset_level;
extern void fwif_color_set_UV_Offset_tv043(VIP_YUV2RGB_LEVEL_SELECT which_Lv);
void vpq_do_resume(void)
{
	extern unsigned char lastLUT_tbl_index;
	extern unsigned char g_bNotFirstRun_LD_Data_Compensation_NewMode_2DTable;
	extern unsigned char output_gamma_DataStored;
	DRV_Sharpness_Level Sharpness_Level;
  	//_system_setting_info *VIP_system_info_structure_table = (_system_setting_info *)Scaler_GetShareMemVirAddr(SCALERIOC_VIP_system_info_structure);
	_RPC_system_setting_info *VIP_RPC_system_info_structure_table = (_RPC_system_setting_info *)Scaler_GetShareMemVirAddr(SCALERIOC_VIP_RPC_system_info_structure);

	VIP_RPC_system_info_structure_table->HDR_info.Ctrl_Item[TV006_HDR_En] = 0;

	g_cm_need_refresh = 1;
	g_srgbForceUpdate = 1;
	g_InvGammaPowerMode = 0;
	g_IsInvGammaPowerNewMode = 0;
	g_HDR3DLUTForceWrite = 1;
	lastLUT_tbl_index = 0xff;
	g_3DLUT_Resume = 1;
	g_bNotFirstRun_LD_Data_Compensation_NewMode_2DTable = 0;
	g_pcid_en = 0;
	g_pcid2_en = 0;
	output_gamma_DataStored = 0;
	str_resume_do_picturemode=1; //TV030

	pcid_do_resume();
	fwif_color_DI_IP_ini();
	fwif_color_DI_IEGSM_ini();
	Scaler_color_set_m_nowSource(255);
	vpq_set_out_gamma();
	vpq_init_gamma();
	vpq_set_inv_gamma(0);
	fwif_color_inv_gamma_control_back(SLR_MAIN_DISPLAY, 0);
	vpq_set_gamma(1, 0);
	fwif_color_gamma_control_back(SLR_SUB_DISPLAY, 1);
	fwif_color_colorwrite_Output_gamma(Output_InvOutput_Gamma_TBL_Reserved04);
	drvif_color_inv_gamma_enable(SLR_MAIN_DISPLAY, 0, 0);
	drvif_color_inv_gamma_enable(SLR_SUB_DISPLAY, 0, 0);
	drvif_color_set_Vivid_Color_Enable(TRUE);
	fwif_color_set_ICM_table_driver_init_tv006();
	vpq_update_icm(FALSE);
	memset(&Sharpness_Level, 0, sizeof(DRV_Sharpness_Level));
	drvif_color_set_Sharpness_level(&Sharpness_Level);
	fwif_color_set_DCC_Init(SLR_MAIN_DISPLAY);
	vpq_set_3d_lut_index(0, 0);
	od_do_resume();
	drvif_Set_DM_HDR_CLK();	// enable DM & Composer clock
	hdr_resume();

#ifdef CONFIG_SNR_CLOCK_HW_ISSUE
	/* always on for snr hw issue, elieli*/
	if (drvif_color_Get_DRV_SNR_Clock(0) == 1) {
		drvif_color_Set_DRV_SNR_Clock(0);
		drvif_color_DRV_SNR_Mosquito_NR_En(0xFF);
		drvif_color_iEdgeSmooth_en(0xFF);
		drvif_color_Set_DRV_SNR_Clock(1);
	} else {
		drvif_color_DRV_SNR_Mosquito_NR_En(0xFF);
		drvif_color_iEdgeSmooth_en(0xFF);
	}
#endif //CONFIG_SNR_CLOCK_HW_ISSUE

	/* always on for UZU_Bypass_No_PwrSave hw issue, elieli*/
	//drvif_color_Access_UZU_Bypass_No_PwrSave(1, 1);

	/* set panel dither*/
	#if 0
	if (Get_DISPLAY_PANEL_MPLUS_RGBW() == TRUE || Get_DISPLAY_PANEL_BOW_RGBW() == TRUE)
		fwif_color_set_Panel_Dither(TRUE,VIP_PANEL_BIT8,VIP_DITHER_PANELTABLE_BLANCE_ROLL_15);
	else
		fwif_color_set_Panel_Dither(TRUE,VIP_PANEL_BIT10,VIP_DITHER_PANELTABLE_BLANCE_ROLL_15);
	#else
	fwif_color_set_Panel_Dither(Panel_Dither_Info.Enable, (VIP_PANEL_BIT)Panel_Dither_Info.default_vip_panel_bit, Panel_Dither_Info.nTableType);
	#endif
	
	/* demura ini */
	fwif_color_DeMura_init();
	Scaler_Set_DeMura_En(demura_suspend_resume.demura_enable);
	
	/* ST2094 Ctrl ini*/
	fwif_color_ST2094_Ctrl_Structure_ini();
	printk("%s,%d \n",__FUNCTION__,__LINE__);
	
#if defined(CONFIG_RTK_AI_DRV)
	/* NN init*/
	scalerAI_Init();
#endif

	fwif_color_set_UV_Offset_tv043(m_uv_offset_level);

#ifdef ENABLE_VIP_TABLE_CHECKSUM
/* === checksum ========== */
	extern VIP_table_crc_value vip_table_crc;
	VIP_table_crc_value vip_table_crc_now;
	fwif_color_check_VIPTable_crc(&vip_table_crc_now, fwif_color_GetShare_Memory_VIP_TABLE_Struct());
	rtd_printk(KERN_DEBUG, TAG_NAME, "[%s %d] VIP_table_checksum: %x, resume_checksum %x\n", __FILE__, __LINE__,
	vip_table_crc.checkSum, vip_table_crc_now.checkSum);

	if(vip_table_crc.checkSum != vip_table_crc_now.checkSum)
		rtd_printk(KERN_DEBUG, TAG_NAME, "[%s %d] Error! Checksum changed.\n", __FILE__, __LINE__);
/* ===================== */
#endif //ENABLE_VIP_TABLE_CHECKSUM
	//return 0;
}

static int vpq_suspend(struct device *p_dev)
{
	return 0;
}

static int vpq_resume(struct device *p_dev)
{
	return 0;
}

#ifdef CONFIG_HIBERNATION
typedef struct {
	unsigned int id;
	unsigned int size;
	void *vaddr;
} STD_SHAREMEM_SAVE;

STD_SHAREMEM_SAVE vpq_std_save[] = {
	{SCALERIOC_VIP_system_info_structure, sizeof(_system_setting_info), NULL},
	{SCALERIOC_VIP_RPC_system_info_structure, sizeof(_RPC_system_setting_info), NULL},
	{SCALERIOC_VIP_SMARTPIC_CLUS, sizeof(_clues), NULL},
	{SCALERIOC_VIP_RPC_SMARTPIC_CLUS, sizeof(_RPC_clues), NULL},
	{SCALERIOC_VIP_TABLE_STRUCT, sizeof(SLR_VIP_TABLE), NULL},
	{SCALERIOC_VIP_RPC_TABLE_STRUCT, sizeof(RPC_SLR_VIP_TABLE), NULL},
	{SCALERIOC_VIP_TABLE_CUSTOM_STRUCT, sizeof(SLR_VIP_TABLE_CUSTOM_TV001), NULL},
	{SCALERIOC_SET_GAMMA, sizeof(ISR_GAMMA_WRITE_ST), NULL},
};

static int vpq_suspend_std(struct device *p_dev)
{
	int i;
	unsigned long smAddr = 0;
	for (i = 0; i < sizeof(vpq_std_save)/sizeof(STD_SHAREMEM_SAVE); i++) {
		vpq_std_save[i].vaddr = vmalloc(vpq_std_save[i].size);
		if (vpq_std_save[i].vaddr) {
			smAddr = Scaler_GetShareMemVirAddr(vpq_std_save[i].id);
			if (smAddr) {
#ifdef CONFIG_ARM64
				memcpy_fromio(vpq_std_save[i].vaddr, (void*)smAddr, vpq_std_save[i].size);
#else
				memcpy(vpq_std_save[i].vaddr, (void*)smAddr, vpq_std_save[i].size);
#endif
			}
		}
	}

	return 0;
}

static int vpq_resume_std(struct device *p_dev)
{
	int i;
	unsigned long smAddr = 0;
	for (i = 0; i < sizeof(vpq_std_save)/sizeof(STD_SHAREMEM_SAVE); i++) {
		if (vpq_std_save[i].vaddr) {
			smAddr = Scaler_GetShareMemVirAddr(vpq_std_save[i].id);
			if (smAddr) {
#ifdef CONFIG_ARM64
				memcpy_toio((void*)smAddr, vpq_std_save[i].vaddr, vpq_std_save[i].size);
#else
				memcpy((void*)smAddr, vpq_std_save[i].vaddr, vpq_std_save[i].size);
#endif
			}
			vfree(vpq_std_save[i].vaddr);
			vpq_std_save[i].vaddr = NULL;
		}
	}
	return 0;
}
#endif //CONFIG_HIBERNATION

#endif //CONFIG_PM

#if defined(CONFIG_RTK_AI_DRV)
extern void h3ddma_set_film_buffer_addr(void);//
extern void scalerAI_SE_draw_Proc(void);
extern void drvif_i3ddma_buf_SE_capture(void);
extern unsigned char get_vt_src_cap_status(void);
//void debug_i3ddma_cap_enable(unsigned char value);// mac7p vt module no use
extern unsigned int vgip_isr_cnt;
static bool se_tsk_running_flag = FALSE;
static struct task_struct *p_se_tsk = NULL;
int sem_se_ai_flag=0;
struct semaphore sem_se_ai;
extern DRV_AI_Ctrl_table ai_ctrl;
unsigned char PQ_set_done = 0; 
static int se_tsk(void *p)//This task run se proc
{
	static unsigned int vgip_isr_cnt_pre = 0;
	//h3ddma_cap1_cap_status_RBUS h3ddma_cap1_cap_status_reg;
	od_od_ctrl_RBUS od_ctrl_reg;


	rtd_printk(KERN_DEBUG, TAG_NAME, "se_tsk()\n");

	current->flags &= ~PF_NOFREEZE;

	while (1)
	{

		static unsigned char source_pre = 255;
		unsigned char source_cur = 255;
		int nn_en=0, vt_en=0, memc_en=0;
		int signal_cnt_th = ai_ctrl.ai_global3.signal_cnt_th;//5


 #if 1 // vdec
   	_RPC_system_setting_info* RPC_system_info_structure_table = NULL;
    	unsigned char SE_rdPtr = 0;
    	unsigned char SE_wrPtr = 0;
    	unsigned char SE_status = 0;
    	RPC_system_info_structure_table = scaler_GetShare_Memory_RPC_system_setting_info_Struct();
    	if((RPC_system_info_structure_table==NULL))
    	{
    		//ROSPrintf(" Mem4 = %p\n",RPC_system_info_structure_table);
    		return -1;
    	}
#endif
		od_ctrl_reg.regValue = IoReg_Read32(OD_OD_CTRL_reg);
		if(od_ctrl_reg.dummy1802ca00_31_7>>24 & 1) nn_en = 1; // bit 31
		if(od_ctrl_reg.dummy1802ca00_31_7>>23 & 1) vt_en = 1; // bit 30
		if(od_ctrl_reg.dummy1802ca00_31_7>>22 & 1) memc_en = 1; // bit 29
		//debug_i3ddma_cap_enable(vt_en);// mac7p vt module no use
		// to prevent STR/Snapshot fail
		if (freezing(current))
		{
			try_to_freeze();
		}

		if (kthread_should_stop()){
			rtd_printk(KERN_DEBUG, TAG_NAME, "se_tsk stop!!\n");
			break;
		}
#if 1 // vdec
	 	preempt_disable();
		_rtd_hwsem_lock(SB2_HD_SEM_NEW_3_reg, SEMA_HW_SEM_3_SCPU_2);
		SE_rdPtr = RPC_system_info_structure_table->SCPU_ISRIINFO_TO_VCPU.rdPtr;
		SE_wrPtr = RPC_system_info_structure_table->SCPU_ISRIINFO_TO_VCPU.wrPtr;
		SE_status = RPC_system_info_structure_table->SCPU_ISRIINFO_TO_VCPU.pic[SE_rdPtr].status;
		_rtd_hwsem_unlock(SB2_HD_SEM_NEW_3_reg, SEMA_HW_SEM_3_SCPU_2);
		preempt_enable();

		if(down_timeout(&sem_se_ai, msecs_to_jiffies(2*1000) /*2sec*/) && SE_status != 1){ // sleep when vdec buffer empty
			//rtd_printk(KERN_EMERG, TAG_NAME, "lsy check timeout %d, status %d\n",down_timeout(&sem_se_ai, msecs_to_jiffies(2*1000)), SE_status);
			//hw_msleep(4);//need to switch
			//pr_debug("SLEP\n");
			continue;
		}
		else if(SE_status == 1)
		{
			//rtd_printk(KERN_EMERG, TAG_NAME, "lsy check start\n");
			ScalerVIP_SE_Proc();
		}
		
#else
		if(down_timeout(&sem_se_ai, msecs_to_jiffies(2*1000) /*2sec*/)) {
		//if(down_timeout(&sem_se_ai, (2*1000) /*2sec*/)) {
			continue;
		}
#endif


		if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) != _MODE_STATE_ACTIVE)
		{
			signal_cnt = 0;
		}
		else
		{
			if(signal_cnt < signal_cnt_th)
			{
				signal_cnt++;
			}
		}


		
		if((vgip_isr_cnt != vgip_isr_cnt_pre))
		{
			_RPC_system_setting_info *VIP_RPC_system_info_structure_table = (_RPC_system_setting_info *)Scaler_GetShareMemVirAddr(SCALERIOC_VIP_RPC_system_info_structure);

			vgip_isr_cnt_pre = vgip_isr_cnt;

			/* check source chaging or not */
			source_cur = VIP_RPC_system_info_structure_table->VIP_source;
			//source_cur = fwif_vip_source_check(3, NOT_BY_DISPLAY);
			if(source_cur != source_pre)
				fw_scalerip_reset_NN();

#ifdef CONFIG_RTK_8KCODEC_INTERFACE
#if defined(CONFIG_RTK_AI_DRV)
			VPQEX_rlink_AI_SeneInfo(); 
#endif
#endif

			#if 0
			// Check NN write done
			h3ddma_cap1_cap_status_reg.regValue = IoReg_Read32(H3DDMA_CAP1_Cap_Status_reg);
			if (h3ddma_cap1_cap_status_reg.cap1_cap_last_wr_flag)
			{
				//pr_emerg("vgip_isr, h3ddma_set_film_buffer_addr\n");
				h3ddma_set_film_buffer_addr();

				IoReg_Write32(H3DDMA_CAP1_Cap_Status_reg, h3ddma_cap1_cap_status_reg.regValue);
			}
			#endif
			
			if(nn_en &&
				((fwif_color_get_force_run_i3ddma_enable(SLR_MAIN_DISPLAY))||(Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_JPEG)))
			{

				if(vpq_stereo_face != AI_PQ_AP_OFF)
				{					
					scalerAI_preprocessing();
				}
			}			
			if(vt_en)
			{
				#if 0 // mac7p vt module no use
				if(get_vt_src_cap_status() == VT_SOURCE_CAP_I3DDMA_BUF) /* vt: i3ddma buf se capture */
				{			
					drvif_i3ddma_buf_SE_capture();
				}
				#endif
			}

			/* update pre source */
			source_pre = source_cur;
		}

		if(PQ_set_done)
		{
			scalerAI_SE_draw_Proc();
			PQ_set_done = 0;
		}


	}

    rtd_printk(KERN_DEBUG, TAG_NAME, "\r\n####se_tsk: exit...####\n");
    do_exit(0);
    return 0;
}



static void create_se_tsk(void)
{
    int err;

	sema_init(&sem_se_ai, 0);
	sem_se_ai_flag = 1;

	if (se_tsk_running_flag == FALSE) {
		p_se_tsk = kthread_create(se_tsk, NULL, "se_tsk");

	    if (p_se_tsk) {
			wake_up_process(p_se_tsk);
			se_tsk_running_flag = TRUE;
	    } else {
	    	err = PTR_ERR(p_se_tsk);
		rtd_printk(KERN_DEBUG, TAG_NAME, "Unable to start se_tsk (err_id = %d)./n", err);
	    }
	}
}

static void delete_se_tsk(void)
{
	int ret;
	if (se_tsk_running_flag) {
 		ret = kthread_stop(p_se_tsk);
 		if (!ret) {
 			p_se_tsk = NULL;
 			se_tsk_running_flag = FALSE;
			rtd_printk(KERN_INFO, TAG_NAME, "se_tsk thread stopped\n");
 		}
	}
}
#endif

static bool VPQ_fw_tsk_running_flag = FALSE;
static struct task_struct *p_VPQ_task = NULL;
static int VPQ_detect_tsk(void *p)
{
#if 0
    struct cpumask vsc_cpumask;
    rtd_printk(KERN_DEBUG, TAG_NAME, "avd_detect_tsk()\n");
    cpumask_clear(&vsc_cpumask);
    cpumask_set_cpu(0, &vsc_cpumask); // run task in core 0
    cpumask_set_cpu(2, &vsc_cpumask); // run task in core 2
    cpumask_set_cpu(3, &vsc_cpumask); // run task in core 3
    sched_setaffinity(0, &vsc_cpumask);
#endif
	current->flags &= ~PF_NOFREEZE;
    while (1)
    {
		msleep(10);

		//fwif_color_DI_RTNR_FRZ_ReCheck_TSK();
		
		Scaler_color_set_HDR_AutoRun_TBL();

		fwif_color_set_3dlut_table_run();
		//rtd_printk(KERN_INFO, TAG_NAME, "VPQ_detect_tsk\n");
		
 		if (freezing(current))
		{
			try_to_freeze();
		}
		if (kthread_should_stop()) {
         	break;
      	}
    }

    rtd_printk(KERN_DEBUG, TAG_NAME, "\r\n####VPQ_detect_tsk: exit...####\n");
    do_exit(0);
    return 0;
}

static void delete_VPQ_tsk(void)
{
	int ret;

	if (VPQ_fw_tsk_running_flag) {
 		ret = kthread_stop(p_VPQ_task);
 		if (!ret) {
 			p_VPQ_task = NULL;
 			VPQ_fw_tsk_running_flag = FALSE;
			rtd_printk(KERN_INFO, TAG_NAME, "VPQ_tsk thread stopped\n");
 		}
	}
}

static void create_VPQ_tsk(void)
{
	int err;

	if (VPQ_fw_tsk_running_flag == FALSE) {
		p_VPQ_task = kthread_create(VPQ_detect_tsk, NULL, "VPQ_detect_tsk");

	    if (p_VPQ_task) {
			wake_up_process(p_VPQ_task);
			VPQ_fw_tsk_running_flag = TRUE;
	    } else {
	    	err = PTR_ERR(p_VPQ_task);
	    	rtd_printk(KERN_EMERG, TAG_NAME, "Unable to start VPQ_tsk (err_id = %d)./n", err);
	    }
	}

}

bool vpq_check_array(unsigned int *arg, unsigned int *pre_arg, unsigned int len)
{
	unsigned int i;

	for(i=0;i<len;i++) {
		if(arg[i] != pre_arg[i])
			return 0;
	}
	return 1;
}

unsigned char ioctl_cmd_stop[256] = {0};
unsigned char vpq_ioctl_get_stop_run(unsigned int cmd)
{
	return (ioctl_cmd_stop[_IOC_NR(cmd)&0xff]|ioctl_cmd_stop[0]);
}

unsigned char vpq_ioctl_get_stop_run_by_idx(unsigned char cmd_idx)
{
	return ioctl_cmd_stop[cmd_idx];
}

void vpq_ioctl_set_stop_run_by_idx(unsigned char cmd_idx, unsigned char stop)
{
	ioctl_cmd_stop[cmd_idx] = stop;
}

unsigned char vpq_get_handler_bypass(void)
{
#if 0//def CONFIG_SCALER_BRING_UP
	return 1;
#endif
	return ioctl_cmd_stop[VPQ_IOC_PQ_CMD_OPEN];
}

/*******************************AUO DEMURA START*************************************/

/*******************************AUO DEMURA END*********************  ****************/

#if 1
/* for Demura hal function*/
char vpq_DeMura_Encode_128x3bit(unsigned char* in_array, unsigned char* encode_array)
{
	unsigned short i,j;
	/* 1 bloock = (R_low + R_mid + R_high) + (G_low + G_mid + G_high) + (B_low + B_mid + B_high)*/
	/* this function will finish "7 block encode", R0,G0,B0 ~ R6,G6,B6. */
	for (j=0;j<3;j++){     /* 3 channel*/
		for(i=0;i<5;i++) { /* 1 channel, 128 bit*/
			// "deMura_TBL" is 6 bit (0x3F)
			encode_array[j*16+i*3+0] = ((in_array[j*21+i*4+0]&0x3F)<<2) + ((in_array[j*21+i*4+1]&0x3F)>>4);
			encode_array[j*16+i*3+1] = ((in_array[j*21+i*4+1]&0x3F)<<4) + ((in_array[j*21+i*4+2]&0x3F)>>2);
			encode_array[j*16+i*3+2] = ((in_array[j*21+i*4+2]&0x3F)<<6) + ((in_array[j*21+i*4+3]&0x3F)>>0);
		}
		encode_array[j*16+i*3] = (in_array[j*21+i*4+0]&0x3F)<<2; // bit dummy
	}
	return 0;
}

unsigned char vpq_demura_SD_Bit_check(unsigned char *LMMH, unsigned int mode)
{
	unsigned int i;
	unsigned char shiftBit_1 = 0, shiftBit_2;
	char tmp = 0, maxV = 0, minV = 0;

	// check R channel
	if ((mode & Demura_LMMH_R_SD_check_BIT)  != 0) {
		for (i=Demura_LMMH_4ch_R_sta;i<Demura_LMMH_4ch_G_sta;i++) {
			tmp = (char)DeMura_tv006FMT_to_tv001FMT(LMMH[i]);
			if (tmp > maxV)
				maxV = tmp;
			if (tmp < minV)
				minV = tmp;
		}
	}

	// check G channel
	if ((mode & Demura_LMMH_G_SD_check_BIT)  != 0) {
		for (i=Demura_LMMH_4ch_G_sta;i<Demura_LMMH_4ch_B_sta;i++) {
			tmp = (char)DeMura_tv006FMT_to_tv001FMT(LMMH[i]);
			if (tmp > maxV)
				maxV = tmp;
			if (tmp < minV)
				minV = tmp;
		}
	}

	// check B channel
	if ((mode & Demura_LMMH_B_SD_check_BIT)  != 0) {
		for (i=Demura_LMMH_4ch_B_sta;i<Demura_LMMH_4ch_W_sta;i++) {
			tmp = (char)DeMura_tv006FMT_to_tv001FMT(LMMH[i]);
			if (tmp > maxV)
				maxV = tmp;
			if (tmp < minV)
				minV = tmp;
		}
	}

	// check W channel
	if ((mode & Demura_LMMH_W_SD_check_BIT)  != 0) {
		for (i=Demura_LMMH_4ch_W_sta;i<Demura_LMMH_4ch_CRC_sta;i++) {
			tmp = (char)DeMura_tv006FMT_to_tv001FMT(LMMH[i]);
			if (tmp > maxV)
				maxV = tmp;
			if (tmp < minV)
				minV = tmp;
		}
	}

	if (maxV > 62)
		shiftBit_1 = 2;
	else if (maxV > 31)
		shiftBit_1 = 1;
	else
		shiftBit_1 = 0;

	if (minV < (-64))
		shiftBit_2 = 2;
	else if (minV < (-32))
		shiftBit_2 = 1;
	else
		shiftBit_2 = 0;

	rtd_printk(KERN_INFO, TAG_NAME, "vpq_demura_SD_Bit_check, max=%d, min=%d, shiftBit_1=%d, shiftBit_2=%d, mode=%d \n", maxV, minV, shiftBit_1, shiftBit_2, mode);

	return ((shiftBit_1 > shiftBit_2) ? (shiftBit_1) : (shiftBit_2));

}

char vpq_demura_SD(char Val, unsigned char shiftBit)
{
	char ret_val = 0;

	if (shiftBit == 0) {
		ret_val = Val;
	} else {
		ret_val = (Val + (1<<(shiftBit-1)))>>shiftBit;
	}

	return ret_val;
}

void vpq_LMMH_demura_data_to_dma(unsigned char *LMMH,VIP_DeMura_TBL * Demura_TBL, unsigned char mode)
{
	unsigned int i,j,k, index, index_base;
	unsigned short ver_blk_num, hor_384Bit_blk_num;
	unsigned char *pDMA_tmp;
	char tmpL, tmpM1, tmpM2, tmpH;
	unsigned char scalingDown_bit = 0;
	unsigned char *DMA_8bit;

	if (Demura_TBL == NULL || LMMH == NULL) {
		rtd_printk(KERN_EMERG, TAG_NAME, "vpq_demura_data_to_dma table NULL ~~\n");
		return;
	}

	DMA_8bit = &Demura_TBL->TBL[0];
	scalingDown_bit = vpq_demura_SD_Bit_check(LMMH, Demura_LMMH_W_SD_check_BIT);
	Demura_TBL->DeMura_CTRL_TBL.demura_table_scale = scalingDown_bit;

	if (mode == 1) {
		hor_384Bit_blk_num = 69;	/* 481/7+1*/
		ver_blk_num = 271;
	} else {
		hor_384Bit_blk_num = 35;	/*241/7+1*/
		ver_blk_num = 136;
	}

	for(i =0;i<ver_blk_num;i++) {
		/* one line*/
		index = 0;
		index_base = i*Demura_LMMH_W_Size;
		for (j=0;j<hor_384Bit_blk_num;j++) {
			for(k=0;k<(deMura_7blk_Block/9);k++) {
				tmpL = (char)DeMura_tv006FMT_to_tv001FMT(LMMH[Demura_LMMH_4ch_WL_sta + index + index_base]);
				tmpM1 = (char)DeMura_tv006FMT_to_tv001FMT(LMMH[Demura_LMMH_4ch_WM1_sta + index + index_base]);
				tmpM2 = (char)DeMura_tv006FMT_to_tv001FMT(LMMH[Demura_LMMH_4ch_WM2_sta + index + index_base]);
				tmpH = (char)DeMura_tv006FMT_to_tv001FMT(LMMH[Demura_LMMH_4ch_WH_sta + index + index_base]);

				tmpL = vpq_demura_SD(tmpL, scalingDown_bit);	/* low*/
				tmpM1 = vpq_demura_SD(((tmpM1 + tmpM2)>>1), scalingDown_bit); /*Middle*/
				tmpH = vpq_demura_SD(tmpH, scalingDown_bit);	/* High */

				/* R */
				deMura_7Blk_Decode_TBL[k*9+0] = (unsigned char)tmpL;	/* low*/
				deMura_7Blk_Decode_TBL[k*9+1] = (unsigned char)tmpM1; /*Middle*/
				deMura_7Blk_Decode_TBL[k*9+2] = (unsigned char)tmpH;	/* High */

				/* G */
				deMura_7Blk_Decode_TBL[k*9+3] =(unsigned char) tmpL;	/* low*/
				deMura_7Blk_Decode_TBL[k*9+4] = (unsigned char)tmpM1; /*Middle*/
				deMura_7Blk_Decode_TBL[k*9+5] = (unsigned char)tmpH;	/* High */

				/* B */
				deMura_7Blk_Decode_TBL[k*9+6] = (unsigned char)tmpL;	/* low*/
				deMura_7Blk_Decode_TBL[k*9+7] = (unsigned char)tmpM1; /*Middle*/
				deMura_7Blk_Decode_TBL[k*9+8] = (unsigned char)tmpH;	/* High */

				index = (index+1 >= Demura_LMMH_W_Size)?(Demura_LMMH_W_Size-1):(index+1);
			}

			pDMA_tmp = DMA_8bit+(48*(i*hor_384Bit_blk_num+j));
			vpq_DeMura_Encode_128x3bit(deMura_7Blk_Decode_TBL, pDMA_tmp);
		}
	}

}
#endif

#if 1
/*========================= for INNX demura =================================*/
void vpq_INNX_Get_ShiftBit(unsigned char * shiftbit, char *pDeLut)
{
	unsigned short i,j;
	char* lut_ptr;
	short * tbl_lo;
	short max_diff_lo = 0;
	
	lut_ptr = pDeLut;
	tbl_lo = (short *)dvr_malloc_specific(271*481 * sizeof(short), GFP_DCU2_FIRST);
	if(tbl_lo == NULL)
	{
		printk("===>>>>> Get shiftbit::malloc memory size fail!!!  \n");
		return;
	}
	for( i=0; i<=270; i++ )
	{
		for( j=0; j<=480; j++ )
		{
			//tbl_lo[i*481+j] = lut_ptr[i * INNX_Demura_W16 + j];
			tbl_lo[i*481+j] = lut_ptr[i * INNX_Demura_W16 + j];
			//tbl_lo[i*481+j] = lut_ptr[(270-i) * INNX_Demura_W16 + (480-j)];
			if( j>0 && (abs( tbl_lo[i*481+j] - tbl_lo[i*481+j-1] ) > max_diff_lo) )
				max_diff_lo = abs( tbl_lo[i*481+j] - tbl_lo[i*481+j-1] );
			//fprintf( fptr_demura_dump, "%d\t", lut_ptr[i * INNX_Demura_W16 + j] );
		}
		//fprintf( fptr_demura_dump, "\n" );
	}
	//fprintf( fptr_demura_dump, "\n" );

	if( max_diff_lo >= 32 )
	{
		for( i=0; i<=270; i++ )
		{
			for( j=0; j<=480; j++ )
			{
				tbl_lo[i*481+j] = (tbl_lo[i*481+j] + 1) / 2;
			}
		}
		*shiftbit = 1;
	}
	else
		*shiftbit = 0;
	printk("===>>>>> shiftbit = %d \n",*shiftbit);
	dvr_free((void *)tbl_lo);
}

void vpq_INNX_Demura_data_to_dma(VIP_DeMura_TBL * Demura_TBL, char *pDeLut)
{
	unsigned int i,j,k, index;
	unsigned short ver_blk_num, hor_384Bit_blk_num;
	unsigned char *pDMA_tmp;
	char tmpL, tmpM, tmpH;
	unsigned char *DMA_8bit;
	unsigned short div_tmp;
	unsigned int gray_setting[5];
	unsigned char err;
	char *INNX_Demura_DeLut1;
	char *INNX_Demura_DeLut2;
	char *INNX_Demura_DeLut3;
	char *INNX_Demura_DeLut4;
	char *INNX_Demura_DeLut5;
	DRV_DeMura_CTRL_TBL *ptrCrtl=NULL;
	unsigned int count=0;
	char tmp_lmin=0,tmp_lmax=0,tmp_mmin=0,tmp_mmax=0,tmp_hmin=0,tmp_hmax=0;
	unsigned char shiftbit_L=0,shiftbit_M=0,shiftbit_H=0;
	
	if ((Demura_TBL == NULL) || (pDeLut == NULL)) {
		rtd_printk(KERN_EMERG, TAG_NAME, "vpq_INNX_Demura_data_to_dma table NULL, Demura_TBL=%p, pDeLut=%p ~~\n", Demura_TBL, pDeLut);
		return;
	}

	INNX_Demura_DeLut1 = &pDeLut[INNX_Demura_DecodeLUT_Low_sta_addr];
	INNX_Demura_DeLut2 = &pDeLut[INNX_Demura_DecodeLUT_Mid_sta_addr];
	INNX_Demura_DeLut3 = &pDeLut[INNX_Demura_DecodeLUT_High_sta_addr];
	INNX_Demura_DeLut4 = &pDeLut[INNX_Demura_DecodeLUT_4_sta_addr];
	INNX_Demura_DeLut5 = &pDeLut[INNX_Demura_DecodeLUT_5_sta_addr];

	DMA_8bit = &Demura_TBL->TBL[0];
	//Demura_TBL->DeMura_CTRL_TBL.demura_table_scale = 0;
	ptrCrtl = &Demura_TBL->DeMura_CTRL_TBL;
	vpq_INNX_Get_ShiftBit(&shiftbit_L,INNX_Demura_DeLut1);
	vpq_INNX_Get_ShiftBit(&shiftbit_M,INNX_Demura_DeLut2);
	vpq_INNX_Get_ShiftBit(&shiftbit_H,INNX_Demura_DeLut2);
	ptrCrtl->demura_table_scale = 3;
	ptrCrtl->demura_table_scale_L = 0;
	ptrCrtl->demura_table_scale_M = 0;
	ptrCrtl->demura_table_scale_H = 0;

	hor_384Bit_blk_num = 69;	/* 481/7+1*/
	ver_blk_num = 271;

	for(i =0;i<ver_blk_num;i++) {
		/* one line*/
		index = 0;
		for (j=0;j<hor_384Bit_blk_num;j++) {
			for(k=0;k<(deMura_7blk_Block/9);k++) {

				tmpL = INNX_Demura_DeLut1[i * INNX_Demura_W16 + index]>>shiftbit_L;	/* low*/
				tmpM = INNX_Demura_DeLut2[i * INNX_Demura_W16 + index]>>shiftbit_M; /*Middle*/
				tmpH = INNX_Demura_DeLut3[i * INNX_Demura_W16 + index]>>shiftbit_H;	/* High */

				{
					if((31<tmpL) || (tmpL<-32) || (31<tmpM) || (tmpM<-32) || (31<tmpH) || (tmpH<-32))
						count++;
					if(tmpL<0){
						if(tmpL<tmp_lmin)
							tmp_lmin=tmpL;
					}else{
						if(tmpL>tmp_lmax)
							tmp_lmax=tmpL;
					}
					if(tmpM<0){
						if(tmpM<tmp_mmin)
							tmp_mmin=tmpM;
					}else{
						if(tmpM>tmp_mmax)
							tmp_mmax=tmpM;
					}
					if(tmpH<0){
						if(tmpH<tmp_hmin)
							tmp_hmin=tmpH;
					}else{
						if(tmpH>tmp_hmax)
							tmp_hmax=tmpH;
					}
				}
				/* R */
				deMura_7Blk_Decode_TBL[k*9+0] = (unsigned char)tmpL;	/* low*/
				deMura_7Blk_Decode_TBL[k*9+1] = (unsigned char)tmpM; /*Middle*/
				deMura_7Blk_Decode_TBL[k*9+2] = (unsigned char)tmpH;	/* High */

				/* G */
				deMura_7Blk_Decode_TBL[k*9+3] =(unsigned char) tmpL;	/* low*/
				deMura_7Blk_Decode_TBL[k*9+4] = (unsigned char)tmpM; /*Middle*/
				deMura_7Blk_Decode_TBL[k*9+5] = (unsigned char)tmpH;	/* High */

				/* B */
				deMura_7Blk_Decode_TBL[k*9+6] = (unsigned char)tmpL;	/* low*/
				deMura_7Blk_Decode_TBL[k*9+7] = (unsigned char)tmpM; /*Middle*/
				deMura_7Blk_Decode_TBL[k*9+8] = (unsigned char)tmpH;	/* High */

				index = (index+1 >= INNX_Demura_W)?(INNX_Demura_W-1):(index+1);
			}

			pDMA_tmp = DMA_8bit+(48*(i*hor_384Bit_blk_num+j));
			vpq_DeMura_Encode_128x3bit(deMura_7Blk_Decode_TBL, pDMA_tmp);
		}
	}
	printk("\n ==>>>[demura] count=%d\n",count);
	printk("\n ===>>>[demura] tmp_lmin=%d,tmp_lmax=%d,\n",tmp_lmin,tmp_lmax);
	printk("\n ===>>>[demura] tmp_mmin=%d,tmp_mmax=%d,\n",tmp_mmin,tmp_mmax);
	printk("\n ===>>>[demura] tmp_hmin=%d,tmp_hmax=%d \n",tmp_hmin,tmp_hmax);
	
	// set control threshold table
	gray_setting[0] = INNX_Demura_gray_setting[0];
	gray_setting[1] = INNX_Demura_gray_setting[2];
	gray_setting[2] = INNX_Demura_gray_setting[3];
	gray_setting[3] = INNX_Demura_gray_setting[4];
	gray_setting[4] = INNX_Demura_gray_setting[1];

	//data check
	err = 0;
	for (i=1;i<5;i++) {
		if (gray_setting[i] <=  gray_setting[i-1]) {
			err =1;
		}
		if (err == 1) {
			rtd_printk(KERN_EMERG, TAG_NAME, "vpq_INNX_Demura threshold setting error,  lower_cutoff=%d, low_lv=%d, mid_lv=%d, high_lv=%d, high_cut=%d, use default\n",
				gray_setting[0], gray_setting[1], gray_setting[2], gray_setting[3], gray_setting[4]);
			return;
		}
	}
	// r, g, b low_cut threshold
	Demura_TBL->DeMura_CTRL_TBL.demura_r_lower_cutoff = gray_setting[0];
	Demura_TBL->DeMura_CTRL_TBL.demura_g_lower_cutoff = gray_setting[0];
	Demura_TBL->DeMura_CTRL_TBL.demura_b_lower_cutoff = gray_setting[0];
	// r, g, b low level threshold
	Demura_TBL->DeMura_CTRL_TBL.demura_r_l_level = gray_setting[1];
	Demura_TBL->DeMura_CTRL_TBL.demura_g_l_level = gray_setting[1];
	Demura_TBL->DeMura_CTRL_TBL.demura_b_l_level = gray_setting[1];
	// r, g, b mid level threshold
	Demura_TBL->DeMura_CTRL_TBL.demura_r_m_level = gray_setting[2];
	Demura_TBL->DeMura_CTRL_TBL.demura_g_m_level = gray_setting[2];
	Demura_TBL->DeMura_CTRL_TBL.demura_b_m_level = gray_setting[2];
	// r, g, b high level threshold
	Demura_TBL->DeMura_CTRL_TBL.demura_r_h_level = gray_setting[3];
	Demura_TBL->DeMura_CTRL_TBL.demura_g_h_level = gray_setting[3];
	Demura_TBL->DeMura_CTRL_TBL.demura_b_h_level = gray_setting[3];
	// r, g, b high_cut threshold
	Demura_TBL->DeMura_CTRL_TBL.demura_r_upper_cutoff = gray_setting[4];
	Demura_TBL->DeMura_CTRL_TBL.demura_g_upper_cutoff = gray_setting[4];
	Demura_TBL->DeMura_CTRL_TBL.demura_b_upper_cutoff = gray_setting[4];

	// r, g, b dvi_fac_L  threshold
	div_tmp = (65536 / (gray_setting[1] -gray_setting[0]))>>2;
	Demura_TBL->DeMura_CTRL_TBL.r_div_factor_l = div_tmp;
	Demura_TBL->DeMura_CTRL_TBL.g_div_factor_l = div_tmp;
	Demura_TBL->DeMura_CTRL_TBL.b_div_factor_l = div_tmp;
	// r, g, b dvi_fac_L_M  threshold
	div_tmp = (65536 / (gray_setting[2] -gray_setting[1]))>>2;
	Demura_TBL->DeMura_CTRL_TBL.r_div_factor_l_m = div_tmp;
	Demura_TBL->DeMura_CTRL_TBL.g_div_factor_l_m = div_tmp;
	Demura_TBL->DeMura_CTRL_TBL.b_div_factor_l_m = div_tmp;
	// r, g, b dvi_fac_M_H  threshold
	div_tmp = (65536 / (gray_setting[3] -gray_setting[2]))>>2;
	Demura_TBL->DeMura_CTRL_TBL.r_div_factor_m_h = div_tmp;
	Demura_TBL->DeMura_CTRL_TBL.g_div_factor_m_h = div_tmp;
	Demura_TBL->DeMura_CTRL_TBL.b_div_factor_m_h = div_tmp;
	// r, g, b dvi_fac_M_H  threshold
	div_tmp = (65536 / (gray_setting[4] -gray_setting[3]))>>2;
	Demura_TBL->DeMura_CTRL_TBL.r_div_factor_h = div_tmp;
	Demura_TBL->DeMura_CTRL_TBL.g_div_factor_h = div_tmp;
	Demura_TBL->DeMura_CTRL_TBL.b_div_factor_h = div_tmp;

}


/*========================= for INNX demura =================================*/
#endif

unsigned char Check_signed_Bit(unsigned short Demura_12bit)
{
	return (unsigned char)((Demura_12bit>>11) & 0x01);
}

short Demura_12bit_to_6bit(unsigned short Demura_12bit,unsigned char scale_level)
{
	short tmp6bit;
	unsigned char shift_bit;
	
	shift_bit = 2 + scale_level ;	
	tmp6bit = (short)CSOT_Demura_Convert_SignedData(Demura_12bit);
	tmp6bit =  tmp6bit>>shift_bit;
	/*if(tmp6bit >= 0)
		tmp6bit = (tmp6bit>demura_mac6_pos_clip)?demura_mac6_pos_clip:tmp6bit;
	else
		tmp6bit = (tmp6bit<demura_mac6_neg_clip)?demura_mac6_neg_clip:tmp6bit;
	*/

	
	if(Check_signed_Bit(Demura_12bit))
	{
		tmp6bit = (short)CSOT_Demura_Convert_SignedData(Demura_12bit);
		tmp6bit = tmp6bit>>shift_bit;
		tmp6bit = (tmp6bit<demura_mac6_neg_clip)?demura_mac6_neg_clip:tmp6bit;
	}
	
	else
	{
		tmp6bit = Demura_12bit>>shift_bit;
		tmp6bit = (tmp6bit>demura_mac6_pos_clip)?demura_mac6_pos_clip:tmp6bit;
	}
	
	return tmp6bit;
}



void Crtl_table_get_from_demura(DRV_DeMura_CTRL_TBL *ptrCrtl,unsigned char *ptrDemura)
{
	unsigned char blk_h,blk_v;
	unsigned short div_tmp;
	
	//nova
	blk_h = ptrDemura[0x0c];
	blk_v = ptrDemura[0x0d];
	if(blk_h == 0 && blk_v == 0)
		ptrCrtl->demura_block_size = 2;//4x4
	else if(blk_h == 1 && blk_v == 1)
		ptrCrtl->demura_block_size = 0; //8x8
	else if(blk_h == 2 && blk_v == 2)
		ptrCrtl->demura_block_size = 1;// 16x16
	else
		ptrCrtl->demura_block_size = 0;

	ptrCrtl->demura_r_lower_cutoff = (((unsigned short)ptrDemura[0x18])<<8) + ptrDemura[0x19];
	ptrCrtl->demura_r_upper_cutoff = (((unsigned short)ptrDemura[0x1a])<<8) + ptrDemura[0x1b];
	ptrCrtl->demura_g_lower_cutoff = ptrCrtl->demura_r_lower_cutoff;
	ptrCrtl->demura_g_upper_cutoff = ptrCrtl->demura_r_upper_cutoff;
	ptrCrtl->demura_b_lower_cutoff = ptrCrtl->demura_r_lower_cutoff;
	ptrCrtl->demura_b_upper_cutoff = ptrCrtl->demura_r_upper_cutoff;

	ptrCrtl->demura_r_l_level = (((unsigned short)ptrDemura[0x28])<<8) + ptrDemura[0x29];
	ptrCrtl->demura_r_m_level = (((unsigned short)ptrDemura[0x2a])<<8) + ptrDemura[0x2b];
	ptrCrtl->demura_r_h_level = (((unsigned short)ptrDemura[0x2c])<<8) + ptrDemura[0x2d];
	ptrCrtl->demura_g_l_level = ptrCrtl->demura_r_l_level;
	ptrCrtl->demura_g_m_level = ptrCrtl->demura_r_m_level;
	ptrCrtl->demura_g_h_level = ptrCrtl->demura_r_h_level;
	ptrCrtl->demura_b_l_level = ptrCrtl->demura_r_l_level;
	ptrCrtl->demura_b_m_level = ptrCrtl->demura_r_m_level;
	ptrCrtl->demura_b_h_level = ptrCrtl->demura_r_h_level;

	printk("\n\n blk_size=%d,cutoff_l=%d,cutoff_h=%d,level_l=%d,level_m=%d,level_h=%d \n\n",
		ptrCrtl->demura_block_size,ptrCrtl->demura_r_lower_cutoff,ptrCrtl->demura_r_upper_cutoff,
		ptrCrtl->demura_r_l_level,ptrCrtl->demura_r_m_level,ptrCrtl->demura_r_h_level);
	
	
	// r, g, b dvi_fac_L  threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_l_level -ptrCrtl->demura_r_lower_cutoff))>>2;
	ptrCrtl->r_div_factor_l = div_tmp;
	ptrCrtl->g_div_factor_l = div_tmp;
	ptrCrtl->b_div_factor_l = div_tmp;
	// r, g, b dvi_fac_L_M	threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_m_level -ptrCrtl->demura_r_l_level))>>2;
	ptrCrtl->r_div_factor_l_m = div_tmp;
	ptrCrtl->g_div_factor_l_m = div_tmp;
	ptrCrtl->b_div_factor_l_m = div_tmp;
	// r, g, b dvi_fac_M_H	threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_h_level -ptrCrtl->demura_r_m_level))>>2;
	ptrCrtl->r_div_factor_m_h = div_tmp;
	ptrCrtl->g_div_factor_m_h = div_tmp;
	ptrCrtl->b_div_factor_m_h = div_tmp;
	// r, g, b dvi_fac_M_H	threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_upper_cutoff -ptrCrtl->demura_r_h_level))>>2;
	ptrCrtl->r_div_factor_h = div_tmp;
	ptrCrtl->g_div_factor_h = div_tmp;
	ptrCrtl->b_div_factor_h = div_tmp;
	
}

void Get_max_min_demura_value(unsigned short *Maxvalue,unsigned short *Minvalue,unsigned short Inputvalue)
{
	if(Inputvalue >= 0x800)
	{
		*Minvalue = (*Minvalue<Inputvalue)?*Minvalue:Inputvalue;
	}
	else
	{
		*Maxvalue = (*Maxvalue>Inputvalue)?*Maxvalue:Inputvalue;
	}
}

unsigned char Decide_shift_bit(unsigned short Maxvalue,unsigned short Minvalue)
{
	unsigned char scale_bit;
	short _minvalue;

	_minvalue = (short)CSOT_Demura_Convert_SignedData(Minvalue);
	
	//printk("\n\n PERminvalue=%d,\n",_minvalue);
	//printk("\n\n PERMaxvalue=%d,\n",Maxvalue);
	Maxvalue = Maxvalue/4;
	_minvalue = _minvalue/4;
	
	if(Maxvalue<=demura_mac6_pos_clip)
		scale_bit = 0;
	else if(Maxvalue <= demura_mac6_pos_clip*2)
		scale_bit = 1;
	else if(Maxvalue <= demura_mac6_pos_clip*4)
		scale_bit = 2;
	else //if(Maxvalue <= demura_mac6_pos_clip*3)
		scale_bit = 3;

	//printk("\n\n minvalue=%d,\n",_minvalue);
	//printk("\n\n Maxvalue=%d,\n",Maxvalue);
	if(_minvalue >= demura_mac6_neg_clip)
		scale_bit = (scale_bit>0)?scale_bit:0;
	else if(_minvalue >= demura_mac6_neg_clip*2)
		scale_bit = (scale_bit>1)?scale_bit:1;
	else if(_minvalue >= demura_mac6_neg_clip*4)
		scale_bit = (scale_bit>2)?scale_bit:2;
	else
		scale_bit = 3;

	return scale_bit;
}

void Scale_Shift_bit(unsigned char *LMMH,unsigned char *scale_low,unsigned char *scale_mid,unsigned char *scale_high,unsigned char mode)
{
	unsigned int i,j,k, index;
	unsigned short ver_blk_num, hor_384Bit_blk_num;
	unsigned short DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2,tmp1,tmp2;
	unsigned int Lmmh_Demura_table_index_offset;
	static unsigned short Demura12bitP0_max,Demura12bitP0_min, Demura12bitP1_max, Demura12bitP1_min,Demura12bitP2_max,Demura12bitP2_min;
	//unsigned char scale_low_bit=0,scale_mid_bit=0,scale_high_bit=0;

	if(LMMH == NULL) {
		return;
	}
	
	if (mode == 1) {
		hor_384Bit_blk_num = 69;	 /* 481/7+1*/
		ver_blk_num = 271;
	} else {//mac6 skyworth use 241x136
		hor_384Bit_blk_num = 35;	 /*241/7+1*/
		ver_blk_num = 136;
	}
		
	DemuraData12bitP0 = 0x0000;
	DemuraData12bitP1 = 0x0000;
	DemuraData12bitP2 = 0x0000;
	Demura12bitP0_max = 0x0000;
	Demura12bitP1_max = 0x0000;
	Demura12bitP2_max = 0x0000;
	Demura12bitP0_min = 0xfff;
	Demura12bitP1_min = 0xfff;
	Demura12bitP2_min = 0xfff;
	tmp1 = 0x0000;
	tmp2 = 0x0000;
	Lmmh_Demura_table_index_offset = 0;
	for(i =0;i<ver_blk_num;i++) 
	{// i : 0~271
		/* one line*/
		index = 0;
		for (j=0;j<hor_384Bit_blk_num;j++) 
		{
			for(k=0;k<(deMura_7blk_Block/9);k++) 
			{

				if(index < Demura_LMMH_W_Size)
				{
					if(i == 0 && index == 0)
					{
						tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START];
						tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+1];
						DemuraData12bitP0 = (tmp1<<4) + (tmp2>>4);
						
						tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+1];
						tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+2];
						DemuraData12bitP1 = ((tmp1&0x000F)<<8) + tmp2;
						
						tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+3];
						tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+4];
						DemuraData12bitP2 = (tmp1<<4) + (tmp2>>4);
					}
					else
					{
						Lmmh_Demura_table_index_offset = (i*Demura_LMMH_W_Size+index+1)/2*4+(i*Demura_LMMH_W_Size+index)/2*5;
						if(Lmmh_Demura_table_index_offset % 9 == 0)
						{
							tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset];
							tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+1];
							DemuraData12bitP0 = (tmp1<<4) + (tmp2>>4);
							
							tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+1];
							tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+2];
							DemuraData12bitP1 = ((tmp1&0x000F)<<8) + tmp2;

							
							tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+3];
							tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+4];
							DemuraData12bitP2 = (tmp1<<4) + (tmp2>>4);
						}
						else if(Lmmh_Demura_table_index_offset % 9 == 4)
						{
							tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset];
							tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+1];
							DemuraData12bitP0 = ((tmp1&0x000F)<<8) + tmp2;
							
							tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+2];
							tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+3];
							DemuraData12bitP1 = (tmp1<<4) + (tmp2>>4);

							
							tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+3];
							tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+4];
							DemuraData12bitP2 = ((tmp1&0x000F)<<8) + tmp2;
						}
					}	 
					Get_max_min_demura_value(&Demura12bitP0_max,&Demura12bitP0_min,DemuraData12bitP0);
					Get_max_min_demura_value(&Demura12bitP1_max,&Demura12bitP1_min,DemuraData12bitP1);
					Get_max_min_demura_value(&Demura12bitP2_max,&Demura12bitP2_min,DemuraData12bitP2);
					
				}

				index = (index+1 >= Demura_LMMH_W_Size)?(Demura_LMMH_W_Size-1):(index+1);
			}
		}
	}
	
	*scale_low = Decide_shift_bit(Demura12bitP0_max,Demura12bitP0_min);
	printk("[scale level]P0_MAX=0x%x,P0_MIN=0x%x,scale_l=%d,\n",Demura12bitP0_max,Demura12bitP0_min,*scale_low);
	*scale_mid = Decide_shift_bit(Demura12bitP1_max,Demura12bitP1_min);
	printk("[scale level]P1_MAX=0x%x,P1_MIN=0x%x,scale_m=%d,\n",Demura12bitP1_max,Demura12bitP1_min,*scale_mid);
	*scale_high = Decide_shift_bit(Demura12bitP2_max,Demura12bitP2_min);
	printk("[scale level]P2_MAX=0x%x,P2_MIN=0x%x,scale_h=%d,\n",Demura12bitP2_max,Demura12bitP2_min,*scale_high);
}

void Check_scale_level_protect(DRV_DeMura_CTRL_TBL *ptrCrtl)
{
	unsigned char L,M,H;

	if(ptrCrtl == NULL)
		return;
	printk("[Demura] before: scale level l=%d,m=%d,h=%d \n",ptrCrtl->demura_table_scale_L,ptrCrtl->demura_table_scale_M,ptrCrtl->demura_table_scale_H);

	L = ptrCrtl->demura_table_scale_L;
	M = ptrCrtl->demura_table_scale_M;
	H = ptrCrtl->demura_table_scale_H;
	
	if(L>2)
		L=2;
	if(M>2)
		M=2;
	if(H>2)
		H=2;

	if(L - M > 1)
		L = L -1;
	else if(M - L > 1)
		M = M -1;
	if(M - H > 1)
		M = M -1;
	else if(H - M > 1)
		H = H -1;

	ptrCrtl->demura_table_scale_L = L;
	ptrCrtl->demura_table_scale_M = M;
	ptrCrtl->demura_table_scale_H = H;
	printk("[Demura] after: scale level l=%d,m=%d,h=%d \n",ptrCrtl->demura_table_scale_L,ptrCrtl->demura_table_scale_M,ptrCrtl->demura_table_scale_H);
		
}

void CSOT_LMMH_demura_data_to_dma(unsigned char *LMMH,VIP_DeMura_TBL * Demura_TBL, unsigned char mode)//fill : Demura_TBL
{
		unsigned int i,j,k, index;
		//unsigned int column_pos, index_arr;
		unsigned short ver_blk_num, hor_384Bit_blk_num;
		unsigned short DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2,tmp1,tmp2;
		unsigned int Lmmh_Demura_table_index_offset;
		unsigned char *pDMA_tmp;
		short tmpL, tmpM1, tmpH;
		//int fcic_tmp;//juwen, 180528
		//unsigned char scalingDown_bit_fcic[3] = {0};
		unsigned char *DMA_8bit;
		DRV_DeMura_CTRL_TBL *ptrCrtl=NULL;
		
		if (Demura_TBL == NULL || LMMH == NULL) {
			   // printf( "vpq_demura_data_to_dma table NULL ~~\n");
		//rtd_printk(KERN_ERR, TAG_NAME, "vpq_demura_data_to_dma table NULL ~~\n");
				return;
		}

		ptrCrtl = &Demura_TBL->DeMura_CTRL_TBL;
		Crtl_table_get_from_demura(ptrCrtl,LMMH);
		DMA_8bit = &Demura_TBL->TBL[0];
		
		Scale_Shift_bit(LMMH,&ptrCrtl->demura_table_scale_L,&ptrCrtl->demura_table_scale_M,&ptrCrtl->demura_table_scale_H,mode);
		ptrCrtl->demura_table_scale = 3;
		
		if (mode == 1) {
				hor_384Bit_blk_num = 69;	 /* 481/7+1*/
				ver_blk_num = 271;
		} else {//mac6 skyworth use 241x136
				hor_384Bit_blk_num = 35;	 /*241/7+1*/
				ver_blk_num = 136;
		}
		
	DemuraData12bitP0 = 0x0000;
	DemuraData12bitP1 = 0x0000;
	DemuraData12bitP2 = 0x0000;
	tmp1 = 0x0000;
	tmp2 = 0x0000;
	Lmmh_Demura_table_index_offset = 0;
	for(i =0;i<ver_blk_num;i++) 
	{// i : 0~271
		/* one line*/
		index = 0;
		for (j=0;j<hor_384Bit_blk_num;j++) 
		{
			for(k=0;k<(deMura_7blk_Block/9);k++) 
			{

				if(index < Demura_LMMH_W_Size)
				{
					if(i == 0 && index == 0)
					{
						tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START];
						tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+1];
						DemuraData12bitP0 = (tmp1<<4) + (tmp2>>4);
						
						tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+1];
						tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+2];
						DemuraData12bitP1 = ((tmp1&0x000F)<<8) + tmp2;
						
						tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+3];
						tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+4];
						DemuraData12bitP2 = (tmp1<<4) + (tmp2>>4);
					}
					else
					{
						Lmmh_Demura_table_index_offset = (i*Demura_LMMH_W_Size+index+1)/2*4+(i*Demura_LMMH_W_Size+index)/2*5;
						if(Lmmh_Demura_table_index_offset % 9 == 0)
						{
							tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset];
							tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+1];
							DemuraData12bitP0 = (tmp1<<4) + (tmp2>>4);
							
							tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+1];
							tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+2];
							DemuraData12bitP1 = ((tmp1&0x000F)<<8) + tmp2;

							
							tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+3];
							tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+4];
							DemuraData12bitP2 = (tmp1<<4) + (tmp2>>4);
						}
						else if(Lmmh_Demura_table_index_offset % 9 == 4)
						{
							tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset];
							tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+1];
							DemuraData12bitP0 = ((tmp1&0x000F)<<8) + tmp2;
							
							tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+2];
							tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+3];
							DemuraData12bitP1 = (tmp1<<4) + (tmp2>>4);

							
							tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+3];
							tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+4];
							DemuraData12bitP2 = ((tmp1&0x000F)<<8) + tmp2;
						}
					}	 
					
					tmpL = Demura_12bit_to_6bit(DemuraData12bitP0,ptrCrtl->demura_table_scale_L);
					tmpM1 = Demura_12bit_to_6bit(DemuraData12bitP1,ptrCrtl->demura_table_scale_M);
					tmpH = Demura_12bit_to_6bit(DemuraData12bitP2,ptrCrtl->demura_table_scale_H);
					
					if(i==0 && (index < 14))
					{
						printk("\n index=%d,p0=%x,p1=%x,p2=%x \n",index,DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2);
						printk("\n tmpL=%d,tmpM1=%d,tmpH=%d \n",tmpL,tmpM1,tmpH);
					}
					
					//if(i==1 && index <=6)
					{
						//printf("index=%d,p0=%x,p1=%x,p2=%x \n",index,DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2);
						//printf("tmpL=%d,tmpM1=%d,tmpH=%d \n",tmpL,tmpM1,tmpH);
					}
					/* R */
					deMura_7Blk_Decode_TBL[k*9+0] = ((unsigned char)tmpL)&0x3f; /* low*/
					deMura_7Blk_Decode_TBL[k*9+1] = ((unsigned char)tmpM1)&0x3f; /*Middle*/
					deMura_7Blk_Decode_TBL[k*9+2] = ((unsigned char)tmpH)&0x3f; /* High */

					/* G */
					deMura_7Blk_Decode_TBL[k*9+3] =((unsigned char)tmpL)&0x3f; /* low*/
					deMura_7Blk_Decode_TBL[k*9+4] = ((unsigned char)tmpM1)&0x3f; /*Middle*/
					deMura_7Blk_Decode_TBL[k*9+5] = ((unsigned char)tmpH)&0x3f; /* High */

					/* B */
					deMura_7Blk_Decode_TBL[k*9+6] = ((unsigned char)tmpL)&0x3f; /* low*/
					deMura_7Blk_Decode_TBL[k*9+7] = ((unsigned char)tmpM1)&0x3f; /*Middle*/
					deMura_7Blk_Decode_TBL[k*9+8] = ((unsigned char)tmpH)&0x3f; /* High */
					
				}

				index = (index+1 >= Demura_LMMH_W_Size)?(Demura_LMMH_W_Size-1):(index+1);
			}

			pDMA_tmp = DMA_8bit+(48*(i*hor_384Bit_blk_num+j));
			vpq_DeMura_Encode_128x3bit(deMura_7Blk_Decode_TBL, pDMA_tmp);
						
		}

	}
		
	//printk("\n p0=%x,p1=%x,p2=%x \n",DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2);
}

void CSOT_43D01_Crtl_table_get_from_demura(DRV_DeMura_CTRL_TBL *ptrCrtl)
{
	unsigned short div_tmp;

	printk("\n\n[Demura] CSOT_43D01_Crtl_table_get_from_demura \n\n");
	
	ptrCrtl->demura_block_size = 0; //8x8

	ptrCrtl->demura_r_lower_cutoff = 24;
	ptrCrtl->demura_r_upper_cutoff = 1020;
	ptrCrtl->demura_g_lower_cutoff = ptrCrtl->demura_r_lower_cutoff;
	ptrCrtl->demura_g_upper_cutoff = ptrCrtl->demura_r_upper_cutoff;
	ptrCrtl->demura_b_lower_cutoff = ptrCrtl->demura_r_lower_cutoff;
	ptrCrtl->demura_b_upper_cutoff = ptrCrtl->demura_r_upper_cutoff;

	ptrCrtl->demura_r_l_level = 100;
	ptrCrtl->demura_r_m_level = 240;
	ptrCrtl->demura_r_h_level = 900;
	ptrCrtl->demura_g_l_level = ptrCrtl->demura_r_l_level;
	ptrCrtl->demura_g_m_level = ptrCrtl->demura_r_m_level;
	ptrCrtl->demura_g_h_level = ptrCrtl->demura_r_h_level;
	ptrCrtl->demura_b_l_level = ptrCrtl->demura_r_l_level;
	ptrCrtl->demura_b_m_level = ptrCrtl->demura_r_m_level;
	ptrCrtl->demura_b_h_level = ptrCrtl->demura_r_h_level;
	
	
	// r, g, b dvi_fac_L  threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_l_level -ptrCrtl->demura_r_lower_cutoff))>>2;
	ptrCrtl->r_div_factor_l = div_tmp;
	ptrCrtl->g_div_factor_l = div_tmp;
	ptrCrtl->b_div_factor_l = div_tmp;
	// r, g, b dvi_fac_L_M	threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_m_level -ptrCrtl->demura_r_l_level))>>2;
	ptrCrtl->r_div_factor_l_m = div_tmp;
	ptrCrtl->g_div_factor_l_m = div_tmp;
	ptrCrtl->b_div_factor_l_m = div_tmp;
	// r, g, b dvi_fac_M_H	threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_h_level -ptrCrtl->demura_r_m_level))>>2;
	ptrCrtl->r_div_factor_m_h = div_tmp;
	ptrCrtl->g_div_factor_m_h = div_tmp;
	ptrCrtl->b_div_factor_m_h = div_tmp;
	// r, g, b dvi_fac_M_H	threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_upper_cutoff -ptrCrtl->demura_r_h_level))>>2;
	ptrCrtl->r_div_factor_h = div_tmp;
	ptrCrtl->g_div_factor_h = div_tmp;
	ptrCrtl->b_div_factor_h = div_tmp;
	
}


void CSOT_43D01_Scale_Shift_bit(unsigned char *LMMH,unsigned char *scale_low,unsigned char *scale_mid,unsigned char *scale_high,unsigned char mode)
{
	unsigned int i,j,k, index;
	unsigned short ver_blk_num, hor_384Bit_blk_num;
	unsigned short DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2,tmp1,tmp2;
	unsigned int Lmmh_Demura_table_index_offset;
	static unsigned short Demura12bitP0_max,Demura12bitP0_min, Demura12bitP1_max, Demura12bitP1_min,Demura12bitP2_max,Demura12bitP2_min;
	unsigned char ii=0,jj=0;
	//static unsigned char kk=0;
		
	//printk("\n\n[Demura] CSOT_43D01_Scale_Shift_bit 1\n\n");

	if(LMMH == NULL) {
		return;
	}

	//printk("\n\n[Demura] CSOT_43D01_Scale_Shift_bit 2\n\n");
	/*
	for(i=36; i<56; i++)
	{
		printk("LMMH[%d]= 0x%x  ",i,(unsigned int)(LMMH[i]));
			
	}

	for(i=637390; i<637444; i++)
	{
		printk("LMMH[%d]= 0x%x  ",i,(unsigned int)(LMMH[i]));
			
	}
	*/
	
	if (mode == 1) {
		hor_384Bit_blk_num = 69;	 /* 481/7+1*/
		ver_blk_num = 271;
	} else {//mac6 skyworth use 241x136
		hor_384Bit_blk_num = 35;	 /*241/7+1*/
		ver_blk_num = 136;
	}
		
	DemuraData12bitP0 = 0x0000;
	DemuraData12bitP1 = 0x0000;
	DemuraData12bitP2 = 0x0000;
	Demura12bitP0_max = 0x0000;
	Demura12bitP1_max = 0x0000;
	Demura12bitP2_max = 0x0000;
	Demura12bitP0_min = 0xfff;
	Demura12bitP1_min = 0xfff;
	Demura12bitP2_min = 0xfff;
	tmp1 = 0x0000;
	tmp2 = 0x0000;
	Lmmh_Demura_table_index_offset = 0;
	for(i =0;i<ver_blk_num;i++) 
	{// i : 0~271
		/* one line*/
		index = 0;
		for (j=0;j<hor_384Bit_blk_num;j++) 
		{
			for(k=0;k<(deMura_7blk_Block/9);k++) 
			{

				if(index < Demura_LMMH_W_Size)
				{
					ii = index/10;
					jj = index%10;
					if(jj%2 == 0)
					{
						Lmmh_Demura_table_index_offset = (jj/2 * 3)+(ii*16)+(i*CSOT_43D01_DEMURA_PLANE_LINE_OFFSET);
						tmp1 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE1_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE1_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP0 = tmp1 + ((tmp2&0x000f) << 8);
						
						tmp1 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE2_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE2_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP1 = tmp1 + ((tmp2&0x000f) << 8);
						
						tmp1 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE3_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE3_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP2 = tmp1 + ((tmp2&0x000f) << 8);
					}
					else if(jj%2 == 1)
					{
						Lmmh_Demura_table_index_offset = ((jj-1)/2 * 3)+(ii*16)+1+(i*CSOT_43D01_DEMURA_PLANE_LINE_OFFSET);
						tmp1 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE1_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE1_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP0 = ((tmp1>>4)&0x000f) + (tmp2<<4);
						
						tmp1 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE2_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE2_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP1 = ((tmp1>>4)&0x000f) + (tmp2<<4);
						
						tmp1 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE3_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE3_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP2 = ((tmp1>>4)&0x000f) + (tmp2<<4);
					}
					/*
					if(DemuraData12bitP0 == 0x7ff && kk < 10)
					{
						kk++;
						printk("\n *************i=%d,index=%d,tmp1=%x,temp2=%x,\n",i,index,
							LMMH[CSOT_43D01_DEMURA_TABLE_PLANE1_ADDR_START+Lmmh_Demura_table_index_offset],LMMH[CSOT_43D01_DEMURA_TABLE_PLANE1_ADDR_START+Lmmh_Demura_table_index_offset+1]);
					}
					*/
					Get_max_min_demura_value(&Demura12bitP0_max,&Demura12bitP0_min,DemuraData12bitP0);
					Get_max_min_demura_value(&Demura12bitP1_max,&Demura12bitP1_min,DemuraData12bitP1);
					Get_max_min_demura_value(&Demura12bitP2_max,&Demura12bitP2_min,DemuraData12bitP2);	
				}
				index = (index+1 >= Demura_LMMH_W_Size)?(Demura_LMMH_W_Size-1):(index+1);
			}
		}
	}
	
	*scale_low = Decide_shift_bit(Demura12bitP0_max,Demura12bitP0_min);
	printk("[43D01 scale level]P0_MAX=0x%x,P0_MIN=0x%x,scale_l=%d,\n",Demura12bitP0_max,Demura12bitP0_min,*scale_low);
	*scale_mid = Decide_shift_bit(Demura12bitP1_max,Demura12bitP1_min);
	printk("[43D01 scale level]P1_MAX=0x%x,P1_MIN=0x%x,scale_m=%d,\n",Demura12bitP1_max,Demura12bitP1_min,*scale_mid);
	*scale_high = Decide_shift_bit(Demura12bitP2_max,Demura12bitP2_min);
	printk("[43D01 scale level]P2_MAX=0x%x,P2_MIN=0x%x,scale_h=%d,\n",Demura12bitP2_max,Demura12bitP2_min,*scale_high);
}

void CSOT_43D01_LMH_demura_to_dma(unsigned char *LMMH,VIP_DeMura_TBL * Demura_TBL, unsigned char mode)
{
		unsigned int i,j,k, index;
		//unsigned int column_pos, index_arr;
		unsigned short ver_blk_num, hor_384Bit_blk_num;
		unsigned short DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2,tmp1,tmp2;
		unsigned int Lmmh_Demura_table_index_offset;
		unsigned char *pDMA_tmp;
		short tmpL, tmpM1, tmpH;
		//int fcic_tmp;//juwen, 180528
		//unsigned char scalingDown_bit_fcic[3] = {0};
		unsigned char *DMA_8bit;
		DRV_DeMura_CTRL_TBL *ptrCrtl=NULL;
		unsigned char ii=0,jj=0;

		//printk("\n\n[demura] CSOT_43D01_LMH_demura_to_dma \n\n");
		/*
		for(i=36; i<56; i++)
		{
			printk("LMMH[%d]= 0x%x  ",i,(unsigned int)(LMMH[i]));
			
		}
		*/
		
		if (Demura_TBL == NULL || LMMH == NULL) {
			   // printf( "vpq_demura_data_to_dma table NULL ~~\n");
		//rtd_printk(KERN_ERR, TAG_NAME, "vpq_demura_data_to_dma table NULL ~~\n");
				return;
		}

		ptrCrtl = &Demura_TBL->DeMura_CTRL_TBL;
		CSOT_43D01_Crtl_table_get_from_demura(ptrCrtl);
		DMA_8bit = &Demura_TBL->TBL[0];

		CSOT_43D01_Scale_Shift_bit(LMMH,&ptrCrtl->demura_table_scale_L,&ptrCrtl->demura_table_scale_M,&ptrCrtl->demura_table_scale_H,mode);
		ptrCrtl->demura_table_scale = 3;
		
		if (mode == 1) {
				hor_384Bit_blk_num = 69;	 /* 481/7+1*/
				ver_blk_num = 271;
		} else {//mac6 skyworth use 241x136
				hor_384Bit_blk_num = 35;	 /*241/7+1*/
				ver_blk_num = 136;
		}
		
	DemuraData12bitP0 = 0x0000;
	DemuraData12bitP1 = 0x0000;
	DemuraData12bitP2 = 0x0000;
	tmp1 = 0x0000;
	tmp2 = 0x0000;
	Lmmh_Demura_table_index_offset = 0;
	for(i =0;i<ver_blk_num;i++) 
	{// i : 0~271
		/* one line*/
		index = 0;
		for (j=0;j<hor_384Bit_blk_num;j++) 
		{
			for(k=0;k<(deMura_7blk_Block/9);k++) 
			{

				if(index < Demura_LMMH_W_Size)
				{
					ii = index/10;
					jj = index%10;
					if(jj%2 == 0)
					{
						Lmmh_Demura_table_index_offset = (jj/2 * 3)+(ii*16)+(i*CSOT_43D01_DEMURA_PLANE_LINE_OFFSET);
						tmp1 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE1_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE1_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP0 = tmp1 + ((tmp2&0x000f) << 8);
						
						tmp1 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE2_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE2_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP1 = tmp1 + ((tmp2&0x000f) << 8);
						
						tmp1 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE3_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE3_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP2 = tmp1 + ((tmp2&0x000f) << 8);
					}
					else if(jj%2 == 1)
					{
						Lmmh_Demura_table_index_offset = ((jj-1)/2 * 3)+(ii*16)+1+(i*CSOT_43D01_DEMURA_PLANE_LINE_OFFSET);
						tmp1 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE1_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE1_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP0 = ((tmp1>>4)&0x000f) + (tmp2<<4);
						
						tmp1 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE2_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE2_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP1 = ((tmp1>>4)&0x000f) + (tmp2<<4);
						
						tmp1 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE3_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_43D01_DEMURA_TABLE_PLANE3_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP2 = ((tmp1>>4)&0x000f) + (tmp2<<4);
					}
					tmpL = Demura_12bit_to_6bit(DemuraData12bitP0,ptrCrtl->demura_table_scale_L);
					tmpM1 = Demura_12bit_to_6bit(DemuraData12bitP1,ptrCrtl->demura_table_scale_M);
					tmpH = Demura_12bit_to_6bit(DemuraData12bitP2,ptrCrtl->demura_table_scale_H);

					if(i==0 && (index < 14))
					{
						printk("\n *********Panel 43 !!!************ \n");
						printk("\n index=%d,p0=%x,p1=%x,p2=%x \n",index,DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2);
						printk("\n tmpL=%d,tmpM1=%d,tmpH=%d \n",tmpL,tmpM1,tmpH);
					}
					
					//if(i==1 && index <=6)
					{
						//printf("index=%d,p0=%x,p1=%x,p2=%x \n",index,DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2);
						//printf("tmpL=%d,tmpM1=%d,tmpH=%d \n",tmpL,tmpM1,tmpH);
					}
					/* R */
					deMura_7Blk_Decode_TBL[k*9+0] = ((unsigned char)tmpL)&0x3f; /* low*/
					deMura_7Blk_Decode_TBL[k*9+1] = ((unsigned char)tmpM1)&0x3f; /*Middle*/
					deMura_7Blk_Decode_TBL[k*9+2] = ((unsigned char)tmpH)&0x3f; /* High */

					/* G */
					deMura_7Blk_Decode_TBL[k*9+3] =((unsigned char)tmpL)&0x3f; /* low*/
					deMura_7Blk_Decode_TBL[k*9+4] = ((unsigned char)tmpM1)&0x3f; /*Middle*/
					deMura_7Blk_Decode_TBL[k*9+5] = ((unsigned char)tmpH)&0x3f; /* High */

					/* B */
					deMura_7Blk_Decode_TBL[k*9+6] = ((unsigned char)tmpL)&0x3f; /* low*/
					deMura_7Blk_Decode_TBL[k*9+7] = ((unsigned char)tmpM1)&0x3f; /*Middle*/
					deMura_7Blk_Decode_TBL[k*9+8] = ((unsigned char)tmpH)&0x3f; /* High */
					
					//if(i==0 && j==0&& k==0)
					{
						//unsigned char jj;
						//for(jj=0;jj<9;jj++)
						//printk("deMura_7Blk_Decode_TBL[jj=%d]=%x \n",jj,deMura_7Blk_Decode_TBL[jj]);
					}
				}

				index = (index+1 >= Demura_LMMH_W_Size)?(Demura_LMMH_W_Size-1):(index+1);
			}

			pDMA_tmp = DMA_8bit+(48*(i*hor_384Bit_blk_num+j));
			vpq_DeMura_Encode_128x3bit(deMura_7Blk_Decode_TBL, pDMA_tmp);
						
		}

	}

	//printk("\n p0=%x,p1=%x,p2=%x \n",DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2);
}

unsigned char Himax_Decide_shift_bit(short Maxvalue,short Minvalue)
{
	unsigned char scale_bit;
	
	//printk("\n\n Minvalue=%d,\n",Minvalue);
	//printk("\n\n Maxvalue=%d,\n",Maxvalue);
	Maxvalue = Maxvalue/4;
	Minvalue = Minvalue/4;
	
	if(Maxvalue<=demura_mac6_pos_clip)
		scale_bit = 0;
	else if(Maxvalue <= demura_mac6_pos_clip*2)
		scale_bit = 1;
	else if(Maxvalue <= demura_mac6_pos_clip*4)
		scale_bit = 2;
	else //if(Maxvalue <= demura_mac6_pos_clip*3)
		scale_bit = 3;

	//printk("\n\n minvalue/4 =%d,\n",Minvalue);
	//printk("\n\n Maxvalue/4 =%d,\n",Maxvalue);
	if(Minvalue >= demura_mac6_neg_clip)
		scale_bit = (scale_bit>0)?scale_bit:0;
	else if(Minvalue >= demura_mac6_neg_clip*2)
		scale_bit = (scale_bit>1)?scale_bit:1;
	else if(Minvalue >= demura_mac6_neg_clip*4)
		scale_bit = (scale_bit>2)?scale_bit:2;
	else
		scale_bit = 3;

	return scale_bit;
}


void Get_Himax_max_min_demura_value(short *Maxvalue,short *Minvalue,short Inputvalue)
{
	if(Inputvalue >= *Maxvalue)
	{
		*Maxvalue = Inputvalue; 
	}
	if(Inputvalue < *Minvalue)
	{
		*Minvalue = Inputvalue; 
	}
	
}


short Himax_Demura_12bit_to_6bit(short Demura_12bit,unsigned char scale_level)
{
	short tmp6bit;
	unsigned char shift_bit;
	
	shift_bit = 2 + scale_level ;	

	if(Demura_12bit < 0)
	{
		tmp6bit = Demura_12bit>>shift_bit;
		tmp6bit = (tmp6bit<demura_mac6_neg_clip)?demura_mac6_neg_clip:tmp6bit;
	}
	
	else
	{
		tmp6bit = Demura_12bit>>shift_bit;
		tmp6bit = (tmp6bit>demura_mac6_pos_clip)?demura_mac6_pos_clip:tmp6bit;
	}
	
	return tmp6bit;
}

void Himax_Crtl_table_get_from_demura(DRV_DeMura_CTRL_TBL *ptrCrtl,unsigned char *ptrDemura)
{
	unsigned short div_tmp;
	
	printk("===>>>[Himax_Demura_TBL]Enter Himax_Crtl_table_get_from_demura processing\n");
	ptrCrtl->demura_block_size = 0; //8x8
	
	ptrCrtl->demura_r_lower_cutoff = (((unsigned short)ptrDemura[0x60])<<4) + ((ptrDemura[0x61])&0x000F);
	ptrCrtl->demura_r_upper_cutoff = (((unsigned short)ptrDemura[0x66])<<4) + (ptrDemura[0x67]&0x000F);
	
	printk("l_cutoff=%d h cutoff=%d\n",ptrCrtl->demura_r_lower_cutoff,ptrCrtl->demura_r_upper_cutoff);

	ptrCrtl->demura_r_lower_cutoff = ptrCrtl->demura_r_lower_cutoff >> 2;
	ptrCrtl->demura_r_upper_cutoff = ptrCrtl->demura_r_upper_cutoff>>2;
	
	if(ptrCrtl->demura_r_upper_cutoff > 1023)
		ptrCrtl->demura_r_upper_cutoff = 1023;

	
	ptrCrtl->demura_r_l_level = ((((unsigned short)ptrDemura[0x3E])&0x000F)<<8) + ptrDemura[0x35];
	ptrCrtl->demura_r_m_level = ((((unsigned short)ptrDemura[0x3E])>>4)<<8) + ptrDemura[0x36];
	ptrCrtl->demura_r_h_level = ((((unsigned short)ptrDemura[0x3F])&0x000F)<<8) + ptrDemura[0x37];
	ptrCrtl->demura_r_l_level = ptrCrtl->demura_r_l_level >> 2;
	ptrCrtl->demura_r_m_level = ptrCrtl->demura_r_m_level >> 2;
	ptrCrtl->demura_r_h_level = ptrCrtl->demura_r_h_level >> 2;

	
	if(ptrCrtl->demura_r_lower_cutoff >= ptrCrtl->demura_r_l_level)
		ptrCrtl->demura_r_lower_cutoff = ptrCrtl->demura_r_l_level -1;
	if(ptrCrtl->demura_r_h_level >= ptrCrtl->demura_r_upper_cutoff)
		ptrCrtl->demura_r_upper_cutoff = ptrCrtl->demura_r_h_level+1;

	
	ptrCrtl->demura_g_lower_cutoff = ptrCrtl->demura_r_lower_cutoff;
	ptrCrtl->demura_g_upper_cutoff = ptrCrtl->demura_r_upper_cutoff;
	ptrCrtl->demura_b_lower_cutoff = ptrCrtl->demura_r_lower_cutoff;
	ptrCrtl->demura_b_upper_cutoff = ptrCrtl->demura_r_upper_cutoff;

	

	printk("\n 11 blk_size=%d,cutoff_l=%d,cutoff_h=%d,level_l=%d,level_m=%d,level_h=%d \n\n",
		ptrCrtl->demura_block_size,ptrCrtl->demura_r_lower_cutoff,ptrCrtl->demura_r_upper_cutoff,
		ptrCrtl->demura_r_l_level,ptrCrtl->demura_r_m_level,ptrCrtl->demura_r_h_level);

	
	//ptrCrtl->demura_r_l_level = 100;
	//ptrCrtl->demura_r_m_level = 240;
	//ptrCrtl->demura_r_h_level = 900;
	ptrCrtl->demura_g_l_level = ptrCrtl->demura_r_l_level;
	ptrCrtl->demura_g_m_level = ptrCrtl->demura_r_m_level;
	ptrCrtl->demura_g_h_level = ptrCrtl->demura_r_h_level;
	ptrCrtl->demura_b_l_level = ptrCrtl->demura_r_l_level;
	ptrCrtl->demura_b_m_level = ptrCrtl->demura_r_m_level;
	ptrCrtl->demura_b_h_level = ptrCrtl->demura_r_h_level;
	printk("\n 22 blk_size=%d,cutoff_l=%d,cutoff_h=%d,level_l=%d,level_m=%d,level_h=%d \n\n",
		ptrCrtl->demura_block_size,ptrCrtl->demura_r_lower_cutoff,ptrCrtl->demura_r_upper_cutoff,
		ptrCrtl->demura_r_l_level,ptrCrtl->demura_r_m_level,ptrCrtl->demura_r_h_level);
	
	
	// r, g, b dvi_fac_L  threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_l_level -ptrCrtl->demura_r_lower_cutoff))>>2;
	ptrCrtl->r_div_factor_l = div_tmp;
	ptrCrtl->g_div_factor_l = div_tmp;
	ptrCrtl->b_div_factor_l = div_tmp;
	// r, g, b dvi_fac_L_M	threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_m_level -ptrCrtl->demura_r_l_level))>>2;
	ptrCrtl->r_div_factor_l_m = div_tmp;
	ptrCrtl->g_div_factor_l_m = div_tmp;
	ptrCrtl->b_div_factor_l_m = div_tmp;
	// r, g, b dvi_fac_M_H	threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_h_level -ptrCrtl->demura_r_m_level))>>2;
	ptrCrtl->r_div_factor_m_h = div_tmp;
	ptrCrtl->g_div_factor_m_h = div_tmp;
	ptrCrtl->b_div_factor_m_h = div_tmp;
	// r, g, b dvi_fac_M_H	threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_upper_cutoff -ptrCrtl->demura_r_h_level))>>2;
	ptrCrtl->r_div_factor_h = div_tmp;
	ptrCrtl->g_div_factor_h = div_tmp;
	ptrCrtl->b_div_factor_h = div_tmp;
	
}


void Himax_shift_bit(unsigned char *LMMH,unsigned char *scale_low,unsigned char *scale_mid,unsigned char *scale_high,unsigned char mode)
{
	
	unsigned int i,j,k, index;
	unsigned short ver_blk_num, hor_384Bit_blk_num;
    short DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2,tmp1,tmp2;
	unsigned int Lmmh_Demura_table_index_offset;
	static short Demura12bitP0_max,Demura12bitP0_min, Demura12bitP1_max, Demura12bitP1_min,Demura12bitP2_max,Demura12bitP2_min;
	//unsigned char scale_low_bit=0,scale_mid_bit=0,scale_high_bit=0;
	printk("===>>>[Himax_Demura_TBL]Enter Himax_shift_bit processing\n");

	if(LMMH == NULL) {
		return;
	}
	
	if (mode == 1) {
		hor_384Bit_blk_num = 69;	 /* 481/7+1*/
		ver_blk_num = 271;
	} else {//mac6 skyworth use 241x136
		hor_384Bit_blk_num = 35;	 /*241/7+1*/
		ver_blk_num = 136;
	}
		
	DemuraData12bitP0 = 0x0000;
	DemuraData12bitP1 = 0x0000;
	DemuraData12bitP2 = 0x0000;
	Demura12bitP0_max = 0x0000;
	Demura12bitP1_max = 0x0000;
	Demura12bitP2_max = 0x0000;
	Demura12bitP0_min = 0x0000;
	Demura12bitP1_min = 0x0000;
	Demura12bitP2_min = 0x0000;
	tmp1 = 0x0000;
	tmp2 = 0x0000;
	Lmmh_Demura_table_index_offset = 0;
	for(i =0;i<ver_blk_num;i++) 
	{// i : 0~271
		/* one line*/
		index = 0;
		for (j=0;j<hor_384Bit_blk_num;j++) 
		{
			for(k=0;k<(deMura_7blk_Block/9);k++) 
			{

				if(index < Himax_Demura_LMMH_W_Size)
				{
					  if(index%2 == 0)
					{						
						Lmmh_Demura_table_index_offset = (index/2)*3;
						
						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+0)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+0)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP0 = (((tmp2&0x000F)<<8) + tmp1)-0x800;

						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+1)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+1)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP1 = (((tmp2&0x000F)<<8) + tmp1)-0x800;

						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+2)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+2)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP2 = (((tmp2&0x000F)<<8) + tmp1)-0x800;
					}

					else 
					{							
						Lmmh_Demura_table_index_offset = ((index-1)/2)*3;
					
						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+0)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+0)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+2];
						DemuraData12bitP0 = ((tmp2<<4) + (tmp1>>4))-0x800;
						
						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+1)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+1)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+2];
						DemuraData12bitP1 = ((tmp2<<4) + (tmp1>>4))-0x800;
						
						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+2)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+2)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+2];
						DemuraData12bitP2 = ((tmp2 << 4) + (tmp1>>4))-0x800;
						
					}

					
					Get_Himax_max_min_demura_value(&Demura12bitP0_max,&Demura12bitP0_min,DemuraData12bitP0);
					Get_Himax_max_min_demura_value(&Demura12bitP1_max,&Demura12bitP1_min,DemuraData12bitP1);
					Get_Himax_max_min_demura_value(&Demura12bitP2_max,&Demura12bitP2_min,DemuraData12bitP2);
					
				}

					index = (index+1 >= Himax_Demura_LMMH_W_Size)?(Himax_Demura_LMMH_W_Size-1):(index+1);
				#if 0
					
					rid_index_a = 481;	//271x484 to 271x481,have to select 3 index abandon
					rid_index_b = 482;
					rid_index_c = 483;
					index = index + 1;
					if((index == rid_index_a) && (index == rid_index_b) && (index == rid_index_c))
					{
						index = index +1;
						if((index == rid_index_b))
						{
							index = index +1;
						}
						if(index == rid_index_c) 
						{		
							index = index + 1;
						}
						if((index+1) >= Himax_Demura_LMMH_W_Size)
						{
							index = Himax_Demura_LMMH_W_Size - 1;
						}
					}
				#endif
			}
		}
	}
	
	
	*scale_low = Himax_Decide_shift_bit(Demura12bitP0_max,Demura12bitP0_min);
	printk("[scale level]P0_MAX=%d,P0_MIN=%d,scale_l=%d,\n",Demura12bitP0_max,Demura12bitP0_min,*scale_low);
	*scale_mid = Himax_Decide_shift_bit(Demura12bitP1_max,Demura12bitP1_min);
	printk("[scale level]P1_MAX=%d,P1_MIN=%d,scale_m=%d,\n",Demura12bitP1_max,Demura12bitP1_min,*scale_mid);
	*scale_high = Himax_Decide_shift_bit(Demura12bitP2_max,Demura12bitP2_min);
	printk("[scale level]P2_MAX=%d,P2_MIN=%d,scale_h=%d,\n",Demura12bitP2_max,Demura12bitP2_min,*scale_high);
}



void Himax_LMMH_demura_to_dma(unsigned char *LMMH,VIP_DeMura_TBL * Demura_TBL, unsigned char mode)//fill : Demura_TBL
{
		unsigned int i,j,k, index;
		//unsigned int column_pos, index_arr;
		unsigned short ver_blk_num, hor_384Bit_blk_num;
		 short DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2,tmp1,tmp2;
		unsigned int Lmmh_Demura_table_index_offset;
		unsigned char *pDMA_tmp;
		short tmpL, tmpM1, tmpH;
		//int fcic_tmp;//juwen, 180528
		//unsigned char scalingDown_bit_fcic[3] = {0};
		unsigned char *DMA_8bit;
		DRV_DeMura_CTRL_TBL *ptrCrtl=NULL;
		printk("===>>>[Himax_Demura_TBL]Enter Himax_LMMH_demura_to_dma processing\n");
		//for(i=512; i<526; i++)
		{
			//printk("LMMH[%d]= 0x%x  ",i,(unsigned int)(LMMH[i]));
			//if(i%16==0)
			{
				//printk("\n");
			}
		}
		if (Demura_TBL == NULL || LMMH == NULL) {
			   // printf( "vpq_demura_data_to_dma table NULL ~~\n");
		//rtd_printk(KERN_ERR, TAG_NAME, "vpq_demura_data_to_dma table NULL ~~\n");
				return;
		}

		ptrCrtl = &Demura_TBL->DeMura_CTRL_TBL;
		Himax_Crtl_table_get_from_demura(ptrCrtl,LMMH);
		DMA_8bit = &Demura_TBL->TBL[0];
		
		Himax_shift_bit(LMMH,&ptrCrtl->demura_table_scale_L,&ptrCrtl->demura_table_scale_M,&ptrCrtl->demura_table_scale_H,mode);
		ptrCrtl->demura_table_scale = 3;
		
		if (mode == 1) {
				hor_384Bit_blk_num = 69;	 /* 481/7+1*/
				ver_blk_num = 271;
		} else {//mac6 skyworth use 241x136
				hor_384Bit_blk_num = 35;	 /*241/7+1*/
				ver_blk_num = 136;
		}
		
	DemuraData12bitP0 = 0x0000;
	DemuraData12bitP1 = 0x0000;
	DemuraData12bitP2 = 0x0000;
	tmp1 = 0x0000;
	tmp2 = 0x0000;
	Lmmh_Demura_table_index_offset = 0;
	
	for(i =0;i<ver_blk_num;i++) 
	{// i : 0~271
		/* one line*/
		index = 0;
		for (j=0;j<hor_384Bit_blk_num;j++) // 0 ~ 69
		{				
			for(k=0;k<(deMura_7blk_Block/9);k++) //0 ~ 7
			{
				if(index < Himax_Demura_LMMH_W_Size)
				{										
					 if(index%2 == 0)
					{						
						Lmmh_Demura_table_index_offset = (index/2)*3;
						
						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+0)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+0)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP0 = (((tmp2&0x000F)<<8) + tmp1)-0x800;

						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+1)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+1)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP1 = (((tmp2&0x000F)<<8) + tmp1)-0x800;

						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+2)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+2)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP2 = (((tmp2&0x000F)<<8) + tmp1)-0x800;
					}

					else 
					{							
						Lmmh_Demura_table_index_offset = ((index-1)/2)*3;
					
						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+0)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+0)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+2];
						DemuraData12bitP0 = ((tmp2<<4) + (tmp1>>4))-0x800;
						
						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+1)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+1)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+2];
						DemuraData12bitP1 = ((tmp2<<4) + (tmp1>>4))-0x800;
						
						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+2)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+2)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+2];
						DemuraData12bitP2 = ((tmp2 << 4) + (tmp1>>4))-0x800;
						
					}
					
					tmpL = Himax_Demura_12bit_to_6bit(DemuraData12bitP0,ptrCrtl->demura_table_scale_L);
					tmpM1 = Himax_Demura_12bit_to_6bit(DemuraData12bitP1,ptrCrtl->demura_table_scale_M);
					tmpH = Himax_Demura_12bit_to_6bit(DemuraData12bitP2,ptrCrtl->demura_table_scale_H);

					if(i==0 && (index < 6))
					{
						printk("\n *********Panel Himax !!!************ \n");
						printk("\n i=%d,index=%d,p0=%x,p1=%x,p2=%x \n",i,index,DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2);
						printk("\n tmpL=%d,tmpM1=%d,tmpH=%d \n",tmpL,tmpM1,tmpH);
					}
					
					if((i==270) && (index>476) &&(index <= 484))
					{
						printk("\n *********Panel Himax !!!************ \n");
						printk("\n i=%d,index=%d,p0=%x,p1=%x,p2=%x \n",i,index,DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2);
						printk("\n tmpL=%d,tmpM1=%d,tmpH=%d \n",tmpL,tmpM1,tmpH);
					}
					/* R */
					deMura_7Blk_Decode_TBL[k*9+0] = ((unsigned char)tmpL)&0x3f; /* low*/
					deMura_7Blk_Decode_TBL[k*9+1] = ((unsigned char)tmpM1)&0x3f; /*Middle*/
					deMura_7Blk_Decode_TBL[k*9+2] = ((unsigned char)tmpH)&0x3f; /* High */
					
					/* G */
					deMura_7Blk_Decode_TBL[k*9+3] =((unsigned char)tmpL)&0x3f; /* low*/
					deMura_7Blk_Decode_TBL[k*9+4] = ((unsigned char)tmpM1)&0x3f; /*Middle*/
					deMura_7Blk_Decode_TBL[k*9+5] = ((unsigned char)tmpH)&0x3f; /* High */
					
					/* B */
					deMura_7Blk_Decode_TBL[k*9+6] = ((unsigned char)tmpL)&0x3f; /* low*/
					deMura_7Blk_Decode_TBL[k*9+7] = ((unsigned char)tmpM1)&0x3f; /*Middle*/
					deMura_7Blk_Decode_TBL[k*9+8] = ((unsigned char)tmpH)&0x3f; /* High */
				}
				
				index = (index+1 >= Himax_Demura_LMMH_W_Size)?(Himax_Demura_LMMH_W_Size-1):(index+1);
				#if 0
				
				rid_index_a = 481;	//271x484 to 271x481,have to select 3 index abandon
				rid_index_b = 482;
				rid_index_c = 483;
				index = index + 1;
				if((index == rid_index_a) && (index == rid_index_b) && (index == rid_index_c))
				{
					index = index +1;
					if((index == rid_index_b))
					{
						index = index +1;
					}
					if(index == rid_index_c) 
					{		
						index = index + 1;
					}
					if((index+1) >= Himax_Demura_LMMH_W_Size)
					{
						index = Himax_Demura_LMMH_W_Size - 1;
					}
				}
				#endif
				
			}

				pDMA_tmp = DMA_8bit+(48*(i*hor_384Bit_blk_num+j));
				vpq_DeMura_Encode_128x3bit(deMura_7Blk_Decode_TBL, pDMA_tmp);
				
						
		}

	}
		
	//printk("\n p0=%x,p1=%x,p2=%x \n",DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2);
}


void CSOT_MONO_Crtl_table_get_from_demura(DRV_DeMura_CTRL_TBL *ptrCrtl)
{
	unsigned short div_tmp;

	printk("[Demura]===>>>Enter CSOT_MONO_Crtl_table_get_from_demura \n\n");
	
	ptrCrtl->demura_block_size = 0; //8x8

	ptrCrtl->demura_r_lower_cutoff = 24;
	ptrCrtl->demura_r_upper_cutoff = 1020;
	ptrCrtl->demura_g_lower_cutoff = ptrCrtl->demura_r_lower_cutoff;
	ptrCrtl->demura_g_upper_cutoff = ptrCrtl->demura_r_upper_cutoff;
	ptrCrtl->demura_b_lower_cutoff = ptrCrtl->demura_r_lower_cutoff;
	ptrCrtl->demura_b_upper_cutoff = ptrCrtl->demura_r_upper_cutoff;

	ptrCrtl->demura_r_l_level = 100;
	ptrCrtl->demura_r_m_level = 240;
	ptrCrtl->demura_r_h_level = 900;
	ptrCrtl->demura_g_l_level = ptrCrtl->demura_r_l_level;
	ptrCrtl->demura_g_m_level = ptrCrtl->demura_r_m_level;
	ptrCrtl->demura_g_h_level = ptrCrtl->demura_r_h_level;
	ptrCrtl->demura_b_l_level = ptrCrtl->demura_r_l_level;
	ptrCrtl->demura_b_m_level = ptrCrtl->demura_r_m_level;
	ptrCrtl->demura_b_h_level = ptrCrtl->demura_r_h_level;
	
	
	// r, g, b dvi_fac_L  threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_l_level -ptrCrtl->demura_r_lower_cutoff))>>2;
	ptrCrtl->r_div_factor_l = div_tmp;
	ptrCrtl->g_div_factor_l = div_tmp;
	ptrCrtl->b_div_factor_l = div_tmp;
	// r, g, b dvi_fac_L_M	threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_m_level -ptrCrtl->demura_r_l_level))>>2;
	ptrCrtl->r_div_factor_l_m = div_tmp;
	ptrCrtl->g_div_factor_l_m = div_tmp;
	ptrCrtl->b_div_factor_l_m = div_tmp;
	// r, g, b dvi_fac_M_H	threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_h_level -ptrCrtl->demura_r_m_level))>>2;
	ptrCrtl->r_div_factor_m_h = div_tmp;
	ptrCrtl->g_div_factor_m_h = div_tmp;
	ptrCrtl->b_div_factor_m_h = div_tmp;
	// r, g, b dvi_fac_M_H	threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_upper_cutoff -ptrCrtl->demura_r_h_level))>>2;
	ptrCrtl->r_div_factor_h = div_tmp;
	ptrCrtl->g_div_factor_h = div_tmp;
	ptrCrtl->b_div_factor_h = div_tmp;
	
}


void CSOT_MONO_Scale_Shift_bit(unsigned char *LMMH,unsigned char *scale_low,unsigned char *scale_mid,unsigned char *scale_high,unsigned char mode)
{
	unsigned int i,j,k, index;
	unsigned short ver_blk_num, hor_384Bit_blk_num;
	unsigned short DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2,tmp1,tmp2;
	unsigned int Lmmh_Demura_table_index_offset;
	static unsigned short Demura12bitP0_max,Demura12bitP0_min, Demura12bitP1_max, Demura12bitP1_min,Demura12bitP2_max,Demura12bitP2_min;
	unsigned char ii=0,jj=0;
	//static unsigned char kk=0;
		
	printk("\n[Demura] ===>>> Enter CSOT_MONO_Scale_Shift_bit \n");

	if(LMMH == NULL) {
		return;
	}

	//printk("\n\n[Demura] CSOT_43D01_Scale_Shift_bit 2\n\n");
	/*
	for(i=272; i<308; i++)
	{
		printk("LMMH[%d]= 0x%x  ",i,(unsigned int)(LMMH[i]));
			
	}

	for(i=637390; i<637444; i++)
	{
		printk("LMMH[%d]= 0x%x  ",i,(unsigned int)(LMMH[i]));
			
	}
	*/
	
	if (mode == 1) {
		hor_384Bit_blk_num = 69;	 /* 481/7+1*/
		ver_blk_num = 271;
	} else {//mac6 skyworth use 241x136
		hor_384Bit_blk_num = 35;	 /*241/7+1*/
		ver_blk_num = 136;
	}
		
	DemuraData12bitP0 = 0x0000;
	DemuraData12bitP1 = 0x0000;
	DemuraData12bitP2 = 0x0000;
	Demura12bitP0_max = 0x0000;
	Demura12bitP1_max = 0x0000;
	Demura12bitP2_max = 0x0000;
	Demura12bitP0_min = 0xfff;
	Demura12bitP1_min = 0xfff;
	Demura12bitP2_min = 0xfff;
	tmp1 = 0x0000;
	tmp2 = 0x0000;
	Lmmh_Demura_table_index_offset = 0;
	for(i =0;i<ver_blk_num;i++) 
	{// i : 0~271
		/* one line*/
		index = 0;
		for (j=0;j<hor_384Bit_blk_num;j++) 
		{
			for(k=0;k<(deMura_7blk_Block/9);k++) 
			{

				if(index < Demura_LMMH_W_Size)
				{
					ii = index/10;
					jj = index%10;
					if(jj%2 == 0)
					{
						Lmmh_Demura_table_index_offset = (jj/2 * 3)+(ii*16)+(i*CSOT_MONO_DEMURA_PLANE_LINE_OFFSET);
						tmp1 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE1_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE1_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP0 = tmp1 + ((tmp2&0x000f) << 8);
						
						tmp1 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE2_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE2_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP1 = tmp1 + ((tmp2&0x000f) << 8);
						
						tmp1 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE3_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE3_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP2 = tmp1 + ((tmp2&0x000f) << 8);
					}
					else if(jj%2 == 1)
					{
						Lmmh_Demura_table_index_offset = ((jj-1)/2 * 3)+(ii*16)+1+(i*CSOT_MONO_DEMURA_PLANE_LINE_OFFSET);
						tmp1 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE1_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE1_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP0 = ((tmp1>>4)&0x000f) + (tmp2<<4);
						
						tmp1 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE2_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE2_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP1 = ((tmp1>>4)&0x000f) + (tmp2<<4);
						
						tmp1 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE3_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE3_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP2 = ((tmp1>>4)&0x000f) + (tmp2<<4);
					}
					/*
					if(DemuraData12bitP0 == 0x7ff && kk < 10)
					{
						kk++;
						printk("\n *************i=%d,index=%d,tmp1=%x,temp2=%x,\n",i,index,
							LMMH[CSOT_43D01_DEMURA_TABLE_PLANE1_ADDR_START+Lmmh_Demura_table_index_offset],LMMH[CSOT_43D01_DEMURA_TABLE_PLANE1_ADDR_START+Lmmh_Demura_table_index_offset+1]);
					}
					*/
					Get_max_min_demura_value(&Demura12bitP0_max,&Demura12bitP0_min,DemuraData12bitP0);
					Get_max_min_demura_value(&Demura12bitP1_max,&Demura12bitP1_min,DemuraData12bitP1);
					Get_max_min_demura_value(&Demura12bitP2_max,&Demura12bitP2_min,DemuraData12bitP2);	
				}
				index = (index+1 >= Demura_LMMH_W_Size)?(Demura_LMMH_W_Size-1):(index+1);
			}
		}
	}
	
	*scale_low = Decide_shift_bit(Demura12bitP0_max,Demura12bitP0_min);
	printk("[MONO scale level]P0_MAX=0x%x,P0_MIN=0x%x,scale_l=%d,\n",Demura12bitP0_max,Demura12bitP0_min,*scale_low);
	*scale_mid = Decide_shift_bit(Demura12bitP1_max,Demura12bitP1_min);
	printk("[MONO scale level]P1_MAX=0x%x,P1_MIN=0x%x,scale_m=%d,\n",Demura12bitP1_max,Demura12bitP1_min,*scale_mid);
	*scale_high = Decide_shift_bit(Demura12bitP2_max,Demura12bitP2_min);
	printk("[MONO scale level]P2_MAX=0x%x,P2_MIN=0x%x,scale_h=%d,\n",Demura12bitP2_max,Demura12bitP2_min,*scale_high);
}

void CSOT_MONO_LMH_demura_to_dma(unsigned char *LMMH,VIP_DeMura_TBL * Demura_TBL, unsigned char mode)
{
	unsigned int i,j,k, index;
	//unsigned int column_pos, index_arr;
	unsigned short ver_blk_num, hor_384Bit_blk_num;
	unsigned short DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2,tmp1,tmp2;
	unsigned int Lmmh_Demura_table_index_offset;
	unsigned char *pDMA_tmp;
	short tmpL, tmpM1, tmpH;
	//int fcic_tmp;//juwen, 180528
	//unsigned char scalingDown_bit_fcic[3] = {0};
	unsigned char *DMA_8bit;
	DRV_DeMura_CTRL_TBL *ptrCrtl=NULL;
	unsigned char ii=0,jj=0;

	printk("\n===>>>Enter CSOT_MONO_LMH_demura_to_dma \n\n");

	if (Demura_TBL == NULL || LMMH == NULL) {
		// printf( "vpq_demura_data_to_dma table NULL ~~\n");
		//rtd_printk(KERN_ERR, TAG_NAME, "vpq_demura_data_to_dma table NULL ~~\n");
		return;
	}

	for(i=272; i<=308; i++)
	{
		printk("LMMH[%d]= 0x%x  ",i,(unsigned int)(LMMH[i]));
	}
	for(i=637632; i<=637664; i++)
	{
		printk("LMMH[%d]= 0x%x  ",i,(unsigned int)(LMMH[i]));
	}

	ptrCrtl = &Demura_TBL->DeMura_CTRL_TBL;
	CSOT_MONO_Crtl_table_get_from_demura(ptrCrtl);
	DMA_8bit = &Demura_TBL->TBL[0];

	CSOT_MONO_Scale_Shift_bit(LMMH,&ptrCrtl->demura_table_scale_L,&ptrCrtl->demura_table_scale_M,&ptrCrtl->demura_table_scale_H,mode);
	ptrCrtl->demura_table_scale = 3;	
	ptrCrtl->demura_table_scale_H = 0;

	if (mode == 1) {
		hor_384Bit_blk_num = 69;	 /* 481/7+1*/
		ver_blk_num = 271;
	} else {//mac6 skyworth use 241x136
		hor_384Bit_blk_num = 35;	 /*241/7+1*/
		ver_blk_num = 136;
	}

	DemuraData12bitP0 = 0x0000;
	DemuraData12bitP1 = 0x0000;
	DemuraData12bitP2 = 0x0000;
	tmp1 = 0x0000;
	tmp2 = 0x0000;
	Lmmh_Demura_table_index_offset = 0;
	for(i =0;i<ver_blk_num;i++) 
	{// i : 0~271
		/* one line*/
		index = 0;
		for (j=0;j<hor_384Bit_blk_num;j++) 
		{
			for(k=0;k<(deMura_7blk_Block/9);k++) 
			{

				if(index < Demura_LMMH_W_Size)
				{
					ii = index/10;
					jj = index%10;
					if(jj%2 == 0)
					{
						Lmmh_Demura_table_index_offset = (jj/2 * 3)+(ii*16)+(i*CSOT_MONO_DEMURA_PLANE_LINE_OFFSET);
						tmp1 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE1_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE1_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP0 = tmp1 + ((tmp2&0x000f) << 8);
						
						tmp1 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE2_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE2_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP1 = tmp1 + ((tmp2&0x000f) << 8);
						
						tmp1 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE3_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE3_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP2 = tmp1 + ((tmp2&0x000f) << 8);
					}
					else if(jj%2 == 1)
					{
						Lmmh_Demura_table_index_offset = ((jj-1)/2 * 3)+(ii*16)+1+(i*CSOT_MONO_DEMURA_PLANE_LINE_OFFSET);
						tmp1 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE1_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE1_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP0 = ((tmp1>>4)&0x000f) + (tmp2<<4);
						
						tmp1 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE2_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE2_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP1 = ((tmp1>>4)&0x000f) + (tmp2<<4);
						
						tmp1 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE3_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_MONO_DEMURA_TABLE_PLANE3_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP2 = ((tmp1>>4)&0x000f) + (tmp2<<4);
					}
					tmpL = Demura_12bit_to_6bit(DemuraData12bitP0,ptrCrtl->demura_table_scale_L);
					tmpM1 = Demura_12bit_to_6bit(DemuraData12bitP1,ptrCrtl->demura_table_scale_M);
					tmpH = Demura_12bit_to_6bit(DemuraData12bitP2,ptrCrtl->demura_table_scale_H);

					if(i==0 && (index < 14))
					{
						printk("\n *********Panel MONO !!!************ \n");
						printk("\n index=%d,p0=%x,p1=%x,p2=%x \n",index,DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2);
						printk("\n tmpL=%d,tmpM1=%d,tmpH=%d \n",tmpL,tmpM1,tmpH);
					}
					
					//if(i==1 && index <=6)
					{
						//printf("index=%d,p0=%x,p1=%x,p2=%x \n",index,DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2);
						//printf("tmpL=%d,tmpM1=%d,tmpH=%d \n",tmpL,tmpM1,tmpH);
					}
					/* R */
					deMura_7Blk_Decode_TBL[k*9+0] = ((unsigned char)tmpL)&0x3f; /* low*/
					deMura_7Blk_Decode_TBL[k*9+1] = ((unsigned char)tmpM1)&0x3f; /*Middle*/
					deMura_7Blk_Decode_TBL[k*9+2] = ((unsigned char)tmpH)&0x3f; /* High */

					/* G */
					deMura_7Blk_Decode_TBL[k*9+3] =((unsigned char)tmpL)&0x3f; /* low*/
					deMura_7Blk_Decode_TBL[k*9+4] = ((unsigned char)tmpM1)&0x3f; /*Middle*/
					deMura_7Blk_Decode_TBL[k*9+5] = ((unsigned char)tmpH)&0x3f; /* High */

					/* B */
					deMura_7Blk_Decode_TBL[k*9+6] = ((unsigned char)tmpL)&0x3f; /* low*/
					deMura_7Blk_Decode_TBL[k*9+7] = ((unsigned char)tmpM1)&0x3f; /*Middle*/
					deMura_7Blk_Decode_TBL[k*9+8] = ((unsigned char)tmpH)&0x3f; /* High */
					
					//if(i==0 && j==0&& k==0)
					{
						//unsigned char jj;
						//for(jj=0;jj<9;jj++)
						//printk("deMura_7Blk_Decode_TBL[jj=%d]=%x \n",jj,deMura_7Blk_Decode_TBL[jj]);
					}
				}

				index = (index+1 >= Demura_LMMH_W_Size)?(Demura_LMMH_W_Size-1):(index+1);
			}
			
			pDMA_tmp = DMA_8bit+(48*(i*hor_384Bit_blk_num+j));
			vpq_DeMura_Encode_128x3bit(deMura_7Blk_Decode_TBL, pDMA_tmp);
						
		}
		//printk( "MONO zyy[%d] \n",i);
	}
	printk( "CSOT_MONO_LMH_demura_to_dma Finish ~~\n");
	//printk("\n p0=%x,p1=%x,p2=%x \n",DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2);
}

#if 1
inline short clip( short min, short max, short value )
{
	short out;
	if( value < min )
		out = min;
	else if( value > max )
		out = max;
	else
		out = value;
	
	return out;
}

char fwif_color_AUO_Demura_Para(unsigned char * pAUO_Demura_Para, AUO_DMC_Para_TBL *pDMC_para)
{
	int i;
	unsigned int para_sum = 0;
	unsigned short checksum;
	
	checksum = (pAUO_Demura_Para[0] << 8) + pAUO_Demura_Para[1];
	// check on checksum
	for( i=2; i<AUO_Demura_Para_Size; i++ )
	{
		para_sum += pAUO_Demura_Para[i];
	}
	printk("pAUO_Demura_Para[0]=%d",pAUO_Demura_Para[0]);
	printk("pAUO_Demura_Para[1]=%d",pAUO_Demura_Para[1]);
	para_sum = para_sum & 0xFFFF;
	if( para_sum != checksum )
	{
		printk("\n AUO demura para checksum fail!! \n");
		return -1;
	}
	
	pDMC_para->RGB_MODE = (pAUO_Demura_Para[2] & _BIT7) ? 1 : 0;
	pDMC_para->DMC_BLOCK_SIZE = (pAUO_Demura_Para[2] & (_BIT5 | _BIT4)) >> 4;	
	pDMC_para->DMC_PLANE_NUM = (pAUO_Demura_Para[2] & 0x0F);
	pDMC_para->DMC_H_BLOCK = (pAUO_Demura_Para[3] & 0xF0) >> 4;
	pDMC_para->DMC_V_BLOCK = (pAUO_Demura_Para[3] & 0x0F);
	pDMC_para->DMC_H_LUT_NUM = (pAUO_Demura_Para[4] << 4) + ((pAUO_Demura_Para[5] & 0xF0) >> 4);
	pDMC_para->DMC_V_LUT_NUM = ((pAUO_Demura_Para[5] & 0x0F) << 8) + pAUO_Demura_Para[6];
	pDMC_para->DMC_BLACK_LIMIT = (pAUO_Demura_Para[9] << 8) + pAUO_Demura_Para[10];
	
	for( i=0; i<8; i++ )
	{
		pDMC_para->DMC_PLANE_LEVEL[i] = (pAUO_Demura_Para[11+i*2] << 8) + pAUO_Demura_Para[12+i*2];
		printk("\n **********AUO plane level(%d)=%d \n",i,pDMC_para->DMC_PLANE_LEVEL[i]);
	}
	pDMC_para->DMC_WHITE_LIMIT = (pAUO_Demura_Para[27] << 8) + pAUO_Demura_Para[28];
	printk("\n **********AUO DMC_WHITE_LIMIT(%d)=%d \n",i,pDMC_para->DMC_WHITE_LIMIT);
	
	for( i=0; i<2; i++ )
	{
		pDMC_para->DMC_DATA_R_MAG[2*i] = (pAUO_Demura_Para[47+i] & 0xF0) >> 4;
		pDMC_para->DMC_DATA_R_MAG[2*i+1] = (pAUO_Demura_Para[47+i] & 0x0F);
		
		pDMC_para->DMC_DATA_G_MAG[2*i] = (pAUO_Demura_Para[51+i] & 0xF0) >> 4;
		pDMC_para->DMC_DATA_G_MAG[2*i+1] = (pAUO_Demura_Para[51+i] & 0x0F);
		
		pDMC_para->DMC_DATA_B_MAG[2*i] = (pAUO_Demura_Para[55+i] & 0xF0) >> 4;
		pDMC_para->DMC_DATA_B_MAG[2*i+1] = (pAUO_Demura_Para[55+i] & 0x0F);
		
	}
	for( i=0; i<3; i++ )
	{
		pDMC_para->DMC_DATA_R_OFFSET[i] = (pAUO_Demura_Para[59+i*2] << 8) + pAUO_Demura_Para[60+i*2];
		pDMC_para->DMC_DATA_G_OFFSET[i] = (pAUO_Demura_Para[75+i*2] << 8) + pAUO_Demura_Para[76+i*2];
		pDMC_para->DMC_DATA_B_OFFSET[i] = (pAUO_Demura_Para[91+i*2] << 8) + pAUO_Demura_Para[92+i*2];
	}
	
	return 0;
}

char fwif_color_AUO_Demura_TBL( unsigned char* pAUO_DemuraTBL, AUO_DMC_Para_TBL* pAUO_DMC_Para_TBL, short** raw_table, short** dec_table, unsigned char* scale )
{
	int i, j, color, plane;
	int tbl_ch = pAUO_DMC_Para_TBL->RGB_MODE ? 3 : 1;
	//int plane_num = (pAUO_DMC_Para_TBL->DMC_PLANE_NUM > 3) ? 3 : pAUO_DMC_Para_TBL->DMC_PLANE_NUM;
	int plane_num = pAUO_DMC_Para_TBL->DMC_PLANE_NUM;
	int h_lut_num = pAUO_DMC_Para_TBL->DMC_H_LUT_NUM;
	int v_lut_num = pAUO_DMC_Para_TBL->DMC_V_LUT_NUM;
	int size = plane_num * tbl_ch * h_lut_num * v_lut_num;
	int index;
	char lut_h_interp, lut_v_interp;
	int blk_x, blk_y;
	short tmp_value;
	int lut_shift[3];
	int lut_offset[3];
	int lut_head_max[8] = {0};
	//int lut_diff_max[8] = {0};
	
	if( pAUO_DMC_Para_TBL->DMC_H_BLOCK == 3 )//DMC_H_BLOCK = 3
		lut_h_interp = 0;
	else if( pAUO_DMC_Para_TBL->DMC_H_BLOCK == 4 )
		lut_h_interp = 1; // interpolate
	else
		lut_h_interp = -1; // drop
	if( pAUO_DMC_Para_TBL->DMC_V_BLOCK == 3 )//DMC_V_BLOCK = 3
		lut_v_interp = 0;
	else if( pAUO_DMC_Para_TBL->DMC_V_BLOCK == 4 )
		lut_v_interp = 1; // interpolate
	else
		lut_v_interp = -1; // drop
	
	printk("pAUO_DemuraTBL[0]=%d",pAUO_DemuraTBL[0]);
	printk("pAUO_DemuraTBL[1]=%d",pAUO_DemuraTBL[1]);
	printk("pAUO_DemuraTBL[2]=%d",pAUO_DemuraTBL[2]);
	printk("\n **********AUO hBLOCK=%d,vBlock=%d \n",pAUO_DMC_Para_TBL->DMC_H_BLOCK,pAUO_DMC_Para_TBL->DMC_V_BLOCK);
	index = 2; // first 2 bytes are checksum
	
	for( plane = 0; plane < plane_num; plane++ ) // will ignore planes > 3
	{
		switch( pAUO_DMC_Para_TBL->DMC_DATA_R_MAG[plane] )
		{
			case 0: lut_shift[0] = 2; break;
			case 1: lut_shift[0] = 3; break;
			case 2: lut_shift[0] = 4; break;
			case 3: lut_shift[0] = 5; break;
			case 6: lut_shift[0] = 0; break;
			case 7: lut_shift[0] = 1; break;
			default: lut_shift[0] = 0; break;
		}
		switch( pAUO_DMC_Para_TBL->DMC_DATA_G_MAG[plane] )
		{
			case 0: lut_shift[1] = 2; break;
			case 1: lut_shift[1] = 3; break;
			case 2: lut_shift[1] = 4; break;
			case 3: lut_shift[1] = 5; break;
			case 6: lut_shift[1] = 0; break;
			case 7: lut_shift[1] = 1; break;
			default: lut_shift[1] = 0; break;
		}
		switch( pAUO_DMC_Para_TBL->DMC_DATA_B_MAG[plane] )
		{
			case 0: lut_shift[2] = 2; break;
			case 1: lut_shift[2] = 3; break;
			case 2: lut_shift[2] = 4; break;
			case 3: lut_shift[2] = 5; break;
			case 6: lut_shift[2] = 0; break;
			case 7: lut_shift[2] = 1; break;
			default: lut_shift[2] = 0; break;
		}
		printk("*****AUO shi0=%d,shi1=%d,shi2=%d \n",lut_shift[0],lut_shift[1],lut_shift[2]);
		
		lut_offset[0] = pAUO_DMC_Para_TBL->DMC_DATA_R_OFFSET[plane];
		if( lut_offset[0] & _BIT13 ) // sign bit
			lut_offset[0] -= (1<<14);
		lut_offset[1] = pAUO_DMC_Para_TBL->DMC_DATA_G_OFFSET[plane];
		if( lut_offset[1] & _BIT13 ) // sign bit
			lut_offset[1] -= (1<<14);
		lut_offset[2] = pAUO_DMC_Para_TBL->DMC_DATA_B_OFFSET[plane];
		if( lut_offset[2] & _BIT13 ) // sign bit
			lut_offset[2] -= (1<<14);

		
		printk("*****AUO off0=%d,off1=%d,off2=%d \n",lut_offset[0],lut_offset[1],lut_offset[2]);
		
		for( i=0; i < v_lut_num; i++ )//i: 0-270 
		{
			for( j=0; j < h_lut_num; j++ )//j: 0-480
			{
				if( lut_h_interp == 0 )
					blk_x = j;
				else if( lut_h_interp == 1 )
					blk_x = j*2;
				else if( lut_h_interp == -1 )
					blk_x = j/2;
				
				if( lut_v_interp == 0 )
					blk_y = i;
				else if( lut_v_interp == 1 )
					blk_y = i*2;
				else if( lut_v_interp == -1 )
					blk_y = i/2;
				
				for( color=0; color<tbl_ch; color++ )//color =0
				{
					tmp_value = pAUO_DemuraTBL[ index ];
					/*if(plane == 1 && i == 22){
						if(((index-2)-481*i)>65 && ((index-2)-481*i) < 80)
							printk("tmp_value[1]=%d \n",tmp_value);
					}*/

					
					index++;
					
					
					// sign bit
					if( tmp_value & _BIT7 )
						tmp_value -= (1<<8);
					/*
					if(plane == 0 && i==0){
						if((index-3)>118 && (index-3) < 124)
							printk("tmp_value[1]%d",tmp_value);
					}*/
						
					// shift to 14-bit
					tmp_value <<= lut_shift[color];
					/*
					if(plane == 0 && i==0){
						if((index-3)>118 && (index-3) < 124)
							printk("tmp_value[2]%d",tmp_value);
					}*/
					
					// add offset on 14-bit
					tmp_value += lut_offset[color];
					/*
					if(plane == 0 && i==0){
						if((index-3)>118 && (index-3) < 124)
							printk("tmp_value[3]%d",tmp_value);
					}*/
					
					// shift to 10-bit
					tmp_value = ( tmp_value + (1<<3) ) >> 4;
					
					//if( i==v_lut_num-1 && j>=h_lut_num-2 )
						//printk( "%d\n", tmp_value );
					/*
					if(plane == 0 && i==0){
						if((index-3)>118 && (index-3) < 124)
							printk("tmp_value[4]=%d",tmp_value);
					}*/
					
					raw_table[plane][ (h_lut_num*i + j) * tbl_ch + color ] = tmp_value;
					dec_table[plane][ (h_lut_num*i + j) * tbl_ch + color ] = tmp_value;
					
					/*if(plane == 0 && i==0){
						if((index-3)>118 && (index-3) < 124)
							printk("dec_table[%d]=%d",(index-3),dec_table[0][index-3]);
					}*/
					
				}
			}
		}

		/*
		// raw table to decode table
		if( lut_v_interp == 0 )
		{
			for( i=0; i<271; i++ )
			{
				for( j=0; j<481; j++ )
				{
					for( color=0; color<tbl_ch; color++ )
					{
						if( lut_h_interp == 0 )
							dec_table[plane][ (481*i + j)*tbl_ch+color ] = raw_table[plane][ (h_lut_num*i + j) * tbl_ch + color ];
						else if( lut_h_interp == 1 ) // interpolate
						{
							if( j % 2 == 0 )
								dec_table[plane][ (481*i + j)*tbl_ch+color ] = raw_table[plane][ (h_lut_num*i + j/2) * tbl_ch + color ];
							else
								dec_table[plane][ (481*i + j)*tbl_ch+color ] = ( raw_table[plane][ (h_lut_num*i + j/2) * tbl_ch + color ] + raw_table[plane][ (h_lut_num*i + j/2 + 1) * tbl_ch + color ] ) / 2;
						}
						else // drop
							dec_table[plane][ (481*i + j)*tbl_ch+color ] = raw_table[plane][ (h_lut_num*i + j*2) * tbl_ch + color ];
					}
						
				}
			}
		}
		else if( lut_v_interp == -1 ) // drop line
		{
			for( i=0; i<271; i++ )
			{
				for( j=0; j<481; j++ )
				{
					for( color=0; color<tbl_ch; color++ )
					{
						if( lut_h_interp == 0 )
							dec_table[plane][ (481*i + j)*tbl_ch+color ] = raw_table[plane][ (h_lut_num*i*2 + j) * tbl_ch + color ];
						else if( lut_h_interp == 1 ) // interpolate
						{
							if( j % 2 == 0 )
								dec_table[plane][ (481*i + j)*tbl_ch+color ] = raw_table[plane][ (h_lut_num*i*2 + j/2) * tbl_ch + color ];
							else
								dec_table[plane][ (481*i + j)*tbl_ch+color ] = ( raw_table[plane][ (h_lut_num*i*2 + j/2) * tbl_ch + color ] + raw_table[plane][ (h_lut_num*i*2 + j/2 + 1) * tbl_ch + color ] ) / 2;
						}
						else // drop
							dec_table[plane][ (481*i + j)*tbl_ch+color ] = raw_table[plane][ (h_lut_num*i + j*2) * tbl_ch + color ];
					}
						
				}
			}
		}
		else if( lut_v_interp == 1 ) // interpolate line
		{
			for( i=0; i<271; i+=2 )
			{
				for( j=0; j<481; j++ )
				{
					for( color=0; color<tbl_ch; color++ )
					{
						if( lut_h_interp == 0 )
							dec_table[plane][ (481*i + j)*tbl_ch+color ] = raw_table[plane][ (h_lut_num*i/2 + j) * tbl_ch + color ];
						else if( lut_h_interp == 1 ) // interpolate
						{
							if( j % 2 == 0 )
								dec_table[plane][ (481*i + j)*tbl_ch+color ] = raw_table[plane][ (h_lut_num*i/2 + j/2) * tbl_ch + color ];
							else
								dec_table[plane][ (481*i + j)*tbl_ch+color ] = ( raw_table[plane][ (h_lut_num*i/2 + j/2) * tbl_ch + color ] + raw_table[plane][ (h_lut_num*i/2 + j/2 + 1) * tbl_ch + color ] ) / 2;
						}
						else // drop
							dec_table[plane][ (481*i + j)*tbl_ch+color ] = raw_table[plane][ (h_lut_num*i/2 + j*2) * tbl_ch + color ];
					}
						
				}
			}
			
			for( i=1; i<271; i+=2 )
			{
				for( j=0; j<481; j++ )
				{
					for( color=0; color<tbl_ch; color++ )
					{
						dec_table[plane][ (481*i + j)*tbl_ch+color ] = ( dec_table[plane][ (481*(i-1) + j)*tbl_ch+color ] + dec_table[plane][ (481*(i+1) + j)*tbl_ch+color ] ) / 2;
					}
				}
			}
		}
		*/
	}

	
	if( index != size+2 )
	{
		printk( "Read size error! index = %d, size = %d\n", index, size );
		//return -1;
	}
	
	
	// find scale
	for( plane = 0; plane<plane_num; plane++ )
	{
		for( i=0; i<271; i++ )
		{
			for( j=0; j<481; j++ )
			{
				for( color=0; color<tbl_ch; color++ )
				{
					/*
					if( j==0 )
					{
						if( lut_head_max[plane] < dec_table[plane][ (481*i + j)*tbl_ch+color ] )
							lut_head_max[plane] = dec_table[plane][ (481*i + j)*tbl_ch+color ];
					}
					else
					{
						if( lut_diff_max[plane] < dec_table[plane][ (481*i + j)*tbl_ch+color ] - dec_table[plane][ (481*i + j-1)*tbl_ch+color ] )
							lut_diff_max[plane] = dec_table[plane][ (481*i + j)*tbl_ch+color ] - dec_table[plane][ (481*i + j-1)*tbl_ch+color ];
					}
					*/
					if( ABS_VLAUE(lut_head_max[plane]) < ABS_VLAUE(dec_table[plane][ (481*i + j)*tbl_ch+color ]))
						lut_head_max[plane] = dec_table[plane][ (481*i + j)*tbl_ch+color ];
				}
			}
		}

		if(ABS_VLAUE(lut_head_max[plane])<=31)
			scale[plane] = 0;
		else if(ABS_VLAUE(lut_head_max[plane])<=62)
			scale[plane] = 1;
		else if(ABS_VLAUE(lut_head_max[plane])<=124)
			scale[plane] = 2;
		else
			scale[plane] = 3;

		
		printk( "\n****AUO plane %d: head_max = %d, scale = %d\n", plane, lut_head_max[plane], scale[plane]);
		
		
		//if( scale[plane] > 0 ) // shift whole table
		{
			for( i=0; i<271; i++ )
			{
				for( j=0; j<481; j++ )
				{
					for( color=0; color<tbl_ch; color++ )
					{
						dec_table[plane][ (481*i + j)*tbl_ch+color ] >>= scale[plane];
						if(dec_table[plane][ (481*i + j)*tbl_ch+color ] < 0)
							dec_table[plane][ (481*i + j)*tbl_ch+color ] = (dec_table[plane][ (481*i + j)*tbl_ch+color ]<demura_mac6_neg_clip)?demura_mac6_neg_clip:dec_table[plane][ (481*i + j)*tbl_ch+color ];
						else
							dec_table[plane][ (481*i + j)*tbl_ch+color ] = (dec_table[plane][ (481*i + j)*tbl_ch+color ]>demura_mac6_pos_clip)?demura_mac6_pos_clip:dec_table[plane][ (481*i + j)*tbl_ch+color ];
					}
				}
			}
			
		}
		
	}
	
	return 0;
}

// demura table encode: diff (for Merlin5, Merlin6)
void fwif_color_DeMura_encode( short* tbl_ori_lo, short* tbl_ori_md, short* tbl_ori_hi, unsigned char table_mode, unsigned char table_separate, unsigned char* demura_tbl )
{
	// DeMura_TBL.table_mode
	// DeMura_TBL.DeMura_CTRL_TBL.demura_rgb_table_seperate
	int i=0,j=0,k=0,index=0;
	unsigned short tbl_height, hor_384Bit_blk_num, tbl_ch;
	short delta_lo, delta_md, delta_hi;
	//unsigned short line_pack_bit;
	//unsigned char pack_tmp;
	//unsigned short line_size;
	//unsigned char* pack_ptr;
	///unsigned short byte_cnt;
	//unsigned char* enc_data_6b;
	unsigned char *pDMA_tmp;
	unsigned char *DMA_8bit;
	
	if( table_mode == DeMura_TBL_481x271 )
	{
		tbl_height = 271;
		hor_384Bit_blk_num = 69;// 481/7+1;
		//line_size = table_separate ? VIP_DemuraTBL_LineSize_RGB_481x271 : VIP_DemuraTBL_LineSize_Y_481x271;
	}
	else // DeMura_TBL_241x136
	{
		tbl_height = 136;
		hor_384Bit_blk_num = 35; // 241/7+1;
		//line_size = table_separate ? VIP_DemuraTBL_LineSize_RGB_241x136 : VIP_DemuraTBL_LineSize_Y_241x136;
	}
	tbl_ch = 1; //table_separate ? 3 : 1;
	DMA_8bit = demura_tbl;

	#if 0//for debug
	printk("\n low:\n");
	for( i=119; i<124; i++ )
	{
		printk("%d",tbl_ori_lo[ (0*Demura_LMMH_W_Size + i)]);
	}
	printk("\n");
	for( i=119; i<124; i++ )
	{
		printk("%d",tbl_ori_lo[ (1*Demura_LMMH_W_Size + i)]);
	}
	printk("\n");
	for( i=110; i<130; i++ )
	{
		printk("%d",tbl_ori_lo[ (2*Demura_LMMH_W_Size + i)]);
	}
	
	printk("\n");
	for( i=110; i<130; i++ )
	{
		printk("%d",tbl_ori_lo[ (3*Demura_LMMH_W_Size + i)]);
	}
	
	printk("\n");
	for( i=110; i<130; i++ )
	{
		printk("%d",tbl_ori_lo[ (4*Demura_LMMH_W_Size + i)]);
	}
	
	printk("\n");
	for( i=110; i<130; i++ )
	{
		printk("%d",tbl_ori_lo[ (5*Demura_LMMH_W_Size + i)]);
	}
	
	printk("\n");
	for( i=110; i<130; i++ )
	{
		printk("%d",tbl_ori_lo[ (6*Demura_LMMH_W_Size + i)]);
	}
	printk("\n mid:\n");
	for( i=0; i<12; i++ )
	{
		//printk("%d",tbl_ori_md[ (0*Demura_LMMH_W_Size + i)]);
	}
	printk("\n");
	for( i=0; i<12; i++ )
	{
		//printk("%d",tbl_ori_md[ (100*Demura_LMMH_W_Size + i)]);
	}
	printk("\n");
	for( i=0; i<12; i++ )
	{
		//printk("%d",tbl_ori_md[ (270*Demura_LMMH_W_Size + i)]);
	}

	printk("\n hig:\n");
	for( i=0; i<12; i++ )
	{
		//printk("%d",tbl_ori_hi[ (0*Demura_LMMH_W_Size + i)]);
	}
	printk("\n");
	for( i=0; i<12; i++ )
	{
		//printk("%d",tbl_ori_hi[ (100*Demura_LMMH_W_Size + i)]);
	}
	printk("\n");
	for( i=0; i<12; i++ )
	{
		//printk("%d",tbl_ori_hi[ (270*Demura_LMMH_W_Size + i)]);
	}

	printk("\n\n");
	#endif



	for( i=0; i<tbl_height; i++ ) // line
	{
		index = 0;
		for( j=0; j<hor_384Bit_blk_num; j++ )
		{
			for(k=0;k<(deMura_7blk_Block/9);k++) 
			{
				if(index < Demura_LMMH_W_Size)
				{
					// clip tbl_ori
					//tbl_ori_lo[ (i*Demura_LMMH_W_Size + index)*tbl_ch] = clip( -128, 127, tbl_ori_lo[ (i*Demura_LMMH_W_Size + index)*tbl_ch] );
					//tbl_ori_md[ (i*Demura_LMMH_W_Size + index)*tbl_ch] = clip( -128, 127, tbl_ori_md[ (i*Demura_LMMH_W_Size + index)*tbl_ch] );
					//tbl_ori_hi[ (i*Demura_LMMH_W_Size + index)*tbl_ch] = clip( -128, 127, tbl_ori_hi[ (i*Demura_LMMH_W_Size + index)*tbl_ch] );

					/*
					// raw data to delta
					if( j==0 )
					{
						delta_lo = tbl_ori_lo[i*Demura_LMMH_W_Size*tbl_ch];
						delta_md = tbl_ori_md[i*Demura_LMMH_W_Size*tbl_ch];
						delta_hi = tbl_ori_hi[i*Demura_LMMH_W_Size*tbl_ch];
					}
					else
					{
						delta_lo = tbl_ori_lo[ (i*Demura_LMMH_W_Size + index)*tbl_ch] - tbl_ori_lo[ (i*Demura_LMMH_W_Size + (index-1))*tbl_ch];
						delta_md = tbl_ori_md[ (i*Demura_LMMH_W_Size + index)*tbl_ch] - tbl_ori_md[ (i*Demura_LMMH_W_Size + (index-1))*tbl_ch];
						delta_hi = tbl_ori_hi[ (i*Demura_LMMH_W_Size + index)*tbl_ch] - tbl_ori_hi[ (i*Demura_LMMH_W_Size + (index-1))*tbl_ch];
						
						// add clip
						delta_lo = clip( -32, 31, delta_lo );
						delta_md = clip( -32, 31, delta_md );
						delta_hi = clip( -32, 31, delta_hi );
						
						tbl_ori_lo[ (i*Demura_LMMH_W_Size + index)*tbl_ch] = tbl_ori_lo[ (i*Demura_LMMH_W_Size + (index-1))*tbl_ch] + delta_lo;
						tbl_ori_md[ (i*Demura_LMMH_W_Size + index)*tbl_ch] = tbl_ori_md[ (i*Demura_LMMH_W_Size + (index-1))*tbl_ch] + delta_md;
						tbl_ori_hi[ (i*Demura_LMMH_W_Size + index)*tbl_ch] = tbl_ori_hi[ (i*Demura_LMMH_W_Size + (index-1))*tbl_ch] + delta_hi;
					}

					// to signed 6-bit
					if( delta_lo < 0 )
						delta_lo += (j==0) ? 256 : 64;
					if( delta_md < 0 )
						delta_md += (j==0) ? 256 : 64;
					if( delta_hi < 0 )
						delta_hi += (j==0) ? 256 : 64;
					*/

					
					delta_lo = tbl_ori_lo[ (i*Demura_LMMH_W_Size + index)*tbl_ch];
					delta_md = tbl_ori_md[ (i*Demura_LMMH_W_Size + index)*tbl_ch];
					delta_hi = tbl_ori_hi[ (i*Demura_LMMH_W_Size + index)*tbl_ch];
					
					
					/* R */
					deMura_7Blk_Decode_TBL[k*9+0] = ((unsigned char)delta_lo)&0x3f; /* low*/
					deMura_7Blk_Decode_TBL[k*9+1] = ((unsigned char)delta_md)&0x3f; /*Middle*/
					deMura_7Blk_Decode_TBL[k*9+2] = ((unsigned char)delta_hi)&0x3f; /* High */

					/* G */
					deMura_7Blk_Decode_TBL[k*9+3] =((unsigned char)delta_lo)&0x3f; /* low*/
					deMura_7Blk_Decode_TBL[k*9+4] = ((unsigned char)delta_md)&0x3f; /*Middle*/
					deMura_7Blk_Decode_TBL[k*9+5] = ((unsigned char)delta_hi)&0x3f; /* High */

					/* B */
					deMura_7Blk_Decode_TBL[k*9+6] = ((unsigned char)delta_lo)&0x3f; /* low*/
					deMura_7Blk_Decode_TBL[k*9+7] = ((unsigned char)delta_md)&0x3f; /*Middle*/
					deMura_7Blk_Decode_TBL[k*9+8] = ((unsigned char)delta_hi)&0x3f; /* High */
					
					/*
					// delta to 6bit array
					// RGB: R0_lo R0_md R0_hi G0_lo G0_md G0_hi B0_lo B0_md B0_hi
					// Y: R0_lo R0_md R0_hi
					// first element: separate to 2 elements (2+6), all others move right 1 block
					if( j==0 ) // 8bit -> 2 + 6
					{
						enc_data_6b[ (0*tbl_ch+k)*3 + 0 ] = delta_lo >> 6;
						enc_data_6b[ (0*tbl_ch+k)*3 + 1 ] = delta_md >> 6;
						enc_data_6b[ (0*tbl_ch+k)*3 + 2 ] = delta_hi >> 6;

						enc_data_6b[ (1*tbl_ch+k)*3 + 0 ] = delta_lo & 0x3f;
						enc_data_6b[ (1*tbl_ch+k)*3 + 1 ] = delta_md & 0x3f;
						enc_data_6b[ (1*tbl_ch+k)*3 + 2 ] = delta_hi & 0x3f;
					}
					else
					{
						enc_data_6b[ ((j+1)*tbl_ch+k)*3 + 0 ] = delta_lo & 0x3f;
						enc_data_6b[ ((j+1)*tbl_ch+k)*3 + 1 ] = delta_md & 0x3f;
						enc_data_6b[ ((j+1)*tbl_ch+k)*3 + 2 ] = delta_hi & 0x3f;
					}
					*/
				}
				index = (index+1 >= Demura_LMMH_W_Size)?(Demura_LMMH_W_Size-1):(index+1);
			}
			pDMA_tmp = DMA_8bit+(48*(i*hor_384Bit_blk_num+j));
			vpq_DeMura_Encode_128x3bit(deMura_7Blk_Decode_TBL, pDMA_tmp);
		}
	}
}

void vpq_AUO_Demura_data_to_dma(VIP_DeMura_TBL* DeMura_TBL, AUO_DMC_Para_TBL* DMC_para, short** tbl_dec, unsigned char* scale)
	{
		int demura_level[5];
		int div_fac_l, div_fac_l_m, div_fac_m_h, div_fac_h;
		
		DeMura_TBL->DeMura_CTRL_TBL.demura_table_scale = 3;
		
		printk("\n****AUO demura_table_scale = %d",DeMura_TBL->DeMura_CTRL_TBL.demura_table_scale);//zyy sitlog
		DeMura_TBL->DeMura_CTRL_TBL.demura_table_scale_L = scale[0];
		DeMura_TBL->DeMura_CTRL_TBL.demura_table_scale_M = scale[1];
		DeMura_TBL->DeMura_CTRL_TBL.demura_table_scale_H = scale[2];
		//DeMura_TBL->DeMura_CTRL_TBL.demura_table_scale_L = scale[1];
		//DeMura_TBL->DeMura_CTRL_TBL.demura_table_scale_M = scale[2];
		//DeMura_TBL->DeMura_CTRL_TBL.demura_table_scale_H = scale[3];
		DeMura_TBL->DeMura_CTRL_TBL.demura_block_size = 0;
		//printk("demura_block_size = %d",DeMura_TBL->DeMura_CTRL_TBL.demura_block_size);//zyy sitlog
		
		//DeMura_TBL->DeMura_CTRL_TBL.demura_rgb_table_seperate = DMC_para->RGB_MODE;
		//printk("demura_rgb_table_seperate = %d",DeMura_TBL->DeMura_CTRL_TBL.demura_rgb_table_seperate);//zyy sitlog

		DeMura_TBL->DeMura_CTRL_TBL.demura_en = 1;
		//printk("demura_en = %d",DeMura_TBL->DeMura_CTRL_TBL.demura_en);//zyy sitlog
		
		demura_level[0] = (DMC_para->DMC_BLACK_LIMIT	+ 2) >> 2;
		demura_level[1] = (DMC_para->DMC_PLANE_LEVEL[0] + 2) >> 2;
		demura_level[2] = (DMC_para->DMC_PLANE_LEVEL[1] + 2) >> 2;
		demura_level[3] = (DMC_para->DMC_PLANE_LEVEL[2] + 2) >> 2;
		//demura_level[1] = (DMC_para->DMC_PLANE_LEVEL[1] + 2) >> 2;
		//demura_level[2] = (DMC_para->DMC_PLANE_LEVEL[2] + 2) >> 2;
		//demura_level[3] = (DMC_para->DMC_PLANE_LEVEL[3] + 2) >> 2;
		demura_level[4] = (DMC_para->DMC_WHITE_LIMIT	+ 2) >> 2;
		
		div_fac_l	= ( 65536 / (demura_level[1] - demura_level[0]) ) >> 2;
		div_fac_l_m = ( 65536 / (demura_level[2] - demura_level[1]) ) >> 2;
		div_fac_m_h = ( 65536 / (demura_level[3] - demura_level[2]) ) >> 2;
		div_fac_h	= ( 65536 / (demura_level[4] - demura_level[3]) ) >> 2;
		
		DeMura_TBL->DeMura_CTRL_TBL.demura_r_lower_cutoff = demura_level[0];		
		DeMura_TBL->DeMura_CTRL_TBL.demura_r_l_level = demura_level[1];		
		DeMura_TBL->DeMura_CTRL_TBL.demura_r_m_level = demura_level[2];		
		DeMura_TBL->DeMura_CTRL_TBL.demura_r_h_level = demura_level[3];		
		DeMura_TBL->DeMura_CTRL_TBL.demura_r_upper_cutoff = demura_level[4];		
		DeMura_TBL->DeMura_CTRL_TBL.r_div_factor_l = div_fac_l;		
		DeMura_TBL->DeMura_CTRL_TBL.r_div_factor_l_m = div_fac_l_m;		
		DeMura_TBL->DeMura_CTRL_TBL.r_div_factor_m_h = div_fac_m_h;		
		DeMura_TBL->DeMura_CTRL_TBL.r_div_factor_h = div_fac_h;		
		DeMura_TBL->DeMura_CTRL_TBL.demura_g_lower_cutoff = demura_level[0];
		DeMura_TBL->DeMura_CTRL_TBL.demura_g_l_level = demura_level[1];
		DeMura_TBL->DeMura_CTRL_TBL.demura_g_m_level = demura_level[2];
		DeMura_TBL->DeMura_CTRL_TBL.demura_g_h_level = demura_level[3];
		DeMura_TBL->DeMura_CTRL_TBL.demura_g_upper_cutoff = demura_level[4];
		DeMura_TBL->DeMura_CTRL_TBL.g_div_factor_l = div_fac_l;
		DeMura_TBL->DeMura_CTRL_TBL.g_div_factor_l_m = div_fac_l_m;
		DeMura_TBL->DeMura_CTRL_TBL.g_div_factor_m_h = div_fac_m_h;
		DeMura_TBL->DeMura_CTRL_TBL.g_div_factor_h = div_fac_h;		
		DeMura_TBL->DeMura_CTRL_TBL.demura_b_lower_cutoff = demura_level[0];
		DeMura_TBL->DeMura_CTRL_TBL.demura_b_l_level = demura_level[1];
		DeMura_TBL->DeMura_CTRL_TBL.demura_b_m_level = demura_level[2];
		DeMura_TBL->DeMura_CTRL_TBL.demura_b_h_level = demura_level[3];
		DeMura_TBL->DeMura_CTRL_TBL.demura_b_upper_cutoff = demura_level[4];
		DeMura_TBL->DeMura_CTRL_TBL.b_div_factor_l = div_fac_l;
		DeMura_TBL->DeMura_CTRL_TBL.b_div_factor_l_m = div_fac_l_m;
		DeMura_TBL->DeMura_CTRL_TBL.b_div_factor_m_h = div_fac_m_h;
		DeMura_TBL->DeMura_CTRL_TBL.b_div_factor_h = div_fac_h;
		
		DeMura_TBL->table_mode = DeMura_TBL_481x271;
		DeMura_TBL->DeMura_Adaptive_TBL.adaptiveScale_En = 0;
		
		fwif_color_DeMura_encode( tbl_dec[0], tbl_dec[1], tbl_dec[2], DeMura_TBL_481x271, DMC_para->RGB_MODE, DeMura_TBL->TBL );
		//fwif_color_DeMura_encode( tbl_dec[1], tbl_dec[2], tbl_dec[3], DeMura_TBL_481x271, DMC_para->RGB_MODE, DeMura_TBL->TBL );
		
	}


#endif



COLORTEMP_ELEM_T ct;
DRV_film_mode film_mode;
DRV_film_table_t film_table;
DRV_Sharpness_Level Sharpness_Level;
CHIP_NOISE_REDUCTION_T NR_Level;
CHIP_MPEG_NOISE_REDUCTION_T MPEGNR_Level;
CHIP_DCC_T tFreshContrast_coef;
FreshContrastLUT_T tFreshContrastLUT;
VPQ_SetPicCtrl_T pic_ctrl = {0, {100, 50, 50, 0}, {128, 128, 128, 128}};
COLOR_GAMUT_T gamutData;
VPQ_SAT_LUT_T satLutData;
HDR_Set3DLUT_16_T phdr3dlut16;
UINT32 Eotf_table32[EOTF_size] = {0};
UINT16 Oetf_table16[OETF_size] = {0};
UINT32 PQModeInfo_flag[5] = {0};
unsigned char g_LGE_HDR_CSC_CTRL = 2; //BT2020
CHIP_CM_REGION_EXT_T cmRegionExt;//for CM ioctl tmp
UINT8 game_process = 0;
extern struct semaphore* get_gamemode_check_semaphore(void);

int PictureMode_flg = 0;  // for MEMC wrt by JerryWang 20161125

long vpq_ioctl(struct file *file, unsigned int cmd,  unsigned long arg)
{
	int ret = 0;
	unsigned char live_zoom_tune = 0;
	static UINT16 zoom_c;
	unsigned char isBlack_LvDiff_Flag = 0;
	HAL_VPQ_DATA_T DeMura_Info;

	if (vpq_ioctl_get_stop_run(cmd))
		return 0;

	if (Demo_Flag) {
		if (VPQ_IOC_SET_PIC_CTRL == cmd)
			vpq_demo_overscan_func(NULL);

		return 0;
	}

	if (VPQ_IOC_INIT == cmd) {
		fwif_color_inv_gamma_control_back(SLR_MAIN_DISPLAY, 0);
		fwif_color_gamma_control_back(SLR_MAIN_DISPLAY, 1);
		fwif_color_gamma_control_back(SLR_SUB_DISPLAY, 1);
#ifdef CONFIG_DUAL_CHANNEL
		fwif_color_inv_gamma_control_back(SLR_SUB_DISPLAY, 0);
		fwif_color_gamma_control_back(SLR_SUB_DISPLAY, 1);
#endif
		//fwif_color_set_DCC_Init(SLR_MAIN_DISPLAY);
		//fwif_color_set_DCC_Init_tv006();

		// enable DM & Composer clock
		drvif_Set_DM_HDR_CLK();
		drvif_TV006_HDR10_init();

		fwif_color_set_FILM_FW_ShareMemory();

		fwif_color_set_Picture_Control_tv006(pic_ctrl.wId, &pic_ctrl);
		PQ_Dev_Status = PQ_DEV_INIT_DONE;
		return 0;
	} else if (VPQ_IOC_UNINIT == cmd) {
		PQ_Dev_Status = PQ_DEV_UNINIT;
		return 0;
	} else if (VPQ_IOC_OPEN == cmd || VPQ_IOC_CLOSE == cmd) {
		return 0;
	} else if (VPQ_IOC_SET_PROJECT_ID == cmd) {
		VIP_Customer_Project_ID_ENUM prj_id;
		if (copy_from_user(&prj_id, (int __user *)arg, sizeof(unsigned int))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_PROJECT_ID fail\n");
			ret = -1;
		} else {
			fwif_VIP_set_Project_ID(prj_id);
			ret = 0;
		}
		return ret;
	}

	if (PQ_Dev_Status != PQ_DEV_INIT_DONE)
		return -1;

	if(Get_Live_zoom_mode() != LIVE_ZOOM_OFF) {
		if ((zoom_c & 0x000f) != 0)
			live_zoom_tune = 1;
	}
	zoom_c++;

	rtd_printk(KERN_INFO, "dda", "dda vpq_ioctl,cmd=%d",cmd);


	switch (cmd) {
	case VPQ_IOC_SET_COLOR_TEMP:
	{
		if (copy_from_user(&ct, (int __user *)arg, sizeof(COLORTEMP_ELEM_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_COLOR_TEMP fail\n");
			ret = -1;
		} else {
			memcpy(&curColorTemp, &ct, sizeof(COLORTEMP_ELEM_T));
			vpq_set_color_temp_filter();
			/*rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VPQ_IOC_SET_COLOR_TEMP success\n");*/
			ret = 0;
		}
	}
	break;

	case VPQ_IOC_SET_COLOR_FILTER:
	{
		unsigned int args;
		if (copy_from_user(&args, (int __user *)arg, sizeof(unsigned int))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_PIC_CTRL fail\n");
			ret = -1;
		} else {
			ucColorFilterMode = (unsigned char)args;
			vpq_set_color_temp_filter();
			ret = 0;
		}
	}
	break;

	case VPQ_IOC_GET_MOTION_LEVEL:
	{
		_clues *smartPic_clue;
		UINT32 PQA_Motion_Level = 0;

		/* Get Info from Share Mem*/
		smartPic_clue = (_clues *)Scaler_GetShareMemVirAddr(SCALERIOC_VIP_SMARTPIC_CLUS);
		if (0 == smartPic_clue)
			return -1;
		fwif_color_ChangeUINT32Endian_Copy(&smartPic_clue->motion_ratio, 1, &PQA_Motion_Level, 0);
		if (copy_to_user((void __user *)arg, (void *)&PQA_Motion_Level, sizeof(UINT32))) {
			ret = -1;
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_MOTION_LEVEL fail\n");
		} else {
			ret = 0;
			/*rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VPQ_IOC_GET_MOTION_LEVEL success\n");*/
		}

	}
	break;

	case VPQ_IOC_GET_NOISE_LEVEL:
	{
		_clues *smartPic_clue;
		UINT32 PQA_Noise_Level = 0;

		/* Get Info from Share Mem*/
		smartPic_clue = (_clues *)Scaler_GetShareMemVirAddr(SCALERIOC_VIP_SMARTPIC_CLUS);
		if (0 == smartPic_clue)
			return -1;
		fwif_color_ChangeUINT32Endian_Copy(&smartPic_clue->noise_ratio, 1, &PQA_Noise_Level, 0);
		if (copy_to_user((void __user *)arg, (void *)&PQA_Noise_Level, sizeof(UINT16))) {
			ret = -1;
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_NOISE_LEVEL fail\n");
		} else {
			ret = 0;
			/*rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VPQ_IOC_GET_NOISE_LEVEL success\n");*/
		}

	}
	break;

	case VPQ_IOC_GET_Input_V_Freq:
	{
		unsigned int Input_V_Freq;

		Input_V_Freq = Scaler_DispGetInputInfoByDisp((SCALER_DISP_CHANNEL)SLR_MAIN_DISPLAY, SLR_INPUT_V_FREQ);
		if (copy_to_user((void __user *)arg, (void *)&Input_V_Freq, sizeof(unsigned int))) {
			ret = -1;
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_Input_V_Freq fail\n");
		} else {
			ret = 0;
			/*rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VPQ_IOC_GET_Input_V_Freq success\n");*/
		}
	}
	break;

	case VPQ_IOC_SET_GAMMA_LUT:
	{
		if (copy_from_user(&gamma, (int __user *)arg, sizeof(gamma))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_GAMMA_LUT fail\n");
			ret = -1;
		} else {
			vpq_set_gamma(0, 1);
			fwif_color_gamma_control_back(SLR_MAIN_DISPLAY, 0);
			ret = 0;
		}
	}
	break;

	case VPQ_IOC_SET_SPLIT_DEMO:
	{
		bool bOnOff;

		if (copy_from_user(&bOnOff, (int __user *)arg, sizeof(bool))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_SPLIT_DEMO fail\n");
			ret = -1;
		} else {
			if (bOnOff == TRUE)
				Scaler_SetMagicPicture(SLR_MAGIC_STILLDEMO);
			else
				Scaler_SetMagicPicture(SLR_MAGIC_OFF);
		}
	}
	break;

	case VPQ_IOC_SET_IRE_INNER_PATTERN:
	{
		unsigned int args;
		if (copy_from_user(&args, (int __user *)arg, sizeof(unsigned int))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_IRE_INNER_PATTERN fail\n");
			ret = -1;
		} else {
			fwif_color_set_WB_Pattern_IRE(args>>16, args&0xffff);
			ret = 0;
		}
	}
	break;

	case VPQ_IOC_SET_FILM_MODE:
	{
		unsigned char bCinemaMode;
		if (copy_from_user(&film_mode, (int __user *)arg, sizeof(film_mode))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_FILM_MODE fail\n");
			ret = -1;
		} else {
			down(get_DI_semaphore());
			drvif_module_film_mode((DRV_film_mode *) &film_mode);
			up(get_DI_semaphore());
			/*rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VPQ_IOC_SET_FILM_MODE success\n");*/

			down(&Memc_Realcinema_Semaphore);
			if (film_mode.film_status ==0)
				bCinemaMode = 0;
			else
				bCinemaMode = 1;
			if ((Get_Live_zoom_mode() != LIVE_ZOOM_OFF) || (Get_LivezoomOffMainRunScaler() == TRUE)){
				/*qiangzhou:livezoom no need setting dtg three times*/
			}else{
				//memc_realcinema_framerate();
				DbgSclrFlgTkr.memc_realcinema_run_flag = TRUE;//Run memc mode
			}
			fwif_color_set_cinema_mode_en(bCinemaMode);
			up(&Memc_Realcinema_Semaphore);
			ret = Scaler_MEMC_set_cinema_mode_en(bCinemaMode);
		}
	}
	break;

	case VPQ_IOC_SET_FILM_TABLE:
	{
		return 0;/*fix table not match from hal, use internal finetune*/
		if (copy_from_user(&film_table, (int __user *)arg, sizeof(DRV_film_table_t))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_FILM_TABLE fail\n");
			ret = -1;
		} else {
			down(get_DI_semaphore());
			drvif_module_film_setting((DRV_film_table_t *) &film_table);
			up(get_DI_semaphore());
			/*rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VPQ_IOC_SET_FILM_TABLE success\n");*/
			ret = 0;
		}

	}
	break;

	case VPQ_IOC_SET_FILM_FPS:
	{
		unsigned int args;
		if (copy_from_user(&args, (int __user *)arg, sizeof(unsigned int))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_FILM_FPS fail\n");
			ret = -1;
		} else {
			unsigned char bIs48HzMode = false;
			bIs48HzMode = (args&0xff) ? 1 : 0;
			rtk_vsc_setFilmMode(bIs48HzMode);
			ret = 0;
		}
	}
	break;

	case VPQ_IOC_SET_SHARPNESS_LEVEL:
	{
		if (copy_from_user(&Sharpness_Level, (int __user *)arg, sizeof(DRV_Sharpness_Level))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_SHARPNESS_LEVEL fail\n");
			ret = -1;
		} else {
			drvif_color_set_Sharpness_level((DRV_Sharpness_Level *) &Sharpness_Level);
			/*rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VPQ_IOC_SET_SHARPNESS_LEVEL success\n");*/
			ret = 0;
		}
	}
	break;

	case VPQ_IOC_SET_SHARPNESS_TABLE:
	{
		static CHIP_SHARPNESS_UI_T tCHIP_SHARPNESS_UI_T;
		/*CHIP_EDGE_ENHANCE_UI_T tCHIP_EDGE_ENHANCE_UI_T;*/
		/*UINT16 sEdgeEnhanceValue = tShp_Val[4];*/ /* 0: off 1:on*/

		if (live_zoom_tune)
			return 0;

		if (copy_from_user(&tCHIP_SHARPNESS_UI_T, (void __user *)arg, sizeof(CHIP_SHARPNESS_UI_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_SHARPNESS_TABLE fail\n");
			ret = -1;
		} else {
			memcpy(&tCurCHIP_SHARPNESS_UI_T, &tCHIP_SHARPNESS_UI_T, sizeof(CHIP_SHARPNESS_UI_T));
			/*memcpy(&tCHIP_EDGE_ENHANCE_UI_T, &tCurCHIP_EDGE_ENHANCE_UI_T, sizeof(CHIP_EDGE_ENHANCE_UI_T));*/
			/*if (uc3DCorrectionEn == false) {*/
				fwif_color_set_sharpness_table_TV006(&tCurCHIP_SHARPNESS_UI_T, &tCurCHIP_EDGE_ENHANCE_UI_T, &tCurCHIP_SR_UI_T);
			/*
				drvif_color_set_Vertical_Peaking_Enable(true);
			} else {
				fwif_color_set_SharpnessFilterCoef_for_3D((CHIP_SHARPNESS_UI_T *)&tCHIP_SHARPNESS_UI_T, (CHIP_SHARPNESS_UI_T *) &t3DCHIP_SHARPNESS_UI_T);
				fwif_color_set_sharpness_table_TV006(tCHIP_SHARPNESS_UI_T, tCHIP_EDGE_ENHANCE_UI_T, sEdgeEnhanceValue);
				drvif_color_set_Vertical_Peaking_Enable(false);
			}
			*/
			/*rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VPQ_IOC_SET_SHARPNESS_TABLE success\n");*/
			ret = 0;
		}
	}
	break;

	case VPQ_IOC_SET_VPQ_Shp_Val:
	{
		if (copy_from_user(&tShp_Val, (int __user *)arg, sizeof(UINT16)*7)) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_VPQ_Shp_Val fail\n");
			ret = -1;
		} else {

			/*fwif_color_set_sharpness_level_TV006(&tShp_Val[0]);*/
			rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VPQ_IOC_SET_VPQ_Shp_Val success\n");
			ret = 0;
		}
	}
	break;

	case VPQ_IOC_SET_EDGE_ENHANCE:
	{
		CHIP_EDGE_ENHANCE_UI_T tCHIP_EDGE_ENHANCE_UI_T;
		/*CHIP_SHARPNESS_UI_T tCHIP_SHARPNESS_UI_T;*/

		if (live_zoom_tune)
			return 0;

		if (copy_from_user((void *)&tCHIP_EDGE_ENHANCE_UI_T,(void __user *)arg , sizeof(CHIP_EDGE_ENHANCE_UI_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_EDGE_ENHANCE fail\n");
			ret = -1;
		} else {
			memcpy(&tCurCHIP_EDGE_ENHANCE_UI_T, &tCHIP_EDGE_ENHANCE_UI_T, sizeof(CHIP_EDGE_ENHANCE_UI_T));
			/*memcpy(&tCHIP_SHARPNESS_UI_T, &tCurCHIP_SHARPNESS_UI_T, sizeof(CHIP_SHARPNESS_UI_T));*/
			/*if (uc3DCorrectionEn == false) {*/
				fwif_color_set_sharpness_table_TV006(&tCurCHIP_SHARPNESS_UI_T, &tCurCHIP_EDGE_ENHANCE_UI_T, &tCurCHIP_SR_UI_T);
			/*
				drvif_color_set_Vertical_Peaking_Enable(true);
			} else {
				fwif_color_set_SharpnessFilterCoef_for_3D((CHIP_SHARPNESS_UI_T *)&tCHIP_SHARPNESS_UI_T, (CHIP_SHARPNESS_UI_T *) &t3DCHIP_SHARPNESS_UI_T);
				fwif_color_set_sharpness_table_TV006(tCHIP_SHARPNESS_UI_T, tCHIP_EDGE_ENHANCE_UI_T, uEeVal);
				drvif_color_set_Vertical_Peaking_Enable(false);
			}
			*/
			/*rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VPQ_IOC_SET_EDGE_ENHANCE success\n");*/
			ret = 0;
		}
	}
	break;

	case VPQ_IOC_SET_SR_TABLE:
	{
		RTK_SR_UI_T tRTK_SR_UI_T;

		if (live_zoom_tune)
			return 0;

		if (copy_from_user((void *)&tRTK_SR_UI_T,(void __user *)arg , sizeof(tRTK_SR_UI_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_EDGE_ENHANCE fail\n");
			ret = -1;
		} else {
			memcpy(&tCurCHIP_SR_UI_T, &tRTK_SR_UI_T.sr_ui, sizeof(CHIP_SR_UI_T));
			fwif_color_set_sharpness_table_TV006(&tCurCHIP_SHARPNESS_UI_T, &tCurCHIP_EDGE_ENHANCE_UI_T, &tCurCHIP_SR_UI_T);
			ret = 0;
		}
	}
	break;

	case VPQ_IOC_SET_NR_PQA_TABLE:
	{
		unsigned char PQA_Table_Idx = 0;
		if (copy_from_user(&PQA_Table_Idx, (int __user *)arg, sizeof(unsigned char))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_NR_PQA_TABLE fail\n");
			ret = -1;
		} else {
			fwif_color_set_PQA_table(PQA_Table_Idx);
			/*rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VPQ_IOC_SET_NR_PQA_TABLE success\n");*/
			ret = 0;
		}
	}
	break;

	case VPQ_IOC_SET_NR_PQA_INPUT_TABLE:
	{
		unsigned char PQA_Input_Table_Idx = 0;
		if (copy_from_user(&PQA_Input_Table_Idx, (int __user *)arg, sizeof(unsigned char))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_NR_PQA_INPUT_TABLE fail\n");
			ret = -1;
		} else {
			fwif_color_set_PQA_Input_table(PQA_Input_Table_Idx);
			/*rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VPQ_IOC_SET_NR_PQA_INPUT_TABLE success\n");*/
			ret = 0;
		}
	}
	break;

	case VPQ_IOC_SET_NR_LEVEL:
	{
		if (copy_from_user(&NR_Level, (int __user *)arg, sizeof(CHIP_NOISE_REDUCTION_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_NR_LEVEL fail\n");
			ret = -1;
		} else {

			//fwif_color_Set_NR_Table_tv006(&NR_Level);
			//fwif_color_SetDNR_tv006(NR_Level.NR_LEVEL);

			Scaler_SetDNR(4);
			rtd_printk(KERN_INFO, TAG_NAME, "kernel VPQ_IOC_SET_NR_LEVEL success, Lv = %d\n", NR_Level.NR_LEVEL);
			ret = 0;
		}
	}
	break;

	case VPQ_IOC_SET_NR_INPUT:
	{
		unsigned char args = 0;
		if (copy_from_user(&args, (int __user *)arg, sizeof(unsigned char))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_NR_INPUT fail\n");
			ret = -1;
		} else {
			fwif_color_Set_NR_Input_tv006(args);
			/*rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VPQ_IOC_SET_NR_PQA_TABLE success\n");*/
			ret = 0;
		}

	}
	break;

	case VPQ_IOC_SET_MPEGNR_LEVEL:
	{
		if (copy_from_user(&MPEGNR_Level, (void __user *)arg, sizeof(CHIP_MPEG_NOISE_REDUCTION_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_MPEGNR_LEVEL fail\n");
			ret = -1;
		} else {
			fwif_color_Set_MPEGNR_Table_tv006(&MPEGNR_Level);
			fwif_color_Set_MPEGNR_tv006(MPEGNR_Level.MPEG_LEVEL);

			//rtd_printk(KERN_INFO, TAG_NAME, "kernel VPQ_IOC_SET_MPEGNR_LEVEL success, Lv = %d\n", MPEGNR_Level.MPEG_LEVEL);
			ret = 0;
		}
	}
	break;

	case VPQ_IOC_GET_HistoData_Countbins:
	{
		UINT32 HistoData_bin[TV006_VPQ_chrm_bin];

		if (fwif_color_get_HistoData_Countbins(TV006_VPQ_chrm_bin, &(HistoData_bin[0])) == FALSE) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_Countbins fail\n");
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg, (void *)&HistoData_bin[0], sizeof(HistoData_bin))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_Countbins fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_IOC_GET_HistoData_chrm_bin:
	{
		UINT32 chrm_bin[COLOR_AutoSat_HISTOGRAM_LEVEL];

		if (fwif_color_get_HistoData_chrmbins(COLOR_AutoSat_HISTOGRAM_LEVEL, &(chrm_bin[0])) == FALSE) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_chrm_bin fail\n");
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg, (void *)&chrm_bin[0], sizeof(chrm_bin))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_chrm_bin fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_IOC_GET_HistoData_hue_bin:
	{
		UINT32 hue_bin[COLOR_HUE_HISTOGRAM_LEVEL];

		if (fwif_color_get_HistoData_huebins(COLOR_HUE_HISTOGRAM_LEVEL, &(hue_bin[0])) == FALSE) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel fwif_color_get_HistoData_Countbins fail\n");
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg, (void *)&hue_bin[0], sizeof(hue_bin))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_hue_bin fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_IOC_GET_HistoData_APL:
	{
		unsigned int DC_APL = 0;

		if (fwif_color_get_HistoData_APL(&DC_APL) == FALSE) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel fwif_color_get_HistoData_APL fail\n");
			ret = -1;
		} else {
			if (drvif_color_get_WB_pattern_on())
				DC_APL = 940;
			if (copy_to_user((void __user *)arg, (void *)&DC_APL, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_APL fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_IOC_GET_HistoData_Min:
	{
		signed int DC_min = 0;

		if (fwif_color_get_HistoData_Min(&DC_min) == FALSE) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel fwif_color_get_HistoData_Min fail\n");
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg, (void *)&DC_min, sizeof(signed int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_Min fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_IOC_GET_HistoData_Max:
	{
		signed int DC_max = 0;

		if (fwif_color_get_HistoData_Max(&DC_max) == FALSE) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel fwif_color_get_HistoData_Max fail\n");
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg, (void *)&DC_max, sizeof(signed int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_Max fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_IOC_GET_HistoData_PeakLow:
	{
		signed int DC_peak_low = 0;

		if (fwif_color_get_HistoData_PeakLow(&DC_peak_low) == FALSE) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel fwif_color_get_HistoData_PeakLow fail\n");
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg, (void *)&DC_peak_low, sizeof(signed int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_PeakLow fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_IOC_GET_HistoData_PeakHigh:
	{
		signed int DC_peak_high;

		if (fwif_color_get_HistoData_PeakHigh(&DC_peak_high) == FALSE) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel fwif_color_get_HistoData_PeakHigh fail\n");
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg, (void *)&DC_peak_high, sizeof(signed int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_PeakHigh fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_IOC_GET_HistoData_skin_count:
	{
		unsigned int skin_count;

		if (fwif_color_get_HistoData_skinCount(&skin_count) == FALSE) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel fwif_color_get_HistoData_skinCount fail\n");
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg, (void *)&skin_count, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_skin_count fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_IOC_GET_HistoData_sat_status:
	{
		unsigned int sat_status;

		if (fwif_color_get_HistoData_SatStatus(&sat_status) == FALSE) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel fwif_color_get_HistoData_SatStatus fail\n");
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg, (void *)&sat_status, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel fwif_color_get_HistoData_SatStatus fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_IOC_GET_HistoData_diff_sum:
	{
		unsigned int diff_sum;

		/*rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_diff_sum\n");*/
		if (fwif_color_get_HistoData_diffSum(&diff_sum) == FALSE) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel fwif_color_get_HistoData_diffSum fail\n");
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg, (void *)&diff_sum, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_diff_sum fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_IOC_GET_HistoData_motion:
	{
		unsigned int motion;

		/*rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_motion\n");*/
		if (fwif_color_get_HistoData_motion(&motion) == FALSE) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_motion fail\n");
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg, (void *)&motion, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_motion fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_IOC_GET_HistoData_texture:
	{
		unsigned int texture;

		/*rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_texture\n");*/
		if (fwif_color_get_HistoData_texture(&texture) == FALSE) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel fwif_color_get_HistoData_texture fail\n");
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg, (void *)&texture, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_texture fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_IOC_SET_FreshContrast:
	{
		if (fwif_color_vpq_stop_ioctl(STOP_VPQ_IOC_SET_FreshContrast, ACCESS_MODE_GET, 0))
			return 0;

		if (copy_from_user(&tFreshContrast_coef, (void __user *)arg, sizeof(CHIP_DCC_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_FreshContrast fail\n");
			ret = -1;
		} else {

			if (fwif_color_set_dcc_FreshContrast_tv006(&tFreshContrast_coef) == FALSE) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel fwif_color_set_dcc_FreshContrast_tv006 fail\n");
				ret = -1;
			} else {
				/*rtd_printk(KERN_DEBUG, TAG_NAME, "5.kernel VPQ_IOC_SET_FreshContrast success\n");*/
				ret = 0;
			}
		}
	}
	break;

	case VPQ_IOC_SET_FreshContrastLUT:
	{
		if (fwif_color_vpq_stop_ioctl(STOP_VPQ_IOC_SET_FreshContrastLUT, ACCESS_MODE_GET, 0))
			return 0;

		if (copy_from_user(&tFreshContrastLUT, (int __user *)arg, sizeof(FreshContrastLUT_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_FreshContrastLUT fail\n");
			ret = -1;
		} else {
			if (drvif_color_get_WB_pattern_on()) {
				if (!fwif_color_set_bypass_dcc_Curve_Write_tv006()) {
					rtd_printk(KERN_ERR, TAG_NAME, "kernel fwif_color_set_bypass_dcc_Curve_Write_tv006 fail\n");
						ret = -1;
				}
			} else if (fwif_color_set_dcc_Curve_Write_tv006(&tFreshContrastLUT.FreshContrastLUT[0], 1) == FALSE) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel fwif_color_set_dcc_Curve_Write_tv006 fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_IOC_GET_FreshContrastBypassLUT:
	{
		FreshContrastLUT_T tFreshContrastLUT;

		if (fwif_color_get_FreshContrastBypassLUT(DCC_Curve_Node_MAX, &(tFreshContrastLUT.FreshContrastLUT[0])) == FALSE) {
			rtd_printk(KERN_ERR, TAG_NAME, "fwif_color_get_FreshContrastBypassLUT fail\n");
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg, (void *)&(tFreshContrastLUT.FreshContrastLUT[0]), sizeof(FreshContrastLUT_T))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_FreshContrastBypassLUT copy_to_user fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_IOC_SET_ColorGain:
	{
		RTK_COLOR_GAIN_T colorGain;

		if (fwif_color_vpq_stop_ioctl(STOP_VPQ_IOC_SET_SAT_LUT, ACCESS_MODE_GET, 0))
			return 0;

		if (copy_from_user(&colorGain, (void __user *)arg, sizeof(RTK_COLOR_GAIN_T))) {
					rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_ColorGain fail\n");
					ret = -1;
		} else {
			fwif_color_access_apl_color_gain_tv006(colorGain.wId, &colorGain.uCgVal, ACCESS_MODE_WRITE);
			if (g_bAPLColorGainClr) {
				fwif_color_update_YUV2RGB_CSC_tv006(colorGain.wId);
				g_bAPLColorGainClr = 0;
			} else
				g_bAPLColorGainClr = 1;
		}
	}
	break;

	case VPQ_IOC_SET_CLEAR_WHITE:
	{
		HAL_VPQ_CLEAR_WHITE clear_white;
		DRV_VIP_YUV2RGB_UV_Offset uvOffset;

		if (copy_from_user(&clear_white, (void __user *)arg, sizeof(HAL_VPQ_CLEAR_WHITE))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_CLEAR_WHITE_GAIN fail\n");
			ret = -1;
		} else {
			memcpy(&uvOffset.Uoffset[0], &clear_white.Uoffset[0], sizeof(unsigned char)*VIP_YUV2RGB_Y_Seg_Max);
			memcpy(&uvOffset.Voffset[0], &clear_white.Voffset[0], sizeof(unsigned char)*VIP_YUV2RGB_Y_Seg_Max);
			memcpy(&uvOffset.Ustep[0], &clear_white.Ustep[0], sizeof(unsigned char)*VIP_YUV2RGB_Y_Seg_Max);
			memcpy(&uvOffset.Vstep[0], &clear_white.Vstep[0], sizeof(unsigned char)*VIP_YUV2RGB_Y_Seg_Max);
			memcpy(&uvOffset.UV_index[0], &clear_white.UV_index[0], sizeof(unsigned char)*(VIP_YUV2RGB_Y_Seg_Max-1));
			if (!fwif_color_set_YUV2RGB_UV_Offset_tv006(clear_white.wId, clear_white.enable, clear_white.mode, &uvOffset))
				return -1;
			/*rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VPQ_IOC_SET_CLEAR_WHITE_GAIN,%d,%d, ret =%d\n", level, display, ret);*/
		}
	}
	break;

	case VPQ_IOC_SET_BLUE_STRETCH:
	{
		RTK_BLUE_STRETCH_T blue_stretch;

		if (copy_from_user(&blue_stretch, (void __user *)arg, sizeof(RTK_BLUE_STRETCH_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_BLUE_STRETCH fail\n");
			ret = -1;
		} else {
			drvif_color_set_Blue_Stretch(&blue_stretch.gamma_bs);
		}
	}
	break;
	case VPQ_IOC_SET_LOCALCONTRAST_PARAM:
		{
			if (copy_from_user(&glc_param, (void __user *)arg, sizeof(CHIP_LOCAL_CONTRAST_T))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_LOCALCONTRAST_PARAM fail\n");
				ret = -1;
			} else {
				//fwif_color_set_LocalContrast_table_TV006(&glc_param);

				ret = 0;
			}
		}
	break;

	case VPQ_IOC_SET_INIT_COLOR_ADV:
	{
		if (COLOR_MODE_ADV != g_Color_Mode)
			g_cm_need_refresh = 1;

		if (copy_from_user(&cmRegionExt, (void __user *)arg, sizeof(CHIP_CM_REGION_EXT_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_INIT_COLOR_ADV fail\n");
			ret = -1;
		} else {
			int i;

			if (cmRegionExt.ctrl[0] != 4) //verion4, add keepY
				return -1;

			// check param
			for (i = 0; i < CHIP_CM_COLOR_REGION_MAX; i++) {
				if (cmRegionExt.cm_rgn.stColorRegionType.stColorRegion[i].regionNum >= CHIP_CM_COLOR_REGION_MAX) {
					rtd_printk(KERN_WARNING, TAG_NAME, "[VPQ][kernel] %d-regionNum(%d) > CHIP_CM_COLOR_REGION_MAX, return!!\n",
						i, cmRegionExt.cm_rgn.stColorRegionType.stColorRegion[i].regionNum);
					return -1;
				}
			}

			memcpy(&g_cm_rgn_adv, &cmRegionExt.cm_rgn, sizeof(CHIP_CM_REGION_T));
			g_cm_keep_Y = g_cm_rgn_adv.stColorRegionType.keepY;
			fwif_color_set_ICM_table_driver_init_tv006();
			g_flag_cm_adv_init_ok = 1;
		}
	}
	break;

	case VPQ_IOC_SET_INIT_COLOR_EXP:
	{
		if (COLOR_MODE_EXP != g_Color_Mode)
			g_cm_need_refresh = 1;

		if (copy_from_user(&cmRegionExt, (void __user *)arg, sizeof(CHIP_CM_REGION_EXT_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_INIT_COLOR_EXP fail\n");
			ret = -1;
		} else {
			int i;

			if (cmRegionExt.ctrl[0] != 4) //verion4, add keepY
				return -1;

			// check param
			for (i = 0; i < CHIP_CM_COLOR_REGION_MAX; i++) {
				if (cmRegionExt.cm_rgn.stColorRegionType.stColorRegion[i].regionNum >= CHIP_CM_COLOR_REGION_MAX) {
					rtd_printk(KERN_WARNING, TAG_NAME, "[VPQ][kernel] %d-regionNum(%d) > CHIP_CM_COLOR_REGION_MAX, return!!\n",
						i, cmRegionExt.cm_rgn.stColorRegionType.stColorRegion[i].regionNum);
					return -1;
				}
			}

			memcpy(&g_cm_rgn_exp, &cmRegionExt.cm_rgn, sizeof(CHIP_CM_REGION_T));
			g_cm_keep_Y = g_cm_rgn_exp.stColorRegionType.keepY;
			fwif_color_set_ICM_table_driver_init_tv006();
			g_flag_cm_exp_init_ok = 1;
		}
	}
	break;

	case VPQ_IOC_SET_FRESH_COLOR:
	{
		CHIP_COLOR_CONTROL_FRESH_T cmControl;
		int ret_compare;

		if (live_zoom_tune)
			return 0;

		if (copy_from_user(&cmControl, (void __user *)arg, sizeof(CHIP_COLOR_CONTROL_FRESH_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_FRESH_COLOR fail\n");
			return -1;
		}

		if (cmRegionExt.ctrl[0] != 4) //verion4, add keepY
			return -1;

		if (COLOR_MODE_ADV == g_Color_Mode) {
			if (g_flag_cm_adv_init_ok) {
				ret_compare = memcmp(&g_cm_ctrl_adv, &cmControl.cm_ctrl, sizeof(CHIP_COLOR_CONTROL_T));
				if (ret_compare == 0 && !g_cm_need_refresh) {
					return 0;
				}
				memcpy(&g_cm_ctrl_adv, &cmControl.cm_ctrl, sizeof(CHIP_COLOR_CONTROL_T));
				fwif_color_calc_ICM_gain_table_driver_tv006(&g_cm_rgn_adv.stColorRegionType, &g_cm_ctrl_adv, &icm_tab_elem_of_vip_table, &icm_tab_elem_write);
				vpq_update_icm(TRUE);
				g_cm_need_refresh = 0;
			}
		} else {
			if (g_flag_cm_exp_init_ok) {
				ret_compare = memcmp(&g_cm_ctrl_exp, &cmControl.cm_ctrl, sizeof(CHIP_COLOR_CONTROL_T));
				if (ret_compare == 0 && !g_cm_need_refresh) {
					return 0;
				}
				memcpy(&g_cm_ctrl_exp, &cmControl.cm_ctrl, sizeof(CHIP_COLOR_CONTROL_T));
				fwif_color_calc_ICM_gain_table_driver_tv006(&g_cm_rgn_exp.stColorRegionType, &g_cm_ctrl_exp, &icm_tab_elem_of_vip_table, &icm_tab_elem_write);
				vpq_update_icm(TRUE);
				g_cm_need_refresh = 0;
			}
		}
	}
	break;

	case VPQ_IOC_SET_PREFERRED_COLOR:
	{
		CHIP_COLOR_CONTROL_ADV_EXT_T cmControlExt;

		if (live_zoom_tune)
			return 0;

		if (copy_from_user(&cmControlExt, (void __user *)arg, sizeof(CHIP_COLOR_CONTROL_ADV_EXT_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_PREFERRED_COLOR fail\n");
			ret = -1;
		} else {
			if (cmRegionExt.ctrl[0] != 4) //verion4, add keepY
				return -1;
			if (g_flag_cm_adv_init_ok) {
				int ret_compare;
				ret_compare = memcmp(&g_cm_ctrl_adv, &cmControlExt.cm_ctrl, sizeof(CHIP_COLOR_CONTROL_T));
				if (ret_compare == 0 && !g_cm_need_refresh && g_Color_Mode == COLOR_MODE_ADV) {
					return 0;
				}
				memcpy(&g_cm_ctrl_adv, &cmControlExt.cm_ctrl, sizeof(CHIP_COLOR_CONTROL_T));
				fwif_color_calc_ICM_gain_table_driver_tv006(&g_cm_rgn_adv.stColorRegionType, &g_cm_ctrl_adv, &icm_tab_elem_of_vip_table, &icm_tab_elem_write);
				vpq_update_icm(TRUE);
				g_Color_Mode = COLOR_MODE_ADV;
				g_cm_need_refresh = 0;
			} else {
				rtd_printk(KERN_WARNING, TAG_NAME, "[VPQ][kernel] need call HAL_VPQ_InitColorForAdvanced first!\n");
				ret = -1;
			}
		}
	}
	break;

	case VPQ_IOC_SET_COLOR_MANAGEMENT:
	{
		CHIP_COLOR_CONTROL_EXP_EXT_T cmControlExt;

		if (live_zoom_tune)
			return 0;

		if (copy_from_user(&cmControlExt, (void __user *)arg, sizeof(CHIP_COLOR_CONTROL_EXP_EXT_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_COLOR_MANAGEMENT fail\n");
			ret = -1;
		} else {
			if (cmRegionExt.ctrl[0] != 4) //verion4, add keepY
				return -1;
			if (g_flag_cm_exp_init_ok) {
				int ret_compare;
				ret_compare = memcmp(&g_cm_ctrl_exp, &cmControlExt.cm_ctrl, sizeof(CHIP_COLOR_CONTROL_T));
				if (ret_compare == 0 && !g_cm_need_refresh && g_Color_Mode == COLOR_MODE_EXP) {
					return 0;
				}
				memcpy(&g_cm_ctrl_exp, &cmControlExt.cm_ctrl, sizeof(CHIP_COLOR_CONTROL_T));
				fwif_color_calc_ICM_gain_table_driver_tv006(&g_cm_rgn_exp.stColorRegionType, &g_cm_ctrl_exp, &icm_tab_elem_of_vip_table, &icm_tab_elem_write);
				vpq_update_icm(TRUE);
				g_Color_Mode = COLOR_MODE_EXP;
				g_cm_need_refresh = 0;
			} else {
				rtd_printk(KERN_WARNING, TAG_NAME, "[VPQ][kernel] need call HAL_VPQ_InitColorForExpert first!\n");
			}
		}
	}
	break;

	case VPQ_IOC_SET_ICM_ELEM:
	{
		if (copy_from_user(&icm_tab_elem_write, (int __user *)arg, sizeof(COLORELEM_TAB_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_ICM_ELEM fail\n");
			ret = -1;
		} else {
			vpq_update_icm(TRUE);
		}
	}
	break;

	case VPQ_IOC_SET_3D_COLOR_CORRECTION:
	{
		unsigned char c3DMode;
		unsigned int args;
		/*
		CHIP_SHARPNESS_UI_T tCHIP_SHARPNESS_UI_T;
		CHIP_EDGE_ENHANCE_UI_T tCHIP_EDGE_ENHANCE_UI_T;
		*/

		//static BOOLEAN lowdelaymode;
		if (copy_from_user(&args, (int __user *)arg, sizeof(unsigned int))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_PIC_CTRL fail\n");
			ret = -1;
		} else {
			uc3DCorrectionEn = args&0xff;
			c3DMode = (args>>8)&0xff;

			if (HAL_VPQ_3D_MODE_3D_FS == c3DMode)
				bForceHist3DCtrl = true;
			else
				bForceHist3DCtrl = false;

			fwif_color_set_hist_3d_en(bForceHist3DCtrl);
			ret = 0;
		}

		/*
		memcpy(&tCHIP_SHARPNESS_UI_T, &tCurCHIP_SHARPNESS_UI_T, sizeof(CHIP_SHARPNESS_UI_T));
		memcpy(&tCHIP_EDGE_ENHANCE_UI_T, &tCurCHIP_EDGE_ENHANCE_UI_T, sizeof(CHIP_EDGE_ENHANCE_UI_T));
		if (uc3DCorrectionEn == false) {
			fwif_color_set_sharpness_table_TV006(tCHIP_SHARPNESS_UI_T, tCHIP_EDGE_ENHANCE_UI_T, uEeVal);
			drvif_color_set_Vertical_Peaking_Enable(true);
		} else {
			fwif_color_set_SharpnessFilterCoef_for_3D((CHIP_SHARPNESS_UI_T *)&tCHIP_SHARPNESS_UI_T, (CHIP_SHARPNESS_UI_T *) &t3DCHIP_SHARPNESS_UI_T);
			fwif_color_set_sharpness_table_TV006(tCHIP_SHARPNESS_UI_T, tCHIP_EDGE_ENHANCE_UI_T, uEeVal);
			drvif_color_set_Vertical_Peaking_Enable(false);
		}
		*/
		/*ToDo :: add sharpness v peaking and 2d coeff table*/
		ret = 0;
	}
	break;

	case VPQ_IOC_SET_PIC_CTRL:
	{
		/*unsigned char display = 0;*/
		/*rtd_printk(KERN_DEBUG, TAG_NAME, "~~kernel VPQ_IOC_SET_CLEAR_WHITE_GAIN~~\n");*/

		PictureMode_flg = 1;  // for MEMC wrt by JerryWang 20161125
		if (copy_from_user(&pic_ctrl, (int __user *)arg, sizeof(VPQ_SetPicCtrl_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_PIC_CTRL fail\n");
			ret = -1;
		} else {
			ret = fwif_color_set_Picture_Control_tv006(pic_ctrl.wId, &pic_ctrl);
		}
	}
	break;

	case VPQ_IOC_SET_BLACK_LEVEL:
	{

		HAL_VPQ_SET_BLACK_LEVEL blackLv;
		unsigned char mCon, mBri, mHue, mSat;
		unsigned char  input_info;
		unsigned char  level;
		rtd_printk(KERN_INFO, TAG_NAME, "\n HDR_MODE, VPQ_IOC_SET_BLACK_LEVEL ");

		if (copy_from_user(&blackLv, (int __user *)arg, sizeof(HAL_VPQ_SET_BLACK_LEVEL))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_BLACK_LEVEL fail\n");
			ret = -1;
		} else {

			input_info = blackLv.uBlVal[SET_BLACK_LEVEL_ITEM_Input_Info];



			switch (blackLv.uBlVal[SET_BLACK_LEVEL_ITEM_Level])
			{
			case UI_LEVEL_LOW:
				level = RGB2YUV_BLACK_LEVEL_LOW;
				break;
			case UI_LEVEL_HIGH:
				level = RGB2YUV_BLACK_LEVEL_HIGH;
				break;
			case UI_LEVEL_AUTO:
				level = RGB2YUV_BLACK_LEVEL_AUTO;
				break;
			default:
				level = RGB2YUV_BLACK_LEVEL_AUTO;
			}

			//20161111 roger, when sub record, don't change VD con/bri, WOSQRTK-9730
			if ((input_info == HAL_VPQ_INPUT_ATV || input_info == HAL_VPQ_INPUT_AV) && (get_sub_OutputVencMode() == 0)) {
				if (fwif_color_get_VDBlackLevel_MappingValue(input_info, level-1, &mCon, &mBri, &mHue, &mSat) == 0)
				{
					fwif_color_set_VDBlackLevel(mCon, mBri, mHue, mSat);

				}
			}

			/*20151128 roger, WOSQRTK-3568, LG want input_info == HAL_VPQ_INPUT_MEDIA_MOVIE, and level == RGB2YUV_BLACK_LEVEL_AUTO then level = RGB2YUV_BLACK_LEVEL_LOW directly*/
			if (input_info == HAL_VPQ_INPUT_MEDIA_MOVIE)
			{
				if (level == RGB2YUV_BLACK_LEVEL_AUTO)
					level = RGB2YUV_BLACK_LEVEL_LOW;
			}

			/* compare with previous, change black lv from UI while comparation is differnet*/
			if (level == fwif_color_get_rgb2yuv_black_level_tv006())
				isBlack_LvDiff_Flag = 0;
			else
				isBlack_LvDiff_Flag = 1;

			fwif_color_set_rgb2yuv_black_level_tv006(level);

#ifndef CONFIG_HDR_SDR_SEAMLESS	/* seamless need to check force bg and mode active*/
			fwif_color_SetDataFormatHandler_tv006();
#else
			if ((Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) == _MODE_STATE_ACTIVE) && (Check_AP_Set_Enable_ForceBG(SLR_MAIN_DISPLAY) == FALSE))
			{
				if (isBlack_LvDiff_Flag == 1) {
					fwif_color_SetDataFormatHandler_tv006();
				} else {
					/* seamless. do seamless process in isr (void Scaler_hdr_setting_SEAMLESS()), avoid transient noise*/
					;
				}
			} else {
				fwif_color_SetDataFormatHandler_tv006();
			}
			HDR_SDR_SEAMLESS_PQ.HDR_SDR_SEAMLESS_PQ_SET[HDR_SDR_SEAMLESS_PQ_HAL_PQModeInfo]=1;
#endif
			ret = 0;
		}
	}
	break;

	case VPQ_IOC_SET_HDR_GAMUTMATRIX:
	{
		HDR_SetGamut33Matrix_T gamut33;
		printk("\n HDR_MODE, VPQ_IOC_SET_HDR_GAMUTMATRIX PQModeInfo_flag:%d",PQModeInfo_flag[0]);
		//if (PQModeInfo_flag[0] != HAL_VPQ_HDR_MODE_HDR10) break;	/* seamless will only change PQModeInfo_flag_seamless, this condition is not correct*/
		if (copy_from_user(&gamut33, (int __user *)arg, sizeof(HDR_SetGamut33Matrix_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_HDR_GAMUTMATRIX fail\n");
			ret = -1;
		} else {
			//drvif_HDR_RGB2OPT(1, gamut33.Gamut33Matrix);
			fwif_HDR_RGB2OPT(0, gamut33.Gamut33Matrix);
		}
	}
	break;

	case VPQ_IOC_SET_HDR_3DLUT_16: //new
	{
		UINT8 data_protect_cfu = 100;
		rtd_printk(KERN_INFO, TAG_NAME, "\n HDR_MODE, VPQ_IOC_SET_HDR_3DLUT_16");
		//20151112 roger, fail ==> try again, I can't get the batter way to fix this copy fail issue
		while(copy_from_user(&phdr3dlut16, (void __user *)arg, sizeof(short) * VIP_DM_HDR_3D_LUT_UI_TBL_SIZE) && (data_protect_cfu > 0))
		{
			msleep(10);
			data_protect_cfu--;
		}

		if (data_protect_cfu == 0)
		{
			rtd_printk(KERN_ERR, TAG_NAME, "HDR10, kernel VPQ_IOC_SET_GAMUT_3D_LUT_N17_BUFFER fail\n");
			ret = -1;
		}
		else
		{
			//static struct task_struct *p_pq_tsk_HDR_3dLUT_16 = NULL;

			static PQ_HDR_3dLUT_16_PARAM args;
			args.c3dLUT_16_enable = 1;
			args.a3dLUT_16_pArray = (UINT16*)(void __user *)&(phdr3dlut16.hdr_3dlut);

			//UINT32 rc = 0;
			//for (rc = 0; rc < 10; rc++)
			//	printk("3dlut[%d]= %d, 3dlut[%d]= %d, 3dlut[%d]= %d\n", 3*rc, phdr3dlut16.hdr_3dlut[3*rc], 3*rc + 1, phdr3dlut16.hdr_3dlut[3*rc + 1], 3*rc + 2, phdr3dlut16.hdr_3dlut[3*rc + 2]);

			#if 0
			p_pq_tsk_HDR_3dLUT_16 = kthread_create(fwif_color_set_DM_HDR_3dLUT_16, (void *)&args, "fwif_color_set_DM_HDR_3dLUT_16");
			if (p_pq_tsk_HDR_3dLUT_16) {
				wake_up_process(p_pq_tsk_HDR_3dLUT_16);
			}
			#else
			fwif_color_set_DM_HDR_3dLUT_17x17x17_16_TV006(&args);
			#endif
		}
	}
	break;

	case VPQ_IOC_SET_HDR_3DLUT_24x24x24_16_1:
	{
		UINT8 data_protect_cfu = 100;
		rtd_printk(KERN_INFO, TAG_NAME, "\n HDR_MODE, VPQ_IOC_SET_HDR_3DLUT_24x24x24_16_1\n");
		while(copy_from_user(&phdr3dlut16, (void __user *)arg, (sizeof(short) * ((HDR_24x24x24_size*3)>>1))) && (data_protect_cfu > 0))
		{
			msleep(10);
			data_protect_cfu--;
		}

		if (data_protect_cfu == 0)
		{
			rtd_printk(KERN_ERR, TAG_NAME, "HDR10, CSC3 table copy fail\n");
			ret = -1;
		}
	}
	break;

	case VPQ_IOC_SET_HDR_3DLUT_24x24x24_16_2:
	{
		UINT8 data_protect_cfu = 100;
		rtd_printk(KERN_INFO, TAG_NAME, "\n HDR_MODE, VPQ_IOC_SET_HDR_3DLUT_24x24x24_16_2");
		while(copy_from_user(((UINT16*)(void __user *)&(phdr3dlut16.hdr_3dlut)) + ((HDR_24x24x24_size*3)>>1), (void __user *)arg, (sizeof(short) * ((HDR_24x24x24_size*3)>>1))) && (data_protect_cfu > 0))
		{
			msleep(10);
			data_protect_cfu--;
		}

		if (data_protect_cfu == 0)
		{
			rtd_printk(KERN_ERR, TAG_NAME, "HDR10, CSC3 table copy fail 2\n");
			ret = -1;
		}
		else
		{
			static PQ_HDR_3dLUT_16_PARAM args;
			args.c3dLUT_16_enable = 1;
			args.a3dLUT_16_pArray = (UINT16*)(void __user *)&(phdr3dlut16.hdr_3dlut);
			drvif_Set_DM_HDR_CLK();	// enable DM & Composer clock
			fwif_color_set_DM_HDR_3dLUT_24x24x24_16_TV006(&args);
		}
	}
	break;

	case VPQ_IOC_SET_HDR_Eotf:
	{
		HAL_VPQ_DATA_T Eotf_data;
		UINT8 data_protect_cfu = 100;
		rtd_printk(KERN_INFO, TAG_NAME, "\n HDR_MODE, VPQ_IOC_SET_HDR_Eotf");
		if (copy_from_user(&Eotf_data, (int __user *)arg, sizeof(HAL_VPQ_DATA_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "HDR10, Eotf struct copy fail\n");
			ret = -1;
			break;
		}

		while(copy_from_user(Eotf_table32, (int __user *)Eotf_data.pData, EOTF_size * 4) && data_protect_cfu)
		{
			msleep(10);
			data_protect_cfu--;
		}

		if (data_protect_cfu == 0)
		{
			rtd_printk(KERN_ERR, TAG_NAME, "HDR10, Eotf table copy fail\n");
			ret = -1;
		}
		else
		{
			Eotf_table32[EOTF_size - 1] = 0xffffffff;
			//UINT16 i;
			//for (i = 0; i < EOTF_size; i++)
				//printk("roger, Eotf[%d] = %d\n", i, Eotf_table32[i]);

			fwif_color_set_DM2_EOTF_TV006(Eotf_table32); //SEAMLESS mode block it
		}
	}
	break;

	case VPQ_IOC_SET_HDR_Oetf:
	{
		HAL_VPQ_DATA_T Oetf_data;
		UINT8 data_protect_cfu = 100;
		rtd_printk(KERN_INFO, TAG_NAME, "\n HDR_MODE, VPQ_IOC_SET_HDR_Oetf ");
		if (copy_from_user(&Oetf_data, (int __user *)arg, sizeof(HAL_VPQ_DATA_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "HDR10, Oetf struct copy fail\n");
			ret = -1;
			break;
		}

		while(copy_from_user(Oetf_table16, (int __user *)Oetf_data.pData, OETF_size * 2) && data_protect_cfu)
		{
			msleep(10);
			data_protect_cfu--;
		}

		if (data_protect_cfu == 0)
		{
			rtd_printk(KERN_ERR, TAG_NAME, "HDR10, Oetf table copy fail\n");
			ret = -1;
		}
		else
		{
			Oetf_table16[OETF_size - 1] = 0xffff;
			//UINT16 i;
			//for (i = 0; i < OETF_size; i++)
				//printk("roger, Oetf[%d] = %d\n", i, Oetf_table16[i]);

			fwif_color_set_DM2_OETF_TV006(Oetf_table16);
		}

	}
	break;

	case VPQ_IOC_SET_PQModeInfo:
	{
		HAL_VPQ_DATA_T PQModeInfo_data;
		rtd_printk(KERN_INFO, TAG_NAME, "HDR main contorl, SET_PQModeInfo\n");
		if (copy_from_user(&PQModeInfo_data, (int __user *)arg, sizeof(HAL_VPQ_DATA_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "HDR main contorl, PQModeInfo struct copy fail\n");
			ret = -1;
			break;
		}

		if(copy_from_user(PQModeInfo_flag, (int __user *)PQModeInfo_data.pData, PQModeInfo_data.length))
		{
			rtd_printk(KERN_ERR, TAG_NAME, "HDR main contorl, PQModeInfo table copy fail\n");
			ret = -1;
		}
		else
		{

			pr_info("[HDR new flow][VPQ HAL], type = %d\n", PQModeInfo_flag[0]);
			if (PQModeInfo_flag[0] == HAL_VPQ_HDR_MODE_HDR10)
				rtd_printk(KERN_INFO, TAG_NAME, "\n HDR_MODE, PQModeInfo_flag :HAL_VPQ_HDR_MODE_HDR10 \n");
			else if (PQModeInfo_flag[0] == HAL_VPQ_HDR_MODE_HLG)
				rtd_printk(KERN_INFO, TAG_NAME, "\nHDR_MODE, PQModeInfo_flag :HAL_VPQ_HDR_MODE_HLG \n");
			else
				rtd_printk(KERN_INFO, TAG_NAME, "\n HDR_MODE, PQModeInfo_flag :HAL_VPQ_HDR_MODE_SDR \n");

			if (PQModeInfo_flag[1] == 0) PQModeInfo_flag[1] = 2;	//data protect
			g_LGE_HDR_CSC_CTRL = PQModeInfo_flag[1];


#ifndef CONFIG_HDR_SDR_SEAMLESS	/* seamless need to check force bg and mode active*/
			drvif_TV006_SET_HDR_mode(PQModeInfo_flag);
			fwif_color_SetDataFormatHandler_tv006();
#else
			if (Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) == _MODE_STATE_ACTIVE)
			{
				rtd_printk(KERN_INFO, TAG_NAME, "\nHDR_MODE, PQModeInfo: seamless flow\n");
				/* seamless. do seamless process in isr (void Scaler_hdr_setting_SEAMLESS()), avoid transient noise*/;
			} else {
				rtd_printk(KERN_INFO, TAG_NAME, "\nHDR_MODE, PQModeInfo: scaler flow\n");
				drvif_TV006_SET_HDR_mode(PQModeInfo_flag);
				fwif_color_SetDataFormatHandler_tv006();
			}
			HDR_SDR_SEAMLESS_PQ.HDR_SDR_SEAMLESS_PQ_SET[HDR_SDR_SEAMLESS_PQ_HAL_PQModeInfo]=1;
#endif
		}
	}
	break;

	case VPQ_IOC_GET_HDR_PicInfo:
	{
		UINT32 HDR_info_bin[131] = {0};
		//get histogram protect
		if (fwif_color_get_DM_HDR10_enable_TV006() == 0) {
			//rtd_printk(KERN_NOTICE, TAG_NAME, "kernel fwif_color_get_DM2_HDR_histogram_TV006 should not run in SDR content\n");
			ret = -1;
			break;
		}

		if (fwif_color_get_DM2_HDR_histogram_TV006(HDR_info_bin) == 0) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel fwif_color_get_DM2_HDR_histogram_TV006 fail\n");
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg, HDR_info_bin, 131 * 4)) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HDR_PicInfo fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_IOC_SET_HDR_InvGamma:
	{
		UINT8 HDR_InvGamma_en = 0;
		rtd_printk(KERN_INFO, TAG_NAME, "HDR10, SET_HDR_InvGamma\n");
		if (copy_from_user(&HDR_InvGamma_en, (void __user *)arg, 1)) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_HDR_InvGamma fail\n");
			ret = -1;
		} else {
#ifndef CONFIG_HDR_SDR_SEAMLESS	/* seamless need to check force bg and mode active*/
			drvif_DM2_GAMMA_Enable(HDR_InvGamma_en);
#else
			if ((Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) == _MODE_STATE_ACTIVE) && (Check_AP_Set_Enable_ForceBG(SLR_MAIN_DISPLAY) == FALSE))
			{
				g_InvGamma = HDR_InvGamma_en;

				rtd_printk(KERN_INFO, TAG_NAME, "\n HDR_MODE,SEAMLESS_FLOW SET_HDR_InvGamma:%d \n",HDR_InvGamma_en);
				/* seamless. do seamless process in isr (void Scaler_hdr_setting_SEAMLESS()), avoid transient noise*/;
			} else {

				rtd_printk(KERN_INFO, TAG_NAME, "\n HDR_MODE, SET_HDR_InvGamma :%d \n ",HDR_InvGamma_en);

				//drvif_DM2_GAMMA_Enable(HDR_InvGamma_en);
				fwif_DM2_GAMMA_Enable(HDR_InvGamma_en);
			}
			//HDR_SDR_SEAMLESS_PQ.HDR_SDR_SEAMLESS_PQ_SET[HDR_SDR_SEAMLESS_PQ_HAL_PQModeInfo]=1;
#endif
		}
	}
	break;

	case VPQ_IOC_HDR_DEMO_Mode_ON:
	{
		Scaler_color_set_HDR_DEMO_Mode_ON();
	}
	break;

	case VPQ_IOC_HDR_DEMO_Mode_OFF:
	{
		Scaler_color_set_HDR_DEMO_Mode_OFF();
	}
	break;

	case VPQ_IOC_SET_COLOR_GAMUT:
	{
		if (copy_from_user(&gamutData, (void __user *)arg, sizeof(COLOR_GAMUT_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_COLOR_GAMUT fail\n");
			ret = -1;
		} else {
			unsigned char invgamma_enable;
			short sRGBMatrix[3][3];

			invgamma_enable = gamutData.gamutMapping.invgamma_enable & 0xff;

			/*rtd_printk(KERN_DEBUG, TAG_NAME, "gamutData.gamutMapping.invgamma_enable = %d, invgamma_enable = %d\n", gamutData.gamutMapping.invgamma_enable, invgamma_enable);*/

			if (g_InvGammaPowerMode != invgamma_enable) {
				g_InvGammaPowerMode = invgamma_enable;

				switch(g_InvGammaPowerMode)
				{
					case VPQ_GAMMA_MODE_INV_OFF_INNER_BYPASS:
					default:
						drvif_color_inv_gamma_enable(SLR_MAIN_DISPLAY, 0, 1);
						drvif_color_inv_gamma_enable(SLR_SUB_DISPLAY, 0, 1);
						break;
					case VPQ_GAMMA_MODE_INV_OFF_INNER_ON:
						drvif_color_inv_gamma_enable(SLR_MAIN_DISPLAY, 0, 1);
						drvif_color_inv_gamma_enable(SLR_SUB_DISPLAY, 0, 1);
						break;
					case VPQ_GAMMA_MODE_INV_ON_INNER_BYPASS:
						drvif_color_inv_gamma_enable(SLR_MAIN_DISPLAY, 1, 1);
						drvif_color_inv_gamma_enable(SLR_SUB_DISPLAY, 1, 1);
						break;
					case VPQ_GAMMA_MODE_INV_ON_INNER_ON:
						drvif_color_inv_gamma_enable(SLR_MAIN_DISPLAY, 1, 1);
						drvif_color_inv_gamma_enable(SLR_SUB_DISPLAY, 1, 1);
						break;
				}
				vpq_set_gamma(1, 1);
			}

			sRGBMatrix[0][0] = gamutData.gamutMapping.gamutmatrix_00;
			sRGBMatrix[0][1] = gamutData.gamutMapping.gamutmatrix_01;
			sRGBMatrix[0][2] = gamutData.gamutMapping.gamutmatrix_02;
			sRGBMatrix[1][0] = gamutData.gamutMapping.gamutmatrix_10;
			sRGBMatrix[1][1] = gamutData.gamutMapping.gamutmatrix_11;
			sRGBMatrix[1][2] = gamutData.gamutMapping.gamutmatrix_12;
			sRGBMatrix[2][0] = gamutData.gamutMapping.gamutmatrix_20;
			sRGBMatrix[2][1] = gamutData.gamutMapping.gamutmatrix_21;
			sRGBMatrix[2][2] = gamutData.gamutMapping.gamutmatrix_22;

			//fwif_color_ColorMap_SetMatrix(SLR_MAIN_DISPLAY, sRGBMatrix, 2, g_srgbForceUpdate, 0);
			//g_srgbForceUpdate = 0;

			/*=== Gamut 3D LUT ===*/
			if (gamutData.gamutMapping.b3DLUT_internalselect) {//0:RTK DB, 1:LG DB
				if (g_3DLUT_LastInternalSelect != gamutData.gamutMapping.b3DLUT_internalselect || g_3DLUT_Resume) {
					vpq_set_Gamut_3D_Lut_LGDB(&g_buf3DLUT_LGDB, gamutData.gamutMapping.b3DLUT_enable, 0);
					g_3DLUT_Resume = 0;
				} else {
					/*compare table*/
					if (memcmp(&g_buf3DLUT_LGDB.pt, &g_LGDB_3D_LUT_BUF[0].pt, sizeof(GAMUT_3D_LUT_PT_T)*4913) != 0) {//different
						vpq_set_Gamut_3D_Lut_LGDB(&g_buf3DLUT_LGDB, gamutData.gamutMapping.b3DLUT_enable, 0);
					} else if (g_3DLUT_LastEnableSatus == 0 && gamutData.gamutMapping.b3DLUT_enable == 1) {
						vpq_set_Gamut_3D_Lut_LGDB(&g_buf3DLUT_LGDB, gamutData.gamutMapping.b3DLUT_enable, 1);
					}
				}
				if (gamutData.gamutMapping.b3DLUT_enable) {
					memcpy(&g_LGDB_3D_LUT_BUF[0].pt, &g_buf3DLUT_LGDB.pt, sizeof(GAMUT_3D_LUT_PT_T)*4913);
				}
			} else {
				if (g_3DLUT_LastInternalSelect != gamutData.gamutMapping.b3DLUT_internalselect) {
					vpq_set_3d_lut_index(gamutData.gamutMapping.b3DLUT_enable?(gamutData.gamutMapping.u3DLUT_index+1):0, 1); //force write
				} else {
					vpq_set_3d_lut_index(gamutData.gamutMapping.b3DLUT_enable?(gamutData.gamutMapping.u3DLUT_index+1):0, 0);
				}
			}
			g_3DLUT_LastInternalSelect = gamutData.gamutMapping.b3DLUT_internalselect;
			g_3DLUT_LastEnableSatus = gamutData.gamutMapping.b3DLUT_enable;
			/*====================*/
			ret = 0;
		}
	}
	break;

	case VPQ_IOC_SET_SAT_LUT:
	{
		if (fwif_color_vpq_stop_ioctl(STOP_VPQ_IOC_SET_SAT_LUT, ACCESS_MODE_GET, 0))
			return 0;

		if (copy_from_user(&satLutData, (int __user *)arg, sizeof(VPQ_SAT_LUT_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_SAT_LUT fail\n");
			ret = -1;
		} else {
			ret = fwif_color_set_DSE_tv006(SLR_MAIN_DISPLAY, &satLutData);
			if (ret == 0)
				g_bAPLColorGainClr = 0;
		}
	}
	break;

	case VPQ_IOC_SET_DITHER_BIT:
	{
		unsigned int args;
		if (copy_from_user(&args, (int __user *)arg, sizeof(unsigned int))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_PIC_CTRL fail\n");
			ret = -1;
		} else {
			fwif_color_set_Panel_Dither(TRUE,args,VIP_DITHER_PANELTABLE_BLANCE_ROLL_15);
			ret = 0;
		}
	}
	break;

	/*
	case VPQ_IOC_SET_GAMUT_3D_LUT_N9_BUFFER:
	{
		GAMUT_3D_LUT_9x9x9_T *pLut = NULL;
		pLut = (GAMUT_3D_LUT_9x9x9_T *)kmalloc(sizeof(GAMUT_3D_LUT_9x9x9_T), GFP_KERNEL);
		if (pLut == NULL) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_GAMUT_3D_LUT_N9_BUFFER malloc fail\n");
			return -1;
		}

		if (copy_from_user(pLut, (void __user *)arg, sizeof(GAMUT_3D_LUT_9x9x9_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_GAMUT_3D_LUT_N9_BUFFER fail\n");
			ret = -1;
		} else
			ret = fwif_color_set_Gamut_3D_Lut_N9_to_N17_tv006(pLut)?0:-1;

		kfree(pLut);
	}
	break;
	*/

	case VPQ_IOC_SET_GAMUT_3D_LUT_N17_BUFFER:
	{
		if (copy_from_user(&g_buf3DLUT_LGDB.pt, (void __user *)arg, sizeof(GAMUT_3D_LUT_PT_T)*4913)) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_GAMUT_3D_LUT_N17_BUFFER fail\n");
			ret = -1;
		} else {
			g_bGamut3DLUT_LGDB_NeedUpdated = 1;
		}
	}
	break;

	case VPQ_IOC_SET_GAMUT_3D_LUT_INDEX:
	{
		unsigned int value;
		if (copy_from_user(&value, (void __user *)arg, sizeof(unsigned int))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_SET_GAMUT_3D_LUT_INDEX fail\n");
			ret = -1;
		} else {
			fwif_color_set_3dLUT(value);
			ret = 0;
		}
	}
	break;

	case VPQ_IOC_SET_LOWDELAY_MODE:
	{
		game_process = 0;
		if (Get_Factory_SelfDiagnosis_Mode() || (Get_LivezoomOffMainRunScaler() == TRUE) || (Get_Live_zoom_mode()==LIVE_ZOOM_ON)) {
			/*qiangzhou added20151228:livezoom,magnifier and self diagnosis not support low delay setting*/
			ret = 0;
		} else {
			bool lowdelaymode;
			static bool pre_lowdelaymode;
			if (copy_from_user(&lowdelaymode, (int __user *)arg, sizeof(bool))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_LOWDELAY_MODE fail\n");
				ret = -1;
			} else {
				game_process = 1;
				fw_scalerip_set_di_gamemode(lowdelaymode);
				pre_lowdelaymode = lowdelaymode;
				if(((lowdelaymode == FALSE) && (Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) != _MODE_STATE_ACTIVE))||(rtk_hal_vsc_GetRGB444Mode() == TRUE&&(Get_DisplayMode_Src(Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY)) == VSC_INPUTSRC_HDMI))){ //not game mode and not _MODE_STATE_ACTIVE
					//fw_scalerip_set_di_gamemode(lowdelaymode);
					//drv_memory_set_game_mode_dynamic(_DISABLE);
					fw_scalerip_set_di_gamemode_setting(_DISABLE);
					//ret = 0;
					//break;
				}
				if (g_bDIGameModeOnlyDebug) //for di game mode debug, only can enabled by rtice tool
					return ret;
#if 0
				if(((pre_lowdelaymode == lowdelaymode) && (Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) == _MODE_STATE_ACTIVE))) {
					//fw_scalerip_set_di_gamemode(lowdelaymode);
					ret = 0;
					break;
				}
#endif
				if(lowdelaymode) {
					//printk(KERN_EMERG"[crixus]VPQ_IOC_SET_LOWDELAY_MODE1\n");
					//game mode dynamic, check in vsc task @Crixus 20151228
					drv_memory_set_game_mode_dynamic(_ENABLE);
				} else {
					//printk(KERN_EMERG"[crixus]VPQ_IOC_SET_LOWDELAY_MODE0\n");
					//game mode dynamic, check in vsc task @Crixus 20151228
					drv_memory_set_game_mode_dynamic(_DISABLE);
				}

				//Game mode cmd checking flow @Cixus 20161204
				if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) == _MODE_STATE_ACTIVE){
					down(get_gamemode_check_semaphore());
					/*overflow protection*/
					if(game_mode_cmd_check == 0xffffffff)
						game_mode_cmd_check = 0;
					else if(lowdelaymode != drv_memory_get_game_mode_flag())	// game_mode_cmd_check + 1 when current  != AP setting in picture mode
						game_mode_cmd_check = game_mode_cmd_check + 1;
					up(get_gamemode_check_semaphore());
					//printk(KERN_EMERG"[crixus]game_mode_cmd_check = %d\n", game_mode_cmd_check);
				}
				ret = 0;
			}
		}
	}
	break;

	case VPQ_IOC_SET_PCID:
	{
		HAL_VPQ_DATA_T OD_Ext_Info;
		HAL_VPQ_OD_Extention_T OD_Ext_Data;

		if( copy_from_user(&OD_Ext_Info, (int __user *)arg, sizeof(HAL_VPQ_DATA_T)) )
		{
			rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_PCID fail\n");
			ret = -1;
			break;
		}
		else
		{
			if( copy_from_user(&OD_Ext_Data, (int __user *)OD_Ext_Info.pData, sizeof(HAL_VPQ_OD_Extention_T)) )
			{
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_PCID_pData fail\n");
				ret = -1;
			}
			else
			{
				if( OD_Ext_Data.extType == 0 ) /*POD*/
				{
					if( OD_Ext_Data.extLength != POD_TABLE_LEN )
					{
						rtd_printk(KERN_ERR, TAG_NAME, "POD LUT length = %d error!\n", OD_Ext_Data.extLength);
						ret = -1;
					}
					else
					{
						unsigned char* pLUT = NULL;
						pLUT = (unsigned char *)dvr_malloc(POD_TABLE_LEN*sizeof(unsigned char));
						if(pLUT == NULL)
						{
							rtd_printk(KERN_ERR, TAG_NAME, "[ERROR] VPQ_IOC_SET_PCID POD Table allocate fail\n");
							return -1;
						}

						if( copy_from_user(pLUT, (int __user *)OD_Ext_Data.pExtData, 578*sizeof(UINT8)) )
						{
							rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_PCID_pData(POD) fail\n");
							ret = -1;
						}
						else
						{
							drvif_color_pcid_enable(0); // PCID and PCID2 cannot enable at the same time
							fwif_color_set_pcid2_valuetable(pLUT);
							fwif_color_set_pcid2_poltable();
							fwif_color_set_pcid2_pixel_setting();
							fwif_color_set_pcid_RgnWeight();
							drvif_color_pcid2_enable(1);
							g_pcid2_en = 1;
							g_pcid_en = 0;
							ret = 0;
						}
						dvr_free(pLUT);
					}
				}
				else if( OD_Ext_Data.extType == 1 ) /*PCID*/
				{
					if( OD_Ext_Data.extLength != PCID_TABLE_LEN )
					{
						rtd_printk(KERN_ERR, TAG_NAME, "PCID LUT length = %d error!\n", OD_Ext_Data.extLength);
						ret = -1;
					}
					else
					{
						unsigned char* pLUT = NULL;
						pLUT = (unsigned char *)dvr_malloc(PCID_TABLE_LEN*sizeof(unsigned char));
						if(pLUT == NULL)
						{
							rtd_printk(KERN_ERR, TAG_NAME, "[ERROR] VPQ_IOC_SET_PCID PCID Table allocate fail\n");
							return -1;
						}

						if( copy_from_user(pLUT, (int __user *)OD_Ext_Data.pExtData, 289*sizeof(UINT8)) )
						{
							rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_PCID_pData(PCID) fail\n");
							ret = -1;
						}
						else
						{
							drvif_color_pcid2_enable(0); // PCID and PCID2 cannot enable at the same time
							fwif_color_set_pcid_valuetable(pLUT);
							drvif_color_pcid_poltable();
							fwif_color_set_pcid_pixel_setting();
							fwif_color_set_pcid_RgnWeight();
							drvif_color_pcid_enable(1);
							g_pcid_en = 1;
							g_pcid2_en = 0;
							ret = 0;
						}
						dvr_free(pLUT);
					}
				}
				else if( OD_Ext_Data.extType == 2 ) /* VALC */
				{
					if( OD_Ext_Data.extLength != PCID_TABLE_LEN )
					{
						rtd_printk(KERN_ERR, TAG_NAME, "VALC LUT length = %d error!\n", OD_Ext_Data.extLength);
						ret = -1;
					}
					else
					{
						unsigned char* pLUT = NULL;
						pLUT = (unsigned char *)dvr_malloc(PCID_TABLE_LEN*sizeof(unsigned char));
						if(pLUT == NULL)
						{
							rtd_printk(KERN_ERR, TAG_NAME, "[ERROR] VPQ_IOC_SET_PCID VALC Table allocate fail\n");
							return -1;
						}

						if( copy_from_user(pLUT, (int __user *)OD_Ext_Data.pExtData, 289*sizeof(UINT8)) )
						{
							rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_PCID_pData(VALC) fail\n");
							ret = -1;
						}
						else
						{
							drvif_color_pcid2_enable(0); // PCID and PCID2 cannot enable at the same time
							fwif_color_set_pcid_valuetable(pLUT);
							drvif_color_pcid_poltable();
							fwif_color_set_pcid_pixel_setting();
							fwif_color_set_pcid_RgnWeight();
							drvif_color_pcid_enable(1);
							drvif_color_pcid_VALC_enable(1);
							g_pcid_en = 1;
							g_pcid2_en = 0;
							ret = 0;
						}
						dvr_free(pLUT);
					}
				}
				else
				{
					rtd_printk(KERN_ERR, TAG_NAME, "OD Extend type error = %d error\n", OD_Ext_Data.extType);
					ret = -1;
				}
			}
		}
	}
	break;

	case VPQ_IOC_SET_Od:
	{
		extern unsigned char od_table_tv006_store[OD_table_length];
		HAL_VPQ_DATA_T OD_Info;

		enum PLAFTORM_TYPE platform = get_platform();
		if (PLATFORM_KXLP != platform)
			return -1;


		if (copy_from_user(&OD_Info, (int __user *)arg, sizeof(HAL_VPQ_DATA_T))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_PCID fail\n");
			ret = -1;
			break;
		} else {

			if (copy_from_user(&od_table_tv006_store[0], (int __user *)OD_Info.pData, (OD_Info.length)*sizeof(unsigned char))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_OdExtentions_pData fail\n");
				ret = -1;

			} else {
				extern unsigned char bODInited;
				extern unsigned char bODTableLoaded;
				extern unsigned char bODPreEnable;
				extern char od_table_mode_store;
				extern unsigned int od_table_store[OD_table_length];
				extern unsigned int od_delta_table[OD_table_length];
				fwif_color_od_table_tv006_convert(od_table_tv006_store, od_table_store);

				fwif_color_od_table_tv006_transform(0, od_table_store, od_delta_table);

				drvif_color_od_table(od_delta_table, 0);// 0:delta mode 1:target mode(output mode)
				/*
				if (g_pcid2_en)
					drvif_color_pcid2_enable(1);
				else if (g_pcid_en)
					drvif_color_pcid_enable(1);
				*/
				od_table_mode_store = 1;// 0:target mode 1:delta mode -1:inverse mode
				bODTableLoaded = TRUE;

				/*Enable OD*/
				bODPreEnable = TRUE;
				if (!bODInited || !bODTableLoaded)
					return -1;
				fwif_color_set_od(TRUE);

				ret = 0;

			}


		}

	}
	break;

	case VPQ_IOC_SET_LMMH_DeMura:
	{

	
	rtd_printk(KERN_INFO, "dda", "dda VPQ_IOC_SET_LMMH_DeMura,length=%d",DeMura_Info.length);
		printk("\n\n===>>>[Demura]VPQ_IOC_SET_LMMH_DeMura \n\n");
		if (copy_from_user(&DeMura_Info, (int __user *)arg, sizeof(HAL_VPQ_DATA_T))) {
			printk("kernel copy VPQ_IOC_SET_LMMH_DeMura fail 111\n");
			ret = -1;
			break;
		} else {
		
		printk("DeMura_Info.length=%d, VIP_DeMura_TBL=%d,%s,%d \n",DeMura_Info.length,sizeof(VIP_DeMura_TBL),__FUNCTION__,__LINE__);
		
		if(DeMura_Info.length == sizeof(VIP_DeMura_TBL))
		{
			 if (copy_from_user((void *)&DeMura_TBL, (int __user *)DeMura_Info.pData, (DeMura_Info.length)*sizeof(unsigned char))) {
				 printk("kernel copy DeMura_TBL fail 222\n");
				 ret = -1;
			 } else {
				 fwif_color_DeMura_init();
				 Scaler_Set_DeMura_En(1);
				 printk("kernel copy DeMura_TBL done\n");
				 ret = 0;
		 	}
		}
 		#if 1	/* "Demura_LMMH_4ch_TBL" is too large, use dynamic allocate */
		
		/*******************for 6502 demura ************************/
 	 	if((DeMura_Info.length == 586658) && (DeMura_Info.version == 0))//(DeMura_Info.length == 0x21a3d)//0x21a3d = 137789 bytes
		 {
		 	printk("\n\n demura info length=%d \n\n",DeMura_Info.length);
			 CSOT_Demura_TBL = (unsigned char *)dvr_malloc_specific(DeMura_Info.length * sizeof(unsigned char), GFP_DCU2_FIRST);
			 if (CSOT_Demura_TBL == NULL) {
				 printk("dynamic alloc 6502 demura memory fail!!!\n");
				 ret = -1;
			 } else {
				 if (copy_from_user((void *)&CSOT_Demura_TBL[0], (int __user *)DeMura_Info.pData, (DeMura_Info.length)*sizeof(unsigned char))) {
					 printk("kernel copy 6502 VPQ_IOC_SET_DeMura fail 222\n");
					 ret = -1;

				 } else {
					 //setPQ_byPASS_for_FCIC2Demura_Verify();

					 if(1)/* (DeMura_Info.version == 98)*/ {
						 printk("[CSOT_Demura_TBL]in 6502 CSOT_Demura_TBL processing\n");//juwen, 180927
						 CSOT_LMMH_demura_data_to_dma(&CSOT_Demura_TBL[0], &DeMura_TBL, 1);
						 Check_scale_level_protect(&DeMura_TBL.DeMura_CTRL_TBL);
						 fwif_color_DeMura_init();
						 Scaler_Set_DeMura_En(1);
					 } 
					 else {
						 Scaler_Set_DeMura_En(0);
						 printk("set 6502 Demura off\n");
					 }

					 ret = 0;

				 }
				 //IoReg_Write32(0xb8000898,0xF0F0F0F0);
				 //printk("[CSOT_Demura_TBL]in 6502 CSOT_Demura_TBL processing rewrite reg 0898\n");
				 dvr_free((void *)CSOT_Demura_TBL);

			 }
		 }

		/******************* for 43D01 demura ********************************/
		else
			if((DeMura_Info.length == 637444) &&  (DeMura_Info.version == 0))//(DeMura_Info.length == 
		 	{
		 		printk("\n\n demura info length=%d \n\n",DeMura_Info.length);
				 CSOT_Demura_TBL = (unsigned char *)dvr_malloc_specific(DeMura_Info.length * sizeof(unsigned char), GFP_DCU2_FIRST);

				 if (CSOT_Demura_TBL == NULL) {
					 printk("dynamic alloc 43D01 demura memory fail!!!\n");
					 ret = -1;
			 	} else {
				 	if (copy_from_user((void *)&CSOT_Demura_TBL[0], (int __user *)DeMura_Info.pData, (DeMura_Info.length)*sizeof(unsigned char))) {
					 printk("kernel copy 43D01 VPQ_IOC_SET_DeMura fail 222\n");
					 ret = -1;

					 } else {
					 //setPQ_byPASS_for_FCIC2Demura_Verify();

					 if(1)/* (DeMura_Info.version == 98)*/ {
						 printk("[CSOT_Demura_TBL]in 43D01 CSOT_Demura_TBL processing\n");//juwen, 180927
						 CSOT_43D01_LMH_demura_to_dma(&CSOT_Demura_TBL[0], &DeMura_TBL, 1);
					 	 Check_scale_level_protect(&DeMura_TBL.DeMura_CTRL_TBL);
						 fwif_color_DeMura_init();
						 Scaler_Set_DeMura_En(1);
					 } 
					 else {
						 Scaler_Set_DeMura_En(0);
						 printk("set 43D01 Demura off\n");
					 }

					 ret = 0;

				 }
				 dvr_free((void *)CSOT_Demura_TBL);

			 }
		 }
		/*========================= For INNX Demura Start=================================*/
		else
			if (DeMura_Info.length == 0x80000 && DeMura_Info.version == 2) 
			{	/* INNX */
				printk("===>>>Enter INNX Demura processing\n");
				INNX_Demura_TBL = (unsigned char *)dvr_malloc_specific(INNX_Demura_TBL_Size * sizeof(unsigned char), GFP_DCU2_FIRST);
				pINNX_Demura_DeLut = (char *)dvr_malloc_specific(INNX_Demura_DecodeLUT_Size * sizeof(char), GFP_DCU2_FIRST);
				if (INNX_Demura_TBL == NULL) {
					rtd_printk(KERN_EMERG, TAG_NAME, "INNX Demura dynamic alloc demura memory fail!!!\n");
					ret = -1;
				} else {
					if (copy_from_user(&INNX_Demura_TBL[0], (int __user *)DeMura_Info.pData, (DeMura_Info.length)*sizeof(unsigned char))) {
						rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_DeMura fail for INNX\n");
						ret = -1;
					} else {
					
						printk("===>>>>> Enter INNX Demura transform processing\n");
						fwif_color_INNX_Demura_TBL(INNX_Demura_TBL, DeMura_Info.length, pINNX_Demura_DeLut);
						vpq_INNX_Demura_data_to_dma(&DeMura_TBL, pINNX_Demura_DeLut);
						Check_scale_level_protect(&DeMura_TBL.DeMura_CTRL_TBL);
						fwif_color_DeMura_init();				
						Scaler_Set_DeMura_En(1);
						ret = 0;
					}
					
					dvr_free((void *)INNX_Demura_TBL);
					dvr_free((void *)pINNX_Demura_DeLut);
				}
			} 
		/*========================= For INNX Demura Finish=================================*/
		/*========================= For Himax Demura Start=================================*/
		else
			if((DeMura_Info.length == 590750) && (DeMura_Info.version == 0))//(DeMura_Info.length == 0x21a3d)//0x21a3d = 137789 bytes
			{
				printk("\n\n Himax demura info length=%d \n\n",DeMura_Info.length);
				 Himax_Demura_TBL = (unsigned char *)dvr_malloc_specific(DeMura_Info.length * sizeof(unsigned char), GFP_DCU2_FIRST);
				 if (Himax_Demura_TBL == NULL) {
					 printk("dynamic alloc Himax demura memory fail!!!\n");
					 ret = -1;
				 } else {
					 if (copy_from_user((void *)&Himax_Demura_TBL[0], (int __user *)DeMura_Info.pData, (DeMura_Info.length)*sizeof(unsigned char))) {
						 printk("kernel copy Himax VPQ_IOC_SET_DeMura fail 222\n");
						 ret = -1;
			
					 } else {
						 //setPQ_byPASS_for_FCIC2Demura_Verify();
			
						 if(1)/* (DeMura_Info.version == 98)*/ {
							 printk("===>>>[Himax_Demura_TBL]Enter Himax_Demura_TBL processing\n");
							 Himax_LMMH_demura_to_dma(&Himax_Demura_TBL[0], &DeMura_TBL, 1);
						 	 Check_scale_level_protect(&DeMura_TBL.DeMura_CTRL_TBL);
							 fwif_color_DeMura_init();
							 Scaler_Set_DeMura_En(1);
						 } 
						 else {
							 Scaler_Set_DeMura_En(0);
							 printk("set Himax Demura off\n");
						 }
			
						 ret = 0;
			
					 }
					 dvr_free((void *)Himax_Demura_TBL);
			
				 }
			 }
		/*========================= For Himax Demura Finish=================================*/
		/***************************** for MONO demura ********************************/
		else
			if((DeMura_Info.length == 637664) &&  (DeMura_Info.version == 0))//(DeMura_Info.length == 
		 	{
				rtd_printk(KERN_INFO, "dda", "dda DeMura_Info.length == 637664");
		 		printk("\n\n MONO demura info length=%d \n\n",DeMura_Info.length);
				 MONO_Demura_TBL = (unsigned char *)dvr_malloc_specific(DeMura_Info.length * sizeof(unsigned char), GFP_DCU2_FIRST);

				 if (MONO_Demura_TBL == NULL) {
					 printk("dynamic alloc MONO demura memory fail!!!\n");
					 ret = -1;
			 	} else {
				 	if (copy_from_user((void *)&MONO_Demura_TBL[0], (int __user *)DeMura_Info.pData, (DeMura_Info.length)*sizeof(unsigned char))) {
					 printk("kernel copy MONO VPQ_IOC_SET_DeMura fail 222\n");
					 
					rtd_printk(KERN_INFO, "dda", "dda 00");
					 ret = -1;
					rtd_printk(KERN_INFO, "dda", "dda 11");

					 } else {
					 //setPQ_byPASS_for_FCIC2Demura_Verify();

					 if(1)/* (DeMura_Info.version == 98)*/ {
					 	
					 rtd_printk(KERN_INFO, "dda", "dda 22");
						 printk("[CSOT_Demura_TBL]===>>> Enter MONO Demura processing\n");//juwen, 180927
						 CSOT_MONO_LMH_demura_to_dma(&MONO_Demura_TBL[0], &DeMura_TBL, 1);
					 	 Check_scale_level_protect(&DeMura_TBL.DeMura_CTRL_TBL);
						 fwif_color_DeMura_init();
						 Scaler_Set_DeMura_En(1);
					 } 
					 else {
						 Scaler_Set_DeMura_En(0);
						 printk("set MONO Demura off\n");
					 }

					 ret = 0;

				 }
				 dvr_free((void *)MONO_Demura_TBL);

			 }
		 }
		/*========================= For MONO Demura Finish=================================*/
		/*========================= for auo demura =================================*/
		else if (DeMura_Info.length == 456608 && DeMura_Info.version == 7){				
				unsigned char scale[8] = {0};
				int tbl_ch, plane_num, h_lut_num, v_lut_num;
				unsigned int lut_size;
				int plane;
				printk("=====>>> [Demura] Enter zyy 1843 kernel AUO Demura processing");
				AUO_Demura_para = (unsigned char*)dvr_malloc_specific(AUO_Demura_Para_Size*sizeof(char), GFP_DCU2_FIRST);
				if (AUO_Demura_para == NULL) {
					printk("AUO_Demura_para dynamic alloc demura memory fail 1!!!\n");
					return -1;
				}

				
				AUO_Demura_TBL_ALL = (unsigned char*)dvr_malloc_specific(456608*sizeof(char), GFP_DCU2_FIRST);

				if (copy_from_user(&AUO_Demura_TBL_ALL[0], (int __user *)DeMura_Info.pData, 456608*sizeof(unsigned char))) {
									printk("kernel copy VPQ_IOC_SET_DeMura fail for auo 2\n");
									return -1;
				}
				
				memcpy(&AUO_Demura_para[0], &AUO_Demura_TBL_ALL[0], sizeof(unsigned char)*AUO_Demura_Para_Size);
				
				
				
				//printk("IO AUO_Demura_para[0]=0x%x",AUO_Demura_para[0]);
				//printk("IO AUO_Demura_para[1]=0x%x",AUO_Demura_para[1]);
				//printk("IO AUO_Demura_para[2]=0x%x",AUO_Demura_para[2]);
				// read parameter
				if (fwif_color_AUO_Demura_Para(AUO_Demura_para, &DMC_para) < 0) {
					printk("fwif_color_AUO_Demura_Para fail for auo 3\n");
					return -1;
				}
				// calculate size
				tbl_ch = DMC_para.RGB_MODE ? 3 : 1;
				plane_num = DMC_para.DMC_PLANE_NUM;
				h_lut_num = DMC_para.DMC_H_LUT_NUM;
				v_lut_num = DMC_para.DMC_V_LUT_NUM;
				lut_size = tbl_ch * plane_num * h_lut_num * v_lut_num;
				printk("\n *******AUO RGB_MODE=%d,pn=%d,hn=%d,vn=%d \n",DMC_para.RGB_MODE,plane_num,h_lut_num,v_lut_num);
				
				AUO_Demura_TBL = (unsigned char*)dvr_malloc_specific(AUO_Demura_TBL_addr_size*sizeof(char), GFP_DCU2_FIRST);
				tbl_raw = (short**)dvr_malloc_specific(plane_num * sizeof(short*), GFP_DCU2_FIRST);
				tbl_dec = (short**)dvr_malloc_specific(plane_num * sizeof(short*), GFP_DCU2_FIRST);
				if (AUO_Demura_TBL == NULL || tbl_raw == NULL || tbl_dec == NULL) {
					printk("\n******AUO_Demura_para dynamic alloc demura memory fail 4!!, lut_size=%x,\n", lut_size);
					return -1;
				}
				for( plane=0; plane<plane_num; plane++ )
				{
					tbl_raw[plane] = (short*)dvr_malloc_specific(h_lut_num*v_lut_num*tbl_ch * sizeof(short), GFP_DCU2_FIRST);
					if (tbl_raw[plane] == NULL) {
						printk("AUO_Demura_para dynamic alloc demura memory fail tbl_raw 5!!!, plane=%d,\n", plane);
						return -1;
					}
				}
				for( plane=0; plane<plane_num; plane++ )
				{
					tbl_dec[plane] = (short*)dvr_malloc_specific(481*271*tbl_ch * sizeof(short), GFP_DCU2_FIRST);
					if (tbl_dec[plane] == NULL) {
						printk("AUO_Demura_para dynamic alloc demura memory fail tbl_dec 6!!!, plane=%d,\n", plane);
						return -1;
					}
				}
				
				
				memcpy(&AUO_Demura_TBL[0], &AUO_Demura_TBL_ALL[65536], sizeof(unsigned char)*AUO_Demura_TBL_addr_size);
				
				//printk("IO AUO_Demura_TBL[0]=0x%x",AUO_Demura_TBL[0]);
				//printk("IO AUO_Demura_TBL[1]=0x%x",AUO_Demura_TBL[1]);
				//printk("IO AUO_Demura_TBL[2]=0x%x",AUO_Demura_TBL[2]);
				
				fwif_color_AUO_Demura_TBL(AUO_Demura_TBL, &DMC_para, tbl_raw, tbl_dec, scale );
				vpq_AUO_Demura_data_to_dma(&DeMura_TBL, &DMC_para, tbl_dec, scale);
				Check_scale_level_protect(&DeMura_TBL.DeMura_CTRL_TBL);
				fwif_color_DeMura_init();	
				
				printk("=====>>> [Demura] Enter kernel AUO Scaler_Set_DeMura_En processing !!!");
				Scaler_Set_DeMura_En(1);
				ret = 0;
				for( plane=0; plane<plane_num; plane++ ) {
					dvr_free((void *)tbl_raw[plane]);
					dvr_free((void *)tbl_dec[plane]);
				}
				
				dvr_free((void *)AUO_Demura_TBL_ALL);
				dvr_free((void *)tbl_raw);
				dvr_free((void *)tbl_dec);
				dvr_free((void *)AUO_Demura_TBL);
				dvr_free((void *)AUO_Demura_para);
	/*========================= for auo demura =================================*/
			}
		if(0) //mark by max 0319
		{
			if((DeMura_Info.length == 1)&&(DeMura_Info.version== 100)&&(DeMura_Info.wId== 100))
			{
				IoReg_Write32(0xb8000898,0xF0F0F0F0);
				IoReg_Write32(0xb800089c,0x1010f010);
            	printk("dumura spi rewrite reg ok 0x80000898\n");
			}
			else
			{
			printk("dumura spi rewrite reg fail 0x80000898\n");
			}
		}
	 #else
 #if 1
/*========================= for INNX demura =================================*/
			if (DeMura_Info.length == 0x80000 && DeMura_Info.version == 2) {	/* INNX */
				INNX_Demura_TBL = (unsigned char *)dvr_malloc_specific(INNX_Demura_TBL_Size * sizeof(char), GFP_DCU2_FIRST);
				pINNX_Demura_DeLut = (unsigned char *)dvr_malloc_specific(INNX_Demura_DecodeLUT_Size * sizeof(char), GFP_DCU2_FIRST);
				if (INNX_Demura_TBL == NULL) {
					rtd_printk(KERN_EMERG, TAG_NAME, "INNX Demura dynamic alloc demura memory fail!!!\n");
					ret = -1;
				} else {
					if (copy_from_user(&INNX_Demura_TBL[0], (int __user *)DeMura_Info.pData, (DeMura_Info.length)*sizeof(unsigned char))) {
						rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_DeMura fail for INNX\n");
						ret = -1;
					} else {
						fwif_color_INNX_Demura_TBL(INNX_Demura_TBL, DeMura_Info.length, pINNX_Demura_DeLut);
						vpq_INNX_Demura_data_to_dma(&DeMura_TBL, pINNX_Demura_DeLut);
						fwif_color_DeMura_init();
						ret = 0;
					}
					dvr_free((void *)INNX_Demura_TBL);
					dvr_free((void *)pINNX_Demura_DeLut);
				}
			} else
/*========================= for INNX demura =================================*/
 #endif
			{
				Demura_LMMH_4ch_TBL = (unsigned char *)dvr_malloc_specific(Demura_LMMH_TBL_Size * sizeof(char), GFP_DCU2_FIRST);
				if (Demura_LMMH_4ch_TBL == NULL) {
					rtd_printk(KERN_EMERG, TAG_NAME, "dynamic alloc demura memory fail!!!\n");
					ret = -1;
				} else {
					if (copy_from_user(&Demura_LMMH_4ch_TBL[0], (int __user *)DeMura_Info.pData, (DeMura_Info.length)*sizeof(unsigned char))) {
						rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_DeMura fail\n");
						ret = -1;

					} else {
						vpq_LMMH_demura_data_to_dma(&Demura_LMMH_4ch_TBL[0], &DeMura_TBL, DeMura_TBL.table_mode);
						fwif_color_DeMura_init();
						rtd_printk(KERN_INFO, TAG_NAME, "dynamic alloc,  VIP_Demura_4ch_TBL=%d,%d,%d,%d,%d,%d,%d,%d,\n",
							Demura_LMMH_4ch_TBL[0], Demura_LMMH_4ch_TBL[1],Demura_LMMH_4ch_TBL[5],Demura_LMMH_4ch_TBL[6], Demura_LMMH_4ch_TBL[DeMura_Info.length-1],
							Demura_LMMH_4ch_TBL[DeMura_Info.length-4],Demura_LMMH_4ch_TBL[DeMura_Info.length-5],Demura_LMMH_4ch_TBL[DeMura_Info.length-6]);

						ret = 0;

					}
					dvr_free((void *)Demura_LMMH_4ch_TBL);

				}
			}
#endif
		}
	}
	break;

#if defined(CONFIG_RTK_AI_DRV)
	case VPQ_IOC_SET_AI_PA:
	{
		/*VIP_NN_CTRL *pNN;
		unsigned char idx;
		unsigned int PA_addr[3] = {0};
		pNN = scalerAI_Access_NN_CTRL_STRUCT();

		idx = pNN->PA_IDX;
		PA_addr[0] = pNN->NN_data_Addr[idx].phy_addr_align;
		PA_addr[1] = pNN->NN_info_Addr[idx].phy_addr_align;
		PA_addr[2] = pNN->NN_Flag_Addr[idx].phy_addr_align;

		if (PA_addr[0] == 0 || PA_addr[1] == 0 || PA_addr[2] == 0) {
			rtd_printk(KERN_EMERG, TAG_NAME, "kernel VPQ_IOC_SET_AI_PA fail, PA null\n");
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg,(void *) PA_addr, 3 * 4)) {
				rtd_printk(KERN_EMERG, TAG_NAME, "kernel VPQ_IOC_SET_AI_PA fail\n");
				ret = -1;
			} else
				ret = 0;
		}*/

		VIP_NN_CTRL *pNN;
		pNN = scalerAI_Access_NN_CTRL_STRUCT();
		/*rtd_printk(KERN_INFO, TAG_NAME, "henry NN MEM ini, data phy addr=%x, %x, %x\n",
				pNN->NN_data_Addr[0].phy_addr_align,
				pNN->NN_data_Addr[1].phy_addr_align,
				pNN->NN_data_Addr[2].phy_addr_align);

		rtd_printk(KERN_INFO, TAG_NAME, "henry NN MEM ini, info phy addr=%x, %x, %x\n",
				pNN->NN_info_Addr[0].phy_addr_align,
				pNN->NN_info_Addr[1].phy_addr_align,
				pNN->NN_info_Addr[2].phy_addr_align);

		rtd_printk(KERN_INFO, TAG_NAME, "henry NN MEM ini, flag phy addr=%x, %x, %x\n",
				pNN->NN_flag_Addr[0].phy_addr_align,
				pNN->NN_flag_Addr[1].phy_addr_align,
				pNN->NN_flag_Addr[2].phy_addr_align);

		rtd_printk(KERN_INFO, TAG_NAME, "henry NN MEM ini, indx phy addr=%x\n",
				pNN->NN_indx_Addr.phy_addr_align);

		scalerAI_set_NN_buffer();
		rtd_printk(KERN_INFO, TAG_NAME, "henry buffer idx=%d\n", pNN->NN_indx_Addr.pVir_addr_align[0]);
		*/

		if (pNN == 0) {
			rtd_printk(KERN_EMERG, TAG_NAME, "kernel VPQ_IOC_SET_AI_PA fail, PA null\n");
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg,(void *) pNN, sizeof(VIP_NN_CTRL))) {
				rtd_printk(KERN_EMERG, TAG_NAME, "kernel VPQ_IOC_SET_AI_PA fail\n");
				ret = -1;
			} else
				ret = 0;
		}
		break;
	}
#endif

	default:
		rtd_printk(KERN_DEBUG, TAG_NAME, "kernel IO command %d not found!\n", cmd);
		return -1;
			;
	}
	return ret;/*Success*/

}


struct file_operations vpq_fops = {
	.owner = THIS_MODULE,
	.open = vpq_open,
	.release = vpq_release,
	.read  = vpq_read,
	.write = vpq_write,
	.unlocked_ioctl = vpq_ioctl,
#ifdef CONFIG_ARM64
#ifdef CONFIG_COMPAT
	.compat_ioctl = vpq_ioctl,
#endif
#endif
};

#ifdef CONFIG_PM
static const struct dev_pm_ops vpq_pm_ops =
{
        .suspend    = vpq_suspend,
        .resume     = vpq_resume,
#ifdef CONFIG_HIBERNATION
	.freeze 	= vpq_suspend_std,
	.thaw		= vpq_resume_std,
	.poweroff	= vpq_suspend_std,
	.restore	= vpq_resume_std,
#endif //CONFIG_HIBERNATION

};
#endif //CONFIG_PM

static struct class *vpq_class = NULL;
static struct platform_device *vpq_platform_devs = NULL;
static struct platform_driver vpq_platform_driver = {
	.driver = {
		.name = "vpqdev",
		.bus = &platform_bus_type,
#ifdef CONFIG_PM
		.pm = &vpq_pm_ops,
#endif //CONFIG_PM
    },
} ;

static char *vpq_devnode(struct device *dev, umode_t *mode)
{
	return NULL;
}

int vpq_module_init(void)
{
	int result;
	result = alloc_chrdev_region(&vpq_devno, 0, 1, "vpqdevno");

	if (result != 0) {
		rtd_printk(KERN_ERR, TAG_NAME, "Cannot allocate VPQ device number\n");
		return result;
	}

	vpq_class = class_create(THIS_MODULE, "vpqdev");
	if (IS_ERR(vpq_class)) {
		rtd_printk(KERN_ERR, TAG_NAME, "scalevpq: can not create class...\n");
		result = PTR_ERR(vpq_class);
		goto fail_class_create;
	}

	vpq_class->devnode = vpq_devnode;

	vpq_platform_devs = platform_device_register_simple("vpqdev", -1, NULL, 0);
	if (platform_driver_register(&vpq_platform_driver) != 0) {
		rtd_printk(KERN_ERR, TAG_NAME, "scalevpq: can not register platform driver...\n");
		result = -ENOMEM;
		goto fail_platform_driver_register;
	}

	cdev_init(&vpq_cdev, &vpq_fops);
	result = cdev_add(&vpq_cdev, vpq_devno, 1);
	if (result < 0) {
		rtd_printk(KERN_ERR, TAG_NAME, "scalevpq: can not add character device...\n");
		goto fail_cdev_init;
	}

	device_create(vpq_class, NULL, vpq_devno, NULL, "vpqdev");

	sema_init(&VPQ_Semaphore, 1);
	sema_init(&VPQ_DM_DMA_TBL_Semaphore,1);
	//sema_init(&VPQ_DM_3DLUT_Semaphore,1);
	sema_init(&Gamma_Semaphore,1);

	create_VPQ_tsk();
#if defined(CONFIG_RTK_AI_DRV)
	create_se_tsk();
#endif
	vpq_boot_init();
	fwif_color_reg_demo_callback(DEMO_CALLBACKID_ON_OFF_SWITCH, vpq_demo_pq_func);
	fwif_color_reg_demo_callback(DEMO_CALLBACKID_OVERSCAN, vpq_demo_overscan_func);

	return 0;/*Success*/

fail_cdev_init:
	platform_driver_unregister(&vpq_platform_driver);
fail_platform_driver_register:
	platform_device_unregister(vpq_platform_devs);
	vpq_platform_devs = NULL;
	class_destroy(vpq_class);
fail_class_create:
	vpq_class = NULL;
	unregister_chrdev_region(vpq_devno, 1);
	return result;

}

void __exit vpq_module_exit(void)
{
	if (vpq_platform_devs == NULL)
		BUG();

	delete_VPQ_tsk();
#if defined(CONFIG_RTK_AI_DRV)
	delete_se_tsk();
#endif
	device_destroy(vpq_class, vpq_devno);
	cdev_del(&vpq_cdev);

	platform_driver_unregister(&vpq_platform_driver);
	platform_device_unregister(vpq_platform_devs);
	vpq_platform_devs = NULL;

	class_destroy(vpq_class);
	vpq_class = NULL;

	unregister_chrdev_region(vpq_devno, 1);
}

module_init(vpq_module_init);
module_exit(vpq_module_exit);
