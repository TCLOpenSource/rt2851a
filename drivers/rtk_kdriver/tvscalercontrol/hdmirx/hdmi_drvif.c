/*=============================================================
 * Copyright (c)      Realtek Semiconductor Corporation, 2016
 *
 * All rights reserved.
 *
 *============================================================*/

/*======================= Description ============================
 * file:    hdmi_drvif.c
 * author:  kevin_wang
 * date:    2018/4/15
 * version: 4.0
 *
 *============================================================*/
#include "hdmi_common.h"
#include "hdmi_mac.h"
#include "hdmi_hdr.h"
#include "cea_861.h"
#include <ioctrl/scaler/vfe_cmd_id.h> // for vfe_hdmi_vsi_t

/**********************************************************************************************
*
*   Generic API
*
**********************************************************************************************/


/*------------------------------------------------------
 * Func : drvif_Hdmi_GetHDMIMode
 *
 * Desc : get current HDMI mode of current HDMI port
 *
 * Parm : N/A
 *
 * Retn : MODE_DVI  : DVI mode
 *        MODE_HDMI : HDMI 1.4/2.0
 *        MODE_HDMI21 : HDMI 2.1
 *        MODE_UNKNOW : unknow mode
 *------------------------------------------------------*/
HDMI_DVI_MODE_T drvif_Hdmi_GetHDMIMode(void)
{
    unsigned char port = newbase_hdmi_get_current_display_port();
    return (HDMI_DVI_MODE_T)newbase_hdmi_get_hdmi_mode(port);
}


/*------------------------------------------------------
 * Func : drvif_Hdmi_WatchDogApply
 *
 * Desc : Enable/Disable HDMI watch dog
 *
 * Parm : Enable : 0 : disabled, others : enabled
 *        Condition : watch dog flags
 *             HDMI_WD_VIDEO_COND :
 *             HDMI_WD_AUDIO_COND :
 *             HDMI_WD_VSC_COND :
 *
 * Retn : TRUE  : HDMI video is stable
 *        FALSE : HDMI video is not stable
 *------------------------------------------------------*/
HDMI_bool drvif_Hdmi_WatchDogApply(unsigned char Enable, unsigned char Condition)
{
    // [RL6557-463] watch dog has been removed in K5L
    // Humm.. Should we remove it here ??
    return TRUE;
}



/*------------------------------------------------------
 * Func : drvif_Hdmi_CheckMode
 *
 * Desc : Check HDMI status of current HDMI port. this function is
 *        called by VSC periodically to check HDMI status
 *
 * Parm : N/A
 *
 * Retn : TRUE  : HDMI status check is OK
 *        FALSE : some error detected
 *------------------------------------------------------*/
HDMI_bool drvif_Hdmi_CheckMode(void)
{
    return newbase_hdmi_check_mode();
}


/*------------------------------------------------------
 * Func : drvif_Hdmi_OutputDisable
 *
 * Desc : Disable HDMI output for Power Saving
 *
 * Parm : on : 0 : not disable hdmi output
 *             others : disable hdmi output
 *
 * Retn : N/A
 *------------------------------------------------------*/
void drvif_Hdmi_OutputDisable(unsigned char on)
{
#if ENABLE_HDMI_VIDEO_OUTPUT_DISABLE
    newbase_hdmi_output_disable(on);
#endif    
}


/*------------------------------------------------------
 * Func : drvif_Hdmi_SetNoPolarityInverse
 *
 * Desc : Enable/disable no polarity inverse funciton. this function
 *        will be called by VSC to control
 *
 * Parm : on_off : enable / disable
 *
 * Retn : TRUE  : HDMI status check is OK
 *        FALSE : some error detected
 *------------------------------------------------------*/
void drvif_Hdmi_SetNoPolarityInverse(unsigned char on_off)
{
    set_no_polarity_inverse(on_off);
}

