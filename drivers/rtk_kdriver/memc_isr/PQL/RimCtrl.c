#include "memc_isr/PQL/PQLPlatformDefs.h"
#include "memc_isr/PQL/PQLContext.h"
#include "memc_isr/PQL/PQLGlobalDefs.h"
///////////////////////////////////////////////////////////////////////////////////////////
VOID RimCtrl_OutResolution_Parse(_OUTPUT_RimCtrl *pOutput)
{
	const _PQLCONTEXT *s_pContext   = GetPQLContext();
	PQL_OUTPUT_RESOLUTION outResolution_cur = s_pContext->_external_data._output_resolution;

	if (outResolution_cur != (PQL_OUTPUT_RESOLUTION)pOutput->u4_outResolution_pre)
	{
		pOutput->u4_outResolution_pre = outResolution_cur;

		switch (outResolution_cur)
		{
		case _PQL_OUT_1920x1080 :
			pOutput->u12_out_resolution[_RIM_LFT] = 0;
			pOutput->u12_out_resolution[_RIM_RHT] = 1919;
			pOutput->u12_out_resolution[_RIM_TOP] = 0;
			pOutput->u12_out_resolution[_RIM_BOT] = 1079;
			break;
		case _PQL_OUT_1920x540:
			pOutput->u12_out_resolution[_RIM_LFT] = 0;
			pOutput->u12_out_resolution[_RIM_RHT] = 1919;
			pOutput->u12_out_resolution[_RIM_TOP] = 0;
			pOutput->u12_out_resolution[_RIM_BOT] = 539;
			break;
		case _PQL_OUT_3840x2160:
			pOutput->u12_out_resolution[_RIM_LFT] = 0;
			pOutput->u12_out_resolution[_RIM_RHT] = 3839;
			pOutput->u12_out_resolution[_RIM_TOP] = 0;
			pOutput->u12_out_resolution[_RIM_BOT] = 2159;
			break;
		case _PQL_OUT_3840x1080:
			pOutput->u12_out_resolution[_RIM_LFT] = 0;
			pOutput->u12_out_resolution[_RIM_RHT] = 3839;
			pOutput->u12_out_resolution[_RIM_TOP] = 0;
			pOutput->u12_out_resolution[_RIM_BOT] = 1079;
			break;
		case _PQL_OUT_3840x540:
			pOutput->u12_out_resolution[_RIM_LFT] = 0;
			pOutput->u12_out_resolution[_RIM_RHT] = 3839;
			pOutput->u12_out_resolution[_RIM_TOP] = 0;
			pOutput->u12_out_resolution[_RIM_BOT] = 539;
			break;
		default: //_PQL_OUT_3840x2160
			pOutput->u12_out_resolution[_RIM_LFT] = 0;
			pOutput->u12_out_resolution[_RIM_RHT] = 3839;
			pOutput->u12_out_resolution[_RIM_TOP] = 0;
			pOutput->u12_out_resolution[_RIM_BOT] = 2159;
			break;
		}
	}
}

VOID RimCtrl_HW_extract(const _PARAM_RimCtrl *pParam, _OUTPUT_RimCtrl *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	UINT16 u12_BBD_roughRim[_RIM_NUM], u12_BBD_fineRim[_RIM_NUM], u12_det_Rim[_RIM_NUM], u12_rim_bound[_RIM_NUM];
	UBYTE  u1_BBD_roughValid[_RIM_NUM], u1_BBD_fineValid[_RIM_NUM];
	UBYTE  u8_k;
	static UBYTE u8_Rim_Comp_cnt = 0;
	UBYTE  apl_avg = 0;
#if	1
	UINT32 u32_rb_val = 0;
	ReadRegister(KIWI_REG(FRC_TOP__PQL_0__pql_dummy_ac), &u32_rb_val);/*0xB809B03C*/		
#endif

	// copy data.
	for (u8_k = 0; u8_k < _RIM_NUM; u8_k ++)
	{
		u12_BBD_roughRim[u8_k]  = s_pContext->_output_read_comreg.u12_BBD_roughRim_rb[u8_k];
		u1_BBD_roughValid[u8_k] = s_pContext->_output_read_comreg.u1_BBD_roughValid_rb[u8_k];
		u12_BBD_fineRim[u8_k]   = s_pContext->_output_read_comreg.u12_BBD_fineRim_rb[u8_k];
		u1_BBD_fineValid[u8_k]  = s_pContext->_output_read_comreg.u1_BBD_fineValid_rb[u8_k];
	}

	u12_rim_bound[_RIM_LFT] = (pOutput->u4_outResolution_pre == _PQL_OUT_1920x1080 || pOutput->u4_outResolution_pre == _PQL_OUT_1920x540) ? 320:  640; // else, Hactive = 3840.
	u12_rim_bound[_RIM_RHT] = (pOutput->u4_outResolution_pre == _PQL_OUT_1920x1080 || pOutput->u4_outResolution_pre == _PQL_OUT_1920x540) ? 1600:  3200;

	u12_rim_bound[_RIM_TOP] = (pOutput->u4_outResolution_pre == _PQL_OUT_1920x1080 || pOutput->u4_outResolution_pre == _PQL_OUT_3840x1080)?  180 : 
		                      (pOutput->u4_outResolution_pre == _PQL_OUT_3840x2160)?  360 : 90; // else, Vactive = 540.
	u12_rim_bound[_RIM_BOT] = (pOutput->u4_outResolution_pre == _PQL_OUT_1920x1080 || pOutput->u4_outResolution_pre == _PQL_OUT_3840x1080) ? 900 : 
		                      (pOutput->u4_outResolution_pre == _PQL_OUT_3840x2160)? 1800 : 450;

	// rim source select.
	for (u8_k = 0; u8_k < _RIM_NUM; u8_k ++)
	{
//		UINT16 u12_roughRim = (u8_k == _RIM_TOP || u8_k == _RIM_BOT)? u12_BBD_roughRim[u8_k] :
//			                  (u8_k == _RIM_LFT? (u12_BBD_roughRim[u8_k] * _Rim_Hor_Bin_) : (u12_BBD_roughRim[u8_k] * _Rim_Hor_Bin_ - 1));

		u12_det_Rim[u8_k] = u1_BBD_fineValid[u8_k] == 1? u12_BBD_fineRim[u8_k] :
			               (u1_BBD_roughValid[u8_k] == 1? u12_BBD_roughRim[u8_k] : pOutput->u12_out_resolution[u8_k]);
	}

#if 1
	if(u32_rb_val&0x4){// bit 2
		printk(KERN_ERR "===== [%s], [%d] =========\n",__FUNCTION__, __LINE__);
		printk(KERN_ERR "[u12_det_Rim][T,B,L,R]>>[%d,%d,%d,%d]\n",u12_det_Rim[_RIM_TOP],u12_det_Rim[_RIM_BOT],u12_det_Rim[_RIM_LFT],u12_det_Rim[_RIM_RHT]);
		printk(KERN_ERR "[u12_rim_bound][T,B,L,R]>>[%d,%d,%d,%d]\n",u12_rim_bound[_RIM_TOP],u12_rim_bound[_RIM_BOT],u12_rim_bound[_RIM_LFT],u12_rim_bound[_RIM_RHT]);
		printk(KERN_ERR "[out_resolution][T,B,L,R]>>[%d,%d,%d,%d]\n",pOutput->u12_out_resolution[_RIM_TOP],pOutput->u12_out_resolution[_RIM_BOT],pOutput->u12_out_resolution[_RIM_LFT],pOutput->u12_out_resolution[_RIM_RHT]);
	}
#endif

	// Rim qualified for Two-side balancing.
	// Vertical
	if ( (pOutput->u12_out_resolution[_RIM_BOT] - u12_det_Rim[_RIM_BOT]) > (u12_det_Rim[_RIM_TOP] +  pParam->u12_RimDiffTh) && u8_Rim_Comp_cnt>=8)
	{
		u12_det_Rim[_RIM_BOT] = pOutput->u12_out_resolution[_RIM_BOT] - u12_det_Rim[_RIM_TOP];
		pOutput->u1_RimTwoSide_balancing=2;//bot > top  //player subtitle or logo
	}
	else if (u12_det_Rim[_RIM_TOP] > (pOutput->u12_out_resolution[_RIM_BOT] - u12_det_Rim[_RIM_BOT] +  pParam->u12_RimDiffTh) && u8_Rim_Comp_cnt>=8)
	{
		u12_det_Rim[_RIM_TOP] = pOutput->u12_out_resolution[_RIM_BOT] - u12_det_Rim[_RIM_BOT];
		pOutput->u1_RimTwoSide_balancing=0; //top > bot  //player subtitle or logo
	}
	else if ((pOutput->u12_out_resolution[_RIM_BOT] - u12_det_Rim[_RIM_BOT]) > (u12_det_Rim[_RIM_TOP] +  pParam->u12_RimDiffTh)) //moment bot > top
	{
		u12_det_Rim[_RIM_BOT] = pOutput->u12_out_resolution[_RIM_BOT] - u12_det_Rim[_RIM_TOP];
		pOutput->u1_RimTwoSide_balancing=1;
		u8_Rim_Comp_cnt++;
	}
	else if (u12_det_Rim[_RIM_TOP] > (pOutput->u12_out_resolution[_RIM_BOT] - u12_det_Rim[_RIM_BOT] +  pParam->u12_RimDiffTh)) // moment  top > bot
	{
		u12_det_Rim[_RIM_TOP] = pOutput->u12_out_resolution[_RIM_BOT] - u12_det_Rim[_RIM_BOT];
		pOutput->u1_RimTwoSide_balancing=1; 
		u8_Rim_Comp_cnt++;
	}
	else  //top = bot
	{
		pOutput->u1_RimTwoSide_balancing=1;
		u8_Rim_Comp_cnt=0;
	}

	// Hortizontal
	if ((pOutput->u12_out_resolution[_RIM_RHT] - u12_det_Rim[_RIM_RHT]) > (u12_det_Rim[_RIM_LFT] + pParam->u12_RimDiffTh))
	{
		u12_det_Rim[_RIM_RHT] = (pOutput->u12_out_resolution[_RIM_RHT] - u12_det_Rim[_RIM_LFT]);
	}
	else if (u12_det_Rim[_RIM_LFT] > (pOutput->u12_out_resolution[_RIM_RHT] - u12_det_Rim[_RIM_RHT] + pParam->u12_RimDiffTh))
	{
		u12_det_Rim[_RIM_LFT] = (pOutput->u12_out_resolution[_RIM_RHT] - u12_det_Rim[_RIM_RHT]);
	}

	// bound protect.
	if( !(u32_rb_val & 0x8)){// bit 3
		pOutput->u12_Rim_Cur[_RIM_LFT] = (u12_det_Rim[_RIM_LFT] >= u12_rim_bound[_RIM_LFT])? pOutput->u12_out_resolution[_RIM_LFT] : u12_det_Rim[_RIM_LFT];
		pOutput->u12_Rim_Cur[_RIM_RHT] = (u12_det_Rim[_RIM_RHT] <= u12_rim_bound[_RIM_RHT])? pOutput->u12_out_resolution[_RIM_RHT] : u12_det_Rim[_RIM_RHT];
		pOutput->u12_Rim_Cur[_RIM_TOP] = (u12_det_Rim[_RIM_TOP] >= u12_rim_bound[_RIM_TOP])? pOutput->u12_out_resolution[_RIM_TOP] : u12_det_Rim[_RIM_TOP];
		pOutput->u12_Rim_Cur[_RIM_BOT] = (u12_det_Rim[_RIM_BOT] <= u12_rim_bound[_RIM_BOT])? pOutput->u12_out_resolution[_RIM_BOT] : u12_det_Rim[_RIM_BOT];		

		//-----sync  from merlin2-------------------
		if ((_ABS_(pOutput->u12_Rim_Cur[_RIM_RHT] - pOutput->u12_Rim_Cur[_RIM_LFT]) < _ABS_(pOutput->u12_Rim_Cur[_RIM_BOT] - pOutput->u12_Rim_Cur[_RIM_TOP])*4/5) )
		{
				pOutput->u12_Rim_Cur[_RIM_LFT] =  pOutput->u12_out_resolution[_RIM_LFT];
				pOutput->u12_Rim_Cur[_RIM_RHT] =  pOutput->u12_out_resolution[_RIM_RHT];
				pOutput->u12_Rim_Cur[_RIM_TOP] =  pOutput->u12_out_resolution[_RIM_TOP];
				pOutput->u12_Rim_Cur[_RIM_BOT] =  pOutput->u12_out_resolution[_RIM_BOT];
		}
		//need change to any blocknum case.
		apl_avg = (s_pContext->_output_read_comreg.u26_me_aAPLi_rb + s_pContext->_output_read_comreg.u26_me_aAPLp_rb)/(240*135*2);
		if (apl_avg < 0x10)
		{
			pOutput->u12_Rim_Cur[_RIM_LFT] =  pOutput->u12_out_resolution[_RIM_LFT];
			pOutput->u12_Rim_Cur[_RIM_RHT] =  pOutput->u12_out_resolution[_RIM_RHT];
			pOutput->u12_Rim_Cur[_RIM_TOP] =  pOutput->u12_out_resolution[_RIM_TOP];
			pOutput->u12_Rim_Cur[_RIM_BOT] =  pOutput->u12_out_resolution[_RIM_BOT];
		}

	}else{
		pOutput->u12_Rim_Cur[_RIM_LFT] =  u12_det_Rim[_RIM_LFT];
		pOutput->u12_Rim_Cur[_RIM_RHT] =  u12_det_Rim[_RIM_RHT];
		pOutput->u12_Rim_Cur[_RIM_TOP] =  u12_det_Rim[_RIM_TOP];
		pOutput->u12_Rim_Cur[_RIM_BOT] =  u12_det_Rim[_RIM_BOT];
	}
#if 1
	if(u32_rb_val&0x4){// bit 2
		printk(KERN_ERR "===== [%s], [%d] =========\n",__FUNCTION__, __LINE__);
		printk(KERN_ERR "===== apl_avg detection=========\n");	
		printk(KERN_ERR "apl_avg >> %d, %d \n",apl_avg, pOutput->u1_RimTwoSide_balancing);
		printk(KERN_ERR "===== u12_det_Rim =========\n");	
		printk(KERN_ERR "res_BOT_size >> %d,%d,%d\n",u12_det_Rim[_RIM_BOT],pOutput->u12_out_resolution[_RIM_BOT],(pOutput->u12_out_resolution[_RIM_BOT] - u12_det_Rim[_RIM_BOT]));
		printk(KERN_ERR "res_TOP_size >> %d,%d,%d\n",u12_det_Rim[_RIM_TOP],pOutput->u12_out_resolution[_RIM_TOP],(u12_det_Rim[_RIM_TOP] - pOutput->u12_out_resolution[_RIM_TOP]));
		printk(KERN_ERR "res_LFT_size >> %d,%d,%d\n",u12_det_Rim[_RIM_LFT],pOutput->u12_out_resolution[_RIM_LFT],(u12_det_Rim[_RIM_LFT] - pOutput->u12_out_resolution[_RIM_LFT]));
		printk(KERN_ERR "res_RHT_size >> %d,%d,%d\n",u12_det_Rim[_RIM_RHT],pOutput->u12_out_resolution[_RIM_RHT],(pOutput->u12_out_resolution[_RIM_RHT] - u12_det_Rim[_RIM_RHT]));
		printk(KERN_ERR "===== rim_cur =========\n");
		printk(KERN_ERR "cur_BOT_size >> %d\n",pOutput->u12_Rim_Cur[_RIM_BOT]);
		printk(KERN_ERR "cur_TOP_size >> %d\n",pOutput->u12_Rim_Cur[_RIM_TOP]);
		printk(KERN_ERR "cur_LFT_size >> %d\n",pOutput->u12_Rim_Cur[_RIM_LFT]);
		printk(KERN_ERR "cur_RHT_size >> %d\n",pOutput->u12_Rim_Cur[_RIM_RHT]);
	}
#endif
	
}

