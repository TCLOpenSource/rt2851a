#include "memc_isr/PQL/PQLPlatformDefs.h"
#include "memc_isr/PQL/PQLContext.h"
#include "memc_isr/PQL/FRC_glb_Context.h"
#include "memc_isr/PQL/PQLGlobalDefs.h"
#include <memc_isr/scalerMEMC.h>

#include <mach/rtk_log.h>

/////
extern int LowDelay_mode;
extern UBYTE g_scaler_memc_cadence[_FILM_MEMC_NUM];
UBYTE  u8_filmCad_enterCnt[_FRC_CADENCE_NUM_][_FILM_MOT_NUM];
#define	SOFTWARE1__SOFTWARE1_12_ADDR	0xb809d730
UINT32  u32_32322_BadEdit_case[60]=
{
	0x252A52A4, 0xA54A549, 0x14A94A92, 0x29529524, 0x12A52A49,
	0x254A5492, 0xA94A925, 0x1529524A, 0x2A52A495, 0x14A5492A,
	0x294A9254, 0x129524A9, 0x252A4952, 0xA5492A5, 0x14A9254A,
	0x29524A94, 0x12A49529, 0x25492A52, 0xA9254A5, 0x1524A94A,
	0x2A495295, 0x1492A52A, 0x29254A54, 0x124A94A9, 0x24952952,
	0x92A52A5, 0x1254A54A, 0x24A94A94, 0x9529529, 0x12A52A52,
	0x254A54A4, 0xA94A949, 0x15295292, 0x2A52A524, 0x14A54A49,
	0x294A9492, 0x12952925, 0x252A524A, 0xA54A494, 0x14A94929,
	0x29529252, 0x12A524A5, 0x254A494A, 0xA949295, 0x1529252A,
	0x2A524A54, 0x14A494A9, 0x29492952, 0x129252A5, 0x2524A54A,
	0xA494A94, 0x14929529, 0x29252A52, 0x124A54A5, 0x2494A94A,
	0x9295295, 0x1252A52A, 0x24A54A54, 0x94A94A9, 0x12952952
};

///////////////////////////////////////////////////////////////////////////////////////////
UINT32 FrameMotionTH26(const _PARAM_FilmDetectCtrl *pParam, _OUTPUT_FilmDetectCtrl *pOutput, _PQL_FILM_MOT_TYPE motion_T)
{
#if 0
	UBYTE i = 0;
	UINT32 u27_FrmMotTh = 0;

	/*
		25          20                        10                         0
		 o o o o o o o o o o o o o o o o o o o o o o o o o x
	Sort
	Tick
	*/
	// remove oldest element
	UBYTE u5_remove_index = 25;
	for (i = 0; i < 26; i++)
	{
		if (pOutput->u27_FrmMotionSortTick[i] == 25)
		{
			u5_remove_index = i;
			break;
		}
	}

	for (i = u5_remove_index; i > 0; i--)
	{
		pOutput->u27_FrmMotionSort[i] = pOutput->u27_FrmMotionSort[i-1];
		pOutput->u27_FrmMotionSortTick[i] = pOutput->u27_FrmMotionSortTick[i-1];
	}
	// FrmMotionSort[0] and FrmMotionSortTick[0] are empty now, waiting for new data

	// sorting 26 frame motion
	pOutput->u27_FrmMotionSort[0] = pOutput->u27_ipme_motionPool[motion_T][0];
	pOutput->u27_FrmMotionSortTick[0] = 0;

	// switch number and tick
	for (i = 0; i < 25; i++)
	{
		UINT32 tmp;
		if (pOutput->u27_FrmMotionSort[i] > pOutput->u27_FrmMotionSort[i+1])
		{
			tmp = pOutput->u27_FrmMotionSort[i+1];
			pOutput->u27_FrmMotionSort[i+1] = pOutput->u27_FrmMotionSort[i];
			pOutput->u27_FrmMotionSort[i] = tmp;

			tmp = pOutput->u27_FrmMotionSortTick[i+1];
			pOutput->u27_FrmMotionSortTick[i+1] = pOutput->u27_FrmMotionSortTick[i];
			pOutput->u27_FrmMotionSortTick[i] = tmp;
		}
		else
		{
			break;
		}
	}

	// all tick++
	for (i = 0; i < 26; i++)
	{
		pOutput->u27_FrmMotionSortTick[i]++;

		// remove maximum and 9 minimun frame motion
		if (i >= 9 && i < 25)
		{
			u27_FrmMotTh += pOutput->u27_FrmMotionSort[i];
		}
	}
	u27_FrmMotTh = (u27_FrmMotTh>>1);

	return u27_FrmMotTh;
#else
	return 0;
#endif
}

UINT32 FrameMotionTH8(const _PARAM_FilmDetectCtrl *pParam, _OUTPUT_FilmDetectCtrl *pOutput, _PQL_FILM_MOT_TYPE motion_T, UINT32 u27_FrmMot_sum, UINT32 u27_maxMot, UINT32 u27_secMot)
{
	// clip maxMot using secMot
	//UINT32 u27_maxMot_clip = 0x80000;
	//UINT32 u27_secFMot_clip = 0;
	//UINT32 u27_maxFMot_clip = 0;

	UINT32 u27_FrmMot_sum_t = u27_FrmMot_sum;
#if 0
	if(u27_secMot < 0x10){
		u27_maxMot_clip = _MIN_(u27_maxMot_clip, u27_maxMot); //max=960x540x255=0x7e11700
	}
	else{
		u27_maxMot_clip = _MAX_(_MIN_(u27_maxMot_clip, u27_maxMot), u27_secMot);
	}

	if(u27_secMot > 32*(1+pOutput->u27_g_FrmMot_Th[motion_T])){
		u27_secFMot_clip = _MIN_(0x80000, u27_secMot/32);		//max
		u27_maxFMot_clip = _MIN_(0x80000, u27_maxMot/32);	//sec
		u27_FrmMot_sum_t = u27_FrmMot_sum_t - u27_maxMot + u27_maxFMot_clip -u27_secMot + u27_secFMot_clip;
	}
	else if(u27_secMot > 12*(1+pOutput->u27_g_FrmMot_Th[motion_T])){
		u27_secFMot_clip = _MIN_(0x80000, u27_secMot/16);
		u27_maxFMot_clip = _MIN_(0x80000, u27_maxMot/16);
		u27_FrmMot_sum_t = u27_FrmMot_sum_t - u27_maxMot + u27_maxFMot_clip -u27_secMot + u27_secFMot_clip;
	}
	else{
		u27_FrmMot_sum_t = u27_FrmMot_sum_t - u27_maxMot + u27_maxMot_clip;
	}

	//for debug
	//if(u27_FrmMot_sum_t == u27_FrmMot_sum)
	//	WriteRegister(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_0_ADDR, 8, 11, 0x1);
	//else
	//	WriteRegister(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_0_ADDR, 8, 11, 0x0);

	return u27_FrmMot_sum;
#else
//	if(pOutput->u27_ipme_motionPool[motion_T][0]>=u27_maxMot){
//		u27_secMot = u27_maxMot;
//		u27_maxMot = pOutput->u27_ipme_motionPool[motion_T][0];
//	}

	if((u27_maxMot >= 5*u27_secMot) && (u27_maxMot >= 32*(1+pOutput->u27_g_FrmMot_Th[motion_T])) && (u27_secMot >= 200)){
		u27_FrmMot_sum_t = u27_FrmMot_sum - u27_maxMot + u27_secMot;
		//pr_notice("[MEMC_FrameMotionTH8][,%d,%d,][,%d,%d,%d,]\n\r", u27_FrmMot_sum_t, u27_FrmMot_sum, u27_maxMot, u27_secMot, pOutput->u27_g_FrmMot_Th[motion_T]);
	}

	return u27_FrmMot_sum_t;
#endif

}

VOID Motion_Sequence_Gen(const _PARAM_FilmDetectCtrl *pParam, _OUTPUT_FilmDetectCtrl * pOutput, _PQL_FILM_MOT_TYPE motion_T)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	UBYTE  u8_i = 0, u8_j = 0;
	UBYTE  u1_FrmSeq = 0, u4_Mot_diffWgt = 0, u4_FrmMot_bigCnt = 0;
	UINT32 u27_cur_FrmMot = 0, u27_FrmMot_sum = 0, u27_FrmMot_Th = 0, u27_FrmMot_min = 0, u27_FrmMot_big = 0, u27_FrmMot_Lmt = 150000;

	UINT32 u27_maxMot = 0;
	UINT32 u27_secMot = 0;
	UINT32 u27_tmpMot = 0;
	UINT32 MotionPool_tmp[8] = {0};
	UINT32 log_en = 0;
	UINT32 u27_Mot_all_min_smallmot_check_en=0;
	int motion_diff=0;
	ReadRegister(FRC_TOP__software1__reg_software_60_ADDR, 30, 30, &log_en);
	ReadRegister(FRC_TOP__software1__reg_software_60_ADDR, 15, 15, &u27_Mot_all_min_smallmot_check_en);

	// distinguish information from motionType
	if(motion_T == _FILM_ALL)
	{
		u27_cur_FrmMot = s_pContext->_output_read_comreg.u27_ipme_aMot_rb;
		u4_Mot_diffWgt = pParam->u4_Mot_all_diffWgt;
		u27_FrmMot_min = pParam->u27_Mot_all_min;		
		u27_FrmMot_min = _MIN_(pOutput->u27_quit_motTh[_FILM_ALL], pParam->u27_Mot_all_min);
	}
	#if MIX_MODE_REGION_17
	else if(motion_T >=_FILM_12RGN_01)   // 17 region
	{
		u27_cur_FrmMot = s_pContext->_output_read_comreg.u27_ipme_12Mot_rb[motion_T - 1 - _FILM_5RGN_CEN];
		u4_Mot_diffWgt = pParam->u4_Mot_rgn_diffWgt;
		u27_FrmMot_min = 0;
	}
	else 
	{
		u27_cur_FrmMot = s_pContext->_output_read_comreg.u27_ipme_5Mot_rb[motion_T - 1];
		u4_Mot_diffWgt = pParam->u4_Mot_rgn_diffWgt;
		u27_FrmMot_min = 0;
	}
	#else
	else // 5 region
	{
		u27_cur_FrmMot = s_pContext->_output_read_comreg.u27_ipme_5Mot_rb[motion_T - 1];
		u4_Mot_diffWgt = pParam->u4_Mot_rgn_diffWgt;
		u27_FrmMot_min = 0;
	}
	#endif

	for (u8_i = 0; u8_i < 8; u8_i ++){
		MotionPool_tmp[u8_i] = pOutput->u27_ipme_motionPool[motion_T][u8_i];
	}

	// update motion loop.
	for (u8_i = 0; u8_i < 8; u8_i ++)
	{
		if (((pOutput->u32_Mot_sequence[motion_T] >> u8_i) & 0x01) == 1)
		{
			u4_FrmMot_bigCnt ++;
			u27_FrmMot_big += pOutput->u27_ipme_motionPool[motion_T][u8_i];
		}

		//record max & sec motion
		for (u8_j = 0; u8_j < 8-u8_i-1; u8_j++){
			if(MotionPool_tmp[u8_j] > MotionPool_tmp[u8_j+1]){
				u27_tmpMot = MotionPool_tmp[u8_j];
				MotionPool_tmp[u8_j] = MotionPool_tmp[u8_j+1];
				MotionPool_tmp[u8_j+1] = u27_tmpMot;
			}
		}
	}
	u27_FrmMot_big = u4_FrmMot_bigCnt > 0? (u27_FrmMot_big * 2 / u4_FrmMot_bigCnt) : 0x20000;
	u27_maxMot = MotionPool_tmp[7];
	u27_secMot = MotionPool_tmp[6];

	for (u8_i = 7; u8_i >0; u8_i --)
	{
		u27_FrmMot_sum                              += pOutput->u27_ipme_motionPool[motion_T][u8_i];
		pOutput->u27_ipme_motionPool[motion_T][u8_i] = pOutput->u27_ipme_motionPool[motion_T][u8_i-1];
	}
	u27_FrmMot_sum                           += pOutput->u27_ipme_motionPool[motion_T][0];
	pOutput->u27_ipme_motionPool[motion_T][0] = u27_cur_FrmMot;

	// adjust frame motion th
#if 0	
	if(motion_T == _FILM_ALL){
		UINT32 u27_Frm26Mot_sum = 0;
		u27_Frm26Mot_sum = FrameMotionTH26(pParam, pOutput, motion_T);

		//UINT32 u32_RB_val = 0;
		//ReadRegister(FRC_TOP__PQL_1__pql_film_det_bypass_ADDR, 0, 31, &u32_RB_val);
		UBYTE u5_Frm26MotS_wgt = 32;// _MIN_(((u32_RB_val >> 17) & 0x3f), 32);

		u27_FrmMot_sum = ((32-u5_Frm26MotS_wgt)*u27_FrmMot_sum + u5_Frm26MotS_wgt*u27_Frm26Mot_sum)>>5;
	}
#else
	u27_FrmMot_sum = FrameMotionTH8(pParam, pOutput, motion_T, u27_FrmMot_sum, u27_maxMot, u27_secMot);
#endif		
	
	// motion limit
	pOutput->u1_Mot_selBig = 0;
	if ((motion_T == _FILM_ALL) && (u27_cur_FrmMot > u27_FrmMot_big) && (u27_cur_FrmMot > u27_FrmMot_Lmt))
	{
		//u27_cur_FrmMot         = u27_FrmMot_big;
		u27_cur_FrmMot = _MAX_(u27_FrmMot_big,u27_FrmMot_Lmt);
		pOutput->u27_ipme_motionPool[motion_T][0] = u27_cur_FrmMot;
		pOutput->u1_Mot_selBig = 1;
	}

	// motion sequence judge
	u27_FrmMot_Th = (u27_FrmMot_sum >> 3) * u4_Mot_diffWgt >> 3;
	u1_FrmSeq     = (u27_cur_FrmMot > u27_FrmMot_Th && u27_cur_FrmMot > u27_FrmMot_min)? 1 : 0;

#if 0
	if(log_en && motion_T == _FILM_ALL){
		pr_notice("[%s][,%d,%d,%d,%d,]\n\r", __FUNCTION__, u1_FrmSeq, u27_cur_FrmMot, u27_FrmMot_Th, u27_FrmMot_min);
	}
