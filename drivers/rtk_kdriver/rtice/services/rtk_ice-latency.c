
#include <linux/kthread.h>
#include <linux/slab.h> //kmalloc
#include <linux/delay.h>
#include <mach/io.h>
#include "rtk_ice-latency.h"
#include "rbus/dc_sys_reg.h"
#include "rbus/tvsb1_reg.h"
#include "rbus/tvsb2_reg.h"
#include "rbus/tvsb3_reg.h"
#include "rbus/tvsb4_reg.h"
#include "rbus/tvsb5_reg.h"
#include "rbus/tvsb7_reg.h"

static DECLARE_WAIT_QUEUE_HEAD (RTICE_LAT_WAIT_MAIN);
#define RTICE_INVALID_LATENCY 0xdeaddead
/*data struct of max and avg latency of one client or birdge*/
typedef struct _S_LATENCY_DATA{
	unsigned int maxLat;
	u64 totalLat;
	unsigned int count;
}S_LATENCY_DATA;
/*global vars*/
static S_LATENCY_DATA gLatencyBuffer[16 * 17];//buffer saving latency of all bridges and clients
static unsigned int gPeriod = 0;//period of checking loop with ms unit
static unsigned char gReadOnly = 0;//check latency of read only cmd,otherwise checking all cmd
static struct task_struct * gThreadHandle = NULL;//handle of the checking thread
static int gStop = 0;//stopping thread func
static int gRunning = 0;//running flag of thread func

/**
 * add latency value to buffer.
 * The latency belong to the client given by its id('bridge','client').The client is bridge while 'fBridge' is not zero
 */