/*------------------------------------------------------
 * Func : drvif_Hdmi_IsHpdHigh
 *
 * Desc : Check if Hot plug is high
 *
 * Parm : port: speficed physical port
 *
 * Retn : TRUE  : HPD is high
 *        FALSE : HPD is low
 *------------------------------------------------------*/
HDMI_bool drvif_Hdmi_IsHpdHigh(unsigned char port)
{
    return newbase_hdmi_get_hpd(port);
}

/*------------------------------------------------------
 * Func : drvif_Hdmi_Is5VHigh
 *
 * Desc : Check if 5V is high
 *
 * Parm : port: speficed physical port
 *
 * Retn : TRUE  : 5V is high
 *        FALSE : 5V is low
 *------------------------------------------------------*/
HDMI_bool drvif_Hdmi_Is5VHigh(unsigned char port)
{
    return newbase_hdmi_get_5v_state(port);
}

/*------------------------------------------------------
 * Func : drvif_Hdmi_get_pcb_earc_port_index
 *
 * Desc : Get eARC support port form pcb
 *
 * Parm : N/A
 *
 * Retn : PORT_ID  : eARC port id
 *        < 0 : invalid eARC port
 *------------------------------------------------------*/
HDMI_PCB_ARC_EARC_T drvif_Hdmi_get_pcb_earc_port_index(void)
{
    return newbase_hdmi_get_pcb_earc_port();
}

//-------------------------------------------------------------------------
//  Video Related
//-------------------------------------------------------------------------

/*------------------------------------------------------
 * Func : drvif_Hdmi_GetFrlMode
 *
 * Desc : Get FRL Mode
 *
 * Parm : none
 *
 * Retn : 0  : TMDS mode, non HDMI2.1
 *         1~6: FRL mode, HDMI2.1 Frl rate
 *------------------------------------------------------*/
unsigned char drvif_Hdmi_GetFrlMode(void)
{
    return 0;
}


/*------------------------------------------------------
 * Func : drvif_Hdmi_GetInterlace
 *
 * Desc : Check video is Interlace / progressive
 *
 * Parm : N/A
 *
 * Retn : TRUE  : video is in interace mode
 *        FALSE : video is in progressive mode
 *------------------------------------------------------*/
HDMI_bool drvif_Hdmi_GetInterlace(void)
{
    unsigned char port = newbase_hdmi_get_current_display_port();
    return newbase_hdmi_get_is_interlace(port);
}


/*------------------------------------------------------
 * Func : drvif_Hdmi_GetColorSpace
 *
 * Desc : Check Color space of current HDMI channel
 *
 * Parm : N/A
 *
 * Retn : COLOR_RGB
 *        COLOR_YUV422
 *        COLOR_YUV444
 *        COLOR_YUV420 -> Force to YUV444 for back-end
 *------------------------------------------------------*/
HDMI_COLOR_SPACE_T drvif_Hdmi_GetColorSpace(void)
{
    unsigned char port = newbase_hdmi_get_current_display_port();
    return (HDMI_COLOR_SPACE_T)newbase_hdmi_get_colorspace(port);
}

/*------------------------------------------------------
 * Func : drvif_Hdmi_GetRawColorSpace
 *
 * Desc : Check Real Color space of current HDMI channel
 *
 * Parm : N/A
 *
 * Retn : COLOR_RGB
 *        COLOR_YUV422
 *        COLOR_YUV444
 *        COLOR_YUV420
 *------------------------------------------------------*/
HDMI_COLOR_SPACE_T drvif_Hdmi_GetRawColorSpace(void)
{
    unsigned char port = newbase_hdmi_get_current_display_port();
    return (HDMI_COLOR_SPACE_T)newbase_hdmi_get_colorspace_reg(port);
}

/*------------------------------------------------------
 * Func : drvif_Hdmi_EnableBypassYUV420Engine
 *
 * Desc : Enable bypass yuv 420 engine
 *
 * Parm : enable=1, bypass YUV420 engine, use for TMDS 4K120 YUV420; enable=0, reset to normal flow.
 *
 * Retn : TRUE  : Apply successed
 *        FALSE : Apply failed
 *------------------------------------------------------*/