#endif

	pOutput->u27_g_FrmMot_Th[motion_T] = u27_FrmMot_Th;

	//for 32 10110
	if (pOutput->u8_cur_cadence_Id[motion_T] == _CAD_32 )
	{
		if ((pOutput->u8_phT_phase_Idx[motion_T] == 3) && ((pOutput->u32_Mot_sequence[motion_T]&0x1) == 1))
		{
			u1_FrmSeq = (u1_FrmSeq == 1) ? 0 : u1_FrmSeq ;
			pOutput->u27_ipme_motionPool[motion_T][0] = pOutput->u27_quit_smlMot[motion_T];
		}
	}
	//for 32322 -> 32232
	if (pOutput->u8_cur_cadence_Id[motion_T] == _CAD_32322)
	{
		if ((pOutput->u8_phT_phase_Idx[motion_T] == 8) && ((pOutput->u32_Mot_sequence[motion_T]&0x1) == 1))
		{
			u1_FrmSeq = (u1_FrmSeq == 1) ? 0 : u1_FrmSeq ;
			pOutput->u27_ipme_motionPool[motion_T][0] = pOutput->u27_quit_smlMot[motion_T];
		}
	}

	motion_diff = u27_cur_FrmMot - u27_FrmMot_Th;
	
	//small motion check
	if(u27_Mot_all_min_smallmot_check_en==1)
	{
		motion_diff = ((u27_cur_FrmMot) >= (u27_FrmMot_Th) ? ((u27_cur_FrmMot)-(u27_FrmMot_Th)) : ((u27_FrmMot_Th)-(u27_cur_FrmMot)) );
		if (pOutput->u8_cur_cadence_Id[motion_T] == _CAD_VIDEO )
			{
			if (u27_cur_FrmMot<1000 && motion_diff<200)
			{
				u1_FrmSeq = (u1_FrmSeq == 0) ? 1 : u1_FrmSeq ;
				//pOutput->u27_ipme_motionPool[motion_T][0] = pOutput->u27_quit_smlMot[motion_T];
			}
		}	
	}

	pOutput->u32_Mot_sequence[motion_T] = (pOutput->u32_Mot_sequence[motion_T] << 1) | u1_FrmSeq;

       // record small motion^M
       if(pOutput->u32_Mot_sequence[motion_T] == 0xffffffff){
               pOutput->u27_FrmMotion_S[motion_T] = pOutput->u27_ipme_motionPool[motion_T][0];
       }
       else if(pOutput->u32_Mot_sequence[motion_T] == 0x0){
               pOutput->u27_FrmMotion_S[motion_T] = pOutput->u27_ipme_motionPool[motion_T][0];
       }
       else if(u1_FrmSeq==0){
               pOutput->u27_FrmMotion_S[motion_T] = (pOutput->u27_FrmMotion_S[motion_T]+pOutput->u27_ipme_motionPool[motion_T][0])/2;
       }
       pOutput->u27_FrmMotion_S[motion_T] = _CLIP_UBOUND_(pOutput->u27_FrmMotion_S[motion_T], 0x10000);

	if ((motion_T == pOutput->u8_dbg_motion_t) && (((pOutput->u5_dbg_param1_pre & BIT_0) >> 0) == 1) && pOutput->u32_dbg_cnt_hold > 0)
    	{
		printk("[MEMC]%s::rbFM=%d, cFM=%d, th=%d, mseq=%d, ph=%d, qTh=%d\n",__FUNCTION__,s_pContext->_output_read_comreg.u27_ipme_aMot_rb,\
					u27_cur_FrmMot,u27_FrmMot_Th,(pOutput->u32_Mot_sequence[motion_T]&0xFFFF),
					pOutput->u8_phT_phase_Idx[motion_T],pOutput->u27_quit_motTh[motion_T]);
       }

}

UBYTE CadenceDetect_QSwitch_Judge(const _PARAM_FilmDetectCtrl *pParam, _OUTPUT_FilmDetectCtrl * pOutput, UBYTE motion_T)
{
	// long time black bg + video switch to cadence
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	UBYTE u1_func_en = pParam->u1_QuickSwitch_En;

	UBYTE u1_is_still = 0;
	UBYTE u1_is_sdtl = 0;
	UBYTE u1_is_sapl = 0;
	UBYTE u1_is_qSwitch = 0;

	static UBYTE u8_still_sapl_sdtl_bg_cnt = 0;

	//UINT32 u32_RB_val1 = 0, u32_RB_val2 = 0;
	//ReadRegister(FRC_TOP__PQL_1__pql_fb_dummy_a8_ADDR, 0, 31, &u32_RB_val1);	
	//ReadRegister(FRC_TOP__PQL_1__pql_fb_dummy_ac_ADDR, 0, 31, &u32_RB_val2);	

	UBYTE u8_sm_th = 0x8;// (u32_RB_val1&0xff);//
	UINT32 u25_sdtl_th = 0x100000;// ((u32_RB_val2>>0)&0xffff) << 4;//
	UINT32 u26_sapl_th = 0x100000;// ((u32_RB_val2>>16)&0xffff) << 4 ;// 960x540x2 = 0xfd200

	UBYTE u8_cnt_max = 0x20;// (u32_RB_val1>>8)&0xff;//
	UBYTE u8_cnt_th = 0x8;// (u32_RB_val1>>16)&0xff;//



	if(u1_func_en == 0 || motion_T!=_FILM_ALL){
		return 0;
	}

	if(pOutput->u27_ipme_motionPool[motion_T][0] < u8_sm_th){
		u1_is_still = 1;
	}

	if(s_pContext->_output_read_comreg.u25_me_aDTL_rb < u25_sdtl_th){
		u1_is_sdtl = 1;
	}

	if((s_pContext->_output_read_comreg.u26_me_aAPLi_rb + s_pContext->_output_read_comreg.u26_me_aAPLp_rb)/2 < u26_sapl_th){
		u1_is_sapl = 1;
	}



	if(u1_is_still && u1_is_sdtl && u1_is_sapl){
		u8_still_sapl_sdtl_bg_cnt++;
	}
	else if(u8_still_sapl_sdtl_bg_cnt > 0){
		u8_still_sapl_sdtl_bg_cnt = u8_still_sapl_sdtl_bg_cnt - 1;
	}
	else{
		u8_still_sapl_sdtl_bg_cnt = 0;
	}


	u8_still_sapl_sdtl_bg_cnt = _CLIP_UBOUND_(u8_still_sapl_sdtl_bg_cnt, u8_cnt_max);

	u1_is_qSwitch = (u8_still_sapl_sdtl_bg_cnt > u8_cnt_th) ? 1 : 0;

#if 0//debug
	WriteRegister(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_2_ADDR, 0, 3, u1_is_qSwitch);
	WriteRegister(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_2_ADDR, 4, 7, u1_is_still);
	WriteRegister(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_2_ADDR, 8, 11, u1_is_sdtl);
	WriteRegister(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_2_ADDR, 12, 15, u1_is_sapl);
	WriteRegister(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_3_ADDR, 16, 23, u8_still_sapl_sdtl_bg_cnt);

	if ((pParam->u3_DbgPrt_Rgn == 0) && (((pOutput->u5_dbg_param1_pre & BIT_0) >> 0) == 1) && pOutput->u32_dbg_cnt_hold > 0)
    	{
		printk("[MEMC]CadDet_QSwitch::qs=%d, still=%d, sdtl=%d, sapl=%d, cnt=%d\n",	u1_is_qSwitch,
																			u1_is_still,
																			u1_is_sdtl,
																			u1_is_sapl,
																			u8_still_sapl_sdtl_bg_cnt);
       }
#endif


	return u1_is_qSwitch;

}