VOID RimCtrl_FastOut(const _PARAM_RimCtrl *pParam, _OUTPUT_RimCtrl *pOutput)
{
/*	const _PQLCONTEXT *s_pContext = GetPQLContext();*/

	int i = 0;
	for (i = 0; i < _RIM_NUM; i ++)
	{
		if (i == _RIM_LFT || i == _RIM_TOP)
		{
			if (pOutput->u12_Rim_Cur[i] < pOutput->u12_Rim_Pre[i])
			{
				pOutput->s8_BiggerCnt[i] =  pOutput->s8_BiggerCnt[i]+1;
			}
			else
			{
				pOutput->s8_BiggerCnt[i] =  _MAX_((pOutput->s8_BiggerCnt[i]-2), 0);
			}
			
		}
		else // if (i == _RIM_RHT || i == _RIM_BOT)
		{
			if (pOutput->u12_Rim_Cur[i] > pOutput->u12_Rim_Pre[i])
			{
				pOutput->s8_BiggerCnt[i] = pOutput->s8_BiggerCnt[i]+1;
			}
			else
			{
				pOutput->s8_BiggerCnt[i] = _MAX_((pOutput->s8_BiggerCnt[i]-2),0);
			}
		}	
		// if change rim?
		if (pOutput->s8_BiggerCnt[i] >= pParam->u8_RimBiggerTh)
		{
			pOutput->u12_Rim_Result[i] = pOutput->u12_Rim_Cur[i];
			pOutput->u1_RimChange      = 1;
			pOutput->s8_BiggerCnt[i]   = 0;
		}
	}
}

VOID RimCtrl_SlowIn(const _PARAM_RimCtrl *pParam, _OUTPUT_RimCtrl *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	int i = 0;
	UBYTE  u8_thr_coef = 1;
	UBYTE  u8_dyn_thr;
	UBYTE  u8_rim_iir = 0;
	static UBYTE u8_sc_cnt = 0;
	UBYTE u1_Hist_SC_flg;

	for (i = 0; i < _RIM_NUM; i ++)
	{		
		if (i == _RIM_LFT || i == _RIM_TOP)
		{
			if (pOutput->u12_Rim_Cur[i] > pOutput->u12_Rim_Pre[i])
			{
				pOutput->s8_SmallerCnt[i] = _CLIP_(pOutput->s8_SmallerCnt[i]+1,-128,126);
			}
			else
			{
				pOutput->s8_SmallerCnt[i] = _MAX_((pOutput->s8_SmallerCnt[i]-2),0);
			}

		}
		else // if (i == _RIM_RHT || i == _RIM_BOT)
		{
			if (pOutput->u12_Rim_Cur[i] < pOutput->u12_Rim_Pre[i])
			{
				pOutput->s8_SmallerCnt[i] = _CLIP_(pOutput->s8_SmallerCnt[i]+1,-128,126);
			}
			else
			{
				pOutput->s8_SmallerCnt[i] = _MAX_((pOutput->s8_SmallerCnt[i]-2),0);
			}
		}	
		
		if (i < 2)
		{
			u8_thr_coef = 1;   //default u_thr_coef need consider again.
		}
		else  // right/left
		{
			u8_thr_coef =  (1<<pParam->u5_RimLRSmallShift);
		}

		// if change rim
		u1_Hist_SC_flg = (s_pContext->_external_info.u1_Hist_SC_flg == 1) ? 1 :0;		

//		if (s_pContext->_output_read_comreg.u1_sc_status_rb == 1)
		if (u1_Hist_SC_flg == 1)
		{
			u8_dyn_thr = pParam->u8_RimSmallerSCTh * u8_thr_coef;
			u8_sc_cnt = 10;
		}
		else
		{
			u8_dyn_thr = pParam->u8_RimSmallerTh * u8_thr_coef;
			if (u8_sc_cnt > 0)
			{
				u8_sc_cnt--;
			}
		}

		if (pOutput->s8_SmallerCnt[i] >= u8_dyn_thr /*pParam->u8_RimSmallerTh*/)
		{
			u8_rim_iir = pParam->u8_RimIIRAlpha;
			if (u8_sc_cnt > 0)
			{
				if ((i == _RIM_TOP) || (i == _RIM_BOT))
				{
					u8_rim_iir = 255;
				}
			}
			pOutput->u12_Rim_Result[i] = _2Val_RndBlending_(pOutput->u12_Rim_Cur[i], pOutput->u12_Rim_Pre[i], u8_rim_iir, 8);
			pOutput->u1_RimChange      = 1;
			pOutput->s8_SmallerCnt[i]  = 0;			
		}		
	}



	
	
}