HDMI_bool drvif_Hdmi_EnableBypassYUV420Engine(unsigned char enable)
{
    unsigned char port = newbase_hdmi_get_current_display_port();

    lib_hdmi_force_bypass_yuv420_engine_en(port, enable);
    return true;
}


/*------------------------------------------------------
 * Func : drvif_Hdmi_GetColorimetry
 *
 * Desc : Get Color Colorimetry
 *
 * Parm : N/A
 *
 * Retn : HDMI_COLORIMETRY_NOSPECIFIED = 0,
 *        HDMI_COLORIMETRY_601,
 *        HDMI_COLORIMETRY_709,
 *        HDMI_COLORIMETRY_XYYCC601,
 *        HDMI_COLORIMETRY_XYYCC709,
 *        HDMI_COLORIMETRY_SYCC601,
 *        HDMI_COLORIMETRY_ADOBE_YCC601,
 *        HDMI_COLORIMETRY_ADOBE_RGB,
 *------------------------------------------------------*/
HDMI_COLORIMETRY_T drvif_Hdmi_GetColorimetry(void)
{
    unsigned char port = newbase_hdmi_get_current_display_port();
    return (HDMI_COLORIMETRY_T)newbase_hdmi_get_colorimetry(port);
}


/*------------------------------------------------------
 * Func : drvif_Hdmi_GetColorDepth
 *
 * Desc : Get Color Depth
 *
 * Parm : N/A
 *
 * Retn : HDMI_COLOR_DEPTH_8B =0,
 *        HDMI_COLOR_DEPTH_10B,
 *        HDMI_COLOR_DEPTH_12B,
 *        HDMI_COLOR_DEPTH_16B,
 *------------------------------------------------------*/
HDMI_COLOR_DEPTH_T drvif_Hdmi_GetColorDepth(void)
{
    unsigned char port = newbase_hdmi_get_current_display_port();
    return (HDMI_COLOR_DEPTH_T)newbase_hdmi_get_colordepth(port);
}


/*------------------------------------------------------
 * Func : drvif_Hdmi_GetRgbYuvRangeMode
 *
 * Desc : Get Range of RGB/YUV of current HDMI port. this function will
 *        be called by
 *
 * Parm : N/A
 *
 * Retn : MODE_RAG_DEFAULT
 *        MODE_RAG_LIMIT
 *        MODE_RAG_LIMIT
 *------------------------------------------------------*/
HDMI_RGB_YUV_RANGE_MODE_T drvif_Hdmi_GetRgbYuvRangeMode(void)
{
    unsigned char port = newbase_hdmi_get_current_display_port();
    return (HDMI_RGB_YUV_RANGE_MODE_T)newbase_hdmi_get_color_range(port);
}


/*------------------------------------------------------
 * Func : drvif_Hdmi_GetReal3DFomat
 *
 * Desc : Get Real 3D format of current HDMI port
 *
 * Parm : N/A
 *
 * Retn :  HDMI3D_FRAME_PACKING /
 *         HDMI3D_FIELD_ALTERNATIVE
 *         HDMI3D_LINE_ALTERNATIVE = 2,
 *         HDMI3D_SIDE_BY_SIDE_FULL = 3,
 *         HDMI3D_L_DEPTH = 4,
 *         HDMI3D_L_DEPTH_GPX = 5,
 *         HDMI3D_TOP_AND_BOTTOM =6,
 *         HDMI3D_FRAMESEQUENCE=7,
 *         HDMI3D_SIDE_BY_SIDE_HALF = 8,
 *         // --- new 3D format ---
 *         HDMI3D_LINE_BY_LINE = 9,
 *         HDMI3D_VERTICAL_STRIPE = 10,
 *         HDMI3D_CHECKER_BOARD = 11,
 *         HDMI3D_REALID = 12,
 *         HDMI3D_SENSIO = 13,
 *         // -------------------
 *         HDMI3D_RSV1,
 *         HDMI3D_2D_ONLY,
 *         ....
 *------------------------------------------------------*/