UBYTE u8_enter_th_offset[_FRC_CADENCE_NUM_]={0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


VOID CadenceDetect(const _PARAM_FilmDetectCtrl *pParam, _OUTPUT_FilmDetectCtrl *pOutput, UBYTE motion_T)
{
	UBYTE u8_i = 0, u8_j = 0;
	UBYTE  u1_match_flag = 0, u8_enter_th = 0, u8_len = 0;
	SCHAR  s8_Phase_Idx = 0;
	UINT32 u32_match_seq_sft = 0;
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UBYTE u8_preCad_Id = 0;
	UINT32 test_en = 0, log_en = 0, test_32322_BadEdit_en = 0, u8_temp_enter_th_offset=0, u8_temp_enter_th_cadence=0;
	UINT16 u16_vip_source_type = 0;

	ReadRegister(FRC_TOP__software1__reg_software_60_ADDR, 31, 31, &test_en);
	ReadRegister(FRC_TOP__software1__reg_software_60_ADDR, 30, 30, &log_en);
	ReadRegister(FRC_TOP__software1__reg_software_60_ADDR, 29, 29, &test_32322_BadEdit_en);	
	ReadRegister(FRC_TOP__software1__reg_software_60_ADDR, 0, 3, &u8_temp_enter_th_cadence);	
	ReadRegister(FRC_TOP__software1__reg_software_60_ADDR, 4, 7, &u8_temp_enter_th_offset);
	u8_preCad_Id      = pOutput->u8_pre_cadence_Id[motion_T];
	u16_vip_source_type = s_pContext->_external_info.u16_source_type;

//	UBYTE u1_qSwitch_cond = CadenceDetect_QSwitch_Judge(pParam, pOutput, motion_T);

	pOutput->u8_det_cadence_Id[motion_T] = _CAD_VIDEO;

	for (u8_i = 1; u8_i < _FRC_CADENCE_NUM_; u8_i ++)
	{
		if(!((pParam->u32_filmDet_cadence_en >> (u8_i-1)) & 1))
		{
			continue;
		}	

		u8_len = (u8_i == _CAD_22) ? frc_cadTable[u8_i].cad_len/2 :
			     (u8_i == _CAD_44) ? frc_cadTable[u8_i].cad_len/2 :
			     (u8_i == _CAD_55) ? frc_cadTable[u8_i].cad_len/2 :
			     (u8_i == _CAD_66) ? frc_cadTable[u8_i].cad_len/2 : frc_cadTable[u8_i].cad_len;
		s8_Phase_Idx = u8_len - 1;

		// if match?
		u1_match_flag = 0;
		u32_match_seq_sft = frc_cadTable[u8_i].cad_seq;
		for (u8_j = 0; u8_j < frc_cadTable[u8_i].cad_len; u8_j ++)
		{
			u32_match_seq_sft = (u32_match_seq_sft>>1) | ((u32_match_seq_sft&0x1)<<(frc_cadTable[u8_i].cad_len-1));
			s8_Phase_Idx = s8_Phase_Idx - 1;
			if(s8_Phase_Idx < 0)
			{
				s8_Phase_Idx = u8_len - 1;
			}

			if ((pOutput->u32_Mot_sequence[motion_T] & frc_cadTable[u8_i].cad_check) == u32_match_seq_sft)
			{
				u1_match_flag = 1;
				break;
			}
		}

		// statistics of enter count
		#if 0
		u8_enter_th = (u8_i == _CAD_22)? ((pParam->u4_enter_22_cntGain-1) * frc_cadTable[u8_i].cad_len + 1):
			          (u8_i == _CAD_32)? ((pParam->u4_enter_32_cntGain-1) * frc_cadTable[u8_i].cad_len + 1):
			          (u8_i == _CAD_11i23) ? frc_cadTable[u8_i].cad_len :	((pParam->u4_enter_else_cntGain-1) * frc_cadTable[u8_i].cad_len + 1) ;
		#else // K2 use.
		u8_enter_th = (u8_i == _CAD_22) ? pParam->u4_enter_22_cntGain*frc_cadTable[u8_i].cad_len : // 2*4=8
					(u8_i == _CAD_32) ? (pParam->u4_enter_32_cntGain*frc_cadTable[u8_i].cad_len)-3 : // (3*5)-3=12
					(u8_i == _CAD_32322) ? (frc_cadTable[u8_i].cad_len-1) :
					(u8_i == _CAD_11i23) ? frc_cadTable[u8_i].cad_len+2 : // 25+2=27, for "038_FastMotion_KimYuna"
					(u8_i == _CAD_44 || u8_i==_CAD_55 || u8_i == _CAD_66) ? 3 * frc_cadTable[u8_i].cad_len/2 :
					(u8_i == _CAD_2224) ? (2 * frc_cadTable[u8_i].cad_len)-2 :
					pParam->u4_enter_else_cntGain*frc_cadTable[u8_i].cad_len ;

		if( (u16_vip_source_type >= 24) && (u16_vip_source_type<=33)){//add for DTV cadence detection th tuning
			if(u8_temp_enter_th_cadence!=0xf){
				
				if(u8_temp_enter_th_cadence==0){
					u8_temp_enter_th_offset=u8_enter_th_offset[u8_i];
				}else{//for debug and tuning!
					if(u8_i==u8_temp_enter_th_cadence){
						u8_temp_enter_th_offset=u8_temp_enter_th_offset;
					}else{
						u8_temp_enter_th_offset=u8_enter_th_offset[u8_i];
					}
				}
				u8_enter_th = u8_enter_th+u8_temp_enter_th_offset;
			}
		}
		
		#endif

#if 0
		// dynamic control enter_th if switch from video to others
		if(pOutput->u8_pre_cadence_Id[motion_T] == _CAD_VIDEO && u1_qSwitch_cond){
			u8_enter_th =  (u8_i == _CAD_32 ) ? 1 : u8_enter_th;
			u8_enter_th =  (u8_i == _CAD_32322) ? (frc_cadTable[u8_i].cad_len - 1) : u8_enter_th;
		}

#endif
		if(test_en){
			if(u8_preCad_Id == _CAD_22){
				u8_enter_th = (u8_i == _CAD_32) ? 8 : u8_enter_th;
			}
		}

		u8_filmCad_enterCnt[u8_i][motion_T] = (u1_match_flag == 1)? _CLIP_(u8_filmCad_enterCnt[u8_i][motion_T] + 1, 0, u8_enter_th + 4) : 0;

		// ex. for _CAD_32, judge cadence detect successful if motionSeq == 10010.
		//u1_match_flag_def = (pOutput->u32_Mot_sequence[motion_T] & frc_cadTable[u8_i].cad_check) == frc_cadTable[u8_i].cad_seq? 1 : 0;
		if (u8_filmCad_enterCnt[u8_i][motion_T] >= u8_enter_th)
		{
			//if(u8_i == _CAD_321)
				//pOutput->u8_det_cadence_Id[motion_T] = _CAD_22;
			//else
				pOutput->u8_det_cadence_Id[motion_T] = u8_i;
		}

		#if 1
		if(log_en && motion_T == _FILM_ALL){
			pr_notice("[CadenceDetect][%d][cnt,%d,][th,%d,][det_cad,%d,]", u8_i, u8_filmCad_enterCnt[u8_i][motion_T], u8_enter_th, pOutput->u8_det_cadence_Id[motion_T]);
		}
		#endif
	}

	if(u8_preCad_Id == _CAD_32322  && s_pContext->_output_fblevelctrl.u1_HW_sc_true == 0 && pOutput->u8_det_cadence_Id[motion_T] == _CAD_VIDEO)
		pOutput->u8_det_cadence_Id[motion_T] = _CAD_32322;

	if(test_32322_BadEdit_en && motion_T == _FILM_ALL){
		pOutput->u1_32322_BadEdit_flag = 0;
		for(u8_i = 0; u8_i < 60; u8_i++){
			if ((pOutput->u32_Mot_sequence[motion_T] & 0x3fffffff) == u32_32322_BadEdit_case[u8_i])
			{
				pOutput->u1_32322_BadEdit_flag = 1;
				pOutput->u8_32322_BadEdit_idx = u8_i;
				break;
			}
		}

		pOutput->u8_32322_BadEdit_cnt = (pOutput->u1_32322_BadEdit_flag == 1) ? _CLIP_(pOutput->u8_32322_BadEdit_cnt + 1, 0, 120) : 
										(pOutput->u8_32322_BadEdit_cnt > 1) ? (pOutput->u8_32322_BadEdit_cnt - 1) : 0;

		if(log_en && motion_T == _FILM_ALL){
			pr_notice("[32322_BadEdit][cnt,%d,][idx,%d,]\n\r", pOutput->u8_32322_BadEdit_cnt, pOutput->u8_32322_BadEdit_idx);
		}
	}

	if ((motion_T == pOutput->u8_dbg_motion_t) && (((pOutput->u5_dbg_param1_pre & BIT_1) >> 1) == 1) && pOutput->u32_dbg_cnt_hold > 0)
	{
		printk("[MEMC]%s::det_cadence_Id=%d %d \n",__FUNCTION__,pOutput->u8_det_cadence_Id[motion_T],_FRC_CADENCE_NUM_);
	}
}

UBYTE Film_PreFrm_MotWeight_autoGen(UINT32 u27_PreMot, UINT32 u27_CurMot)
{
	UBYTE u5_PreWgt          = 28;

	u27_CurMot  = u27_CurMot + 1;
	u27_PreMot  = u27_PreMot + 1;

	u5_PreWgt   = u27_PreMot * 1   > u27_CurMot? 12 : \
		         (u27_PreMot * 128 < u27_CurMot? 31 : \
			   	 (u27_PreMot * 64  < u27_CurMot? 30 : \
			   	 (u27_PreMot * 32  < u27_CurMot? 29 : \
			   	 (u27_PreMot * 16  < u27_CurMot? 28 : \
			   	 (u27_PreMot * 8   < u27_CurMot? 26 : \
			   	 (u27_PreMot * 4   < u27_CurMot? 24 : \
			   	 (u27_PreMot * 2   < u27_CurMot? 20 : \
			   	 (u27_PreMot * 1   < u27_CurMot? 18 : 28))))))));

	return u5_PreWgt;
}

UINT32 Film_rgnSMot_Avg(const _PARAM_FilmDetectCtrl *pParam, _OUTPUT_FilmDetectCtrl *pOutput, UBYTE motion_T)
{
	UINT32 u27_rgnSMot_avg = pOutput->u27_quit_smlMot[motion_T];

	switch(motion_T)
	{
		case _FILM_5RGN_TOP:
			u27_rgnSMot_avg = (pOutput->u27_quit_smlMot[_FILM_5RGN_BOT] + pOutput->u27_quit_smlMot[_FILM_5RGN_CEN])/2;
			break;
		case _FILM_5RGN_BOT:
			u27_rgnSMot_avg = (pOutput->u27_quit_smlMot[_FILM_5RGN_TOP] + pOutput->u27_quit_smlMot[_FILM_5RGN_CEN])/2;
			break;
		case _FILM_5RGN_LFT:
			u27_rgnSMot_avg = (pOutput->u27_quit_smlMot[_FILM_5RGN_RHT] + pOutput->u27_quit_smlMot[_FILM_5RGN_CEN])/2;
			break;
		case _FILM_5RGN_RHT:
			u27_rgnSMot_avg = (pOutput->u27_quit_smlMot[_FILM_5RGN_LFT] + pOutput->u27_quit_smlMot[_FILM_5RGN_CEN])/2;
			break;
		default:
			break;
	}



	return u27_rgnSMot_avg;
	
}

VOID Film_motThr_calc(const _PARAM_FilmDetectCtrl *pParam, _OUTPUT_FilmDetectCtrl *pOutput, UBYTE motion_T)
{
	UBYTE  u8_preCad_id           = pOutput->u8_pre_cadence_Id[motion_T] < _FRC_CADENCE_NUM_ ? pOutput->u8_pre_cadence_Id[motion_T] : _CAD_VIDEO;
	UBYTE  u1_curCad_motFlag      = cadence_seqFlag(frc_cadTable[u8_preCad_id], pOutput->u8_phase_Idx[motion_T]);
	UBYTE  u1_curFrm_isBig        = u8_preCad_id != _CAD_VIDEO? (u1_curCad_motFlag == 1? 1 : 0) : \
		                                 ((pOutput->u32_Mot_sequence[motion_T] & 0x01) ==1? 1 : 0);

	UBYTE  u5_preFrm_adapt_big_motWgt = 0;
	UBYTE  u5_preFrm_adapt_sml_motWgt = 0;
	UINT32 u27_pre_bigMot         = pOutput->u27_quit_bigMot[motion_T];
	UINT32 u27_pre_smlMot         = pOutput->u27_quit_smlMot[motion_T];
	UINT32 u27_curFrm_mot         = pOutput->u27_ipme_motionPool[motion_T][0];

	UINT16 u16_SMot_Th = 256;
	UBYTE u8_SMot_ratio = 20;

	// motion IIR
/*	u5_preFrm_adapt_motWgt = (pParam->u1_quit_motWgt_auto_en == 0)? 28 : \
		                      Film_PreFrm_MotWeight_autoGen(pOutput->u27_quit_motTh[motion_T], u27_curFrm_mot); // u0.5*/
	u5_preFrm_adapt_big_motWgt = (pParam->u1_quit_motWgt_auto_en == 0)? 28 : \
                 Film_PreFrm_MotWeight_autoGen(pOutput->u27_quit_bigMot[motion_T], u27_curFrm_mot); // u0.5

	u5_preFrm_adapt_sml_motWgt = (pParam->u1_quit_motWgt_auto_en == 0)? 28 : \
                 Film_PreFrm_MotWeight_autoGen(pOutput->u27_quit_smlMot[motion_T], u27_curFrm_mot); // u0.5


	if (u1_curFrm_isBig == 1)
	{
		pOutput->u27_quit_bigMot[motion_T] = _2Val_RndBlending_(u27_pre_bigMot, u27_curFrm_mot, u5_preFrm_adapt_big_motWgt, 5);
	}
	else
	{
		pOutput->u27_quit_smlMot[motion_T] = _2Val_RndBlending_(u27_pre_smlMot, u27_curFrm_mot, u5_preFrm_adapt_sml_motWgt, 5);
	}

	pOutput->u27_quit_motTh[motion_T] = (pOutput->u27_quit_bigMot[motion_T] * pParam->u4_quit_bigMot_wgt + \
										 pOutput->u27_quit_smlMot[motion_T] * pParam->u4_quit_smlMot_wgt) >> 3;

	//for mixmode@1112/11112, 1112/11112 is not easy to quit.
	if( motion_T!=_FILM_ALL && motion_T!=_FILM_5RGN_CEN 
		&& (pOutput->u8_pre_cadence_Id[_FILM_5RGN_CEN]==_CAD_1112 ||pOutput->u8_pre_cadence_Id[_FILM_5RGN_CEN]==_CAD_11112))   
	{
		UINT32 u27_rgnSmot_avg = Film_rgnSMot_Avg(pParam, pOutput, motion_T);
		UINT32 u27_bMot_mapping = (pOutput->u27_quit_bigMot[motion_T] > 8*pOutput->u27_quit_smlMot[motion_T]) ? (pOutput->u27_quit_bigMot[motion_T]/8) : 
								(pOutput->u27_quit_bigMot[motion_T] > 4*pOutput->u27_quit_smlMot[motion_T]) ? (pOutput->u27_quit_bigMot[motion_T]/4) : 
								(pOutput->u27_quit_bigMot[motion_T]/2);

		if(u27_rgnSmot_avg < u16_SMot_Th && pOutput->u27_quit_smlMot[motion_T] > u8_SMot_ratio*(1+u27_rgnSmot_avg))
		{
			pOutput->u27_quit_motTh[motion_T] = (u27_bMot_mapping * _MIN_(1, pParam->u4_quit_bigMot_wgt/2) + \
											u27_rgnSmot_avg* pParam->u4_quit_smlMot_wgt) >> 3;
		}

	}
	//--

	if ((motion_T == pOutput->u8_dbg_motion_t) && (((pOutput->u5_dbg_param1_pre & BIT_4) >> 4) == 1) && pOutput->u32_dbg_cnt_hold > 0)
	{
		printk("[MEMC]%s::q_mTh=%d, q_bM=%d, q_sM=%d\n",__FUNCTION__,pOutput->u27_quit_motTh[motion_T],\
			pOutput->u27_quit_bigMot[motion_T], pOutput->u27_quit_smlMot[motion_T]);
	}

}

VOID Film_occasionally_fastOut(const _PARAM_FilmDetectCtrl *pParam, _OUTPUT_FilmDetectCtrl *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UBYTE u8_curFrm_det_cadId = pOutput->u8_det_cadence_Id[_FILM_ALL];
	UBYTE u8_preFrm_cadId     = pOutput->u8_pre_cadence_Id[_FILM_ALL];
	UINT32 test_32322_BadEdit_en = 0;

	ReadRegister(FRC_TOP__software1__reg_software_60_ADDR, 29, 29, &test_32322_BadEdit_en);

	if(CAD_F ==PQL_FRCCaseSupportJudge(u8_curFrm_det_cadId))//not support 
		return ;

	pOutput->u1_cad_fastOut_true  = 0;
	if (u8_preFrm_cadId == _CAD_32) // rule 1: 32->22 / 32322 / 3223
	{
		if (u8_curFrm_det_cadId == _CAD_32322 || u8_curFrm_det_cadId == _CAD_3223 || u8_curFrm_det_cadId == _CAD_55)
		{
//			pOutput->u8_pre_cadence_Id[_FILM_ALL] = _CAD_VIDEO;
			pOutput->u8_cur_cadence_Id[_FILM_ALL] = _CAD_VIDEO;
			pOutput->u1_cad_fastOut_true          = 1;
		}
		else if(u8_curFrm_det_cadId == _CAD_22)
		{
			pOutput->u8_cur_cadence_Id[_FILM_ALL] = _CAD_22;
			pOutput->u1_cad_fastOut_true          = 1;
		}
	}
	else if (u8_preFrm_cadId == _CAD_22) // 22 -> 32 / 44 / 22224 / 2224 / 11'23
	{
		if(s_pContext->_output_frc_sceneAnalysis.u1_Swing_true ==1 )  //  small motion
		{
			if (u8_curFrm_det_cadId == _CAD_44  || u8_curFrm_det_cadId == _CAD_11i23)
			{
				pOutput->u8_cur_cadence_Id[_FILM_ALL] = _CAD_VIDEO; 
				pOutput->u1_cad_fastOut_true          = 1;  
			}
		}
		else if (u8_curFrm_det_cadId == _CAD_44 || u8_curFrm_det_cadId == _CAD_11i23 || u8_curFrm_det_cadId == _CAD_66)
		{
//			pOutput->u8_pre_cadence_Id[_FILM_ALL] = _CAD_VIDEO;
			pOutput->u8_cur_cadence_Id[_FILM_ALL] = _CAD_VIDEO;
			pOutput->u1_cad_fastOut_true          = 1;
		}
		else if(u8_curFrm_det_cadId == _CAD_321)
		{
			pOutput->u8_cur_cadence_Id[_FILM_ALL] = _CAD_321;
			pOutput->u1_cad_fastOut_true          = 1;
		}
		else if(u8_curFrm_det_cadId == _CAD_32)
		{
			pOutput->u8_cur_cadence_Id[_FILM_ALL] = _CAD_32;
 			pOutput->u1_cad_fastOut_true          = 1;
 		}
		else if(u8_curFrm_det_cadId == _CAD_22224)
		{
			pOutput->u8_cur_cadence_Id[_FILM_ALL] = _CAD_22224;
 			pOutput->u1_cad_fastOut_true          = 1;
 		}
		else if(u8_curFrm_det_cadId == _CAD_2224)
		{
			pOutput->u8_cur_cadence_Id[_FILM_ALL] = _CAD_2224;
 			pOutput->u1_cad_fastOut_true          = 1;
 		}
	}
	else if (u8_preFrm_cadId == _CAD_2224)
	{
		if (u8_curFrm_det_cadId == _CAD_22)
		{
			pOutput->u8_cur_cadence_Id[_FILM_ALL] = _CAD_22;
			pOutput->u1_cad_fastOut_true          = 1;
		}
	}
	else if (u8_preFrm_cadId == _CAD_11112) // 11112 -> 22. 11i23,32322,22224, not easy to quit
	{
		if (u8_curFrm_det_cadId == _CAD_22 || u8_curFrm_det_cadId == _CAD_11i23 || u8_curFrm_det_cadId == _CAD_32322 || \
			u8_curFrm_det_cadId == _CAD_22224 || u8_curFrm_det_cadId == _CAD_2224 || u8_curFrm_det_cadId == _CAD_55)
		{
//			pOutput->u8_pre_cadence_Id[_FILM_ALL] = _CAD_VIDEO;
			pOutput->u8_cur_cadence_Id[_FILM_ALL] = _CAD_VIDEO;
			pOutput->u1_cad_fastOut_true          = 1;
		}
	}
	else	if(u8_preFrm_cadId == _CAD_1112)// not easy to quit
	{
		if (u8_curFrm_det_cadId == _CAD_32 ||u8_curFrm_det_cadId == _CAD_3223 || u8_curFrm_det_cadId == _CAD_122 || \
			u8_curFrm_det_cadId == _CAD_55||u8_curFrm_det_cadId == _CAD_2224)
		{
//			pOutput->u8_pre_cadence_Id[_FILM_ALL] = _CAD_VIDEO;
			pOutput->u8_cur_cadence_Id[_FILM_ALL] = _CAD_VIDEO;
			pOutput->u1_cad_fastOut_true          = 1;
		}
	}
	else if(u8_preFrm_cadId == _CAD_3223)
	{
		if (u8_curFrm_det_cadId == _CAD_55)
		{
//			pOutput->u8_pre_cadence_Id[_FILM_ALL] = _CAD_VIDEO;
			pOutput->u8_cur_cadence_Id[_FILM_ALL] = _CAD_VIDEO;
			pOutput->u1_cad_fastOut_true          = 1;
		}
	}
	else if (u8_preFrm_cadId == _CAD_122)
	{
		if (u8_curFrm_det_cadId == _CAD_32)
		{
			pOutput->u8_cur_cadence_Id[_FILM_ALL] = _CAD_VIDEO;
			pOutput->u1_cad_fastOut_true          = 1;
		}
	}
	else if (u8_preFrm_cadId == _CAD_334)
	{
		if (u8_curFrm_det_cadId == _CAD_66)
		{
			pOutput->u8_cur_cadence_Id[_FILM_ALL] = _CAD_VIDEO;
			pOutput->u1_cad_fastOut_true          = 1;
		}
	}
	// 32322 bad-edit adjust, for quick switch 32
#if 1	
	else if(u8_preFrm_cadId == _CAD_32322)
	{
		UBYTE u8_cad_enter_cnt_th =  frc_cadTable[_CAD_32322].cad_outLen + 4 - frc_cadTable[_CAD_32].cad_outLen;
		if(test_32322_BadEdit_en){
			u8_cad_enter_cnt_th = u8_cad_enter_cnt_th + 2;
		}
		if(u8_curFrm_det_cadId == _CAD_32 && u8_filmCad_enterCnt[_CAD_32][_FILM_ALL]> u8_cad_enter_cnt_th)
		{
			pOutput->u8_pre_cadence_Id[_FILM_ALL] = _CAD_VIDEO;
			pOutput->u8_cur_cadence_Id[_FILM_ALL] = _CAD_VIDEO;
			pOutput->u1_cad_fastOut_true          = 1;
		}
	}
#endif	
	else if (u8_preFrm_cadId == _CAD_321) // 321 -> 22 
	{
		if(u8_curFrm_det_cadId == _CAD_22)
		{
			pOutput->u8_cur_cadence_Id[_FILM_ALL] = _CAD_22;
			pOutput->u1_cad_fastOut_true          = 1;
		}
	}

	//to avoid CAD_22 be quit by CAD_32's quit cnt
	if(pOutput->u8_pre_cadence_Id[_FILM_ALL] != pOutput->u8_cur_cadence_Id[_FILM_ALL]){
		pOutput->u8_quit_cnt[_FILM_ALL] = 0;
		pOutput->u8_quit_prd[_FILM_ALL] = 0;
	}
}

VOID FilmEnter(const _PARAM_FilmDetectCtrl *pParam, _OUTPUT_FilmDetectCtrl *pOutput, UBYTE motion_T)
{
	UBYTE mot_isSml = 0;
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UBYTE u8_sys_N = s_pContext->_output_read_comreg.u8_sys_N_rb;
	UBYTE u8_sys_M = s_pContext->_output_read_comreg.u8_sys_M_rb;

	if(motion_T >= _FILM_MOT_NUM)
	{
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[%s]Invalid Motion_Type:%d!!\n",__FUNCTION__,motion_T);
		motion_T = _FILM_ALL;
	}
	mot_isSml = (pOutput->u27_ipme_motionPool[motion_T][0] < pOutput->u27_quit_motTh[motion_T])? 1 : 0; 
	if ((pOutput->u8_det_cadence_Id[motion_T] != _CAD_VIDEO) /*&& mot_isSml*/)
	{
		if(((u8_sys_N == 5 && u8_sys_M == 6) || (u8_sys_N == 5 && u8_sys_M == 12))    //50 to 60  or 25 to 50
		&&((pOutput->u8_det_cadence_Id[motion_T] != _CAD_22) && (pOutput->u8_det_cadence_Id[motion_T] != _CAD_55))
		  )
		{			
			pOutput->u8_cur_cadence_Id[motion_T] = _CAD_VIDEO;
			pOutput->u8_phase_Idx[motion_T] = 0;
		}
		else
		{
			pOutput->u8_cur_cadence_Id[motion_T] = pOutput->u8_det_cadence_Id[motion_T];
			//pOutput->u8_phase_Idx[motion_T] = pOutput->u8_Calc_phase_Idx[motion_T];
		}
	}
}

VOID FilmQuit_BadEditPatch(const _PARAM_FilmDetectCtrl *pParam, _OUTPUT_FilmDetectCtrl *pOutput)
{
	UINT32 flag = 0;
	
	UBYTE j = 0;
	UBYTE u8_checkbit = 16;
	UBYTE u8_totalcheck = 0;
	UBYTE u1_match32322_flag = 0;
	UBYTE u1_32322_BadEdit_flag = 0;
	UINT32 u32_match_data_temp = 0;
	UINT32 test_32322_BadEdit_en = 0;

	ReadRegister(FRC_TOP__software1__reg_software_60_ADDR, 29, 29, &test_32322_BadEdit_en);
	u1_match32322_flag = 0;
	u8_totalcheck = u8_checkbit - 5;
	for(j = 0;j <= u8_totalcheck; j++)
	{
		u32_match_data_temp = ((pOutput->u32_Mot_sequence[_FILM_ALL] & ((1<<u8_checkbit)-1))>>j);// at least check 16bits for 32322
		// confirm 32322 seq to quit
		if ((u32_match_data_temp & frc_cadTable[_CAD_32].cad_check) == 0x15)	// 10101(part of 32322)
		{
			u1_match32322_flag = 1;
		}
		else if((pOutput->u32_Mot_sequence[_FILM_ALL] & (0x7fff<<j)) == 0x4a95){ // 100101010010101
			u1_32322_BadEdit_flag = 1;
		}
	}

	if(pOutput->u8_pre_cadence_Id[_FILM_ALL] == _CAD_32322	
		&& (u8_filmCad_enterCnt[_CAD_32322][_FILM_ALL] >= 1 || (pOutput->u32_Mot_sequence[_FILM_ALL] & 0x3f) == 0)
		&& (u8_filmCad_enterCnt[_CAD_32][_FILM_ALL] <= u8_totalcheck || u1_match32322_flag == 1) // avoid 32seq
		&& (pParam->u1_BadEditSlowOut_En == 1))
	{
		pOutput->u8_quit_cnt[_FILM_ALL] = (pOutput->u8_quit_cnt[_FILM_ALL] >= 1) ? pOutput->u8_quit_cnt[_FILM_ALL]-1 : 0;
		flag = 1;
	}
	else if((pOutput->u8_pre_cadence_Id[_FILM_ALL] == _CAD_32322) && (u1_32322_BadEdit_flag) && (test_32322_BadEdit_en)){
		pOutput->u8_quit_cnt[_FILM_ALL] = (pOutput->u8_quit_cnt[_FILM_ALL] >= 1) ? pOutput->u8_quit_cnt[_FILM_ALL]-1 : 0;
	}

	//WriteRegister(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_1_ADDR, 24, 27, flag);
	//WriteRegister(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_1_ADDR, 28, 31, (UINT32)u1_match32322_flag);
	
}

VOID FilmQuit(const _PARAM_FilmDetectCtrl *pParam, _OUTPUT_FilmDetectCtrl *pOutput, UBYTE motion_T)
{
	UBYTE  u8_preCad_id = 0,u1_curCad_motFlag = 0;
	UINT32 u27_curFrm_mot = 0,u27_quit_motTh = 0;
	UBYTE u8_pre_quit_prd = 0,u8_pre_quit_cnt = 0,u8_quit_prd_th = 0;
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UBYTE u8_curFrm_det_cadId = pOutput->u8_det_cadence_Id[motion_T];

	UINT16 u8_quitCntTh = pParam->u8_quit_cnt_th;
	UINT32 u3_quitCntOffset = 3;  // Don't change again
	UINT32 log_en = 0;

	ReadRegister(FRC_TOP__software1__reg_software_60_ADDR, 30, 30, &log_en);

	if(motion_T >= _FILM_MOT_NUM){
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[%s]Invalid Motion_Type:%d!!\n",__FUNCTION__,motion_T);
		motion_T = _FILM_ALL;
	}
	u8_preCad_id       = pOutput->u8_pre_cadence_Id[motion_T];
	
	if(u8_preCad_id >= _FRC_CADENCE_NUM_){
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[%s]Invalid u8_preCad_id:%d,motion=%d.Resume!\n",\
			__FUNCTION__,u8_preCad_id,motion_T);
		u8_preCad_id = _CAD_VIDEO;
	}
	u1_curCad_motFlag  = cadence_seqFlag(frc_cadTable[u8_preCad_id], pOutput->u8_phase_Idx[motion_T]);

	u27_curFrm_mot     = pOutput->u27_ipme_motionPool[motion_T][0];
	u27_quit_motTh     = pOutput->u27_quit_motTh[motion_T];

	u8_pre_quit_prd     = pOutput->u8_quit_prd[motion_T];
	u8_pre_quit_cnt     = pOutput->u8_quit_cnt[motion_T];
	u8_quit_prd_th      = ((u8_preCad_id == _CAD_1112) || (u8_preCad_id == _CAD_11112)) ? pParam->u8_quit_prd_th/2 : pParam->u8_quit_prd_th;
	// bigger quitCntTh if many '0' in sequence => bad edit need
	if((motion_T == _FILM_ALL) && (pOutput->u8_pre_cadence_Id[motion_T] == _CAD_32322)) 
	{
		if(s_pContext->_output_fblevelctrl.u1_SW_sc_true == 1)
			u8_quitCntTh = u8_quitCntTh ;
		else
			u8_quitCntTh = u8_quitCntTh + u3_quitCntOffset;
	}
	else if((motion_T == _FILM_ALL) && (pOutput->u8_pre_cadence_Id[motion_T] == _CAD_22)) // CG_Pattern, video->22(very small motion),not easy to quit
	{
		u8_quitCntTh = (u8_quitCntTh > 1) ? (u8_quitCntTh -1) : 0;
	}
	else if((motion_T == _FILM_ALL) && (pOutput->u8_pre_cadence_Id[motion_T] == _CAD_32)) 
	{
		u8_quitCntTh = u8_quitCntTh +u3_quitCntOffset;
	}
	else if((motion_T == _FILM_ALL) && (pOutput->u8_pre_cadence_Id[motion_T] == _CAD_2224)) 
	{
		
	}
	//================================
	// quit state-machine
	if (u1_curCad_motFlag == 0)
	{
		if (u27_curFrm_mot > u27_quit_motTh)
		{
			pOutput->u8_quit_cnt[motion_T] = _CLIP_(u8_pre_quit_cnt + 1, 0, u8_quitCntTh + 4);
			pOutput->u8_quit_prd[motion_T] = 0;
		}
		else
		{
			pOutput->u8_quit_prd[motion_T] = _MIN_(u8_pre_quit_prd + 1, u8_quit_prd_th);
			pOutput->u8_quit_cnt[motion_T] = pOutput->u8_quit_prd[motion_T] == u8_quit_prd_th ? (u8_pre_quit_cnt <= 1? 0 : u8_pre_quit_cnt-1) : u8_pre_quit_cnt;
		}
	}

	// for 32322 bad-editting 
	if(motion_T == _FILM_ALL){
		FilmQuit_BadEditPatch(pParam, pOutput);
		pOutput->u8_quit_cnt[motion_T] = _CLIP_UBOUND_(pOutput->u8_quit_cnt[motion_T], (u8_quitCntTh+4));
	}	 

//	if ((motion_T == pOutput->u8_dbg_motion_t) && (((pOutput->u5_dbg_param1_pre & BIT_3) >> 3) == 1) && pOutput->u32_dbg_cnt_hold > 0)
//	if(log_en && motion_T == _FILM_ALL)
	if(0)
	{
		printk("[MEMC]%s::quit_cnt=%d, quit_prd=%d, phase_ID=%d \n",__FUNCTION__,pOutput->u8_quit_cnt[motion_T], pOutput->u8_quit_prd[motion_T], pOutput->u8_phase_Idx[motion_T]);
		printk("[MEMC]%s::preCad_id=%d, pre_cadence_Id=%d, cur_cadence_Id=%d, det_cadence_Id = %d \n",__FUNCTION__, u8_preCad_id, pOutput->u8_pre_cadence_Id[motion_T], pOutput->u8_cur_cadence_Id[motion_T], u8_curFrm_det_cadId);
		printk("[MEMC]%s::u8_quitCntTh=%d, u8_quitPrdTh=%d, mixMode=%d \n",__FUNCTION__, u8_quitCntTh, u8_quit_prd_th, pOutput->u1_mixMode);
	}

	// quit judge
	if((pOutput->u8_pre_cadence_Id[_FILM_ALL] == _CAD_22 && pOutput->u8_det_cadence_Id[_FILM_ALL] == _CAD_321) ||(pOutput->u8_pre_cadence_Id[_FILM_ALL] == _CAD_321 &&pOutput->u8_det_cadence_Id[_FILM_ALL] == _CAD_22 ))
	{
		pOutput->u8_cur_cadence_Id[motion_T] = u8_preCad_id;
	}
	else if (pOutput->u1_mixMode == 1)
	{
		if(motion_T == _FILM_ALL)
			pOutput->u8_cur_cadence_Id[motion_T] = _CAD_VIDEO;
		else
			pOutput->u8_cur_cadence_Id[motion_T] = u8_curFrm_det_cadId;//_CAD_VIDEO;
		pOutput->u8_quit_cnt[motion_T]       = 0;
		pOutput->u8_quit_prd[motion_T]       = 0;
	}
	else if (pOutput->u8_quit_cnt[motion_T] >= u8_quitCntTh)
	{
		pOutput->u8_cur_cadence_Id[motion_T] = u8_curFrm_det_cadId; // _CAD_VIDEO;
		pOutput->u8_quit_cnt[motion_T]       = 0;
		pOutput->u8_quit_prd[motion_T]       = 0;
	}
	else
	{
		pOutput->u8_cur_cadence_Id[motion_T] = u8_preCad_id;
	}
}

unsigned char g_cadence_change_flag = 0;
VOID PhaseIdx_set(const _PARAM_FilmDetectCtrl *pParam, _OUTPUT_FilmDetectCtrl *pOutput, UBYTE motion_T)
{
	UBYTE u8_cur_cadId = 0;
	UINT32 Film_force_cadence_en = 0;
	UINT32 Film_force_cadence_type = 0;
	UINT32 test_32322_BadEdit_en = 0;

	ReadRegister(FRC_TOP__software1__reg_software_12_ADDR, 0, 3, &Film_force_cadence_type);
	ReadRegister(FRC_TOP__software1__reg_software_12_ADDR, 4, 4, &Film_force_cadence_en);
	ReadRegister(FRC_TOP__software1__reg_software_60_ADDR, 29, 29, &test_32322_BadEdit_en);

	if(motion_T >= _FILM_MOT_NUM){
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[%s]Invalid Motion_Type:%d!!\n",__FUNCTION__,motion_T);
		motion_T = _FILM_ALL;
	}

	//---#201_32322_BadEdit
	if(test_32322_BadEdit_en && pOutput->u8_32322_BadEdit_cnt > 30){
		pOutput->u8_cur_cadence_Id[motion_T] = _CAD_32;
	}
	//---------------------
	
	u8_cur_cadId = pOutput->u8_cur_cadence_Id[motion_T];
	if(Film_force_cadence_en){ // Film_force_cadence_en
		pOutput->u8_cur_cadence_Id[motion_T] = Film_force_cadence_type; // Film_force_cadence_type
		u8_cur_cadId = pOutput->u8_cur_cadence_Id[motion_T];
	}

	if(u8_cur_cadId >= _FRC_CADENCE_NUM_){
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[%s]Invalid u8_cur_cadId:%d,motion=%d.Resume!\n", __FUNCTION__, u8_cur_cadId, motion_T);
		u8_cur_cadId = _CAD_VIDEO;
	}
	if (u8_cur_cadId == _CAD_VIDEO)
	{
		pOutput->u8_phase_Idx[motion_T] = 0;
	}
	else
	{
		pOutput->u8_phase_Idx[motion_T] ++;

//		if (pOutput->u8_phase_Idx[motion_T] == frc_cadTable[u8_cur_cadId].cad_outLen)
//		{
//			pOutput->u8_phase_Idx[motion_T] = 0;
//		}
		pOutput->u8_phase_Idx[motion_T] = (pOutput->u8_phase_Idx[motion_T]%frc_cadTable[u8_cur_cadId].cad_outLen);
	}

#if 1
	if(test_32322_BadEdit_en){
		if(u8_cur_cadId == _CAD_32322)
		{
			if((pOutput->u32_Mot_sequence[motion_T] & frc_cadTable[u8_cur_cadId].cad_check) == frc_cadTable[u8_cur_cadId].cad_seq && pOutput->u8_phase_Idx[motion_T] != 5)
			{
				pOutput->u1_cad_resync_true[motion_T] = 0;
				pOutput->u8_phase_Idx[motion_T] = 5; // 5;
			}
		}
		else if((pOutput->u32_Mot_sequence[motion_T] & frc_cadTable[u8_cur_cadId].cad_check) == frc_cadTable[u8_cur_cadId].cad_seq && pOutput->u8_phase_Idx[motion_T] != 0)
		{
			pOutput->u1_cad_resync_true[motion_T] = 0;
			pOutput->u8_phase_Idx[motion_T] = 0;
		}

		if(pOutput->u8_32322_BadEdit_cnt > 1 && pOutput->u1_32322_BadEdit_flag){
			pOutput->u8_phase_Idx[motion_T] = (pOutput->u8_32322_BadEdit_idx+1)%frc_cadTable[u8_cur_cadId].cad_outLen;
		}

		g_cadence_change_flag = _CASE_NULL;
	}
	else if ((pOutput->u32_Mot_sequence[motion_T] & frc_cadTable[u8_cur_cadId].cad_check) == frc_cadTable[u8_cur_cadId].cad_seq && pOutput->u8_phase_Idx[motion_T] != 0){
		#if 0
		if (u8_cur_cadId == _CAD_32322 && (pOutput->u8_phase_Idx[motion_T] == 7))
		{
			// 32322 <-> 32232 has no re-sync.
		}
		else if ((u8_cur_cadId == _CAD_32) && (pOutput->u8_phase_Idx[motion_T] == 2))
		{
		    //32<->23 has no resync
		}
		else
		#endif
		{
			pOutput->u1_cad_resync_true[motion_T] = 0;
			pOutput->u8_phase_Idx[motion_T] = 0;
		}
		g_cadence_change_flag = _CASE_NULL;
		pOutput->u8_32322_BadEdit_cnt = 0;
		pOutput->u1_32322_BadEdit_flag = 0;
		pOutput->u8_32322_BadEdit_idx = 0;
	}
	else{
		g_cadence_change_flag = _CASE_NULL;
		pOutput->u8_32322_BadEdit_cnt = 0;
		pOutput->u1_32322_BadEdit_flag = 0;
		pOutput->u8_32322_BadEdit_idx = 0;
	}

#else
	// resync rule
	if ((pOutput->u32_Mot_sequence[motion_T] & frc_cadTable[u8_cur_cadId].cad_check) == frc_cadTable[u8_cur_cadId].cad_seq \
		&& pOutput->u8_phase_Idx[motion_T] != 0)
	{
		#if 0
		if (u8_cur_cadId == _CAD_32322 && (pOutput->u8_phase_Idx[motion_T] == 7))
		{
			// 32322 <-> 32232 has no re-sync.
		}
		else if ((u8_cur_cadId == _CAD_32) && (pOutput->u8_phase_Idx[motion_T] == 2))
		{
		    //32<->23 has no resync
		}
		else
		#endif
		{
			pOutput->u1_cad_resync_true[motion_T] = 0;
			pOutput->u8_phase_Idx[motion_T] = 0;
		}
	}
#endif

#if 1  // 0720 kiwi mask
	pOutput->u8_phT_phase_Idx[motion_T] = pOutput->u8_phase_Idx[motion_T];
#else
    ////////////
    if (u8_cur_cadId == _CAD_VIDEO)
	{
		pOutput->u8_phT_phase_Idx[motion_T] = 0;
}
//	else if (u8_cur_cadId == _CAD_32)
//	{
//	    UBYTE  u1_curCad_motFlag      = cadence_seqFlag(frc_cadTable[u8_cur_cadId], pOutput->u8_phT_phase_Idx[motion_T]);
//	    UBYTE  u1_curFrm_isBig        = (u1_curCad_motFlag == 1? 1 : 0);
//		UBYTE  u1_seqFrm_isBig        = (pOutput->u32_Mot_sequence[motion_T] & 0x01) ==1? 1 : 0;

//		if (u1_seqFrm_isBig == u1_curFrm_isBig)
//		{
//		    pOutput->u8_phT_phase_Idx[motion_T] ++;
//		}
//		else if (pOutput->u8_phT_phase_Idx[motion_T] == 2 || pOutput->u8_phT_phase_Idx[motion_T] == 3)
//		{
//		    pOutput->u8_phT_phase_Idx[motion_T] ++;
//		}
//		else
//		{
//		    pOutput->u8_phT_phase_Idx[motion_T] = pOutput->u8_phT_phase_Idx[motion_T] + 2;
//		}


//		if (pOutput->u8_phT_phase_Idx[motion_T] >= frc_cadTable[u8_cur_cadId].cad_outLen)
//		{
//			pOutput->u8_phT_phase_Idx[motion_T] = pOutput->u8_phT_phase_Idx[motion_T] - frc_cadTable[u8_cur_cadId].cad_outLen;
//		}
//	}
	else
	{
		pOutput->u8_phT_phase_Idx[motion_T] ++;

		if (pOutput->u8_phT_phase_Idx[motion_T] == frc_cadTable[u8_cur_cadId].cad_outLen)
		{
			pOutput->u8_phT_phase_Idx[motion_T] = 0;
       }
       }



	if ((pOutput->u32_Mot_sequence[motion_T] & frc_cadTable[u8_cur_cadId].cad_check) == frc_cadTable[u8_cur_cadId].cad_seq \
	&& pOutput->u8_phT_phase_Idx[motion_T] != 0)// && pParam->u1_resync_en == 1
	{
		if (u8_cur_cadId == _CAD_32322 && (pOutput->u8_phT_phase_Idx[motion_T] == 7))
		{
			// 32322 <-> 32232 has no re-sync.
		}
		else if ((u8_cur_cadId == _CAD_32) && (pOutput->u8_phT_phase_Idx[motion_T] == 2))
		{
		    //32<->23 has no resync
		}
		else
		{
			pOutput->u8_phT_phase_Idx[motion_T] = 0;
		}
	}
#endif
}

VOID CadenceChangeDetect(const _PARAM_FilmDetectCtrl *pParam, _OUTPUT_FilmDetectCtrl *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	PQL_INPUT_FRAME_RATE in_fmRate = 0;
	UBYTE u8_cur_cadId = 0, u8_pre_cadId = 0, u8_det_cadId = 0, u8_ph_idx = 0, u8_ph_idx_pre = 0;
	UINT32 test_en = 0, test_en2 = 0;

	u8_ph_idx = pOutput->u8_phase_Idx[_FILM_ALL];
	u8_ph_idx_pre = pOutput->u8_pre_phase_Idx[_FILM_ALL];
	in_fmRate = s_pContext->_external_data._input_frameRate;
	u8_cur_cadId = pOutput->u8_cur_cadence_Id[_FILM_ALL];
	u8_pre_cadId = pOutput->u8_pre_cadence_Id[_FILM_ALL];
	u8_det_cadId = pOutput->u8_det_cadence_Id[_FILM_ALL];
	ReadRegister(FRC_TOP__software1__reg_software_60_ADDR, 31, 31, &test_en);
	ReadRegister(FRC_TOP__software1__reg_software_60_ADDR, 27, 27, &test_en2);

	if(test_en == 1 && in_fmRate >= _PQL_IN_50HZ){
		if((pOutput->u1_mixMode == 0) && (u8_cur_cadId == _CAD_32 )&& (u8_pre_cadId == _CAD_22)/*(pOutput->u32_Mot_sequence[_FILM_ALL]&0xfff) == 0xA94 101010010100*/){
			g_cadence_change_flag = _CASE_22_TO_32;
		}
		else if((pOutput->u1_mixMode == 0) && (u8_cur_cadId == _CAD_22 )&& (u8_pre_cadId == _CAD_32)/*(pOutput->u32_Mot_sequence[_FILM_ALL]&0x3ff) == 0x255 1001010101*/){
			g_cadence_change_flag = _CASE_32_TO_22;
		}
		else if((pOutput->u1_mixMode == 0) && (u8_cur_cadId == _CAD_22) && (u8_pre_cadId == _CAD_VIDEO)/*(pOutput->u32_Mot_sequence[_FILM_ALL]&0xff) == 0xFA 11111010*/){
			if(pOutput->u8_phase_Idx[_FILM_ALL] == 1){
				g_cadence_change_flag = _CASE_11_TO_22_TYPE1;
			}
			else{ // pOutput->u8_phase_Idx[_FILM_ALL] == 0
				g_cadence_change_flag = _CASE_11_TO_22_TYPE2;
			}
		}
		else if((pOutput->u1_mixMode == 0) && (u8_cur_cadId == _CAD_VIDEO) && (u8_pre_cadId == _CAD_22)/*(pOutput->u32_Mot_sequence[_FILM_ALL]&0x3f) == 0x2B 101011*/){
			g_cadence_change_flag = _CASE_22_TO_11;
		}
		else if((pOutput->u1_mixMode == 0) && (u8_cur_cadId == _CAD_32) && (u8_pre_cadId == _CAD_VIDEO) && (u8_ph_idx == 1)/*(pOutput->u32_Mot_sequence[_FILM_ALL]&0xfff) == 0xF29 111100101001*/){
			g_cadence_change_flag = _CASE_11_TO_32;
		}
		else if((pOutput->u1_mixMode == 0) && (u8_cur_cadId == _CAD_VIDEO) && (u8_pre_cadId == _CAD_32) && (u8_ph_idx_pre == 1)/*(pOutput->u32_Mot_sequence[_FILM_ALL]&0x7f) == 0x4B 1001011*/){
			g_cadence_change_flag = _CASE_32_TO_11;
		}
		else if((pOutput->u1_mixMode == 0) && (u8_cur_cadId == _CAD_2224) && (u8_pre_cadId == _CAD_VIDEO) && (u8_ph_idx == 1)/*(pOutput->u32_Mot_sequence[_FILM_ALL]&0xfff) == 0xF29 111100101001*/){
			g_cadence_change_flag = _CASE_11_TO_2224;
		}
		else if((pOutput->u1_mixMode == 0) && (u8_cur_cadId == _CAD_VIDEO) && (u8_pre_cadId == _CAD_2224) && (u8_ph_idx_pre == 3)/*(pOutput->u32_Mot_sequence[_FILM_ALL]&0x7f) == 0x4B 1001011*/){
			g_cadence_change_flag = _CASE_2224_TO_11_TYPE_3;
		}
		else if((pOutput->u1_mixMode == 0) && (u8_cur_cadId == _CAD_VIDEO) && (u8_pre_cadId == _CAD_2224) && (u8_ph_idx_pre == 8)/*(pOutput->u32_Mot_sequence[_FILM_ALL]&0x7f) == 0x4B 1001011*/){
			g_cadence_change_flag = _CASE_2224_TO_11_TYPE_8;
		}
		else if(pOutput->u1_mixMode_chg){
			if(pOutput->u1_mixMode == 1){
				if(u8_pre_cadId == _CAD_22 && (u8_ph_idx_pre == 1)){
					g_cadence_change_flag = _CASE_22_TO_MIX; // _CASE_NULL;
				}
				else if(u8_pre_cadId == _CAD_32 && (u8_ph_idx_pre == 1)){
					g_cadence_change_flag = _CASE_32_TO_MIX; // _CASE_NULL;
				}
				else if(u8_pre_cadId == _CAD_2224 && (u8_ph_idx_pre == 3)){
					g_cadence_change_flag = _CASE_2224_TO_11_TYPE_3; // _CASE_NULL;
				}
				else if(u8_pre_cadId == _CAD_2224 && (u8_ph_idx_pre == 8)){
					g_cadence_change_flag = _CASE_2224_TO_11_TYPE_8; // _CASE_NULL;
				}
			}
			else{ //if(pOutput->u1_mixMode == 0)
				if(u8_det_cadId == _CAD_22){
					g_cadence_change_flag = _CASE_NULL;
				}
				else if(u8_det_cadId == _CAD_32){
					g_cadence_change_flag = _CASE_NULL;
				}
			}
		}
		else{
			g_cadence_change_flag = _CASE_NULL;
		}
	}

	if(test_en2 == 1){
		if(pOutput->u1_mixMode_chg){
			if(pOutput->u1_mixMode == 1){
				if(u8_pre_cadId == _CAD_22){
					g_cadence_change_flag = _CASE_22_TO_MIX; // _CASE_NULL;
				}
				else if(u8_pre_cadId == _CAD_32){
					g_cadence_change_flag = _CASE_32_TO_MIX; // _CASE_NULL;
				}
			}
			else{ //if(pOutput->u1_mixMode == 0)
				if(u8_det_cadId == _CAD_22){
					g_cadence_change_flag = _CASE_NULL;
				}
				else if(u8_det_cadId == _CAD_32){
					g_cadence_change_flag = _CASE_NULL;
				}
			}
		}
		else{
			g_cadence_change_flag = _CASE_NULL;
		}
	}
}

VOID MixModeQuit(const _PARAM_FilmDetectCtrl *pParam, _OUTPUT_FilmDetectCtrl *pOutput)
{
       UBYTE u1_quit_cond1 = 0;
       UBYTE u1_quit_cond1_dly = 0;
       UINT32 u27_smot_th_l = _MIN_(pParam->u27_mixMode_rgnMove_minMot, 0x200);

       UINT32 u27_smot_th_h = 0x3072;//(u32_RB_val&0x7fffffff);

	UBYTE u5_quit_cond2 = 0;
	UBYTE i = 0;
	// rgn0=rgn1=rgn2=rgn3=rgn4
       u1_quit_cond1 = ((pOutput->u8_pre_cadence_Id[_FILM_5RGN_LFT]==pOutput->u8_pre_cadence_Id[_FILM_5RGN_CEN])
                               && (pOutput->u8_pre_cadence_Id[_FILM_5RGN_RHT]==pOutput->u8_pre_cadence_Id[_FILM_5RGN_CEN])
                               && (pOutput->u8_pre_cadence_Id[_FILM_5RGN_TOP]==pOutput->u8_pre_cadence_Id[_FILM_5RGN_CEN])
                               && (pOutput->u8_pre_cadence_Id[_FILM_5RGN_BOT]==pOutput->u8_pre_cadence_Id[_FILM_5RGN_CEN])
                               && (pOutput->u8_pre_cadence_Id[_FILM_5RGN_CEN]!=_CAD_VIDEO)) ? 1 : u1_quit_cond1;

       //avoid: 1. center area smot < th, bmot > N*th
       //           2. t/b/l/r area smot > M*th
       u1_quit_cond1_dly = ((pOutput->u27_quit_smlMot[_FILM_5RGN_CEN] < u27_smot_th_l) && (pOutput->u27_quit_bigMot[_FILM_5RGN_CEN] > 8*u27_smot_th_l))
                                       && ((_MIN_(pOutput->u27_quit_smlMot[_FILM_5RGN_LFT], pOutput->u27_quit_bigMot[_FILM_5RGN_LFT]) > 4*u27_smot_th_l)
                                               ||(_MIN_(pOutput->u27_quit_smlMot[_FILM_5RGN_RHT], pOutput->u27_quit_bigMot[_FILM_5RGN_RHT]) > 4*u27_smot_th_l)
                                               ||(_MIN_(pOutput->u27_quit_smlMot[_FILM_5RGN_TOP], pOutput->u27_quit_bigMot[_FILM_5RGN_TOP]) > 4*u27_smot_th_l)

                                               ||(_MIN_(pOutput->u27_quit_smlMot[_FILM_5RGN_BOT], pOutput->u27_quit_bigMot[_FILM_5RGN_BOT]) > 4*u27_smot_th_l));

       if(u1_quit_cond1 && (!u1_quit_cond1_dly)){
               pOutput->u8_mixMode_cnt = (pOutput->u8_mixMode_cnt>2)? (pOutput->u8_mixMode_cnt-2) : 0;
       }

       // 5 region motion big => depend on full region detect
       for(i = _FILM_5RGN_TOP; i <= _FILM_5RGN_CEN; i++){
               if(pOutput->u27_FrmMotion_S[i]> u27_smot_th_h) // th = 0x3072
                       u5_quit_cond2 = u5_quit_cond2 + (1<<i);
       }

       if(u5_quit_cond2 == 0x1f /*&& pParam->u1_MixModeQuitBySmv_En*/){
               pOutput->u8_mixMode_cnt = (pOutput->u8_mixMode_cnt>1)? (pOutput->u8_mixMode_cnt-1) : 0;
       }

}
UBYTE CadenceComparison(_OUTPUT_FilmDetectCtrl *pOutput,int sta,int end)
{
	int nIndx,nIndy;
	UBYTE nNotMatch =FALSE;
	for(nIndx =sta; nIndx<end -1 ;nIndx ++ )
		for(nIndy =nIndx +1; nIndy<end  ;nIndy ++ )
		{
			if(pOutput->u8_pre_cadence_Id[nIndx] !=  _CAD_VIDEO && pOutput->u8_pre_cadence_Id[nIndy] !=  _CAD_VIDEO && pOutput->u8_pre_cadence_Id[nIndx] !=   pOutput->u8_pre_cadence_Id[nIndy]  )
			{
				nNotMatch =TRUE;
				break;
			}
		}

	if(nNotMatch ==FALSE && pOutput->u8_pre_cadence_Id[sta] ==  _CAD_VIDEO)  // sta ~end all VIDEO
		nNotMatch =TRUE;

		
	return nNotMatch;
		
}
VOID MixMode_detect(const _PARAM_FilmDetectCtrl *pParam, _OUTPUT_FilmDetectCtrl *pOutput)
{
	UBYTE u1_mixMode_status = 0, u1_badMot_status  = 0, u1_badMot_flag = 0, u1_badCad_flag = 0,check_flag = 0;
	UBYTE u8_mixMode_cnt_p1 = 0, u8_mixMode_cnt_n1 = 0;
	UBYTE u8_k = 0,u8_preCad_Id = 0,u1_preCad_motFlag = 0,u1_ipmeMot_flag = 0;
	UINT32 u17_dbg_1 = 0, u17_dbg_2 = 0, u17_dbg_3 = 0;
	#if MIX_MODE_REGION_17
	UBYTE u1_v1Cad_cond, u1_v2Cad_cond, u1_h1Cad_cond, u1_h2Cad_cond, u1_h3Cad_cond;
	#endif
	UBYTE u1_badCad_cond1, u1_badCad_cond2;
	static UBYTE u8_maxPossible_CadId = 0,u1_mixMode_pre=0;
	UBYTE u4_rgnMove_motWgt = pParam->u4_mixMode_rgnMove_motWgt;
	UINT32 u27_smlMot=0,u28_smlMot_xGain=0,u28_smlMot_badTh=0,u28_badMot_Th=0,u8_mixMode_cnt_max=0;
	UINT32 badCad_cond1_weighting[_FILM_MOT_NUM] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};
	UBYTE badCad_cond1_record[_FILM_MOT_NUM] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};
	UBYTE mixmode_cnt_stride = 0;