VOID RimCtrl_ME1_Rim_Convert(const _PARAM_RimCtrl *pParam, _OUTPUT_RimCtrl *pOutput)
{
	UINT16 me1_blkV_Resolution = 0, me1_pixV_Resolution = 0;	
//	UINT16 me1_pix_rim_oft[_RIM_NUM];

//	me1_pix_rim_oft[_RIM_LFT] = pOutput->u12_Rim_Result[_RIM_LFT] == pOutput->u12_out_resolution[_RIM_LFT]? 0 : pParam->u8_me_pixRim_shrink;
//	me1_pix_rim_oft[_RIM_RHT] = pOutput->u12_Rim_Result[_RIM_RHT] == pOutput->u12_out_resolution[_RIM_RHT]? 0 : pParam->u8_me_pixRim_shrink;
//	me1_pix_rim_oft[_RIM_TOP] = pOutput->u12_Rim_Result[_RIM_TOP] == pOutput->u12_out_resolution[_RIM_TOP]? 0 : pParam->u8_me_pixRim_shrink;
//	me1_pix_rim_oft[_RIM_BOT] = pOutput->u12_Rim_Result[_RIM_BOT] == pOutput->u12_out_resolution[_RIM_BOT]? 0 : pParam->u8_me_pixRim_shrink;

	pOutput->u12_me1_lbme_rim[_RIM_LFT] = (pOutput->u12_Rim_Result[_RIM_LFT] >> pOutput->u8_me1_pixH_sft_bit);// + pParam->u8_lbme_pixRim_shrink;
	pOutput->u12_me1_lbme_rim[_RIM_RHT] = (pOutput->u12_Rim_Result[_RIM_RHT] >> pOutput->u8_me1_pixH_sft_bit);// - pParam->u8_lbme_pixRim_shrink;
	pOutput->u12_me1_lbme_rim[_RIM_TOP] = (pOutput->u12_Rim_Result[_RIM_TOP] >> pOutput->u8_me1_pixV_sft_bit) + pParam->u8_lbme_pixRim_shrink;
	pOutput->u12_me1_lbme_rim[_RIM_BOT] = (pOutput->u12_Rim_Result[_RIM_BOT] >> pOutput->u8_me1_pixV_sft_bit) - pParam->u8_lbme_pixRim_shrink;

	pOutput->u12_me1_vbuf_pix_rim[_RIM_LFT] = (pOutput->u12_Rim_Result[_RIM_LFT] >> pOutput->u8_me1_pixH_sft_bit);// + pParam->u8_me_pixRim_shrink;
	pOutput->u12_me1_vbuf_pix_rim[_RIM_RHT] = (pOutput->u12_Rim_Result[_RIM_RHT] >> pOutput->u8_me1_pixH_sft_bit);// - pParam->u8_me_pixRim_shrink;
	pOutput->u12_me1_vbuf_pix_rim[_RIM_TOP] = (pOutput->u12_Rim_Result[_RIM_TOP] >> pOutput->u8_me1_pixV_sft_bit) + pParam->u8_me_pixRim_shrink;
	pOutput->u12_me1_vbuf_pix_rim[_RIM_BOT] = (pOutput->u12_Rim_Result[_RIM_BOT] >> pOutput->u8_me1_pixV_sft_bit) - pParam->u8_me_pixRim_shrink;

	if(pOutput->u1_RimCompflag){
		if(pOutput->u12_me2_vbuf_pix_rim[_RIM_TOP] > pParam->u8_lbme_pixRim_comp){
			pOutput->u12_me1_lbme_rim[_RIM_TOP] = pOutput->u12_me1_lbme_rim[_RIM_TOP] - pParam->u8_lbme_pixRim_comp;
			pOutput->u12_me2_vbuf_pix_rim[_RIM_TOP] = pOutput->u12_me2_vbuf_pix_rim[_RIM_TOP] - pParam->u8_lbme_pixRim_comp;
		}

		if(pOutput->u12_me2_vbuf_pix_rim[_RIM_BOT] > (539-pParam->u8_lbme_pixRim_comp)){
			pOutput->u12_me1_lbme_rim[_RIM_BOT] = pOutput->u12_me1_lbme_rim[_RIM_BOT] - pParam->u8_lbme_pixRim_comp;
			pOutput->u12_me2_vbuf_pix_rim[_RIM_BOT] = pOutput->u12_me2_vbuf_pix_rim[_RIM_BOT] + pParam->u8_lbme_pixRim_comp;
		}
	}

	pOutput->u12_me1_vbuf_blk_rim[_RIM_LFT] = pOutput->u12_Rim_Result[_RIM_LFT] >> pOutput->u8_me1_blkH_sft_bit;
	pOutput->u12_me1_vbuf_blk_rim[_RIM_RHT] = pOutput->u12_Rim_Result[_RIM_RHT] >> pOutput->u8_me1_blkH_sft_bit;
	pOutput->u12_me1_vbuf_blk_rim[_RIM_TOP] = pOutput->u12_Rim_Result[_RIM_TOP] >> pOutput->u8_me1_blkV_sft_bit;
	pOutput->u12_me1_vbuf_blk_rim[_RIM_BOT] = pOutput->u12_Rim_Result[_RIM_BOT] >> pOutput->u8_me1_blkV_sft_bit;

	// meander top/bottom rim.
	me1_blkV_Resolution = pOutput->u12_out_resolution[_RIM_BOT] >> pOutput->u8_me1_blkV_sft_bit;
	pOutput->u12_me1_vbuf_meander_blk_rim[_RIM_TOP] = me1_blkV_Resolution - pOutput->u12_me1_vbuf_blk_rim[_RIM_BOT];
	pOutput->u12_me1_vbuf_meander_blk_rim[_RIM_BOT] = me1_blkV_Resolution - pOutput->u12_me1_vbuf_blk_rim[_RIM_TOP];

	me1_pixV_Resolution = pOutput->u12_out_resolution[_RIM_BOT] >> pOutput->u8_me1_pixV_sft_bit;
	pOutput->u12_me1_vbuf_meander_pix_rim[_RIM_TOP] = me1_pixV_Resolution - pOutput->u12_me1_vbuf_pix_rim[_RIM_BOT];
	pOutput->u12_me1_vbuf_meander_pix_rim[_RIM_BOT] = me1_pixV_Resolution - pOutput->u12_me1_vbuf_pix_rim[_RIM_TOP];
}

VOID RimCtrl_ME2_Rim_Convert(const _PARAM_RimCtrl *pParam, _OUTPUT_RimCtrl *pOutput)
{
	//UINT16 me2_pix_rim_oft[_RIM_NUM];
	//me2_pix_rim_oft[_RIM_LFT] = pOutput->u12_Rim_Result[_RIM_LFT] == pOutput->u12_out_resolution[_RIM_LFT]? 0 : pParam->u8_me_pixRim_shrink;
	//me2_pix_rim_oft[_RIM_RHT] = pOutput->u12_Rim_Result[_RIM_RHT] == pOutput->u12_out_resolution[_RIM_RHT]? 0 : pParam->u8_me_pixRim_shrink;
	//me2_pix_rim_oft[_RIM_TOP] = pOutput->u12_Rim_Result[_RIM_TOP] == pOutput->u12_out_resolution[_RIM_TOP]? 0 : pParam->u8_me_pixRim_shrink;
	//me2_pix_rim_oft[_RIM_BOT] = pOutput->u12_Rim_Result[_RIM_BOT] == pOutput->u12_out_resolution[_RIM_BOT]? 0 : pParam->u8_me_pixRim_shrink;

	pOutput->u12_me2_lbme_rim[_RIM_LFT] = (pOutput->u12_Rim_Result[_RIM_LFT] >> pOutput->u8_me2_pixH_sft_bit);// + pParam->u8_lbme_pixRim_shrink;
	pOutput->u12_me2_lbme_rim[_RIM_RHT] = (pOutput->u12_Rim_Result[_RIM_RHT] >> pOutput->u8_me2_pixH_sft_bit);// - pParam->u8_lbme_pixRim_shrink;
	pOutput->u12_me2_lbme_rim[_RIM_TOP] = (pOutput->u12_Rim_Result[_RIM_TOP] >> pOutput->u8_me2_pixV_sft_bit) + pParam->u8_lbme_pixRim_shrink;
	pOutput->u12_me2_lbme_rim[_RIM_BOT] = (pOutput->u12_Rim_Result[_RIM_BOT] >> pOutput->u8_me2_pixV_sft_bit) - pParam->u8_lbme_pixRim_shrink;

	
	pOutput->u12_me2_vbuf_pix_rim[_RIM_LFT] = (pOutput->u12_Rim_Result[_RIM_LFT] >> pOutput->u8_me2_pixH_sft_bit);// + pParam->u8_me_pixRim_shrink;
	pOutput->u12_me2_vbuf_pix_rim[_RIM_RHT] = (pOutput->u12_Rim_Result[_RIM_RHT] >> pOutput->u8_me2_pixH_sft_bit);// - pParam->u8_me_pixRim_shrink;
	pOutput->u12_me2_vbuf_pix_rim[_RIM_TOP] = (pOutput->u12_Rim_Result[_RIM_TOP] >> pOutput->u8_me2_pixV_sft_bit) + pParam->u8_me_pixRim_shrink;
	pOutput->u12_me2_vbuf_pix_rim[_RIM_BOT] = (pOutput->u12_Rim_Result[_RIM_BOT] >> pOutput->u8_me2_pixV_sft_bit) - pParam->u8_me_pixRim_shrink;

	if(pOutput->u1_RimCompflag){
		if(pOutput->u12_me2_vbuf_pix_rim[_RIM_TOP] > pParam->u8_lbme_pixRim_comp){
			pOutput->u12_me2_lbme_rim[_RIM_TOP] = pOutput->u12_me2_lbme_rim[_RIM_TOP] - pParam->u8_lbme_pixRim_comp;
			pOutput->u12_me2_vbuf_pix_rim[_RIM_TOP] = pOutput->u12_me2_vbuf_pix_rim[_RIM_TOP] - pParam->u8_lbme_pixRim_comp;
		}

		if(pOutput->u12_me2_vbuf_pix_rim[_RIM_BOT] < (539-pParam->u8_lbme_pixRim_comp)){
			pOutput->u12_me2_lbme_rim[_RIM_BOT] = pOutput->u12_me2_lbme_rim[_RIM_BOT] + pParam->u8_lbme_pixRim_comp;
			pOutput->u12_me2_vbuf_pix_rim[_RIM_BOT] = pOutput->u12_me2_vbuf_pix_rim[_RIM_BOT] + pParam->u8_lbme_pixRim_comp;
		}
	}

	pOutput->u12_me2_vbuf_ph_blk_rim[_RIM_LFT] = pOutput->u12_Rim_Result[_RIM_LFT] >> pOutput->u8_me2_BlkH_sft_bit;
	pOutput->u12_me2_vbuf_ph_blk_rim[_RIM_RHT] = pOutput->u12_Rim_Result[_RIM_RHT] >> pOutput->u8_me2_BlkH_sft_bit;
	pOutput->u12_me2_vbuf_ph_blk_rim[_RIM_TOP] = pOutput->u12_Rim_Result[_RIM_TOP] >> pOutput->u8_me2_BlkV_sft_bit;
	pOutput->u12_me2_vbuf_ph_blk_rim[_RIM_BOT] = pOutput->u12_Rim_Result[_RIM_BOT] >> pOutput->u8_me2_BlkV_sft_bit;

	pOutput->u12_me2_vbuf_pfv_blk_rim[_RIM_LFT] = pOutput->u12_Rim_Result[_RIM_LFT] >> pOutput->u8_me2_BlkH_sft_bit;
	pOutput->u12_me2_vbuf_pfv_blk_rim[_RIM_RHT] = pOutput->u12_Rim_Result[_RIM_RHT] >> pOutput->u8_me2_BlkH_sft_bit;
	pOutput->u12_me2_vbuf_pfv_blk_rim[_RIM_TOP] = pOutput->u12_Rim_Result[_RIM_TOP] >> pOutput->u8_me2_BlkV_sft_bit;
	pOutput->u12_me2_vbuf_pfv_blk_rim[_RIM_BOT] = pOutput->u12_Rim_Result[_RIM_BOT] >> pOutput->u8_me2_BlkV_sft_bit;


	#if 0
	printk("===== RimCtrl_ME2_Rim_Convert =========\n");	
	printk("u1_RimCompflag >> [%d,%d]\n",pOutput->u8_me2_BlkH_sft_bit,pOutput->u8_me2_BlkV_sft_bit);
	printk("Pxl[_RIM_BOT] >> [%d,%d,%d,%d]\n",pOutput->u12_Rim_Result[_RIM_LFT],pOutput->u12_Rim_Result[_RIM_RHT] ,pOutput->u12_Rim_Result[_RIM_TOP],pOutput->u12_Rim_Result[_RIM_BOT]);
	printk("================\n");
	#endif


	
}