HDMI_3D_T drvif_Hdmi_GetReal3DFomat(void)
{
    unsigned char port = newbase_hdmi_get_current_display_port();
    return (HDMI_3D_T)newbase_hdmi_get_3d_structure(port);
}


/*------------------------------------------------------
 * Func : drvif_Hdmi_CheckStableBeforeDisplay
 *
 * Desc : Check Video is stable before display. This function will be
 *        called by VSC driver before VSC start display video.
 *
 * Parm : N/A
 *
 * Retn : TRUE  : HDMI video is stable
 *        FALSE : HDMI video is not stable
 *------------------------------------------------------*/
HDMI_bool drvif_Hdmi_CheckStableBeforeDisplay(void)
{
    return newbase_hdmi_check_stable_before_display();
}

/*------------------------------------------------------
 * Func : drvif_Hdmi_GetCurrentPhysicalPort
 *
 * Desc : Get current physical display port from HDMI driver.
 *
 * Parm : N/A
 *
 * Retn : current physical display port 
 *------------------------------------------------------*/
unsigned char  drvif_Hdmi_GetCurrentPhysicalPort(void)
{
    return newbase_hdmi_get_current_display_port();
}

/*------------------------------------------------------
 * Func : drvif_Hdmi_IsAvmute
 *
 * Desc : Check AVMUTE status on current port
 *
 * Parm : N/A
 *
 * Retn : TRUE  : AVMUTE on is from HDMI MAC 
 *        FALSE :  AVMUTE off is from HDMI MAC 
 *------------------------------------------------------*/
 HDMI_bool drvif_Hdmi_IsAvmute(void)
 {
     unsigned char port = newbase_hdmi_get_current_display_port();
     return (lib_hdmi_get_avmute(port) && !lib_hdmi_get_bch_2bit_error(port));
 }

//-------------------------------------------------------------------------
//  Audio Related
//-------------------------------------------------------------------------


/*------------------------------------------------------
 * Func : drvif_Hdmi_IsAudioLock
 *
 * Desc : Check HDMI Audio is locked.
 *
 * Parm : N/A
 *
 * Retn : TRUE  : HDMI Audio is locked
 *        FALSE : HDMI Audio is not locked
 *------------------------------------------------------*/
char drvif_Hdmi_IsAudioLock(void)
{
    return (newbase_hdmi_audio_get_current_status() != AUDIO_FSM_AUDIO_START);
}



//-------------------------------------------------------------------------
//  Info Pack Related
//-------------------------------------------------------------------------


/*------------------------------------------------------
 * Func : drvif_Hdmi_GetVsInfoFrame
 *
 * Desc : Get Vendor Specific Info Frame of currenct HDMI port
 *
 * Parm : pVsInfo : Vendor specific info frame output
 *
 * Retn : TRUE  : successed
 *        FALSE : failed
 *------------------------------------------------------*/
HDMI_bool drvif_Hdmi_GetVsInfoFrame(HDMI_VSI_T *pVsInfo)
{
    unsigned char port = newbase_hdmi_get_current_display_port();
    return newbase_hdmi_get_vs_infoframe(port, pVsInfo);
}

/*------------------------------------------------------
 * Func : drvif_Hdmi_GetDolbyVsInfoFrame
 *
 * Desc : Get DolbyVision Vendor Specific Info Frame of currenct HDMI port
 *
 * Parm : info_frame : DolbyVision Vendor specific info frame output
 *
 * Retn : TRUE  : successed
 *        FALSE : failed
 *------------------------------------------------------*/