#if 1//weighting of small region of entering mixmode count
	ReadRegister(FRC_TOP__software1__reg_software_41_ADDR, 0, 7, &badCad_cond1_weighting[0]);//all
	ReadRegister(FRC_TOP__software1__reg_software_41_ADDR, 8, 15, &badCad_cond1_weighting[1]);//top
	ReadRegister(FRC_TOP__software1__reg_software_41_ADDR, 16, 23, &badCad_cond1_weighting[2]);//bottom
	ReadRegister(FRC_TOP__software1__reg_software_41_ADDR, 24, 31, &badCad_cond1_weighting[3]);//left
	ReadRegister(FRC_TOP__software1__reg_software_42_ADDR, 0, 7,  &badCad_cond1_weighting[4]);//right
	ReadRegister(FRC_TOP__software1__reg_software_42_ADDR, 8, 15 , &badCad_cond1_weighting[5]);//center
	ReadRegister(FRC_TOP__software1__reg_software_42_ADDR, 16, 23, &badCad_cond1_weighting[6]);//region1_of_12regions
	ReadRegister(FRC_TOP__software1__reg_software_42_ADDR, 24, 31, &badCad_cond1_weighting[7]);//region2_of_12regions
	ReadRegister(FRC_TOP__software1__reg_software_43_ADDR, 0, 7 , &badCad_cond1_weighting[8]);//region3_of_12regions
	ReadRegister(FRC_TOP__software1__reg_software_43_ADDR, 8, 15 , &badCad_cond1_weighting[9]);//region4_of_12regions
	ReadRegister(FRC_TOP__software1__reg_software_43_ADDR, 16, 23, &badCad_cond1_weighting[10]);//region5_of_12regions
	ReadRegister(FRC_TOP__software1__reg_software_43_ADDR, 24, 31, &badCad_cond1_weighting[11]);//region6_of_12regions
	ReadRegister(FRC_TOP__software1__reg_software_44_ADDR, 0, 7,  &badCad_cond1_weighting[12]);//region7_of_12regions
	ReadRegister(FRC_TOP__software1__reg_software_44_ADDR, 8, 15, &badCad_cond1_weighting[13]);//region8_of_12regions
	ReadRegister(FRC_TOP__software1__reg_software_44_ADDR, 16, 23, &badCad_cond1_weighting[14]);//region9_of_12regions
	ReadRegister(FRC_TOP__software1__reg_software_44_ADDR, 24, 31, &badCad_cond1_weighting[15]);//region10_of_12regions
	ReadRegister(FRC_TOP__software1__reg_software_45_ADDR, 0,  7, &badCad_cond1_weighting[16]);//region11_of_12regions
	ReadRegister(FRC_TOP__software1__reg_software_45_ADDR, 8, 15, &badCad_cond1_weighting[17]);//region12_of_12regions