VOID RimCtrl_MC_Rim_Convert(const _PARAM_RimCtrl *pParam, _OUTPUT_RimCtrl *pOutput)
{
/*	const _PQLCONTEXT *s_pContext = GetPQLContext();*/
	pOutput->u12_mc_rim0[_RIM_LFT] = pOutput->u12_Rim_Result[_RIM_LFT] + pParam->u8_mc_ptRim_shrink;
	pOutput->u12_mc_rim0[_RIM_RHT] = pOutput->u12_Rim_Result[_RIM_RHT] - pParam->u8_mc_ptRim_shrink;
	pOutput->u12_mc_rim0[_RIM_TOP] = pOutput->u12_Rim_Result[_RIM_TOP] + pParam->u8_mc_ptRim_shrink;
	pOutput->u12_mc_rim0[_RIM_BOT] = pOutput->u12_Rim_Result[_RIM_BOT] - pParam->u8_mc_ptRim_shrink;

	
	pOutput->u12_mc_rim1[_RIM_LFT] = pOutput->u12_Rim_Result[_RIM_LFT];
	pOutput->u12_mc_rim1[_RIM_RHT] = pOutput->u12_Rim_Result[_RIM_RHT];
	pOutput->u12_mc_rim1[_RIM_TOP] = pOutput->u12_Rim_Result[_RIM_TOP];
	pOutput->u12_mc_rim1[_RIM_BOT] = pOutput->u12_Rim_Result[_RIM_BOT];
}

VOID RimCtrl_Logo_Rim_Convert(const _PARAM_RimCtrl *pParam, _OUTPUT_RimCtrl *pOutput)
{
/*	const _PQLCONTEXT *s_pContext = GetPQLContext();*/

	UBYTE u8_logoBlk_rim_oft[_RIM_NUM], u8_logoPix_rim_oft[_RIM_NUM];

	//blk rim
	u8_logoBlk_rim_oft[_RIM_LFT] = pOutput->u12_Rim_Result[_RIM_LFT] == pOutput->u12_out_resolution[_RIM_LFT]? 0 : pParam->u8_LogoBlkRimHOffset;
	u8_logoBlk_rim_oft[_RIM_RHT] = pOutput->u12_Rim_Result[_RIM_RHT] == pOutput->u12_out_resolution[_RIM_RHT]? 0 : pParam->u8_LogoBlkRimHOffset;
	u8_logoBlk_rim_oft[_RIM_TOP] = pOutput->u12_Rim_Result[_RIM_TOP] == pOutput->u12_out_resolution[_RIM_TOP]? 0 : pParam->u8_LogoBlkRimVOffset;
	u8_logoBlk_rim_oft[_RIM_BOT] = pOutput->u12_Rim_Result[_RIM_BOT] == pOutput->u12_out_resolution[_RIM_BOT]? 0 : pParam->u8_LogoBlkRimVOffset;

	pOutput->u8_LogoRim_Blk[_RIM_LFT] = (pOutput->u12_Rim_Result[_RIM_LFT] >> pOutput->u8_logo_blkH_sft_bit) + u8_logoBlk_rim_oft[_RIM_LFT];
	pOutput->u8_LogoRim_Blk[_RIM_RHT] = (pOutput->u12_Rim_Result[_RIM_RHT] >> pOutput->u8_logo_blkH_sft_bit) - u8_logoBlk_rim_oft[_RIM_RHT];
	pOutput->u8_LogoRim_Blk[_RIM_TOP] = (pOutput->u12_Rim_Result[_RIM_TOP] >> pOutput->u8_logo_blkV_sft_bit) + u8_logoBlk_rim_oft[_RIM_TOP];
	//pOutput->u8_LogoRim_Blk[_RIM_BOT] = (pOutput->u12_Rim_Result[_RIM_BOT] >> pOutput->u8_logo_blkV_sft_bit) - u8_logoBlk_rim_oft[_RIM_BOT];
	if(pOutput->u1_RimCompflag){
		pOutput->u8_LogoRim_Blk[_RIM_BOT] = (pOutput->u12_Rim_Result[_RIM_BOT] >> pOutput->u8_logo_blkV_sft_bit);
	}else{
		pOutput->u8_LogoRim_Blk[_RIM_BOT] = (pOutput->u12_Rim_Result[_RIM_BOT] >> pOutput->u8_logo_blkV_sft_bit)- u8_logoBlk_rim_oft[_RIM_BOT];
	}
	pOutput->u8_LogoRim_Blk[_RIM_BOT] = _CLIP_(pOutput->u8_LogoRim_Blk[_RIM_BOT], 0, 132);
	

	//pixel rim
	u8_logoPix_rim_oft[_RIM_LFT] = pOutput->u12_Rim_Result[_RIM_LFT] == pOutput->u12_out_resolution[_RIM_LFT]? 0 : pParam->u8_LogoPixRimHOffset;
	u8_logoPix_rim_oft[_RIM_RHT] = pOutput->u12_Rim_Result[_RIM_RHT] == pOutput->u12_out_resolution[_RIM_RHT]? 0 : pParam->u8_LogoPixRimHOffset;
	u8_logoPix_rim_oft[_RIM_TOP] = pOutput->u12_Rim_Result[_RIM_TOP] == pOutput->u12_out_resolution[_RIM_TOP]? 0 : pParam->u8_LogoPixRimVOffset;
	u8_logoPix_rim_oft[_RIM_BOT] = pOutput->u12_Rim_Result[_RIM_BOT] == pOutput->u12_out_resolution[_RIM_BOT]? 0 : pParam->u8_LogoPixRimVOffset;

	pOutput->u12_LogoRim_Pxl[_RIM_LFT] = (pOutput->u12_Rim_Result[_RIM_LFT] >> pOutput->u8_logo_pixH_sft_bit) + u8_logoPix_rim_oft[_RIM_LFT];
	pOutput->u12_LogoRim_Pxl[_RIM_RHT] = (pOutput->u12_Rim_Result[_RIM_RHT] >> pOutput->u8_logo_pixH_sft_bit) - u8_logoPix_rim_oft[_RIM_RHT];
	pOutput->u12_LogoRim_Pxl[_RIM_TOP] = (pOutput->u12_Rim_Result[_RIM_TOP] >> pOutput->u8_logo_pixV_sft_bit) + u8_logoPix_rim_oft[_RIM_TOP];
	//pOutput->u12_LogoRim_Pxl[_RIM_BOT] = (pOutput->u12_Rim_Result[_RIM_BOT] >> pOutput->u8_logo_pixV_sft_bit) - u8_logoPix_rim_oft[_RIM_BOT];
	if(pOutput->u1_RimCompflag){
		pOutput->u12_LogoRim_Pxl[_RIM_BOT] = (pOutput->u12_Rim_Result[_RIM_BOT] >> pOutput->u8_logo_pixV_sft_bit);
	}else{
		pOutput->u12_LogoRim_Pxl[_RIM_BOT] = (pOutput->u12_Rim_Result[_RIM_BOT] >> pOutput->u8_logo_pixV_sft_bit)- u8_logoPix_rim_oft[_RIM_BOT];
	}
	pOutput->u12_LogoRim_Pxl[_RIM_BOT] = _CLIP_(pOutput->u12_LogoRim_Pxl[_RIM_BOT], 0, 531);

	#if 0
	printk("===== RimCtrl_Logo_Rim_Convert =========\n");	
	printk("u1_RimCompflag >> [%d]\n",pOutput->u1_RimCompflag);
	printk("Pxl[_RIM_BOT] >> [%d,%d],[%d],[%d]\n",pOutput->u8_LogoRim_Pxl[_RIM_BOT],pOutput->u12_Rim_Result[_RIM_BOT] ,pOutput->u8_logo_pixV_sft_bit,u8_logoPix_rim_oft[_RIM_BOT]);
	printk("Blk[_RIM_BOT] >> [%d,%d],[%d],[%d]\n",pOutput->u12_LogoRim_Blk[_RIM_BOT],pOutput->u12_Rim_Result[_RIM_BOT],pOutput->u8_logo_blkV_sft_bit,u8_logoBlk_rim_oft[_RIM_BOT]);
	printk("===== rim cur =========\n");
	#endif
	
}