HDMI_bool drvif_Hdmi_GetDolbyVsInfoFrame(vfe_hdmi_vsi_t *info_frame)
{
    HDMI_VSI_T vsi_info;
    unsigned char port = newbase_hdmi_get_current_display_port();

    memset(info_frame, 0, sizeof(vfe_hdmi_vsi_t));

    if(0 == newbase_hdmi_get_dvs_infoframe(port, &vsi_info))
        return false;

    info_frame->header.type    = vsi_info.VSIF_TypeCode;
    info_frame->header.version = vsi_info.VSIF_Version;
    info_frame->header.length  = vsi_info.Length;
    info_frame->checksum       = vsi_info.Checksum;

    memcpy(info_frame->ieee_reg_id, vsi_info.Reg_ID, VFE_HDMI_VENDOR_SPECIFIC_REGID_LEN);
    memcpy(info_frame->payload, vsi_info.Payload, sizeof(vsi_info.Payload) < VFE_HDMI_VENDOR_SPECIFIC_PAYLOAD_LEN
		                                ? sizeof(vsi_info.Payload): VFE_HDMI_VENDOR_SPECIFIC_PAYLOAD_LEN) ;

    info_frame->vidoe_fmt      = newbase_hdmi_get_video_format(port);
    info_frame->struct_3d      = newbase_hdmi_get_3d_structure(port);
    info_frame->extdata_3d     = lib_hdmi_get_3d_extdata(port);
    info_frame->vic            = lib_hdmi_get_vsi_vic(port);;
    info_frame->packetStatus   = VFE_HDMI_PACKET_STATUS_UPDATED;

    return true;
}

/*------------------------------------------------------
 * Func : drvif_Hdmi_GetHDR10pVsInfoFrame
 *
 * Desc : Get HDR10+ Vendor Specific Info Frame of currenct HDMI port
 *
 * Parm : info_frame : HDR10+ Vendor specific info frame output
 *
 * Retn : TRUE  : successed
 *        FALSE : failed
 *------------------------------------------------------*/
HDMI_bool drvif_Hdmi_GetHDR10pVsInfoFrame(vfe_hdmi_vsi_t *info_frame)
{
    HDMI_VSI_T vsi_info;
    unsigned char port = newbase_hdmi_get_current_display_port();

    memset(info_frame, 0, sizeof(vfe_hdmi_vsi_t));

    if(0 == newbase_hdmi_get_hdr10p_infoframe(port, &vsi_info))
        return false;

    info_frame->header.type    = vsi_info.VSIF_TypeCode;
    info_frame->header.version = vsi_info.VSIF_Version;
    info_frame->header.length  = vsi_info.Length;
    info_frame->checksum       = vsi_info.Checksum;

    memcpy(info_frame->ieee_reg_id, vsi_info.Reg_ID, VFE_HDMI_VENDOR_SPECIFIC_REGID_LEN);
    memcpy(info_frame->payload, vsi_info.Payload, (sizeof(vsi_info.Payload)<VFE_HDMI_VENDOR_SPECIFIC_PAYLOAD_LEN)? sizeof(vsi_info.Payload):VFE_HDMI_VENDOR_SPECIFIC_PAYLOAD_LEN) ;

    info_frame->vidoe_fmt      = newbase_hdmi_get_video_format(port);
    info_frame->struct_3d      = newbase_hdmi_get_3d_structure(port);
    info_frame->extdata_3d     = lib_hdmi_get_3d_extdata(port);
    info_frame->vic            = lib_hdmi_get_vsi_vic(port);;
    info_frame->packetStatus   = VFE_HDMI_PACKET_STATUS_UPDATED;

    return true;
}

/*------------------------------------------------------
 * Func : drvif_Hdmi_GetAviInfoFrame
 *
 * Desc : Get AVI Info Frame of currenct HDMI port
 *
 * Parm : pAviInfo : AVI info frame output (16 bytes)
 *
 * Retn : TRUE  : successed
 *        FALSE : failed
 *------------------------------------------------------*/
HDMI_bool drvif_Hdmi_GetAviInfoFrame(HDMI_AVI_T *pAviInfo)
{
    unsigned char port = newbase_hdmi_get_current_display_port();
    return newbase_hdmi_get_avi_infoframe(port, pAviInfo);
}