#endif	
	u8_preCad_Id      = pOutput->u8_pre_cadence_Id[_FILM_ALL];
	if(u8_preCad_Id >= _FRC_CADENCE_NUM_){
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[%s]Invalid u8_preCad_Id:%d,motion=%d.Resume!\n",\
			__FUNCTION__,u8_preCad_Id,_FILM_ALL);
		u8_preCad_Id = _CAD_VIDEO;
	}
	u1_preCad_motFlag = cadence_seqFlag(frc_cadTable[u8_preCad_Id], pOutput->u8_phase_Idx[_FILM_ALL]);
	u1_ipmeMot_flag  = pOutput->u32_Mot_sequence[_FILM_ALL] & 0x01;

	if ((u8_preCad_Id != _CAD_VIDEO && u1_preCad_motFlag == 0   ) || (u8_preCad_Id == _CAD_VIDEO && u1_ipmeMot_flag == 0))
	{
		u8_mixMode_cnt_p1 = 0;
		u8_mixMode_cnt_n1 = 0;
		check_flag = 1;
		#if MIX_MODE_REGION_17
		for (u8_k = _FILM_5RGN_TOP; u8_k <= _FILM_12RGN_12; u8_k ++)
		#else
		for (u8_k = _FILM_5RGN_TOP; u8_k <= _FILM_5RGN_CEN; u8_k ++)
		#endif
		{
			UBYTE  u8_preCad_Id_rgn  = pOutput->u8_pre_cadence_Id[u8_k];

			//UINT32 u28_smlMot_xGain  = (pOutput->u27_quit_smlMot[u8_k] * pParam->u4_mixMode_rgnMove_motWgt >> 3);
			#if MIX_MODE_REGION_17
			
			u27_smlMot = (pOutput->u27_quit_smlMot[_FILM_12RGN_01]+pOutput->u27_quit_smlMot[_FILM_12RGN_02]+pOutput->u27_quit_smlMot[_FILM_12RGN_03]+pOutput->u27_quit_smlMot[_FILM_12RGN_04]+
					 pOutput->u27_quit_smlMot[_FILM_12RGN_05]+pOutput->u27_quit_smlMot[_FILM_12RGN_06]+pOutput->u27_quit_smlMot[_FILM_12RGN_07]+pOutput->u27_quit_smlMot[_FILM_12RGN_08]+
					 pOutput->u27_quit_smlMot[_FILM_12RGN_09]+pOutput->u27_quit_smlMot[_FILM_12RGN_10]+pOutput->u27_quit_smlMot[_FILM_12RGN_11]+pOutput->u27_quit_smlMot[_FILM_12RGN_12]);
			
			u28_smlMot_xGain  = (u27_smlMot * u4_rgnMove_motWgt >> 3);   // u4_mixMode_rgnMove_motWgt =10
			u28_smlMot_badTh  = u28_smlMot_xGain;
			#else
			u27_smlMot = (u8_k==_FILM_5RGN_CEN) ? pOutput->u27_quit_smlMot[_FILM_ALL] : pOutput->u27_quit_smlMot[_FILM_5RGN_CEN];
			u28_smlMot_xGain  = (u27_smlMot * u4_rgnMove_motWgt >> 3);   // u4_mixMode_rgnMove_motWgt =10
			u28_smlMot_badTh  = (u8_k == _FILM_5RGN_CEN)? _MIN_(u28_smlMot_xGain, 0x3000/*0x5000*/) : u28_smlMot_xGain;
			#endif
			u28_badMot_Th     = _MAX_(u28_smlMot_badTh, pParam->u27_mixMode_rgnMove_minMot);   //  u27_mixMode_rgnMove_minMot = 544
			u1_badMot_flag    = pOutput->u27_ipme_motionPool[u8_k][0] > u28_badMot_Th?   1 : 0;//not still = 1; still = 0
			
			u1_badCad_cond1 = (pOutput->u1_mixMode == 0 &&(u8_preCad_Id == _CAD_VIDEO || u8_preCad_Id_rgn != u8_preCad_Id));//check if theres different between all and small regions
			badCad_cond1_record[u8_k] = u1_badCad_cond1;
			#if MIX_MODE_REGION_17
			u1_v1Cad_cond =  pOutput->u8_pre_cadence_Id[_FILM_5RGN_CEN]+pOutput->u8_pre_cadence_Id[_FILM_12RGN_02]+pOutput->u8_pre_cadence_Id[_FILM_12RGN_06]+pOutput->u8_pre_cadence_Id[_FILM_12RGN_10];
			u1_v2Cad_cond =  pOutput->u8_pre_cadence_Id[_FILM_5RGN_CEN]+pOutput->u8_pre_cadence_Id[_FILM_12RGN_03]+pOutput->u8_pre_cadence_Id[_FILM_12RGN_07]+pOutput->u8_pre_cadence_Id[_FILM_12RGN_11];
			u1_h1Cad_cond =  pOutput->u8_pre_cadence_Id[_FILM_12RGN_01]+pOutput->u8_pre_cadence_Id[_FILM_12RGN_02]+pOutput->u8_pre_cadence_Id[_FILM_12RGN_03]+pOutput->u8_pre_cadence_Id[_FILM_12RGN_04];
			u1_h2Cad_cond =  pOutput->u8_pre_cadence_Id[_FILM_12RGN_05]+pOutput->u8_pre_cadence_Id[_FILM_12RGN_06]+pOutput->u8_pre_cadence_Id[_FILM_12RGN_07]+pOutput->u8_pre_cadence_Id[_FILM_12RGN_08];
			u1_h3Cad_cond =  pOutput->u8_pre_cadence_Id[_FILM_12RGN_09]+pOutput->u8_pre_cadence_Id[_FILM_12RGN_10]+pOutput->u8_pre_cadence_Id[_FILM_12RGN_11]+pOutput->u8_pre_cadence_Id[_FILM_12RGN_12];
			
			u1_badCad_cond2 = (pOutput->u1_mixMode == 1 &&(( u8_k<_FILM_5RGN_CEN &&( u8_preCad_Id_rgn*4 !=u1_v1Cad_cond || u8_preCad_Id_rgn*4 !=u1_v2Cad_cond || u8_preCad_Id_rgn*4 !=u1_h1Cad_cond || u8_preCad_Id_rgn*4 !=u1_h2Cad_cond || u8_preCad_Id_rgn*4 !=u1_h3Cad_cond))
                                                       ||( u8_k>=_FILM_5RGN_CEN && CadenceComparison(pOutput,_FILM_5RGN_CEN,_FILM_12RGN_12) )));
			#else
			u1_badCad_cond2 = (pOutput->u1_mixMode == 1 &&((u8_preCad_Id_rgn != pOutput->u8_pre_cadence_Id[_FILM_5RGN_CEN] && u8_k!=_FILM_5RGN_CEN)
                                                                                                                       ||(u8_preCad_Id_rgn == _CAD_VIDEO && u8_k==_FILM_5RGN_CEN)));
			#endif
                     u1_badCad_flag    = (u1_badCad_cond1 || u1_badCad_cond2)? 1 : 0;
			//u1_badCad_flag    = (u8_preCad_Id == _CAD_VIDEO || u8_preCad_Id_rgn != u8_preCad_Id)? 1 : 0;

			u17_dbg_1 = (u17_dbg_1<<1) |u1_badMot_flag;
			u17_dbg_2 = (u17_dbg_2<<1) |u1_badCad_cond1;
			u17_dbg_3 = (u17_dbg_3<<1) |u1_badCad_cond2;			

			//u1_badMot_status  = u1_badMot_status | u1_badMot_flag;
			u1_badMot_status  = u1_badMot_status | (u1_badMot_flag && pParam->u1_mixMode_rgnEn[u8_k-1]);
			u1_mixMode_status = u1_mixMode_status | (u1_badMot_flag && u1_badCad_flag && pParam->u1_mixMode_rgnEn[u8_k-1]);

			if((((pOutput->u5_dbg_param1_pre & BIT_2) >> 2) == 1) && pOutput->u32_dbg_cnt_hold > 0 &&  pOutput->u1_mixMode ==1)
			{
				printk("(%d)(%d,%d)(%d,%d)(%d,%d,%d)\n", u8_k ,u1_badMot_flag,u1_badCad_flag,
					u28_badMot_Th,pOutput->u27_ipme_motionPool[u8_k][0],
					u28_smlMot_badTh,u28_smlMot_xGain,u27_smlMot);
			}
		}
		//find max of cnt stride
#if MIX_MODE_REGION_17
		for (u8_k = _FILM_5RGN_TOP; u8_k <= _FILM_12RGN_12; u8_k ++)
#else
		for (u8_k = _FILM_5RGN_TOP; u8_k <= _FILM_5RGN_CEN; u8_k ++)
#endif
		{
			//mixmode_cnt_stride = ((badCad_cond1_record[u8_k]*badCad_cond1_weighting[u8_k]) > mixmode_cnt_stride)? (badCad_cond1_record[u8_k]*badCad_cond1_weighting[u8_k]):mixmode_cnt_stride;
			mixmode_cnt_stride = ((badCad_cond1_record[u8_k]*badCad_cond1_weighting[u8_k]) > mixmode_cnt_stride)? (badCad_cond1_record[u8_k]*badCad_cond1_weighting[u8_k]):(mixmode_cnt_stride<1?1:mixmode_cnt_stride);
		}
		u8_mixMode_cnt_n1 = pOutput->u8_mixMode_cnt > 0? (pOutput->u8_mixMode_cnt - 1) : 0;
		u8_mixMode_cnt_p1 = pOutput->u8_mixMode_cnt >= pParam->u8_mixMode_cnt_max? pOutput->u8_mixMode_cnt : (pOutput->u8_mixMode_cnt + mixmode_cnt_stride);
		pOutput->u8_mixMode_cnt =  u1_mixMode_status == 1?  u8_mixMode_cnt_p1 : (u1_badMot_status == 1?  pOutput->u8_mixMode_cnt : u8_mixMode_cnt_n1);
	}

	u8_maxPossible_CadId = (pOutput->u1_mixMode==0) ? u8_preCad_Id : u8_maxPossible_CadId;
	//for mixmode@1112/11112, 1112/11112 is not easy to enter, thresold of entering will be reduced, so the maximum cnt will be reduced as well to avoid exit mixmode late
	u8_mixMode_cnt_max = (u8_maxPossible_CadId==_CAD_1112 || u8_maxPossible_CadId==_CAD_11112||u8_maxPossible_CadId==_CAD_2224)?pParam->u8_mixMode_cnt_max/2 :pParam->u8_mixMode_cnt_max;
	pOutput->u8_mixMode_cnt = _CLIP_(pOutput->u8_mixMode_cnt, 0, u8_mixMode_cnt_max);
		
	MixModeQuit(pParam, pOutput);
	if(!(pOutput->u8_pre_cadence_Id[_FILM_ALL]==_CAD_VIDEO && pOutput->u1_mixMode==0))//(pOutput->u8_pre_cadence_Id[_FILM_ALL]!=_CAD_VIDEO || pOutput->u1_mixMode==1)
	{
		UBYTE u8_mxMode_enterCnt_th =  (u8_maxPossible_CadId==_CAD_1112 || u8_maxPossible_CadId==_CAD_11112||u8_maxPossible_CadId==_CAD_2224) ?
									(pParam->u8_mixMode_enter_cntTh/2) : pParam->u8_mixMode_enter_cntTh;//for mixmode@1112/11112, 1112/11112 is not easy to enter
		//pOutput->u1_mixMode = (pOutput->u8_mixMode_cnt >= u8_mxMode_enterCnt_th)? 1 : 0;	
#if 1//seperate entering and exiting threshold
		if(pOutput->u8_mixMode_cnt >= u8_mxMode_enterCnt_th)
			pOutput->u1_mixMode = 1;
		if(pOutput->u8_mixMode_cnt < u8_mxMode_enterCnt_th - 2)
			pOutput->u1_mixMode = 0;
#endif
	}

	pOutput->u1_mixMode_chg = (u1_mixMode_pre == pOutput->u1_mixMode) ? 0 : 1;