VOID RimCtrl_Film5RgnPos_Convert(const _PARAM_RimCtrl *pParam, _OUTPUT_RimCtrl *pOutput)
{
/*		const _PQLCONTEXT *s_pContext = GetPQLContext();*/
	UBYTE  u4_Res_H_Divide = (pOutput->u4_outResolution_pre == _PQL_OUT_1920x1080 || pOutput->u4_outResolution_pre == _PQL_OUT_1920x540) ? 2 : 
		                     			(pOutput->u4_outResolution_pre == _PQL_OUT_3840x2160 || pOutput->u4_outResolution_pre == _PQL_OUT_3840x1080 ||pOutput->u4_outResolution_pre == _PQL_OUT_3840x540) ? 3 : 0;
    	UBYTE  u4_Res_V_Divide = (pOutput->u4_outResolution_pre == _PQL_OUT_1920x1080 || pOutput->u4_outResolution_pre == _PQL_OUT_3840x1080) ? 1 : 
	                         			(pOutput->u4_outResolution_pre == _PQL_OUT_3840x2160) ? 2 : 0;

	UINT16 u12_filmResolutionB = pOutput->u12_out_resolution[_RIM_BOT]>>u4_Res_V_Divide;
	UINT16 u12_filmResolutionR = pOutput->u12_out_resolution[_RIM_RHT]>>u4_Res_H_Divide;

	UINT16 u10_film5Region1_v0 = 0;
	UINT16 u10_film5Region1_v1 = 0;
	UINT16 u10_film5Region2_v0 = 0;
	UINT16 u10_film5Region2_v1 = 0;
	UINT16 u10_film5Region3_h0 = 0;
	UINT16 u10_film5Region3_h1 = 0;
	UINT16 u10_film5Region4_h0 = 0;
	UINT16 u10_film5Region4_h1 = 0;

	//UINT32 u32_rb_val = 0;
	
	// K2:PQL_ReadHDF
	// Need to confirm t/b/l/r order
	//ReadRegister((FRC_TOP__KME_IPME__reg_ipme_fmdet_5region1_v0_ADDR), 0, 31, &u32_rb_val);//top
	u10_film5Region1_v0 = 0x4;//(u32_rb_val) & 0x3ff;
	u10_film5Region1_v1 = 0x58;//(u32_rb_val>>10) & 0x3ff;
	//ReadRegister((FRC_TOP__KME_IPME__reg_ipme_fmdet_5region2_v0_ADDR), 0, 31, &u32_rb_val);//bottom
	u10_film5Region2_v0 = 0x1bc;//(u32_rb_val) & 0x3ff;
	u10_film5Region2_v1 = 0x20d;//(u32_rb_val>>10) & 0x3ff;
	//ReadRegister((FRC_TOP__KME_IPME__reg_ipme_fmdet_5region3_h0_ADDR), 0, 31, &u32_rb_val);//left
	u10_film5Region3_h0 = 0x2;//(u32_rb_val) & 0x3ff;
	u10_film5Region3_h1 = 0x60;//(u32_rb_val>>10) & 0x3ff;
	//ReadRegister((FRC_TOP__KME_IPME__reg_ipme_fmdet_5region4_h0_ADDR), 0, 31, &u32_rb_val);//bottom
	u10_film5Region4_h0 = 0x140;//(u32_rb_val) & 0x3ff;
	u10_film5Region4_h1 = 0x1d4;//(u32_rb_val>>10) & 0x3ff;


	//top
	{	
		UINT16 u10_rgnHWshift = ((pOutput->u12_ipme_rim[_RIM_TOP]>u10_film5Region1_v0) ? (pOutput->u12_ipme_rim[_RIM_TOP]-u10_film5Region1_v0) : 0);
		u10_film5Region1_v0 += u10_rgnHWshift + 13;
		u10_film5Region1_v1 += u10_rgnHWshift;
		u10_film5Region1_v1 = (u10_film5Region1_v1<u10_film5Region1_v0) ? u10_film5Region1_v0 : u10_film5Region1_v1;
	}

	//bot
	{
		UINT16 u10_rgnHWshift = ((pOutput->u12_ipme_rim[_RIM_BOT]<u10_film5Region2_v1) ? (u10_film5Region2_v1-pOutput->u12_ipme_rim[_RIM_BOT]) : 0);
		u10_film5Region2_v0 -= u10_rgnHWshift;
		u10_film5Region2_v1 -= u10_rgnHWshift;//(u10_rgnHWshift + 13);
		u10_film5Region2_v0 = (u10_film5Region2_v0>u10_film5Region2_v1) ? u10_film5Region2_v1 : u10_film5Region2_v0;
	}

	//left
	{
		UINT16 u10_rgnHWshift = ((pOutput->u12_ipme_rim[_RIM_LFT]>u10_film5Region3_h0) ? (pOutput->u12_ipme_rim[_RIM_LFT]-u10_film5Region3_h0) : 0);
		u10_film5Region3_h0 += u10_rgnHWshift + 13;
		u10_film5Region3_h1 += u10_rgnHWshift;
		u10_film5Region3_h1 = (u10_film5Region3_h1<u10_film5Region3_h0) ? u10_film5Region3_h0 : u10_film5Region3_h1;
	}
	
	//right
	{
		UINT16 u10_rgnHWshift = ((pOutput->u12_ipme_rim[_RIM_RHT]<u10_film5Region4_h1) ? (u10_film5Region4_h1-pOutput->u12_ipme_rim[_RIM_RHT]) : 0);
		u10_film5Region4_h0 -= u10_rgnHWshift;
		u10_film5Region4_h1 -= (u10_rgnHWshift + 4);
		u10_film5Region4_h0 = (u10_film5Region4_h0>u10_film5Region4_h1) ? u10_film5Region4_h1 : u10_film5Region4_h0;
	}


	u10_film5Region1_v0 = _CLIP_UBOUND_(u10_film5Region1_v0, u12_filmResolutionB-1);
	u10_film5Region1_v1 = _CLIP_UBOUND_(u10_film5Region1_v1, u12_filmResolutionB-1);
	u10_film5Region2_v0 = _CLIP_UBOUND_(u10_film5Region2_v0, u12_filmResolutionB-1);
	u10_film5Region2_v1 = _CLIP_UBOUND_(u10_film5Region2_v1, u12_filmResolutionB-1);
	u10_film5Region3_h0 = _CLIP_UBOUND_(u10_film5Region3_h0, u12_filmResolutionR-1);
	u10_film5Region3_h1 = _CLIP_UBOUND_(u10_film5Region3_h1, u12_filmResolutionR-1);
	u10_film5Region4_h0 = _CLIP_UBOUND_(u10_film5Region4_h0, u12_filmResolutionR-1);
	u10_film5Region4_h1 = _CLIP_UBOUND_(u10_film5Region4_h1, u12_filmResolutionR-1);


 	pOutput->u12_5Rgn1_v0 = u10_film5Region1_v0;
	pOutput->u12_5Rgn1_v1 = u10_film5Region1_v1;
	pOutput->u12_5Rgn2_v0 = u10_film5Region2_v0;
	pOutput->u12_5Rgn2_v1 = u10_film5Region2_v1;
	pOutput->u12_5Rgn3_h0 = u10_film5Region3_h0;
	pOutput->u12_5Rgn3_h1 = u10_film5Region3_h1;
	pOutput->u12_5Rgn4_h0 = u10_film5Region4_h0;
	pOutput->u12_5Rgn4_h1 = u10_film5Region4_h1;

	// update 12rgn rim
     	pOutput->u12_12Rgn_v0 = u10_film5Region1_v0;
	pOutput->u12_12Rgn_v1 = u10_film5Region1_v1;
	pOutput->u12_12Rgn_v2 = u10_film5Region2_v0;
	pOutput->u12_12Rgn_v3 = u10_film5Region2_v1;
	pOutput->u12_12Rgn_h0 = u10_film5Region3_h0;
	pOutput->u12_12Rgn_h1 = u10_film5Region3_h1;
	pOutput->u12_12Rgn_h2 = (u10_film5Region3_h1+u10_film5Region4_h0)/2;
	pOutput->u12_12Rgn_h3 = u10_film5Region4_h0;
	pOutput->u12_12Rgn_h4 = u10_film5Region4_h1;	
 
     
}