static void addLatency(int bridge,int client,int fBridge,unsigned int lat)
{
	int i = bridge * 17;

	//RTICE_DEBUG_LAT("[%d:%d]%d\r\n",bridge,client,lat);
	if(!fBridge)
		i += client + 1;
	if(i < 0 || i >= sizeof(gLatencyBuffer) / sizeof(S_LATENCY_DATA))
		return;
	if(lat > gLatencyBuffer[i].maxLat)
		gLatencyBuffer[i].maxLat = lat;
	gLatencyBuffer[i].totalLat += lat;
	gLatencyBuffer[i].count++;
}
/** func for the checking thread*/
static int latencyThread(void *data)
{
	int clientId = 0,clientId2 = 0;

	/*set running flag*/
	gRunning = 1;	
	/*check latency*/
	while(gStop == 0){
		int sleepCnt = gPeriod / 5 + ((gPeriod % 5) ? 1 : 0);
		/*dc sys*/
		dc_sys_dc_pc_ctrl_RBUS dc_sys_dc_pc_ctrl;
		dc_sys_dc_pc_sysh_prog_ctrl_RBUS dc_sys_dc_pc_sysh_prog_ctrl;
		dc_sys_dc_pc_sysh_prog_0_max_lat_RBUS dc_sys_dc_pc_sysh_prog_0_max_lat;
		dc_sys_dc_pc_sysh_prog_1_max_lat_RBUS dc_sys_dc_pc_sysh_prog_1_max_lat;
		dc_sys_dc_pc_sysh_prog_2_max_lat_RBUS dc_sys_dc_pc_sysh_prog_2_max_lat;
		dc_sys_dc_pc_sysh_prog_0_req_num_RBUS dc_sys_dc_pc_sysh_prog_0_req_num;
		dc_sys_dc_pc_sysh_prog_1_req_num_RBUS dc_sys_dc_pc_sysh_prog_1_req_num;
		dc_sys_dc_pc_sysh_prog_2_req_num_RBUS dc_sys_dc_pc_sysh_prog_2_req_num;
		/*tvsb1*/
		tvsb1_tv_sb1_dcu1_pc_ctrl_RBUS tvsb1_tv_sb1_dcu1_pc_ctrl;
		tvsb1_tv_sb1_dcu1_pc_prog_ctrl1_RBUS tvsb1_tv_sb1_dcu1_pc_prog_ctrl1;
		tvsb1_tv_sb1_dcu1_pc_prog_0_channel_sel_RBUS tvsb1_tv_sb1_dcu1_pc_prog_0_channel_sel;
		tvsb1_tv_sb1_dcu1_pc_prog_0_max_lat_RBUS tvsb1_tv_sb1_dcu1_pc_prog_0_max_lat;
		tvsb1_tv_sb1_dcu1_pc_prog_0_req_num_RBUS tvsb1_tv_sb1_dcu1_pc_prog_0_req_num;
		/*tvsb2*/
		tvsb2_tv_sb2_dcu1_pc_ctrl_RBUS tvsb2_tv_sb2_dcu1_pc_ctrl;
		tvsb2_tv_sb2_dcu1_pc_prog_ctrl1_RBUS tvsb2_tv_sb2_dcu1_pc_prog_ctrl1;
		tvsb2_tv_sb2_dcu1_pc_prog_0_channel_sel_RBUS tvsb2_tv_sb2_dcu1_pc_prog_0_channel_sel;
		tvsb2_tv_sb2_dcu1_pc_prog_0_max_lat_RBUS tvsb2_tv_sb2_dcu1_pc_prog_0_max_lat;
		tvsb2_tv_sb2_dcu1_pc_prog_0_req_num_RBUS tvsb2_tv_sb2_dcu1_pc_prog_0_req_num;
		/*tvsb3*/
		tvsb3_tv_sb3_dcu1_pc_ctrl_RBUS tvsb3_tv_sb3_dcu1_pc_ctrl;
		tvsb3_tv_sb3_dcu1_pc_prog_0_max_lat_RBUS tvsb3_tv_sb3_dcu1_pc_prog_0_max_lat;
		tvsb3_tv_sb3_dcu1_pc_prog_0_req_num_RBUS tvsb3_tv_sb3_dcu1_pc_prog_0_req_num;
		/*tvsb4*/
		tvsb4_tv_sb4_dcu1_pc_ctrl_RBUS tvsb4_tv_sb4_dcu1_pc_ctrl;
		tvsb4_tv_sb4_dcu1_pc_prog_ctrl1_RBUS tvsb4_tv_sb4_dcu1_pc_prog_ctrl1;
		tvsb4_tv_sb4_dcu1_pc_prog_0_channel_sel_RBUS tvsb4_tv_sb4_dcu1_pc_prog_0_channel_sel;
		tvsb4_tv_sb4_dcu1_pc_prog_0_max_lat_RBUS tvsb4_tv_sb4_dcu1_pc_prog_0_max_lat;
		tvsb4_tv_sb4_dcu1_pc_prog_0_req_num_RBUS tvsb4_tv_sb4_dcu1_pc_prog_0_req_num;
		/*tvsb5*/
		tvsb5_tv_sb5_dcu1_pc_ctrl_RBUS tvsb5_tv_sb5_dcu1_pc_ctrl;
		tvsb5_tv_sb5_dcu1_pc_prog_ctrl1_RBUS tvsb5_tv_sb5_dcu1_pc_prog_ctrl1;
		tvsb5_tv_sb5_dcu1_pc_prog_0_channel_sel_RBUS tvsb5_tv_sb5_dcu1_pc_prog_0_channel_sel;
		tvsb5_tv_sb5_dcu1_pc_prog_0_max_lat_RBUS tvsb5_tv_sb5_dcu1_pc_prog_0_max_lat;
		tvsb5_tv_sb5_dcu1_pc_prog_0_req_num_RBUS tvsb5_tv_sb5_dcu1_pc_prog_0_req_num;
		/*tvsb7*/
		tvsb7_tv_sb7_dcu1_pc_ctrl_RBUS tvsb7_tv_sb7_dcu1_pc_ctrl;
		tvsb7_tv_sb7_dcu1_pc_prog_0_max_lat_RBUS tvsb7_tv_sb7_dcu1_pc_prog_0_max_lat;
		tvsb7_tv_sb7_dcu1_pc_prog_0_req_num_RBUS tvsb7_tv_sb7_dcu1_pc_prog_0_req_num;

		/*start pc--dc sys*/
		dc_sys_dc_pc_ctrl.pc_tota_ack_rcmd_only = gReadOnly ? 1 : 0;
		dc_sys_dc_pc_ctrl.pc_prog0_rcmd_only = gReadOnly ? 1 : 0;
		dc_sys_dc_pc_ctrl.pc_prog1_rcmd_only = gReadOnly ? 1 : 0;
		dc_sys_dc_pc_ctrl.pc_prog2_rcmd_only = gReadOnly ? 1 : 0;
		dc_sys_dc_pc_ctrl.pc_go = 1;
		dc_sys_dc_pc_sysh_prog_ctrl.write_en_1 = 1;
		dc_sys_dc_pc_sysh_prog_ctrl.pc_sysh_prog0_sel = clientId % 16;
		dc_sys_dc_pc_sysh_prog_ctrl.write_en_2 = 1;
		dc_sys_dc_pc_sysh_prog_ctrl.pc_sysh_prog1_sel = (clientId + 1) % 16;
		dc_sys_dc_pc_sysh_prog_ctrl.write_en_3 = 1;
		dc_sys_dc_pc_sysh_prog_ctrl.pc_sysh_prog2_sel = (clientId + 2) % 16;
		rtd_outl(DC_SYS_DC_PC_SYSH_prog_ctrl_reg,dc_sys_dc_pc_sysh_prog_ctrl.regValue);
		rtd_outl(DC_SYS_DC_PC_CTRL_reg,dc_sys_dc_pc_ctrl.regValue);
		/*start pc--tvsb1*/
		tvsb1_tv_sb1_dcu1_pc_ctrl.pc_rd_only = gReadOnly ? 1 : 0;
		tvsb1_tv_sb1_dcu1_pc_ctrl.pc_go = 1;
		tvsb1_tv_sb1_dcu1_pc_prog_ctrl1.pc_prog0_sel = clientId % 16;
		tvsb1_tv_sb1_dcu1_pc_prog_ctrl1.pc_prog1_sel = (clientId + 1) % 16;
		tvsb1_tv_sb1_dcu1_pc_prog_ctrl1.pc_prog2_sel = (clientId + 2) % 16;
		rtd_outl(TVSB1_TV_SB1_DCU1_PC_prog_ctrl1_reg,tvsb1_tv_sb1_dcu1_pc_prog_ctrl1.regValue);
		rtd_outl(TVSB1_TV_SB1_DCU1_PC_CTRL_reg,tvsb1_tv_sb1_dcu1_pc_ctrl.regValue);
		/*start pc--tvsb2*/
		tvsb2_tv_sb2_dcu1_pc_ctrl.pc_rd_only = gReadOnly ? 1 : 0;
		tvsb2_tv_sb2_dcu1_pc_ctrl.pc_go = 1;
		tvsb2_tv_sb2_dcu1_pc_prog_ctrl1.pc_prog0_sel = clientId % 16;
		tvsb2_tv_sb2_dcu1_pc_prog_ctrl1.pc_prog1_sel = (clientId + 1) % 16;
		tvsb2_tv_sb2_dcu1_pc_prog_ctrl1.pc_prog2_sel = (clientId + 2) % 16;
		rtd_outl(TVSB2_TV_SB2_DCU1_PC_prog_ctrl1_reg,tvsb2_tv_sb2_dcu1_pc_prog_ctrl1.regValue);
		rtd_outl(TVSB2_TV_SB2_DCU1_PC_CTRL_reg,tvsb2_tv_sb2_dcu1_pc_ctrl.regValue);
		/*start pc--tvsb3*/
		tvsb3_tv_sb3_dcu1_pc_ctrl.pc_rd_only = gReadOnly ? 1 : 0;
		tvsb3_tv_sb3_dcu1_pc_ctrl.pc_go = 1;
		tvsb3_tv_sb3_dcu1_pc_ctrl.pc_prog0_sel = clientId2;
		rtd_outl(TVSB3_TV_SB3_DCU1_PC_CTRL_reg,tvsb3_tv_sb3_dcu1_pc_ctrl.regValue);
		/*start pc--tvsb4*/
		tvsb4_tv_sb4_dcu1_pc_ctrl.pc_rd_only = gReadOnly ? 1 : 0;
		tvsb4_tv_sb4_dcu1_pc_ctrl.pc_go = 1;
		tvsb4_tv_sb4_dcu1_pc_prog_ctrl1.pc_prog0_sel = clientId % 16;
		tvsb4_tv_sb4_dcu1_pc_prog_ctrl1.pc_prog1_sel = (clientId + 1) % 16;
		tvsb4_tv_sb4_dcu1_pc_prog_ctrl1.pc_prog2_sel = (clientId + 2) % 16;
		rtd_outl(TVSB4_TV_SB4_DCU1_PC_prog_ctrl1_reg,tvsb4_tv_sb4_dcu1_pc_prog_ctrl1.regValue);
		rtd_outl(TVSB4_TV_SB4_DCU1_PC_CTRL_reg,tvsb4_tv_sb4_dcu1_pc_ctrl.regValue);
		/*start pc--tvsb5*/
		tvsb5_tv_sb5_dcu1_pc_ctrl.pc_rd_only = gReadOnly ? 1 : 0;
		tvsb5_tv_sb5_dcu1_pc_ctrl.pc_go = 1;
		tvsb5_tv_sb5_dcu1_pc_prog_ctrl1.pc_prog0_sel = clientId % 16;
		tvsb5_tv_sb5_dcu1_pc_prog_ctrl1.pc_prog1_sel = (clientId + 1) % 16;
		tvsb5_tv_sb5_dcu1_pc_prog_ctrl1.pc_prog2_sel = (clientId + 2) % 16;
		rtd_outl(TVSB5_TV_SB5_DCU1_PC_prog_ctrl1_reg,tvsb5_tv_sb5_dcu1_pc_prog_ctrl1.regValue);
		rtd_outl(TVSB5_TV_SB5_DCU1_PC_CTRL_reg,tvsb5_tv_sb5_dcu1_pc_ctrl.regValue);
		/*start pc--tvsb7*/
		tvsb7_tv_sb7_dcu1_pc_ctrl.pc_rd_only = gReadOnly ? 1 : 0;
		tvsb7_tv_sb7_dcu1_pc_ctrl.pc_go = 1;
		tvsb7_tv_sb7_dcu1_pc_ctrl.pc_prog0_sel = clientId2;
		rtd_outl(TVSB7_TV_SB7_DCU1_PC_CTRL_reg,tvsb7_tv_sb7_dcu1_pc_ctrl.regValue);
		/*wait period--ms*/
		while(sleepCnt-- && (gStop == 0)){
			msleep(5);
		}
		/*stop pc--dc sys*/
		dc_sys_dc_pc_ctrl.pc_go = 0;
		rtd_outl(DC_SYS_DC_PC_CTRL_reg,dc_sys_dc_pc_ctrl.regValue);
		/*stop pc-- tvsb1*/
		tvsb1_tv_sb1_dcu1_pc_ctrl.pc_go = 0;
		rtd_outl(TVSB1_TV_SB1_DCU1_PC_CTRL_reg,tvsb1_tv_sb1_dcu1_pc_ctrl.regValue);
		/*stop pc-- tvsb2*/
		tvsb2_tv_sb2_dcu1_pc_ctrl.pc_go = 0;
		rtd_outl(TVSB2_TV_SB2_DCU1_PC_CTRL_reg,tvsb2_tv_sb2_dcu1_pc_ctrl.regValue);
		/*stop pc-- tvsb3*/
		tvsb3_tv_sb3_dcu1_pc_ctrl.pc_go = 0;
		rtd_outl(TVSB3_TV_SB3_DCU1_PC_CTRL_reg,tvsb3_tv_sb3_dcu1_pc_ctrl.regValue);
		/*stop pc-- tvsb4*/
		tvsb4_tv_sb4_dcu1_pc_ctrl.pc_go = 0;
		rtd_outl(TVSB4_TV_SB4_DCU1_PC_CTRL_reg,tvsb4_tv_sb4_dcu1_pc_ctrl.regValue);
		/*stop pc-- tvsb5*/
		tvsb5_tv_sb5_dcu1_pc_ctrl.pc_go = 0;
		rtd_outl(TVSB5_TV_SB5_DCU1_PC_CTRL_reg,tvsb5_tv_sb5_dcu1_pc_ctrl.regValue);
		/*stop pc-- tvsb7*/
		tvsb7_tv_sb7_dcu1_pc_ctrl.pc_go = 0;
		rtd_outl(TVSB7_TV_SB7_DCU1_PC_CTRL_reg,tvsb7_tv_sb7_dcu1_pc_ctrl.regValue);
		/*read latency--dc sys*/
		dc_sys_dc_pc_sysh_prog_0_req_num.regValue = rtd_inl(DC_SYS_DC_PC_SYSH_prog_0_REQ_NUM_reg);
		dc_sys_dc_pc_sysh_prog_0_max_lat.regValue = rtd_inl(DC_SYS_DC_PC_SYSH_prog_0_MAX_LAT_reg);
		if(dc_sys_dc_pc_sysh_prog_0_req_num.sysh_prog0_req_num)
			addLatency(clientId % 16,0,1,dc_sys_dc_pc_sysh_prog_0_max_lat.sysh_prog0_max_lat);
		dc_sys_dc_pc_sysh_prog_1_req_num.regValue = rtd_inl(DC_SYS_DC_PC_SYSH_prog_1_REQ_NUM_reg);
		dc_sys_dc_pc_sysh_prog_1_max_lat.regValue = rtd_inl(DC_SYS_DC_PC_SYSH_prog_1_MAX_LAT_reg);
		if(dc_sys_dc_pc_sysh_prog_1_req_num.sysh_prog1_req_num)
			addLatency((clientId + 1) % 16,0,1,dc_sys_dc_pc_sysh_prog_1_max_lat.sysh_prog1_max_lat);
		dc_sys_dc_pc_sysh_prog_2_req_num.regValue = rtd_inl(DC_SYS_DC_PC_SYSH_prog_2_REQ_NUM_reg);
		dc_sys_dc_pc_sysh_prog_2_max_lat.regValue = rtd_inl(DC_SYS_DC_PC_SYSH_prog_2_MAX_LAT_reg);
		if(dc_sys_dc_pc_sysh_prog_2_req_num.sysh_prog2_req_num)
			addLatency((clientId + 2) % 16,0,1,dc_sys_dc_pc_sysh_prog_2_max_lat.sysh_prog2_max_lat);
		/*read latency--tvsb1*/
		tvsb1_tv_sb1_dcu1_pc_prog_0_channel_sel.prog_channel_sel = 0;
		rtd_outl(TVSB1_TV_SB1_DCU1_PC_prog_0_channel_sel_reg,tvsb1_tv_sb1_dcu1_pc_prog_0_channel_sel.regValue);
		tvsb1_tv_sb1_dcu1_pc_prog_0_req_num.regValue = rtd_inl(TVSB1_TV_SB1_DCU1_PC_prog_0_req_num_reg);
		tvsb1_tv_sb1_dcu1_pc_prog_0_max_lat.regValue = rtd_inl(TVSB1_TV_SB1_DCU1_PC_prog_0_max_lat_reg);
		if(tvsb1_tv_sb1_dcu1_pc_prog_0_req_num.prog_req_num)
			addLatency(1,clientId % 16,0,tvsb1_tv_sb1_dcu1_pc_prog_0_max_lat.prog_max_lat);
		tvsb1_tv_sb1_dcu1_pc_prog_0_channel_sel.prog_channel_sel = 1;
		rtd_outl(TVSB1_TV_SB1_DCU1_PC_prog_0_channel_sel_reg,tvsb1_tv_sb1_dcu1_pc_prog_0_channel_sel.regValue);
		tvsb1_tv_sb1_dcu1_pc_prog_0_req_num.regValue = rtd_inl(TVSB1_TV_SB1_DCU1_PC_prog_0_req_num_reg);
		tvsb1_tv_sb1_dcu1_pc_prog_0_max_lat.regValue = rtd_inl(TVSB1_TV_SB1_DCU1_PC_prog_0_max_lat_reg);
		if(tvsb1_tv_sb1_dcu1_pc_prog_0_req_num.prog_req_num)
			addLatency(1,(clientId + 1) % 16,0,tvsb1_tv_sb1_dcu1_pc_prog_0_max_lat.prog_max_lat);
		tvsb1_tv_sb1_dcu1_pc_prog_0_channel_sel.prog_channel_sel = 2;
		rtd_outl(TVSB1_TV_SB1_DCU1_PC_prog_0_channel_sel_reg,tvsb1_tv_sb1_dcu1_pc_prog_0_channel_sel.regValue);
		tvsb1_tv_sb1_dcu1_pc_prog_0_req_num.regValue = rtd_inl(TVSB1_TV_SB1_DCU1_PC_prog_0_req_num_reg);
		tvsb1_tv_sb1_dcu1_pc_prog_0_max_lat.regValue = rtd_inl(TVSB1_TV_SB1_DCU1_PC_prog_0_max_lat_reg);
		if(tvsb1_tv_sb1_dcu1_pc_prog_0_req_num.prog_req_num)
			addLatency(1,(clientId + 2) % 16,0,tvsb1_tv_sb1_dcu1_pc_prog_0_max_lat.prog_max_lat);
		/*read latency--tvsb2*/
		tvsb2_tv_sb2_dcu1_pc_prog_0_channel_sel.prog_channel_sel = 0;
		rtd_outl(TVSB2_TV_SB2_DCU1_PC_prog_0_channel_sel_reg,tvsb2_tv_sb2_dcu1_pc_prog_0_channel_sel.regValue);
		tvsb2_tv_sb2_dcu1_pc_prog_0_req_num.regValue = rtd_inl(TVSB2_TV_SB2_DCU1_PC_prog_0_req_num_reg);
		tvsb2_tv_sb2_dcu1_pc_prog_0_max_lat.regValue = rtd_inl(TVSB2_TV_SB2_DCU1_PC_prog_0_max_lat_reg);
		if(tvsb2_tv_sb2_dcu1_pc_prog_0_req_num.prog_req_num)
			addLatency(0,clientId % 16,0,tvsb2_tv_sb2_dcu1_pc_prog_0_max_lat.prog_max_lat);
		tvsb2_tv_sb2_dcu1_pc_prog_0_channel_sel.prog_channel_sel = 1;
		rtd_outl(TVSB2_TV_SB2_DCU1_PC_prog_0_channel_sel_reg,tvsb2_tv_sb2_dcu1_pc_prog_0_channel_sel.regValue);
		tvsb2_tv_sb2_dcu1_pc_prog_0_req_num.regValue = rtd_inl(TVSB2_TV_SB2_DCU1_PC_prog_0_req_num_reg);
		tvsb2_tv_sb2_dcu1_pc_prog_0_max_lat.regValue = rtd_inl(TVSB2_TV_SB2_DCU1_PC_prog_0_max_lat_reg);
		if(tvsb2_tv_sb2_dcu1_pc_prog_0_req_num.prog_req_num)
			addLatency(0,(clientId + 1) % 16,0,tvsb2_tv_sb2_dcu1_pc_prog_0_max_lat.prog_max_lat);
		tvsb2_tv_sb2_dcu1_pc_prog_0_channel_sel.prog_channel_sel = 2;
		rtd_outl(TVSB2_TV_SB2_DCU1_PC_prog_0_channel_sel_reg,tvsb2_tv_sb2_dcu1_pc_prog_0_channel_sel.regValue);
		tvsb2_tv_sb2_dcu1_pc_prog_0_req_num.regValue = rtd_inl(TVSB2_TV_SB2_DCU1_PC_prog_0_req_num_reg);
		tvsb2_tv_sb2_dcu1_pc_prog_0_max_lat.regValue = rtd_inl(TVSB2_TV_SB2_DCU1_PC_prog_0_max_lat_reg);
		if(tvsb2_tv_sb2_dcu1_pc_prog_0_req_num.prog_req_num)
			addLatency(0,(clientId + 2) % 16,0,tvsb2_tv_sb2_dcu1_pc_prog_0_max_lat.prog_max_lat);
		/*read latency--tvsb3*/
		tvsb3_tv_sb3_dcu1_pc_prog_0_req_num.regValue = rtd_inl(TVSB3_TV_SB3_DCU1_PC_prog_0_req_num_reg);
		tvsb3_tv_sb3_dcu1_pc_prog_0_max_lat.regValue = rtd_inl(TVSB3_TV_SB3_DCU1_PC_prog_0_max_lat_reg);
		if(tvsb3_tv_sb3_dcu1_pc_prog_0_req_num.prog_req_num)
			addLatency(6,clientId2,0,tvsb3_tv_sb3_dcu1_pc_prog_0_max_lat.prog_max_lat);
		/*read latency--tvsb4*/
		tvsb4_tv_sb4_dcu1_pc_prog_0_channel_sel.prog_channel_sel = 0;
		rtd_outl(TVSB4_TV_SB4_DCU1_PC_prog_0_channel_sel_reg,tvsb4_tv_sb4_dcu1_pc_prog_0_channel_sel.regValue);
		tvsb4_tv_sb4_dcu1_pc_prog_0_req_num.regValue = rtd_inl(TVSB4_TV_SB4_DCU1_PC_prog_0_req_num_reg);
		tvsb4_tv_sb4_dcu1_pc_prog_0_max_lat.regValue = rtd_inl(TVSB4_TV_SB4_DCU1_PC_prog_0_max_lat_reg);
		if(tvsb4_tv_sb4_dcu1_pc_prog_0_req_num.prog_req_num)
			addLatency(0xb,clientId % 16,0,tvsb4_tv_sb4_dcu1_pc_prog_0_max_lat.prog_max_lat);
		tvsb4_tv_sb4_dcu1_pc_prog_0_channel_sel.prog_channel_sel = 1;
		rtd_outl(TVSB4_TV_SB4_DCU1_PC_prog_0_channel_sel_reg,tvsb4_tv_sb4_dcu1_pc_prog_0_channel_sel.regValue);
		tvsb4_tv_sb4_dcu1_pc_prog_0_req_num.regValue = rtd_inl(TVSB4_TV_SB4_DCU1_PC_prog_0_req_num_reg);
		tvsb4_tv_sb4_dcu1_pc_prog_0_max_lat.regValue = rtd_inl(TVSB4_TV_SB4_DCU1_PC_prog_0_max_lat_reg);
		if(tvsb4_tv_sb4_dcu1_pc_prog_0_req_num.prog_req_num)
			addLatency(0xb,(clientId + 1) % 16,0,tvsb4_tv_sb4_dcu1_pc_prog_0_max_lat.prog_max_lat);
		tvsb4_tv_sb4_dcu1_pc_prog_0_channel_sel.prog_channel_sel = 2;
		rtd_outl(TVSB4_TV_SB4_DCU1_PC_prog_0_channel_sel_reg,tvsb4_tv_sb4_dcu1_pc_prog_0_channel_sel.regValue);
		tvsb4_tv_sb4_dcu1_pc_prog_0_req_num.regValue = rtd_inl(TVSB4_TV_SB4_DCU1_PC_prog_0_req_num_reg);
		tvsb4_tv_sb4_dcu1_pc_prog_0_max_lat.regValue = rtd_inl(TVSB4_TV_SB4_DCU1_PC_prog_0_max_lat_reg);
		if(tvsb4_tv_sb4_dcu1_pc_prog_0_req_num.prog_req_num)
			addLatency(0xb,(clientId + 2) % 16,0,tvsb4_tv_sb4_dcu1_pc_prog_0_max_lat.prog_max_lat);
		/*read latency--tvsb5*/
		tvsb5_tv_sb5_dcu1_pc_prog_0_channel_sel.prog_channel_sel = 0;
		rtd_outl(TVSB5_TV_SB5_DCU1_PC_prog_0_channel_sel_reg,tvsb5_tv_sb5_dcu1_pc_prog_0_channel_sel.regValue);
		tvsb5_tv_sb5_dcu1_pc_prog_0_req_num.regValue = rtd_inl(TVSB5_TV_SB5_DCU1_PC_prog_0_req_num_reg);
		tvsb5_tv_sb5_dcu1_pc_prog_0_max_lat.regValue = rtd_inl(TVSB5_TV_SB5_DCU1_PC_prog_0_max_lat_reg);
		if(tvsb5_tv_sb5_dcu1_pc_prog_0_req_num.prog_req_num)
			addLatency(8,clientId % 16,0,tvsb5_tv_sb5_dcu1_pc_prog_0_max_lat.prog_max_lat);
		tvsb5_tv_sb5_dcu1_pc_prog_0_channel_sel.prog_channel_sel = 1;
		rtd_outl(TVSB5_TV_SB5_DCU1_PC_prog_0_channel_sel_reg,tvsb5_tv_sb5_dcu1_pc_prog_0_channel_sel.regValue);
		tvsb5_tv_sb5_dcu1_pc_prog_0_req_num.regValue = rtd_inl(TVSB5_TV_SB5_DCU1_PC_prog_0_req_num_reg);
		tvsb5_tv_sb5_dcu1_pc_prog_0_max_lat.regValue = rtd_inl(TVSB5_TV_SB5_DCU1_PC_prog_0_max_lat_reg);
		if(tvsb5_tv_sb5_dcu1_pc_prog_0_req_num.prog_req_num)
			addLatency(8,(clientId + 1) % 16,0,tvsb5_tv_sb5_dcu1_pc_prog_0_max_lat.prog_max_lat);
		tvsb5_tv_sb5_dcu1_pc_prog_0_channel_sel.prog_channel_sel = 2;
		rtd_outl(TVSB5_TV_SB5_DCU1_PC_prog_0_channel_sel_reg,tvsb5_tv_sb5_dcu1_pc_prog_0_channel_sel.regValue);
		tvsb5_tv_sb5_dcu1_pc_prog_0_req_num.regValue = rtd_inl(TVSB5_TV_SB5_DCU1_PC_prog_0_req_num_reg);
		tvsb5_tv_sb5_dcu1_pc_prog_0_max_lat.regValue = rtd_inl(TVSB5_TV_SB5_DCU1_PC_prog_0_max_lat_reg);
		if(tvsb5_tv_sb5_dcu1_pc_prog_0_req_num.prog_req_num)
			addLatency(8,(clientId + 2) % 16,0,tvsb5_tv_sb5_dcu1_pc_prog_0_max_lat.prog_max_lat);
		/*read latency--tvsb7*/
		tvsb7_tv_sb7_dcu1_pc_prog_0_req_num.regValue = rtd_inl(TVSB7_TV_SB7_DCU1_PC_prog_0_req_num_reg);
		tvsb7_tv_sb7_dcu1_pc_prog_0_max_lat.regValue = rtd_inl(TVSB7_TV_SB7_DCU1_PC_prog_0_max_lat_reg);
		if(tvsb7_tv_sb7_dcu1_pc_prog_0_req_num.prog_req_num)
			addLatency(0xd,clientId2,0,tvsb7_tv_sb7_dcu1_pc_prog_0_max_lat.prog_max_lat);
		/*next client Id*/
		clientId += 3;
		if(clientId > 15)
			clientId = 0;
		clientId2++;
		if(clientId2 > 15)
			clientId2 = 0;
	}
	/*finish:clear running flag*/
	gRunning = 0;
	return 0;
}
/** start thread for checking latency of all bridges and clients */
int startCheckLatency(unsigned int period,unsigned char fReadOnly)
{
	int ret = 0;

	/*stop checking thread*/
	ret = stopCheckLatency();
	if(ret < 0)
		return ret;
	/*clear buffer*/
	memset(gLatencyBuffer,0,sizeof(gLatencyBuffer));
	/*start thread*/
	gPeriod = period;
	gReadOnly = fReadOnly;
	gStop = 0;
	gRunning = 0;
	gThreadHandle = kthread_run(latencyThread,NULL,"rtice latency");
	if(!gThreadHandle || IS_ERR(gThreadHandle)){
		ret = -RTICE_LATENCY_CREATE_THREAD;
	}else{
		wait_event_timeout(RTICE_LAT_WAIT_MAIN,(gRunning == 1),100);
		if(gRunning == 0)
			ret = -RTICE_LATENCY_THREAD_UNRUN;
	}
	/*finish*/
	return ret;
}
/** stop checking thread*/
int stopCheckLatency()
{
	if(!gThreadHandle || IS_ERR(gThreadHandle))
		return 0;
	/*set stop flag*/
	gStop = 1;
	wait_event_timeout(RTICE_LAT_WAIT_MAIN,(gRunning == 0),100);
	if(gRunning == 1)
		return -RTICE_LATENCY_THREAD_UNSTOP;
	gThreadHandle = NULL;
	return 0;
}
/** 
 * read latency buffer start from 'addr' till 'size' bytes,saving latency to 'pOut'.
 * And returns error code or length of readed data
 */
int getClientsLatency(unsigned int addr,unsigned int size,unsigned char*pOut)
{
	const unsigned int bufSize = 16 * 17 * 8;
	unsigned int avgLat = 0;
	unsigned int tSize = size;

	if(addr + tSize > bufSize || addr % 8 != 0 || tSize % 8 != 0)
		return -RTICE_LATENCY_ADDR_SIZE_ERR;
	while(tSize){
		int i = addr / 8;

		if(gLatencyBuffer[i].count){
			/*max latency*/
			LTB4(gLatencyBuffer[i].maxLat,pOut[0], pOut[1], pOut[2], pOut[3]);
			/*avg latency*/
			avgLat = (unsigned int)div64_u64(gLatencyBuffer[i].totalLat,(u64)gLatencyBuffer[i].count);
			LTB4(avgLat,pOut[4], pOut[5], pOut[6], pOut[7]);
		}else{
			LTB4(RTICE_INVALID_LATENCY,pOut[0], pOut[1], pOut[2], pOut[3]);
			LTB4(RTICE_INVALID_LATENCY,pOut[4], pOut[5], pOut[6], pOut[7]);
		}
		/*next bridge or client*/
		tSize -= 8;
		pOut += 8;
		addr += 8;
	}
	return size;
}