#ifndef _AI_CMD_ID_H_
#define _AI_CMD_ID_H_

/************************************************************************
 *  Include files
 ************************************************************************/
#ifdef CONFIG_RTK_AI_DRV
#include <linux/time.h>
#endif

/************************************************************************
 *  Definitions
 ************************************************************************/
#define AI_DEVICE_NAME						"rtk-ai"
#define AI_IOC_MAGIC 'a'

enum ai_ioc_cmd
{
	AI_IOC_CMD_INIT = 0,
	AI_IOC_CMD_UNINIT = 1,
	AI_IOC_CMD_OPEN = 2,
	AI_IOC_CMD_CLOSE = 3,
	AI_IOC_CMD_REGIST_MODEL = 4,
	AI_IOC_CMD_UNREGIST_MODEL = 5,
	AI_IOC_CMD_GET_SHARE_MEM = 6,
	AI_IOC_CMD_GET_GRANT = 7,
	AI_IOC_CMD_RELEASE_GRANT = 8,
};

#define AI_IOC_INIT								_IO(AI_IOC_MAGIC, AI_IOC_CMD_INIT)
#define AI_IOC_UNINIT						_IO(AI_IOC_MAGIC, AI_IOC_CMD_UNINIT)
#define AI_IOC_OPEN							_IO(AI_IOC_MAGIC, AI_IOC_CMD_OPEN)
#define AI_IOC_CLOSE							_IO(AI_IOC_MAGIC, AI_IOC_CMD_CLOSE)
#define AI_IOC_REGIST_MODEL				_IOW(AI_IOC_MAGIC, AI_IOC_CMD_REGIST_MODEL, unsigned int)
#define AI_IOC_UNREGIST_MODEL				_IOW(AI_IOC_MAGIC, AI_IOC_CMD_UNREGIST_MODEL, int)
#define AI_IOC_GET_SHARE_MEM				_IOR(AI_IOC_MAGIC, AI_IOC_CMD_GET_SHARE_MEM, unsigned int)
#define AI_IOC_GET_GRANT				_IOW(AI_IOC_MAGIC, AI_IOC_CMD_GET_GRANT, unsigned int)
#define AI_IOC_RELEASE_GRANT				_IOW(AI_IOC_MAGIC, AI_IOC_CMD_RELEASE_GRANT, unsigned int)

#define AI_MAX_PROCESS		10
#define AI_MAX_MODEL_FILE		10		// max model file per process
#define AI_MAX_MODEL_NAME_LEN 40

typedef enum{
	AI_PQ_AP_OFF=0, // AI_FACE_OFF
	AI_PQ_ALL_ON, // AI_FACE_ON
	AI_PQ_DEMO, // AI_FACE_DEMO
	AI_PQ_SCENE_OFF,
	AI_PQ_FACE_OFF,
	AI_PQ_ALL_OFF, // no pq effect
	AI_PQ_MODE_NUM,
} AI_PQ_MODE;

typedef struct
{
	int frameIdx;
	int pv8;
	int cx12;
	int cy12;
	int w12;
	int h12;
	int range12;
	int Umax12;
	int Vmax12;
	int y_med12;
	int cb_med12;
	int cr_med12;
	int y_var12;
	int cb_var12;
	int cr_var12;
	int hue_med12;
	int sat_med12;
	int val_med12;
} AIInfo;  // from NN IP

typedef enum{
	AI_MC_VPQ_FACE=0,
	AI_MC_VPQ_SCENE,
	AI_MC_VPQ_RESOLUTION,
	AI_MC_VPQ_ANIMATION,
	AI_MC_VPQ_GENRE,
	AI_MC_VPQ_CONTENT,
	AI_MC_VPQ_OBJECT_SEGMENT,
	AI_MC_VPQ_DEPTH_MAP,
	AI_MC_VPQ_FACE_ID,
	AI_MC_VPQ_AIAQ,
	AI_MC_VPQ_MAX,
} AI_MC_VPQ_INDEX;

typedef enum{
	AI_SCENE_ANIMATION=0,
	AI_SCENE_NIGHT_BUILDING,
	AI_SCENE_CONCERT,
	AI_SCENE_FIREWORKS,
	AI_SCENE_GAME,
	AI_SCENE_LANDSCAPE,
	AI_SCENE_NEWS,
	AI_SCENE_OTHERs,
	AI_SCENE_SPORTs,
	AI_SCENE_TYPE_NUM,
} AI_SCENE_TYPE;

typedef enum{
	AI_AQ_CONCERT=0,
	AI_AQ_NEWS,
	AI_AQ_OTHER,
	AI_AQ_SPORT,
	AI_AQ_TYPE_NUM,
} AI_AQ_TYPE;