VOID RimCtrl_Film_Rim_Convert(const _PARAM_RimCtrl *pParam, _OUTPUT_RimCtrl *pOutput)
{

	UBYTE  u4_Res_H_Divide = (pOutput->u4_outResolution_pre == _PQL_OUT_1920x1080 || pOutput->u4_outResolution_pre == _PQL_OUT_1920x540) ? 2 : 
		                     			(pOutput->u4_outResolution_pre == _PQL_OUT_3840x2160 || pOutput->u4_outResolution_pre == _PQL_OUT_3840x1080 ||pOutput->u4_outResolution_pre == _PQL_OUT_3840x540) ? 3 : 0;
    	UBYTE  u4_Res_V_Divide = (pOutput->u4_outResolution_pre == _PQL_OUT_1920x1080 || pOutput->u4_outResolution_pre == _PQL_OUT_3840x1080) ? 1 : 
	                         			(pOutput->u4_outResolution_pre == _PQL_OUT_3840x2160) ? 2 : 0;

	//pOutput->u12_ipme_rim[_RIM_LFT] = pOutput->u12_me1_vbuf_pix_rim[_RIM_LFT]/2+2; //two pixel
	//pOutput->u12_ipme_rim[_RIM_RHT] = pOutput->u12_me1_vbuf_pix_rim[_RIM_RHT]/2-2; //two pixel
	//pOutput->u12_ipme_rim[_RIM_TOP] = pOutput->u12_me1_vbuf_pix_rim[_RIM_TOP]+2;
	//pOutput->u12_ipme_rim[_RIM_BOT] = pOutput->u12_me1_vbuf_pix_rim[_RIM_BOT]-2;

	pOutput->u12_ipme_rim[_RIM_LFT] = ((pOutput->u12_Rim_Result[_RIM_LFT] + (1<<u4_Res_H_Divide)/2) >> u4_Res_H_Divide)+2; 
	pOutput->u12_ipme_rim[_RIM_RHT] = (pOutput->u12_Rim_Result[_RIM_RHT] >> u4_Res_H_Divide)-2; 
	pOutput->u12_ipme_rim[_RIM_TOP] = ((pOutput->u12_Rim_Result[_RIM_TOP] + (1<<u4_Res_V_Divide)/2) >> u4_Res_V_Divide)+2;
	pOutput->u12_ipme_rim[_RIM_BOT] = (pOutput->u12_Rim_Result[_RIM_BOT] >> u4_Res_V_Divide)-2;



	RimCtrl_Film5RgnPos_Convert(pParam, pOutput);
}

VOID RimCtrl_Dh_Rim_Convert(const _PARAM_RimCtrl *pParam, _OUTPUT_RimCtrl *pOutput)
{
	pOutput->u9_dh_blk_oftrim[_RIM_LFT] = pOutput->u12_me1_vbuf_blk_rim[_RIM_LFT];
	pOutput->u9_dh_blk_oftrim[_RIM_RHT] = (pOutput->u12_out_resolution[_RIM_RHT] >> pOutput->u8_me1_blkH_sft_bit) - pOutput->u12_me1_vbuf_blk_rim[_RIM_RHT];
	pOutput->u9_dh_blk_oftrim[_RIM_TOP] = pOutput->u12_me1_vbuf_blk_rim[_RIM_TOP];
	pOutput->u9_dh_blk_oftrim[_RIM_BOT] = (pOutput->u12_out_resolution[_RIM_BOT] >> pOutput->u8_me1_blkV_sft_bit) - pOutput->u12_me1_vbuf_blk_rim[_RIM_BOT];

	pOutput->u9_dh_blk_rim[_RIM_LFT] = pOutput->u12_Rim_Result[_RIM_LFT] >> pOutput->u8_dh_BlkH_sft_bit;
	pOutput->u9_dh_blk_rim[_RIM_RHT] = pOutput->u12_Rim_Result[_RIM_RHT] >> pOutput->u8_dh_BlkH_sft_bit;
	pOutput->u9_dh_blk_rim[_RIM_TOP] = pOutput->u12_Rim_Result[_RIM_TOP] >> pOutput->u8_dh_BlkV_sft_bit;
	pOutput->u9_dh_blk_rim[_RIM_BOT] = pOutput->u12_Rim_Result[_RIM_BOT] >> pOutput->u8_dh_BlkV_sft_bit;
}

VOID RimCtrl_Output(const _PARAM_RimCtrl *pParam, _OUTPUT_RimCtrl *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	
	if (pOutput->u1_RimChange == 1)
	{
#if 0
		//Vetical.
		if (pOutput->u12_out_resolution[_RIM_BOT] == 2159)
		{
			pOutput->u8_me1_pixV_sft_bit    = 2; // 540
			pOutput->u8_me1_blkV_sft_bit    = 3; // 270

			pOutput->u8_me2_pixV_sft_bit    = 3; // 270
			pOutput->u8_me2_BlkV_sft_bit    = 4; // 135
			
			pOutput->u8_dh_BlkV_sft_bit 	= 3; // 270

			pOutput->u8_logo_pixV_sft_bit   = 2; // 540
			pOutput->u8_logo_blkV_sft_bit   = 4; // 135
		}
		else if (pOutput->u12_out_resolution[_RIM_BOT] == 1079)
		{
			pOutput->u8_me1_pixV_sft_bit    = 1; // 540
			pOutput->u8_me1_blkV_sft_bit    = 3; // 135

			pOutput->u8_me2_pixV_sft_bit    = 2; // 270
			pOutput->u8_me2_BlkV_sft_bit    = 3; // 135

			pOutput->u8_dh_BlkV_sft_bit 	= 3; // 135

			pOutput->u8_logo_pixV_sft_bit   = 1; // 540
			pOutput->u8_logo_blkV_sft_bit   = 3; // 135
		}
		else // if (pOutput->u12_out_resolution[_RIM_BOT] == 539)
		{
			pOutput->u8_me1_pixV_sft_bit    = 1; // 270
			pOutput->u8_me1_blkV_sft_bit    = 2; // 135

			pOutput->u8_me2_pixV_sft_bit    = 2; // 135
			pOutput->u8_me2_BlkV_sft_bit    = 3; // 68

			pOutput->u8_dh_BlkV_sft_bit 	= 2; // 135

			pOutput->u8_logo_pixV_sft_bit   = 0; // 540
			pOutput->u8_logo_blkV_sft_bit   = 2; // 135
		}

		// Horizontal.
		if (pOutput->u12_out_resolution[_RIM_RHT] == 1919)
		{
			pOutput->u8_me1_pixH_sft_bit    = 1; // 960
			pOutput->u8_me1_blkH_sft_bit    = 3; // 240

			pOutput->u8_me2_pixH_sft_bit    = 2; // 480
			pOutput->u8_me2_BlkH_sft_bit    = 3; // 240

			pOutput->u8_dh_BlkH_sft_bit 	= 3; // 240

			pOutput->u8_logo_pixH_sft_bit   = 1; // 960
			pOutput->u8_logo_blkH_sft_bit   = 3; // 240
		}
		else // Hactive = 3839
		{
			pOutput->u8_me1_pixH_sft_bit    = 2; // 960
			pOutput->u8_me1_blkH_sft_bit    = 3; // 480

			pOutput->u8_me2_pixH_sft_bit    = 3; // 480
			pOutput->u8_me2_BlkH_sft_bit	= 4; // 240

			pOutput->u8_dh_BlkH_sft_bit 	= 3; // 480

			pOutput->u8_logo_pixH_sft_bit   = 2; // 960
			pOutput->u8_logo_blkH_sft_bit   = 4; // 240
		}
#else
		pOutput->u8_me1_pixH_sft_bit	= s_pContext->_external_data._stc_memc_module_ratio.u8_in_me1_pix_hsft;
		pOutput->u8_me1_pixV_sft_bit	= s_pContext->_external_data._stc_memc_module_ratio.u8_in_me1_pix_vsft;
		pOutput->u8_me1_blkH_sft_bit	= s_pContext->_external_data._stc_memc_module_ratio.u8_in_me1_blk_hsft; 
		pOutput->u8_me1_blkV_sft_bit	= s_pContext->_external_data._stc_memc_module_ratio.u8_in_me1_blk_vsft; 

		pOutput->u8_me2_pixH_sft_bit	= s_pContext->_external_data._stc_memc_module_ratio.u8_in_me2_pix_hsft;
		pOutput->u8_me2_pixV_sft_bit	= s_pContext->_external_data._stc_memc_module_ratio.u8_in_me2_pix_vsft;
		pOutput->u8_me2_BlkH_sft_bit	= s_pContext->_external_data._stc_memc_module_ratio.u8_in_me2_blk_hsft; 
		pOutput->u8_me2_BlkV_sft_bit	= s_pContext->_external_data._stc_memc_module_ratio.u8_in_me2_blk_vsft; 

		pOutput->u8_dh_BlkH_sft_bit 	= s_pContext->_external_data._stc_memc_module_ratio.u8_in_dh_blk_hsft;	
		pOutput->u8_dh_BlkV_sft_bit 	= s_pContext->_external_data._stc_memc_module_ratio.u8_in_dh_blk_vsft;

		pOutput->u8_logo_pixH_sft_bit	= s_pContext->_external_data._stc_memc_module_ratio.u8_in_logo_pix_hsft;
		pOutput->u8_logo_pixV_sft_bit	= s_pContext->_external_data._stc_memc_module_ratio.u8_in_logo_pix_vsft;
		pOutput->u8_logo_blkH_sft_bit	= s_pContext->_external_data._stc_memc_module_ratio.u8_in_logo_blk_hsft;	
		pOutput->u8_logo_blkV_sft_bit	= s_pContext->_external_data._stc_memc_module_ratio.u8_in_logo_blk_vsft;

		//LogPrintf(DBG_MSG,"u8_me1_pixH_sft_bit = %d, u8_me1_pixV_sft_bit = %d\r\n",pOutput->u8_me1_pixH_sft_bit,pOutput->u8_me1_pixV_sft_bit);
		//LogPrintf(DBG_MSG,"u8_me1_blkH_sft_bit = %d, u8_me1_blkV_sft_bit = %d\r\n",pOutput->u8_me1_blkH_sft_bit,pOutput->u8_me1_blkV_sft_bit);
		//LogPrintf(DBG_MSG,"u8_me2_pixH_sft_bit = %d, u8_me2_pixV_sft_bit = %d\r\n",pOutput->u8_me2_pixH_sft_bit,pOutput->u8_me2_pixV_sft_bit);
		//LogPrintf(DBG_MSG,"u8_me2_BlkH_sft_bit = %d, u8_me2_BlkV_sft_bit = %d\r\n",pOutput->u8_me2_BlkH_sft_bit,pOutput->u8_me2_BlkV_sft_bit);
		//LogPrintf(DBG_MSG,"u8_dh_BlkH_sft_bit = %d, u8_dh_BlkV_sft_bit = %d\r\n",pOutput->u8_dh_BlkH_sft_bit,pOutput->u8_dh_BlkV_sft_bit);
		//LogPrintf(DBG_MSG,"u8_logo_pixH_sft_bit = %d, u8_logo_pixV_sft_bit = %d\r\n",pOutput->u8_logo_pixH_sft_bit,pOutput->u8_logo_pixV_sft_bit);
		//LogPrintf(DBG_MSG,"u8_logo_blkH_sft_bit = %d, u8_logo_blkV_sft_bit = %d\r\n",pOutput->u8_logo_blkH_sft_bit,pOutput->u8_logo_blkV_sft_bit);
#endif
		RimCtrl_ME1_Rim_Convert(pParam, pOutput);
		RimCtrl_ME2_Rim_Convert(pParam, pOutput);	
		RimCtrl_Logo_Rim_Convert(pParam, pOutput);
		RimCtrl_MC_Rim_Convert(pParam, pOutput);

		RimCtrl_Film_Rim_Convert(pParam, pOutput);
		RimCtrl_Dh_Rim_Convert(pParam, pOutput);
	}
}