#if 0	//debug
	printk("(%d,%d,%d,%d,%d)(%d,%d,%d,%d)(%d,%d,%d,%d)(%d,%d,%d,%d)(%d)",
		pOutput->u27_ipme_motionPool[_FILM_5RGN_TOP][0],pOutput->u27_ipme_motionPool[_FILM_5RGN_BOT][0],pOutput->u27_ipme_motionPool[_FILM_5RGN_LFT][0],pOutput->u27_ipme_motionPool[_FILM_5RGN_RHT][0],pOutput->u27_ipme_motionPool[_FILM_5RGN_CEN][0],
		pOutput->u27_ipme_motionPool[_FILM_12RGN_01][0],pOutput->u27_ipme_motionPool[_FILM_12RGN_02][0],pOutput->u27_ipme_motionPool[_FILM_12RGN_03][0],pOutput->u27_ipme_motionPool[_FILM_12RGN_04][0],
		pOutput->u27_ipme_motionPool[_FILM_12RGN_05][0],pOutput->u27_ipme_motionPool[_FILM_12RGN_06][0],pOutput->u27_ipme_motionPool[_FILM_12RGN_07][0],pOutput->u27_ipme_motionPool[_FILM_12RGN_08][0],
		pOutput->u27_ipme_motionPool[_FILM_12RGN_09][0],pOutput->u27_ipme_motionPool[_FILM_12RGN_10][0],pOutput->u27_ipme_motionPool[_FILM_12RGN_11][0],pOutput->u27_ipme_motionPool[_FILM_12RGN_12][0],
		u28_badMot_Th);