/*------------------------------------------------------
 * Func : drvif_Hdmi_GetSpdInfoFrame
 *
 * Desc : Get SPD Info Frame of currenct HDMI port
 *
 * Parm : pSpdInfo : SPD info frame output (28 bytes)
 *
 * Retn : TRUE  : successed
 *        FALSE : failed
 *------------------------------------------------------*/
HDMI_bool drvif_Hdmi_GetSpdInfoFrame(HDMI_SPD_T *pSpdInfo)
{
    unsigned char port = newbase_hdmi_get_current_display_port();
    return newbase_hdmi_get_spd_infoframe(port, pSpdInfo);
}


/*------------------------------------------------------
 * Func : drvif_Hdmi_GetAudioInfoFrame
 *
 * Desc : Get Audio Info Frame of currenct HDMI port
 *
 * Parm : pAudioInfo : Audio info frame output (13 bytes)
 *
 * Retn : TRUE  : successed
 *        FALSE : failed
 *------------------------------------------------------*/
HDMI_bool drvif_Hdmi_GetAudioInfoFrame(HDMI_AUDIO_T *pAudioInfo)
{
    unsigned char port = newbase_hdmi_get_current_display_port();
    return newbase_hdmi_get_audio_infoframe(port, pAudioInfo);
}


/*------------------------------------------------------
 * Func : drvif_Hdmi_IsDRMInfoReady
 *
 * Desc : Check if DRM info is received
 *
 * Parm : N/A
 *
 * Retn : TRUE  : DRM info is ready
 *        FALSE : DRM info is not ready
 *------------------------------------------------------*/
HDMI_bool drvif_Hdmi_IsDRMInfoReady(void)
{
    return newbase_hdmi_is_drm_info_ready();
}



/*------------------------------------------------------
 * Func : drvif_Hdmi_GetDrmInfoFrame
 *
 * Desc : Get DRM Info Frame of currenct HDMI port
 *
 * Parm : pAudioInfo : Audio info frame output (29 bytes)
 *
 * Retn : TRUE  : successed
 *        FALSE : failed
 *------------------------------------------------------*/
HDMI_bool drvif_Hdmi_GetDrmInfoFrame(HDMI_DRM_T *pDrmInfo)
{
    unsigned char port = newbase_hdmi_get_current_display_port();
    return newbase_hdmi_get_drm_infoframe(port, pDrmInfo);
}

/*------------------------------------------------------
 * Func : drvif_Hdmi_GetEmpPacket
 *
 * Desc : Get Specified EMP packet Info Frame of currenct HDMI port
 *
 * Parm : type: specified emp packet type, pkt_buf: array pointer, len: input array length
 *
 * Retn : >0  : real length of specified emp type packet
 *        =0 : get data fail
 *------------------------------------------------------*/
int drvif_Hdmi_GetEmpPacket(vfe_hdmi_em_type_e type, unsigned char* pkt_buf, unsigned short len)
{
	unsigned char port = newbase_hdmi_get_current_display_port();

	if (pkt_buf == NULL)
	{
		HDMI_EMG("[drvif_Hdmi_GetEmpPacket port:%d] type=%d, len=%d, pkt_buf is NULL \n", port, type, len);
		return 0;
	}

	switch(type)
	{
	case KADP_VFE_HDMI_EMP_VSEMDS:		
		return (len >= EM_VSEM_INFO_LEN) ? newbase_hdmi_get_vsem_emp(port, pkt_buf) : FALSE;

	case KADP_VFE_HDMI_EMP_HDRDM:		
		return (len >= MAX_EM_HDR_INFO_LEN) ? newbase_hdmi_get_hdr_emp(port, pkt_buf) : FALSE;

	case KADP_VFE_HDMI_EMP_VTEM:		
		return (len >= EM_VTEM_INFO_LEN) ? newbase_hdmi_get_vtem_emp(port, pkt_buf) : FALSE;

	case KADP_VFE_HDMI_EMP_CVTEM:
		return (len >= EM_CVTEM_INFO_LEN) ? newbase_hdmi_get_cvtem_emp(port, pkt_buf) : FALSE;

	default:
		return 0;
	}
}