typedef enum{
	AI_RESOLUTION_2K_BAD=0,
	AI_RESOLUTION_2K_NORMAL,
	AI_RESOLUTION_4K_NORMAL,
	AI_RESOLUTION_4K_GOOD,
	AI_RESOLUTION_2KTIMING_2K_WORSE,
	AI_RESOLUTION_2KTIMING_2K_BAD,
	AI_RESOLUTION_2KTIMING_2K_NORMAL,
	AI_RESOLUTION_2KTIMING_2K_GOOD,
	AI_RESOLUTION_TYPE_NUM,
} AI_RESOLUTION_TYPE;

typedef enum{
        AI_ANIM_NON_ANIMA=0,
        AI_ANIM_ANIMATION,
        AI_ANIM_TYPE_NUM,
} AI_ANIM_TYPE;

typedef enum{
	AI_GENRE_MOVIE=0,
	AI_GENRE_ANIMATION,
	AI_GENRE_SPORT,
	AI_GENRE_OTHER,
	AI_GENRE_TYPE_NUM,
} AI_GENRE_TYPE;

typedef enum{
	AI_CONTENT_BUILDING=0,
	AI_CONTENT_DARK,
	AI_CONTENT_NATURE,
	AI_CONTENT_OTHER,
	AI_CONTENT_TYPE_NUM,
} AI_CONTENT_TYPE;

typedef struct _AI_PROCESS_INFO {
	int activated;
	int modelNum;
	char modelFile[AI_MAX_MODEL_FILE][AI_MAX_MODEL_NAME_LEN];		//max 10 model file per process
	int inputVideoWidth;
	int inputVideoHeight;
	int	inputAudioFmt;
	AI_MC_VPQ_INDEX outputFunIdx;
	int targetFps;
	double  graphTimeMs;  // process time of each graph (ms)
	struct timespec  lastTime;  // last time to process graph
} AI_PROCESS_INFO;          
 
typedef struct _MODEL_CONTROL {
   int  aiProcessNum;  					//max 10 ai process
   AI_PROCESS_INFO aiProcessInfo[AI_MAX_PROCESS];   //index corresponding to handle
   int  curProcessOfUsePPU;    	//current process handle of using PPU
   int  curProcessOfUseNNU;  		//current process handle of using NNU
   int  curProcessOfUseOutput;  //current process handle of using output hw
} AI_CONTROL;

typedef enum{
	AI_HW_PPU=0,
	AI_HW_NNU,
	AI_HW_OUTPUT,
	AI_HW_INPUT,
	AI_HW_MAX,
	AI_HW_PNU	  // need PPU & NNU if you do not know exactly
} AI_HW_INDEX;

typedef struct _IOCTL_REGIST_MODEL_PARAM{
	int handle;
	AI_PROCESS_INFO info;
}IOCTL_REGIST_MODEL_PARAM;

typedef struct _IOCTL_GRANT_PARAM{
	int handle;
	AI_HW_INDEX index;
}IOCTL_GRANT_PARAM;

enum {
	AI_FACE_DETECT  = (1 << 0),
	AI_SCENE_DETECT = (1 << 1),
	AI_SQM_DETECT   = (1 << 2),
};
typedef struct _VIP_NN_MEMORY_CTRL {
	unsigned int size;
	unsigned int phy_addr_align;
	unsigned int *pVir_addr_align;

} VIP_NN_MEMORY_CTRL;


typedef enum _VIP_NN_BUFFER_INDEX{
	VIP_NN_BUFFER_224FULL=0,		//scene,content
	VIP_NN_BUFFER_320FULL=1,		//ultraface,object segment
	VIP_NN_BUFFER_224GENRE=2,		//gerne
	VIP_NN_BUFFER_240X135CROP=3,	//SQM
	VIP_NN_BUFFER_224AIAQ=4,		//AIAQ
	VIP_NN_BUFFER_MAX,
} VIP_NN_BUFFER_INDEX;

#define VIP_NN_BUFFER_NUM VIP_NN_BUFFER_MAX

typedef struct _VIP_NN_CTRL {
        //unsigned char PA_IDX; // SE write buffer idx
        VIP_NN_MEMORY_CTRL NN_flag_Addr[VIP_NN_BUFFER_NUM];
        VIP_NN_MEMORY_CTRL NN_data_Addr[VIP_NN_BUFFER_NUM];
        VIP_NN_MEMORY_CTRL NN_info_Addr[VIP_NN_BUFFER_NUM];
        //VIP_NN_MEMORY_CTRL NN_indx_Addr;
} VIP_NN_CTRL;

#define VIP_NN_FLAG_BUFFER_DEFAULT_SIZE 10
#define VIP_NN_INFO_BUFFER_DEFAULT_SIZE 40
#define VIP_NN_BUFFER_FLAG_TOTAL_LEN	4*1024	//4k alignment, smallest block
#define VIP_NN_BUFFER_INFO_TOTAL_LEN	148*1024	//4k alignment, need to cover sum of vip_nn_buffer_len[].info_len

#define AI_MAX_FACE_NUM			6

#endif	/* _AI_CMD_ID_H_ */