#endif
#if 0   //debug
	printk("(%d,%d,%d,%d,%d)(%d,%d,%d,%d)(%d,%d,%d,%d)(%d,%d,%d,%d)(%d,%d,%d,%d,%d)(%d)(%d,%d)(%d,%d,%d,%d,%d,%d,%d)(%d,%d,%d)\n", 
					pOutput->u8_pre_cadence_Id[_FILM_5RGN_TOP],pOutput->u8_pre_cadence_Id[_FILM_5RGN_BOT],pOutput->u8_pre_cadence_Id[_FILM_5RGN_LFT],pOutput->u8_pre_cadence_Id[_FILM_5RGN_RHT],pOutput->u8_pre_cadence_Id[_FILM_5RGN_CEN],
					pOutput->u8_pre_cadence_Id[_FILM_12RGN_01],pOutput->u8_pre_cadence_Id[_FILM_12RGN_02],pOutput->u8_pre_cadence_Id[_FILM_12RGN_03],pOutput->u8_pre_cadence_Id[_FILM_12RGN_04],
					pOutput->u8_pre_cadence_Id[_FILM_12RGN_05],pOutput->u8_pre_cadence_Id[_FILM_12RGN_06],pOutput->u8_pre_cadence_Id[_FILM_12RGN_07],pOutput->u8_pre_cadence_Id[_FILM_12RGN_08],
					pOutput->u8_pre_cadence_Id[_FILM_12RGN_09],pOutput->u8_pre_cadence_Id[_FILM_12RGN_10],pOutput->u8_pre_cadence_Id[_FILM_12RGN_11],pOutput->u8_pre_cadence_Id[_FILM_12RGN_12],
					u1_mixMode_status, u1_badMot_status, pOutput->u8_mixMode_cnt,pParam->u8_mixMode_enter_cntTh,pOutput->u1_mixMode, u8_preCad_Id,
					u1_badMot_flag, u1_badCad_flag,
					u17_dbg_1, u17_dbg_2,u17_dbg_3,u1_preCad_motFlag,u1_preCad_motFlag,u27_smlMot, pOutput->u27_ipme_motionPool[_FILM_ALL][0],
					u8_mixMode_cnt_p1,u8_mixMode_cnt_n1,check_flag);
#endif

	if((((pOutput->u5_dbg_param1_pre & BIT_2) >> 2) == 1) && pOutput->u32_dbg_cnt_hold > 0 )
	{
		printk("(%d,%d,%d,%d,%d)(%d,%d,%d,%d,%d)(%d,%d,%d,%d)(%d,%d,%d,%d)(%d,%d,%d,%d)(%d,%d,%d)(%d)\n",  u17_dbg_1, u17_dbg_2,u17_dbg_3,u1_preCad_motFlag,u27_smlMot,
					pOutput->u8_pre_cadence_Id[_FILM_5RGN_TOP],pOutput->u8_pre_cadence_Id[_FILM_5RGN_BOT],
					pOutput->u8_pre_cadence_Id[_FILM_5RGN_LFT],pOutput->u8_pre_cadence_Id[_FILM_5RGN_RHT],pOutput->u8_pre_cadence_Id[_FILM_5RGN_CEN],
					pOutput->u8_pre_cadence_Id[_FILM_12RGN_01],pOutput->u8_pre_cadence_Id[_FILM_12RGN_02],pOutput->u8_pre_cadence_Id[_FILM_12RGN_03],pOutput->u8_pre_cadence_Id[_FILM_12RGN_04],
					pOutput->u8_pre_cadence_Id[_FILM_12RGN_05],pOutput->u8_pre_cadence_Id[_FILM_12RGN_06],pOutput->u8_pre_cadence_Id[_FILM_12RGN_07],pOutput->u8_pre_cadence_Id[_FILM_12RGN_08],
					pOutput->u8_pre_cadence_Id[_FILM_12RGN_09],pOutput->u8_pre_cadence_Id[_FILM_12RGN_10],pOutput->u8_pre_cadence_Id[_FILM_12RGN_11],pOutput->u8_pre_cadence_Id[_FILM_12RGN_12],
					pOutput->u8_mixMode_cnt,pParam->u8_mixMode_enter_cntTh,pOutput->u1_mixMode, u8_preCad_Id);
		#if 0
		printk("(%d,%d,%d,%d,%d)(%d,%d,%d,%d)(%d,%d,%d,%d)(%d,%d,%d,%d)\n", 
					pOutput->u27_ipme_motionPool[_FILM_5RGN_TOP][0],pOutput->u27_ipme_motionPool[_FILM_5RGN_BOT][0],
					pOutput->u27_ipme_motionPool[_FILM_5RGN_LFT][0],pOutput->u27_ipme_motionPool[_FILM_5RGN_RHT][0],pOutput->u27_ipme_motionPool[_FILM_5RGN_CEN][0],
					pOutput->u27_ipme_motionPool[_FILM_12RGN_01][0],pOutput->u27_ipme_motionPool[_FILM_12RGN_02][0],pOutput->u27_ipme_motionPool[_FILM_12RGN_03][0],pOutput->u27_ipme_motionPool[_FILM_12RGN_04][0],
					pOutput->u27_ipme_motionPool[_FILM_12RGN_05][0],pOutput->u27_ipme_motionPool[_FILM_12RGN_06][0],pOutput->u27_ipme_motionPool[_FILM_12RGN_07][0],pOutput->u27_ipme_motionPool[_FILM_12RGN_08][0],
					pOutput->u27_ipme_motionPool[_FILM_12RGN_09][0],pOutput->u27_ipme_motionPool[_FILM_12RGN_10][0],pOutput->u27_ipme_motionPool[_FILM_12RGN_11][0],pOutput->u27_ipme_motionPool[_FILM_12RGN_12][0]
					);
		printk("(%d,%d,%d,%d,%d,%d)(%d,%d,%d,%d)(%d,%d,%d,%d)(%d,%d,%d,%d)\n",pOutput->u27_quit_smlMot[_FILM_ALL] ,
					pOutput->u27_quit_smlMot[_FILM_5RGN_TOP],pOutput->u27_quit_smlMot[_FILM_5RGN_BOT],
					pOutput->u27_quit_smlMot[_FILM_5RGN_LFT],pOutput->u27_quit_smlMot[_FILM_5RGN_RHT],pOutput->u27_quit_smlMot[_FILM_5RGN_CEN],
					pOutput->u27_quit_smlMot[_FILM_12RGN_01],pOutput->u27_quit_smlMot[_FILM_12RGN_02],pOutput->u27_quit_smlMot[_FILM_12RGN_03],pOutput->u27_quit_smlMot[_FILM_12RGN_04],
					pOutput->u27_quit_smlMot[_FILM_12RGN_05],pOutput->u27_quit_smlMot[_FILM_12RGN_06],pOutput->u27_quit_smlMot[_FILM_12RGN_07],pOutput->u27_quit_smlMot[_FILM_12RGN_08],
					pOutput->u27_quit_smlMot[_FILM_12RGN_09],pOutput->u27_quit_smlMot[_FILM_12RGN_10],pOutput->u27_quit_smlMot[_FILM_12RGN_11],pOutput->u27_quit_smlMot[_FILM_12RGN_12]
					);
		#endif

	}
	u1_mixMode_pre = pOutput->u1_mixMode;
}

VOID MidLayer_Film_phTable_proc(VOID)
{

}

VOID FilmDetect_UpdateOutput(_OUTPUT_FilmDetectCtrl *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UBYTE u8_k = 0;
	UBYTE mPullDownMode;

	for(u8_k = _FILM_ALL; u8_k < _FILM_MOT_NUM; u8_k++)
	{
		pOutput->u8_cur_cadence_out[u8_k] = pOutput->u8_cur_cadence_Id[u8_k];
		pOutput->u8_phT_phase_Idx_out[u8_k] = pOutput->u8_phT_phase_Idx[u8_k];

		if(CAD_F ==PQL_FRCCaseSupportJudge(pOutput->u8_cur_cadence_Id[u8_k]))//not support & need to fallback
		{
			pOutput->u8_cur_cadence_out[u8_k] = _CAD_VIDEO;
			pOutput->u8_phT_phase_Idx_out[u8_k] = 0;
			g_cadence_change_flag = _CASE_NULL;
		}
		
		// special case for real cinema on/off at cadence 4222
		// when 60(4222)in and 60out must keep 4222 sequence when truMotion off
		// when 60(32)in and 60out not need to do anything(default already 32 out)
		//if (s_pContext->_external_data._input_frameRate == _PQL_IN_60HZ && s_pContext->_external_data._output_frameRate == _PQL_OUT_60HZ &&
		//	s_pContext->_external_data.u3_memcMode == MEMC_OFF/*MEMC_OFF*/ && pOutput->u8_cur_cadence_Id[_FILM_ALL] == _CAD_2224)
		if(s_pContext->_external_data._input_frameRate == _PQL_IN_60HZ && s_pContext->_external_data.u3_memcMode == MEMC_OFF/*MEMC_OFF*/ && 
		  	 (pOutput->u8_cur_cadence_Id[_FILM_ALL] == _CAD_2224 || pOutput->u8_cur_cadence_Id[_FILM_ALL] == _CAD_22224 || pOutput->u8_cur_cadence_Id[_FILM_ALL] == _CAD_32322))
		{
			pOutput->u8_cur_cadence_out[u8_k] = _CAD_VIDEO;
			pOutput->u8_phT_phase_Idx_out[u8_k] = 0;
			g_cadence_change_flag = _CASE_NULL;
		}

		mPullDownMode = s_pContext->_external_data.u8_pulldown_mode;
		if(pOutput->u8_cur_cadence_Id[u8_k] != _CAD_VIDEO && (s_pContext->_external_data.u3_memcMode == MEMC_OFF || s_pContext->_external_data.u3_memcMode == MEMC_MODE_MAX) &&
			mPullDownMode != _PQL_IN60HZ_TRUMOTOFF_CINEMAON)
		{
			pOutput->u8_cur_cadence_out[u8_k] = _CAD_VIDEO;
			pOutput->u8_phT_phase_Idx_out[u8_k] = 0;
			g_cadence_change_flag = _CASE_NULL;
		}

		if(pOutput->u8_cur_cadence_Id[u8_k] != _CAD_VIDEO && (LowDelay_mode == 1))
		{
			pOutput->u8_cur_cadence_out[u8_k] = _CAD_VIDEO;
			pOutput->u8_phT_phase_Idx_out[u8_k] = 0;
			g_cadence_change_flag = _CASE_NULL;
		}

		if(MEMC_Lib_get_memc_PowerSaving_Mode()==2){
			pOutput->u8_cur_cadence_out[u8_k] = _CAD_VIDEO;
			pOutput->u8_phT_phase_Idx_out[u8_k] = 0;
			g_cadence_change_flag = _CASE_NULL;
		}

	}

	//no support & need fallback
	if(CAD_F ==PQL_FRCCaseSupportJudge(pOutput->u8_cur_cadence_Id[_FILM_ALL]))
		pOutput->u8_flbk_lvl_cad_cnt = 4;
	else if(pOutput->u8_flbk_lvl_cad_cnt > 0)
		pOutput->u8_flbk_lvl_cad_cnt = pOutput->u8_flbk_lvl_cad_cnt-1;
	else
		pOutput->u8_flbk_lvl_cad_cnt = 0;
}