HDMI_bool drvif_Hdmi_GetVRREnable(void)
{
    unsigned char port = newbase_hdmi_get_current_display_port();
    return newbase_hdmi_get_vrr_enable(port);
}

#define FREE_SYNC_SPD_DEBUG
#define AMD_FREESYNC_DEBUG_MESSAGE_TIMEOUT   2000
unsigned int  hdmi_amd_vsdb_debug_en = 0;
unsigned int  hdmi_amd_vsdb_debug_threshold = AMD_FREESYNC_DEBUG_MESSAGE_TIMEOUT;
unsigned long g_amd_vsdb_debug_message_timeout = 0;

HDMI_bool drvif_Hdmi_GetAMDFreeSyncStatus(HDMI_AMD_FREE_SYNC_INFO* p_info)
{
    unsigned char port = newbase_hdmi_get_current_display_port();
    HDMI_SPD_T spd;

    memset(p_info, 0, sizeof(HDMI_AMD_FREE_SYNC_INFO));

    if (newbase_hdmi_get_spd_infoframe(port, &spd))
    {
        // Note : the checksum byte of is removed.
        unsigned char* p_pb = (unsigned char*) spd.VendorName;
        unsigned char* p_pb2 = (unsigned char*) spd.ProductDesc;
        unsigned char oui = (p_pb[2]<<16) + (p_pb[1]<<8) + p_pb[0];

        if (spd.ver==1 && spd.len == 8 && oui==IEEE_OUI_AMD_VSDB)
        {
            p_info->version = 1;
            p_info->freesync_supported = (p_pb[5]) & 0x1;
            p_info->freesync_enabled   = (p_pb[5]>>1) & 0x1;
            p_info->freesync_activate  = (p_pb[5]>>2) & 0x1;
            p_info->min_refresh_rate   = (p_pb[6]);
            p_info->max_refresh_rate   = (p_pb[7]);

            if (hdmi_amd_vsdb_debug_en || time_after(jiffies, g_amd_vsdb_debug_message_timeout))
            {
                HDMI_WARN("GetAMDFreeSyncStatus : AMD SPD (V1), fs_support=%d, fs_en=%d, fs_act=%d, rate=%d~%d\n",
                    p_info->freesync_supported,
                    p_info->freesync_enabled,
                    p_info->freesync_activate,
                    p_info->min_refresh_rate,
                    p_info->max_refresh_rate);

                g_amd_vsdb_debug_message_timeout = jiffies + msecs_to_jiffies(hdmi_amd_vsdb_debug_threshold);
            }
            return TRUE;
        }
        else if (spd.ver==2 && spd.len == 0xA && oui==IEEE_OUI_AMD_VSDB)
        {
            p_info->version = 2;
            p_info->freesync_supported        = (p_pb[5])    & 0x1;
            p_info->freesync_enabled          = (p_pb[5]>>1) & 0x1;
            p_info->freesync_activate         = (p_pb[5]>>2) & 0x1;
            p_info->native_color_space_active = (p_pb[5]>>3) & 0x1;
            p_info->brightness_control_active = (p_pb[5]>>4) & 0x1;
            p_info->local_diming_disalbe      = (p_pb[5]>>5) & 0x1;
            p_info->min_refresh_rate          = (p_pb[6]);
            p_info->max_refresh_rate          = (p_pb[7]);
            p_info->srgb_eotf_active          = (p_pb2[0])    & 0x1;
            p_info->bt709_eotf_active         = (p_pb2[0]>>1) & 0x1;
            p_info->gamma_2p2_eotf_active     = (p_pb2[0]>>2) & 0x1;
            p_info->gamma_2p6_eotf_active     = (p_pb2[0]>>3) & 0x1;
            p_info->brightness_control        = (p_pb2[1]);

            if (hdmi_amd_vsdb_debug_en || time_after(jiffies, g_amd_vsdb_debug_message_timeout))
            {
                HDMI_WARN("GetAMDFreeSyncStatus : AMD SPD (V2), fs_support=%d, fs_en=%d, fs_act=%d, ncs_act=%d, bright_ctrl=%d, ld_disable=%d, rate=%d~%d ...\n",
                    p_info->freesync_supported,
                    p_info->freesync_enabled,
                    p_info->freesync_activate,
                    p_info->native_color_space_active,
                    p_info->brightness_control_active,
                    p_info->local_diming_disalbe,
                    p_info->min_refresh_rate,
                    p_info->max_refresh_rate);
                
                g_amd_vsdb_debug_message_timeout = jiffies + msecs_to_jiffies(hdmi_amd_vsdb_debug_threshold);
            }
            return TRUE;
        }
        else
        {
            if (hdmi_amd_vsdb_debug_en)
            {
                HDMI_WARN("GetAMDFreeSyncStatus : not AMD VSIF, SPD (Ver=%d, Len=%d, DATA={%02x, %02x, %02x, %02x, %02x, %02x, %02x, %02x, %02x, %02x, %02x})\n",
                    spd.ver, spd.len, p_pb[0], p_pb[1], p_pb[2], p_pb[3], p_pb[4], p_pb[5], p_pb[6], p_pb[7], p_pb2[0], p_pb2[1], p_pb2[2]);
            }
        }
    }

    return FALSE;
}