VOID RimCtrl_Stable(const _PARAM_RimCtrl *pParam, _OUTPUT_RimCtrl *pOutput)
{
#if 0
    int i = 0; 
    for (i = 0; i < _RIM_NUM; i ++)
    {
         pOutput->s8_StableCnt[i] = (_ABS_(pOutput->u12_Rim_Cur[i]-pOutput->u12_Rim_Pre_Det[i]) < 3) ? (pOutput->s8_StableCnt[i] + 1) :\
		 	                        ((_ABS_(pOutput->u12_Rim_Cur[i]-pOutput->u12_Rim_Pre_Det[i]) < 8) ? pOutput->s8_StableCnt[i] :\
		 	                        ((_ABS_(pOutput->u12_Rim_Cur[i]-pOutput->u12_Rim_Pre_Det[i]) < 16) ? (pOutput->s8_StableCnt[i] - 1) : 0));
		 pOutput->s8_StableCnt[i] = (pOutput->s8_StableCnt[i] > 32) ? 32 : ((pOutput->s8_StableCnt[i] < 0) ? 0 : pOutput->s8_StableCnt[i]);
    }
#endif
}

VOID RimCtrl_Panning_Detect(const _PARAM_RimCtrl *pParam, _OUTPUT_RimCtrl *pOutput)
{
	//const _PQLCONTEXT *s_pContext = GetPQLContext();
	//UINT16 u16_rb_smv_posCnt, u16_rb_Lmv_posCnt, u16_rb_smv_negCnt, u16_rb_Lmv_negCnt;
	//UINT16 u16_cnt_totalNum = (s_pContext->_output_read_comreg.u8_me1_Vbuf_Hsize_rb * s_pContext->_output_read_comreg.u8_me1_Vbuf_Vsize_rb);
	//UINT16 u16_cnt_th = u16_cnt_totalNum * pParam->u8_PanningCntTH / 255;
	//SINT32 i;
	//UBYTE u8_panning_good_rgn_num = 0;

	//u16_rb_smv_posCnt		 = s_pContext->_output_read_comreg.u17_me_posCnt_0_rb;
	//u16_rb_Lmv_posCnt		 = s_pContext->_output_read_comreg.u17_me_posCnt_1_rb;
	//u16_rb_smv_negCnt		 = s_pContext->_output_read_comreg.u17_me_negCnt_0_rb;
	//u16_rb_Lmv_negCnt		 = s_pContext->_output_read_comreg.u17_me_negCnt_1_rb;

	//for(i=0;i<32;i++)
	//{
	//	if((_ABS_(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]) < pParam->u10_PanningRMVXTH)&&
	//		(_ABS_(s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]) > pParam->u10_PanningRMVYTH)&&
	//		(s_pContext->_output_read_comreg.u12_me_rMV_1st_cnt_rb[i] > pParam->u12_PanningGMVRngCnt)&& 
	//		(s_pContext->_output_read_comreg.u12_me_rMV_1st_unconf_rb[i] < pParam->u12_PanningGMVUnconf))
	//	{
	//		u8_panning_good_rgn_num++;
	//	}
	//}

	//if(((u16_rb_smv_posCnt > u16_cnt_th) || (u16_rb_Lmv_posCnt > u16_cnt_th)) && 
	//	(u8_panning_good_rgn_num >= pParam->u8_PanningGoodRngCntTH))
	//{
	//	pOutput->u8_PanningMode = _PANNING_DOWN;	
	//	//ROSPrintf("[MEMC]::_PANNING_DOWN \r\n");
	//}
	//else if(((u16_rb_smv_negCnt > u16_cnt_th) || (u16_rb_Lmv_negCnt > u16_cnt_th)) && 
	//	    (u8_panning_good_rgn_num >= pParam->u8_PanningGoodRngCntTH))
	//{
	//	pOutput->u8_PanningMode = _PANNING_UP;
	//	//ROSPrintf("[MEMC]::_PANNING_UP \r\n");
	//}
	//else
	//{
	//	pOutput->u8_PanningMode = _PANNING_NORMAL;
	//	//ROSPrintf("[MEMC]::_PANNING_NORMAL \r\n");
	//}
}

//////////////////////////////////////////////////////////////////////////


VOID RimCtrl_Init(_OUTPUT_RimCtrl *pOutput)
{
	UBYTE u8_i = 0;

	pOutput->u4_outResolution_pre         = _PQL_OUT_1920x1080;
	pOutput->u12_out_resolution[_RIM_LFT] = 0;
	pOutput->u12_out_resolution[_RIM_RHT] = 1919;
	pOutput->u12_out_resolution[_RIM_TOP] = 0;
	pOutput->u12_out_resolution[_RIM_BOT] = 1079;
	pOutput->u1_RimControl_pre            = 1;
	pOutput->u1_Resolution_change         = 0;

	for(u8_i=0; u8_i<_RIM_NUM;u8_i++)
	{
		pOutput->u12_Rim_Cur[u8_i] = (u8_i==_RIM_TOP ||u8_i==_RIM_LFT)?0:((u8_i==_RIM_BOT)?2159:3839);	       // current rim  0:top 1:bottom 2:right 3:left 
		pOutput->u12_Rim_Pre[u8_i] = (u8_i==_RIM_TOP ||u8_i==_RIM_LFT)?0:((u8_i==_RIM_BOT)?2159:3839);          // previous rim
		pOutput->u12_Rim_Result[u8_i] = (u8_i==_RIM_TOP ||u8_i==_RIM_LFT)?0:((u8_i==_RIM_BOT)?2159:3839);       // rim result
		pOutput->u12_Rim_Pre_Det[u8_i] = (u8_i==_RIM_TOP ||u8_i==_RIM_LFT)?0:((u8_i==_RIM_BOT)?2159:3839);          // rim result

		pOutput->s8_BiggerCnt[u8_i] = 0;
		pOutput->s8_SmallerCnt[u8_i] = 0;
	}

	pOutput->u12_5Rgn1_v0 = 0x4;
	pOutput->u12_5Rgn1_v1 = 0x58;
	pOutput->u12_5Rgn2_v0 = 0x1bc;
	pOutput->u12_5Rgn2_v1 = 0x20d;
	pOutput->u12_5Rgn3_h0 = 0x2;
	pOutput->u12_5Rgn3_h1 = 0x60;
	pOutput->u12_5Rgn4_h0 = 0x140;
	pOutput->u12_5Rgn4_h1 = 0x1d0;

	pOutput->u12_12Rgn_v0 = 0x4;
	pOutput->u12_12Rgn_v1 = 0x58;
	pOutput->u12_12Rgn_v2 = 0x1bc;
	pOutput->u12_12Rgn_v3 = 0x20d;
	pOutput->u12_12Rgn_h0 = 0x2;
	pOutput->u12_12Rgn_h1 = 0x60;
	pOutput->u12_12Rgn_h2 = 0xd0;
	pOutput->u12_12Rgn_h3 = 0x140;
	pOutput->u12_12Rgn_h4 = 0x1d0;	
}

VOID RimCtrl_DynamicBlackTh(VOID)
{
#if 1
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	
	UBYTE u8_black_th;	
	UBYTE u8_darklevel = (s_pContext->_external_info.u8_DarkLevel/*+u4_black_offset*/);
	#if 1
	UINT32 u32_rb_val = 0;
	UBYTE u1_dynamic_disable;
	static UINT32 cnt =0;
	cnt++;
	ReadRegister(KIWI_REG(FRC_TOP__PQL_0__pql_dummy_ac), &u32_rb_val);/*0xB809B03C*/	
	u1_dynamic_disable = ((u32_rb_val)&0x1);//bit 0
	#endif	
	if (!u1_dynamic_disable)
	{
		if (u8_darklevel < 0x27)
		{
			u8_black_th = 0x27;
		}
		else if (u8_darklevel > 0x40)
		{
			u8_black_th = 0x40;
		}
		else
		{
			u8_black_th = u8_darklevel;
		}
        //u8_black_th = 0xA; // fixed for real black
		WriteRegister(KIWI_REG(FRC_TOP__BBD__BBD_black_th), u8_black_th);
	}
#if 1	
	if((u32_rb_val)&0x2){ //bit 1
		if( cnt%10 == 0 ){
			printk(KERN_ERR "===== [%s], [%d] =========\n",__FUNCTION__, __LINE__);
			printk(KERN_ERR "===== u8_darklevel [%d]=========\n",u8_darklevel);	
		}
	}
#endif

#endif
}