extern VOID MEMC_Lib_set_memc_do_power_saving_flag(unsigned char u1_enable);
VOID FilmDetect_PowerSavingJudge(const _PARAM_FilmDetectCtrl *pParam, _OUTPUT_FilmDetectCtrl *pOutput)
{
	UBYTE u8_k = 0;
	UINT32 test_val = 0;
	UINT32 PowerSavingJudge_en = 0;
	UINT32 PowerSavingJudge_th = 0; //PowerSavingJudge_Th
	UINT32 PowerSavingJudge_log_en = 0;
	UINT32 FrmMotion_all = 0;
	UINT32 small_motion_cnt = 0;
	ReadRegister(FRC_TOP__software1__reg_software_12_ADDR, 5, 12, &test_val);
	ReadRegister(FRC_TOP__software1__reg_software_12_ADDR, 14, 14, &PowerSavingJudge_log_en);
	ReadRegister(FRC_TOP__software1__reg_software_12_ADDR, 15, 15, &PowerSavingJudge_en);
	ReadRegister(FRC_TOP__software1__reg_software_12_ADDR, 16, 31, &PowerSavingJudge_th);
	ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_all_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_all_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_all_BITEND, &FrmMotion_all);

	if(PowerSavingJudge_en){
		pOutput->u27_FrameMotionPool[0] = FrmMotion_all;
		for(u8_k = 60-1; u8_k > 0; u8_k--)
		{
			if(pOutput->u27_FrameMotionPool[u8_k] < pParam->u27_Mot_all_min){
				small_motion_cnt++;
			}
			pOutput->u27_FrameMotionPool[u8_k] = pOutput->u27_FrameMotionPool[u8_k-1];
		}

		for(u8_k = _FILM_ALL; u8_k < _FILM_MOT_NUM; u8_k++)
		{
			//if(pOutput->u8_cur_cadence_out[u8_k] != _CAD_VIDEO){
			if(pOutput->u8_det_cadence_Id[u8_k] != _CAD_VIDEO){
				pOutput->u32_FilmFrame_cnt[u8_k] = _MIN_(pOutput->u32_FilmFrame_cnt[u8_k] + (((PowerSavingJudge_th - pOutput->u32_FilmFrame_cnt[u8_k])/test_val) + 1), PowerSavingJudge_th);
			}else if(small_motion_cnt == 60){
				pOutput->u32_FilmFrame_cnt[u8_k] = (pOutput->u32_FilmFrame_cnt[u8_k] <= 0) ? pOutput->u32_FilmFrame_cnt[u8_k] : pOutput->u32_FilmFrame_cnt[u8_k]-1;
			}else{
				pOutput->u32_FilmFrame_cnt[u8_k] = (pOutput->u32_FilmFrame_cnt[u8_k] <= 0) ? pOutput->u32_FilmFrame_cnt[u8_k] : pOutput->u32_FilmFrame_cnt[u8_k]-1; //(pOutput->u1_mixMode == 1) ? pOutput->u32_FilmFrame_cnt[u8_k] :
			}
		}

#if 1
		if((pOutput->u32_FilmFrame_cnt[_FILM_ALL] <= 0))
#else
		if((pOutput->u32_FilmFrame_cnt[_FILM_ALL] <= 0) && (pOutput->u32_FilmFrame_cnt[_FILM_5RGN_TOP] <= 0) && (pOutput->u32_FilmFrame_cnt[_FILM_5RGN_BOT] <= 0)
            && (pOutput->u32_FilmFrame_cnt[_FILM_5RGN_LFT] <= 0) && (pOutput->u32_FilmFrame_cnt[_FILM_5RGN_RHT] <= 0) && (pOutput->u32_FilmFrame_cnt[_FILM_5RGN_CEN] <= 0)
            && (pOutput->u32_FilmFrame_cnt[_FILM_12RGN_01] <= 0) && (pOutput->u32_FilmFrame_cnt[_FILM_12RGN_02] <= 0) && (pOutput->u32_FilmFrame_cnt[_FILM_12RGN_03] <= 0)
            && (pOutput->u32_FilmFrame_cnt[_FILM_12RGN_04] <= 0) && (pOutput->u32_FilmFrame_cnt[_FILM_12RGN_05] <= 0) && (pOutput->u32_FilmFrame_cnt[_FILM_12RGN_06] <= 0)
            && (pOutput->u32_FilmFrame_cnt[_FILM_12RGN_07] <= 0) && (pOutput->u32_FilmFrame_cnt[_FILM_12RGN_08] <= 0) && (pOutput->u32_FilmFrame_cnt[_FILM_12RGN_09] <= 0)
            && (pOutput->u32_FilmFrame_cnt[_FILM_12RGN_10] <= 0) && (pOutput->u32_FilmFrame_cnt[_FILM_12RGN_11] <= 0) && (pOutput->u32_FilmFrame_cnt[_FILM_12RGN_12] <= 0))
#endif
		{
			MEMC_Lib_set_memc_do_power_saving_flag(1);
		}else{
			MEMC_Lib_set_memc_do_power_saving_flag(0);
		}

		if((pOutput->u32_FilmFrame_cnt[_FILM_ALL] < PowerSavingJudge_th) && PowerSavingJudge_log_en){
			printk(KERN_EMERG"[%s][,%d,%d,%d,%d,%d,%d,]\n\r", __FUNCTION__,
				pOutput->u32_FilmFrame_cnt[_FILM_ALL], pOutput->u32_FilmFrame_cnt[_FILM_5RGN_TOP], pOutput->u32_FilmFrame_cnt[_FILM_5RGN_BOT],
				pOutput->u32_FilmFrame_cnt[_FILM_5RGN_LFT], pOutput->u32_FilmFrame_cnt[_FILM_5RGN_RHT], pOutput->u32_FilmFrame_cnt[_FILM_5RGN_CEN]);
		}
	}
	else{
		for(u8_k = _FILM_ALL; u8_k < _FILM_MOT_NUM; u8_k++)
		{
			pOutput->u32_FilmFrame_cnt[u8_k] = 0;
		}
		for(u8_k = 0; u8_k < 60; u8_k++)
		{
  			pOutput->u27_FrameMotionPool[u8_k] = 0;
		}
		MEMC_Lib_set_memc_do_power_saving_flag(0);
	}
}
/////////////////// External functions  ////////////////////////////////////////////////////////////
VOID FilmDetect_Init(_OUTPUT_FilmDetectCtrl *pOutput)
{
	UBYTE u8_k, u8_i;

	for (u8_k = 0; u8_k < _FILM_MOT_NUM; u8_k ++)
	{
		for (u8_i = 0; u8_i < _FRC_CADENCE_NUM_; u8_i ++)
		{
			u8_filmCad_enterCnt[u8_i][u8_k] = 0;
		}

		for (u8_i = 0; u8_i < 8; u8_i ++)
		{
			pOutput->u27_ipme_motionPool[u8_k][u8_i] = 0;
		}

		pOutput->u32_Mot_sequence[u8_k]  = 0;

		pOutput->u8_det_cadence_Id[u8_k] = _CAD_VIDEO;
		pOutput->u8_cur_cadence_Id[u8_k] = _CAD_VIDEO;
		pOutput->u8_pre_cadence_Id[u8_k] = _CAD_VIDEO;
		pOutput->u8_phase_Idx[u8_k]      = 0;

		pOutput->u27_quit_bigMot[u8_k] = 0x1FF;
		pOutput->u27_quit_smlMot[u8_k] = 0;
		pOutput->u27_quit_motTh[u8_k]  = 0;
		pOutput->u8_quit_cnt[u8_k]     = 0;
		pOutput->u8_quit_prd[u8_k]     = 0;

		pOutput->u8_phT_phase_Idx[u8_k] = 0;

		pOutput->u27_FrmMotion_S[u8_k] = 0;

		pOutput->u8_cur_cadence_out[u8_k] = _CAD_VIDEO;
		pOutput->u8_phT_phase_Idx_out[u8_k] = 0;

		pOutput->u27_g_FrmMot_Th[u8_k] = 0;
		
	}

	for(u8_k = 0; u8_k < 26; u8_k ++){
		pOutput->u27_FrmMotionSort[u8_k] = 0;
		pOutput->u27_FrmMotionSortTick[u8_k] = 0;
	}

	pOutput->u5_dbg_param1_pre     = 0;
	pOutput->u32_dbg_param2_pre    = 0;
	pOutput->u32_dbg_cnt_hold      = 0;
	pOutput->u8_dbg_motion_t = _FILM_ALL;

	pOutput->u8_flbk_lvl_cad_cnt = 0;
	
	pOutput->u1_mixMode = 0;
	pOutput->u8_mixMode_cnt = 0;
	pOutput->u1_mixMode_chg = 0;

	pOutput->u1_32322_BadEdit_flag = 0;
	pOutput->u8_32322_BadEdit_cnt = 0;
	pOutput->u8_32322_BadEdit_idx = 0;
}


//Input signal and parameters are connected locally
VOID FilmDetectCtrl_Proc(const _PARAM_FilmDetectCtrl *pParam, _OUTPUT_FilmDetectCtrl *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UBYTE mPullDownMode;
	UBYTE u8_k = 0;

	pOutput->u8_dbg_motion_t = _CLIP_(pParam->u3_DbgPrt_Rgn, _FILM_ALL, _FILM_5RGN_CEN);


	if (pParam->u1_filmDet_bypass == 1)
	{
		pOutput->u8_det_cadence_Id[_FILM_ALL] = _CAD_VIDEO;
		pOutput->u8_phase_Idx[_FILM_ALL]      = 0;

		pOutput->u8_cur_cadence_Id[_FILM_ALL] = (FRC_CADENCE_ID)(s_pContext->_output_read_comreg.u3_ipme_filmMode_rb>>1);
	}
	else if ((s_pContext->_external_data._input_3dFormat != _PQL_IN_LR) ||\
		((s_pContext->_external_data._input_3dFormat == _PQL_IN_LR) && (s_pContext->_output_read_comreg.u1_kphase_inLR == _PQL_3D_FRAME_L)))
	{
        pOutput->u32_dbg_cnt_hold = (pOutput->u5_dbg_param1_pre != pParam->u5_dbg_param1 || pOutput->u32_dbg_param2_pre!= pParam->u32_dbg_param2)?\
			                         pParam->u32_dbg_cnt : (pOutput->u32_dbg_cnt_hold > 0 ? (pOutput->u32_dbg_cnt_hold - 1) : 0);

		Motion_Sequence_Gen(pParam, pOutput, _FILM_ALL);
		CadenceDetect(pParam,pOutput, _FILM_ALL);
		Film_motThr_calc(pParam,pOutput, _FILM_ALL);
		//Film_occasionally_fastOut(pParam,pOutput);

		if((pParam->u1_mixMode_det_en == 1) && (pParam->u1_mixMode_en == 1)&&(s_pContext->_output_wrt_comreg.u1_FILM_force_mix_true ==1))
			pOutput->u1_mixMode =1;
		else if ((pParam->u1_mixMode_det_en == 1) && (pParam->u1_mixMode_en == 1)&&(s_pContext->_output_me_sceneAnalysis.u8_EPG_apply== 0))
		{
			#if MIX_MODE_REGION_17
			for (u8_k = _FILM_5RGN_TOP; u8_k <= _FILM_12RGN_12; u8_k ++)
			#else
			for (u8_k = _FILM_5RGN_TOP; u8_k <= _FILM_5RGN_CEN; u8_k ++)
			#endif
			{
				Motion_Sequence_Gen(pParam, pOutput, (_PQL_FILM_MOT_TYPE)u8_k);
				CadenceDetect(pParam, pOutput, (_PQL_FILM_MOT_TYPE)u8_k);
				Film_motThr_calc(pParam, pOutput, (_PQL_FILM_MOT_TYPE)u8_k);

				if (pOutput->u8_pre_cadence_Id[u8_k] == _CAD_VIDEO)
				{
					FilmEnter(pParam, pOutput, (_PQL_FILM_MOT_TYPE)u8_k);
				}
				else
				{
					FilmQuit(pParam, pOutput, (_PQL_FILM_MOT_TYPE)u8_k);
				}

				//cadence+timing support or not
//				if(CAD_N == PQL_FRCCaseSupportJudge(pOutput->u8_cur_cadence_Id[u8_k]))
//				{
//					pOutput->u8_cur_cadence_Id[u8_k] = _CAD_VIDEO;
//				}

				PhaseIdx_set(pParam, pOutput, (_PQL_FILM_MOT_TYPE)u8_k);

				pOutput->u8_pre_cadence_Id[u8_k] = pOutput->u8_cur_cadence_Id[u8_k];
			}

			MixMode_detect(pParam, pOutput);
		}
		else
		{
			pOutput->u1_mixMode     = 0;
			pOutput->u8_mixMode_cnt = 0;
		}

		if (pOutput->u8_pre_cadence_Id[_FILM_ALL] == _CAD_VIDEO && pOutput->u1_mixMode == 0)
		{
			FilmEnter(pParam, pOutput, _FILM_ALL);
		}
		else
		{
			FilmQuit(pParam, pOutput, _FILM_ALL);
		}

		//pull down mode
		//input 25hz/30hz/50hz/60hz, TruMotion off, Cinema off => clear cadence to avoid incorrect pulldown
		mPullDownMode = s_pContext->_external_data.u8_pulldown_mode;
		if(pOutput->u8_cur_cadence_Id[_FILM_ALL] != _CAD_VIDEO && s_pContext->_external_data._input_frameRate == _PQL_IN_24HZ &&
			/*mPullDownMode >= _PQL_IN24HZ_TRUMOTOFF_CINEMAON &&*/ mPullDownMode <= _PQL_IN24HZ_TRUMOTOFF_CINEMAOFF)
		{
			pOutput->u8_cur_cadence_Id[_FILM_ALL] = _CAD_VIDEO;  
		}

		// FF or FB force to video
		if((s_pContext->_external_info.s16_speed != 256) && (s_pContext->_external_info.s16_speed != -256))
		{
			pOutput->u8_cur_cadence_Id[_FILM_ALL] = _CAD_VIDEO;   
		}

		//cadence+timing support or not
		if(CAD_N == PQL_FRCCaseSupportJudge( pOutput->u8_cur_cadence_Id[_FILM_ALL] ))
		{
			pOutput->u8_cur_cadence_Id[_FILM_ALL] = _CAD_VIDEO;    
		}

		Film_occasionally_fastOut(pParam,pOutput);   

		PhaseIdx_set(pParam, pOutput, _FILM_ALL);

		CadenceChangeDetect(pParam, pOutput);

		pOutput->u8_pre_cadence_Id[_FILM_ALL] = pOutput->u8_cur_cadence_Id[_FILM_ALL];
		pOutput->u8_pre_phase_Idx[_FILM_ALL] = pOutput->u8_phase_Idx[_FILM_ALL];

		if(0)// ((((pOutput->u5_dbg_param1_pre & BIT_2) >> 2) == 1) && pOutput->u32_dbg_cnt_hold > 0)
	        {
	    	   printk("[MEMC]%s::cur_cadence_Id=%d, phase_ID=%d, phT_phase_ID=%d \n",__FUNCTION__,pOutput->u8_cur_cadence_Id[_FILM_ALL],pOutput->u8_phase_Idx[_FILM_ALL],pOutput->u8_phT_phase_Idx[_FILM_ALL]);
	        }

		pOutput->u5_dbg_param1_pre  = pParam->u5_dbg_param1;
		pOutput->u32_dbg_param2_pre = pParam->u32_dbg_param2;
	}


	//update output to other module
	//pOutput->u8_cur_cadence_out[u8_k]
	//pOutput->u8_phT_phase_Idx_out[u8_k]
	#if (!Pro_SONY & Pro_TCL)
	//  mc bld
	if( pOutput->u8_cur_cadence_Id[_FILM_ALL]==_CAD_55)  // low frame rate
		WriteRegister(FRC_TOP__MC__reg_mc_fb_izpz_mod_ADDR,11, 13, 0x4);
	else
		WriteRegister(FRC_TOP__MC__reg_mc_fb_izpz_mod_ADDR,11, 13, 0x3);
	#endif
	FilmDetect_UpdateOutput(pOutput);
	FilmDetect_PowerSavingJudge(pParam, pOutput);

	// Pass out the film information
	g_scaler_memc_cadence[_FILM_MEMC_ALL] = pOutput->u8_cur_cadence_Id[_FILM_ALL];
	g_scaler_memc_cadence[_FILM_MEMC_TOP] = ( pParam->u1_mixMode_det_en == 1 )? pOutput->u8_cur_cadence_Id[_FILM_5RGN_TOP] : 255;
	g_scaler_memc_cadence[_FILM_MEMC_BOT] = ( pParam->u1_mixMode_det_en == 1 )? pOutput->u8_cur_cadence_Id[_FILM_5RGN_BOT] : 255;
	g_scaler_memc_cadence[_FILM_MEMC_LFT] = ( pParam->u1_mixMode_det_en == 1 )? pOutput->u8_cur_cadence_Id[_FILM_5RGN_LFT] : 255;
	g_scaler_memc_cadence[_FILM_MEMC_RHT] = ( pParam->u1_mixMode_det_en == 1 )? pOutput->u8_cur_cadence_Id[_FILM_5RGN_RHT] : 255;
	g_scaler_memc_cadence[_FILM_MEMC_CEN] = ( pParam->u1_mixMode_det_en == 1 )? pOutput->u8_cur_cadence_Id[_FILM_5RGN_CEN] : 255;
	g_scaler_memc_cadence[_FILM_MEMC_OUT_ALL] = pOutput->u8_cur_cadence_out[_FILM_ALL];

}