HDMI_bool drvif_Hdmi_GetAMDFreeSyncEnable(void)
{
    HDMI_AMD_FREE_SYNC_INFO fs_info;
    
    if (drvif_Hdmi_GetAMDFreeSyncStatus(&fs_info)==TRUE && fs_info.freesync_enabled)
        return TRUE;

    return FALSE;
}

HDMI_bool drvif_Hdmi_GetALLMEnable(void)
{
    unsigned char allm_mode = 0;
    unsigned char port = newbase_hdmi_get_current_display_port();
    
    if (newbase_hdmi_get_fvs_allm(port, &allm_mode) && allm_mode )
        return TRUE;
    
    return FALSE;
}

HDMI_bool drvif_Hdmi_GetDolbyL11Content(unsigned char get_data[4])
{
    unsigned char port = newbase_hdmi_get_current_display_port();

    if(newbase_hdmi_get_dolby_L11_content(port, get_data))
        return TRUE;
    else
        return FALSE;
}

/**********************************************************************************************
*
*   HDCP Related
*
**********************************************************************************************/


/*------------------------------------------------------
 * Func : drvif_Hdmi_HdcpEnabled
 *
 * Desc : Check if HDCP enabled on current HDMI port
 *
 * Parm : N/A
 *
 * Retn : TRUE  : successed
 *        FALSE : failed
 *------------------------------------------------------*/
unsigned char drvif_Hdmi_HdcpEnabled(void)
{
    unsigned char port = newbase_hdmi_get_current_display_port();
    return (newbase_hdcp_get_auth_mode(port)!=HDCP_OFF);
}

/*------------------------------------------------------
 * Func : drvif_Hdmi_SetClkPixelMode
 *
 * Desc : Set clock pixel mode
 *
 * Parm : pixel_mode=0, 1 pixel mode; pixel_mode=1, 2 pixel mode;
 *
 * Retn : TRUE  : Apply successed
 *        FALSE : Apply failed
 *------------------------------------------------------*/
HDMI_bool drvif_Hdmi_SetClkPixelMode(unsigned char pixel_mode)
{
    unsigned char port = newbase_hdmi_get_current_display_port();

    if(pixel_mode > HDMI_MAC_1_PIXEL_MODE)
    {
        HDMI_EMG("[drvif_Hdmi_SetClkPixelMode port=%d] invalid pixel mode =%d (HW supports 1 pixel mode only)\n", port, pixel_mode);
        return FALSE; // invalid value
    }

    // do nothing...
    return TRUE;
}