VOID RimCtrl_Rim_Comp(const _PARAM_RimCtrl *pParam, _OUTPUT_RimCtrl *pOutput)
{
	UINT32 BOT_ratio = 0, center_V_ratio = 0, TOP_ratio = 0;
	static UINT32 pre_BOT_ratio = 0, pre_center_V_ratio = 0, pre_TOP_ratio = 0;
	static UBYTE Comp_flag_cnt = 0;
	//UBYTE Comp_flag = 0;
	int ratio_diff = 0;
	UBYTE BOT_Comp_value = 0, TOP_Comp_value = 0;	
#if 1
	UINT32 u32_rb_val = 0;
	//UBYTE u1_dynamic_en;
	//UBYTE u4_black_offset;
	ReadRegister(KIWI_REG(FRC_TOP__PQL_0__pql_dummy_ac), &u32_rb_val);/*0xB809D5AC*/
	//u1_dynamic_en = (u32_rb_val & 0x01);
	//u4_black_offset = ((u32_rb_val>>1) & 0x07);	
#endif	

	TOP_ratio = ((_ABS_( pOutput->u12_Rim_Result[_RIM_TOP] - pOutput->u12_out_resolution[_RIM_TOP]))<<10)>>11;
	center_V_ratio= ((_ABS_( pOutput->u12_Rim_Result[_RIM_BOT] - pOutput->u12_Rim_Result[_RIM_TOP]))<<10)>>11;
	BOT_ratio = ((_ABS_(pOutput->u12_out_resolution[_RIM_BOT] - pOutput->u12_Rim_Result[_RIM_BOT]))<<10)>>11;

	ratio_diff = TOP_ratio-BOT_ratio;
					
	
	if((_ABS_(ratio_diff)>4 && (TOP_ratio>BOT_ratio))|| pOutput->u1_RimTwoSide_balancing == 0){
		pOutput->u1_RimCompflag = 1;
		Comp_flag_cnt = 5;
	}else if(pOutput->u1_RimTwoSide_balancing == 2){
		pOutput->u1_RimCompflag = 2;
		Comp_flag_cnt = 5;
	}else if(((_ABS_(ratio_diff)>4 && _ABS_(ratio_diff)<10) && ((TOP_ratio<60 && TOP_ratio>50) && (BOT_ratio<65 && BOT_ratio>55)) && (BOT_ratio>TOP_ratio)) && pOutput->u1_RimTwoSide_balancing == 1){
		pOutput->u1_RimCompflag = 1;
		Comp_flag_cnt = 5;
	}else if(((_ABS_(ratio_diff)>3 && _ABS_(ratio_diff)<10) && ((TOP_ratio<145 && TOP_ratio>135) && (BOT_ratio<140 && BOT_ratio>130)) && (TOP_ratio>BOT_ratio)) && pOutput->u1_RimTwoSide_balancing == 1){
		pOutput->u1_RimCompflag = 1;
		Comp_flag_cnt = 5;
	}else{	
		Comp_flag_cnt = Comp_flag_cnt>0?(Comp_flag_cnt-1):0;
		if(Comp_flag_cnt == 0){
			pOutput->u1_RimCompflag = 0;
			Comp_flag_cnt = 0;
		}	
	}

#if 1
	if(u32_rb_val&0x20){//bit 5
		pOutput->u1_RimCompflag = 0;
	}

	if(pOutput->u1_RimCompflag == 1){
		BOT_Comp_value = 25;
		TOP_Comp_value =0;
	}else if(pOutput->u1_RimCompflag == 2){		
		BOT_Comp_value = 0;
		TOP_Comp_value = 25;
	}else{
		BOT_Comp_value = 0;//org setting
		TOP_Comp_value = 0;
	}
	
	if(u32_rb_val&0x10){ //bit 4
		printk(KERN_ERR "===== [%s], [%d] =========\n",__FUNCTION__, __LINE__);
		printk(KERN_ERR "===== rim resolution =========\n");	
		printk(KERN_ERR "res_V_size >> %d,%d,%d\n",_ABS_(pOutput->u12_out_resolution[_RIM_BOT] - pOutput->u12_out_resolution[_RIM_TOP]),pOutput->u12_out_resolution[_RIM_BOT],pOutput->u12_out_resolution[_RIM_TOP]);
		printk(KERN_ERR "res_H_size >> %d,%d,%d\n",_ABS_(pOutput->u12_out_resolution[_RIM_RHT] - pOutput->u12_out_resolution[_RIM_LFT]),pOutput->u12_out_resolution[_RIM_RHT],pOutput->u12_out_resolution[_RIM_LFT]);
		printk(KERN_ERR "===== rim result =========\n");	
		printk(KERN_ERR "result_V_size >> %d,%d,%d\n",_ABS_(pOutput->u12_Rim_Result[_RIM_BOT] - pOutput->u12_Rim_Result[_RIM_TOP]),pOutput->u12_Rim_Result[_RIM_BOT],pOutput->u12_Rim_Result[_RIM_TOP]);
		printk(KERN_ERR "result_H_size >> %d,%d,%d\n",_ABS_(pOutput->u12_Rim_Result[_RIM_RHT] - pOutput->u12_Rim_Result[_RIM_LFT]),pOutput->u12_Rim_Result[_RIM_RHT],pOutput->u12_Rim_Result[_RIM_LFT]);
		printk(KERN_ERR "===== rim cur =========\n");
		printk(KERN_ERR "cur_V_size >> %d,%d,%d\n",_ABS_(pOutput->u12_Rim_Cur[_RIM_BOT] - pOutput->u12_Rim_Cur[_RIM_TOP]),pOutput->u12_Rim_Cur[_RIM_BOT],pOutput->u12_Rim_Cur[_RIM_TOP]);
		printk(KERN_ERR "cur_H_size >> %d,%d,%d\n",_ABS_(pOutput->u12_Rim_Cur[_RIM_RHT] - pOutput->u12_Rim_Cur[_RIM_LFT]),pOutput->u12_Rim_Cur[_RIM_RHT],pOutput->u12_Rim_Cur[_RIM_LFT]);
		printk(KERN_ERR "===== ratio check =========\n");
		printk(KERN_ERR "cur_Rim_ratio >> %d,%d,%d\n", TOP_ratio, center_V_ratio, BOT_ratio);
		printk(KERN_ERR "pre_Rim_ratio >> %d,%d,%d\n", pre_TOP_ratio, pre_center_V_ratio, pre_BOT_ratio);
		printk(KERN_ERR "===== final check =========\n");
		printk(KERN_ERR "final_comp_rim >> %d,%d,%d,%d, %d\n", pOutput->u1_RimCompflag, Comp_flag_cnt, BOT_Comp_value, pParam->u8_lbme_pixRim_comp,pOutput->u1_RimTwoSide_balancing);
	}
#endif



#if 0
	if(u1_dynamic_en){
		if(pOutput->u1_RimCompflag!=0){
			BOT_Comp_value = u4_black_offset;//org setting
			TOP_Comp_value = 0;
		}
	}
#endif

	if(TOP_Comp_value > pOutput->u12_Rim_Result[_RIM_TOP]){
		pOutput->u12_Rim_Result[_RIM_TOP] = pOutput->u12_out_resolution[_RIM_TOP];
	}else{	
		pOutput->u12_Rim_Result[_RIM_TOP] = pOutput->u12_Rim_Result[_RIM_TOP] - TOP_Comp_value;
	}
	
	if(pOutput->u12_Rim_Result[_RIM_BOT] + BOT_Comp_value > pOutput->u12_out_resolution[_RIM_BOT]){
		pOutput->u12_Rim_Result[_RIM_BOT] = pOutput->u12_out_resolution[_RIM_BOT];
	}else{
		pOutput->u12_Rim_Result[_RIM_BOT] = pOutput->u12_Rim_Result[_RIM_BOT] + BOT_Comp_value;
	}
	
	pre_BOT_ratio = BOT_ratio;
	pre_center_V_ratio = center_V_ratio;
	pre_TOP_ratio = TOP_ratio;	

}


//Input signal and parameters are connected locally
VOID RimCtrl_Proc(const _PARAM_RimCtrl *pParam, _OUTPUT_RimCtrl *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	RimCtrl_OutResolution_Parse(pOutput);
	//RimCtrl_Panning_Detect(pParam, pOutput);
	if (pParam->u1_RimCtrl_en == 1)
	{
		int i = 0;
		UINT32 rimSize = 0;
		int horizatal_speed = 0;
		int vertical_speed = 0;

		RimCtrl_DynamicBlackTh();
		pOutput->u1_RimChange = 0;
		pOutput->u1_RimCompflag = 0;
		RimCtrl_HW_extract(pParam, pOutput);
		RimCtrl_FastOut(pParam, pOutput);
		RimCtrl_SlowIn(pParam, pOutput);
		RimCtrl_Rim_Comp(pParam, pOutput);//add from K5lp for boundary compensation! Terrence
		RimCtrl_Output(pParam, pOutput);
		//RimCtrl_Stable(pParam, pOutput);

		for (i = 0; i < _RIM_NUM; i ++)
		{
			pOutput->u12_Rim_Pre[i] = pOutput->u12_Rim_Result[i];
			pOutput->u12_Rim_Pre_Det[i] = pOutput->u12_Rim_Cur[i];
		}

		//calculate rim ratio
		rimSize = (pOutput->u12_Rim_Result[_RIM_RHT]-pOutput->u12_Rim_Result[_RIM_LFT] + 1)*
		          (pOutput->u12_Rim_Result[_RIM_BOT]-pOutput->u12_Rim_Result[_RIM_TOP] + 1);
				
		pOutput->u32_rimRatio = (rimSize == 0) ? 128 :(rimSize<<7) / 
								((pOutput->u12_out_resolution[_RIM_RHT]+1)*(pOutput->u12_out_resolution[_RIM_BOT]+1));

		// --------vertical and horizatal motion detect-----
		horizatal_speed = s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb;
		vertical_speed  = s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb;
		#if 0
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[RimCtrl_Proc]horizatal_speed = %d,%d\r\n",s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb);
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[RimCtrl_Proc]vertical_speed = %d,%d\r\n",s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb);		
		#endif
		if(( horizatal_speed <(-90))&&( horizatal_speed >(-220))&&( vertical_speed == 0))
				WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_fsearch_dc_obme_mode_ADDR, 30,30,0x0);
		else
				WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_fsearch_dc_obme_mode_ADDR, 30,30,0x1);
	} 
	else
	{
		pOutput->u1_RimChange = (pOutput->u1_RimControl_pre !=  pParam->u1_RimCtrl_en) ? 1 : 0;
		pOutput->u12_Rim_Result[_RIM_LFT] = pOutput->u12_out_resolution[_RIM_LFT];
		pOutput->u12_Rim_Result[_RIM_RHT] = pOutput->u12_out_resolution[_RIM_RHT];
		pOutput->u12_Rim_Result[_RIM_TOP] = pOutput->u12_out_resolution[_RIM_TOP];
		pOutput->u12_Rim_Result[_RIM_BOT] = pOutput->u12_out_resolution[_RIM_BOT];

		RimCtrl_Output(pParam, pOutput);
	}

	pOutput->u1_RimControl_pre = pParam->u1_RimCtrl_en;
}

