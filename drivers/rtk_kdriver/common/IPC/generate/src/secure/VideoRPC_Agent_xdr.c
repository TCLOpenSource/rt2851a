/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <VideoRPC_Agent.h>
#include <RPCBaseDS.h>
#include <VideoRPCBaseDS.h>

bool_t
xdr_VIDEO_RPC_SUBPIC_INFO (XDR *xdrs, VIDEO_RPC_SUBPIC_INFO *objp)
{
	 if (!xdr_ENUM_VIDEO_SUBPIC_INFO_TYPE (xdrs, &objp->infoType))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->pixel_depth))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->st_mode))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->last_in_page))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->buf_idx))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->start_x))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->start_y))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->width))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->height))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->pitch))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->pixel_addr))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->pixel_addr_end))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->CLUT, 256,
		sizeof (u_int), (xdrproc_t) xdr_u_int))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->video_width))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->video_height))
		 return FALSE;
	 if (!xdr_uint64_t (xdrs, &objp->sPTS))
		 return FALSE;
	 if (!xdr_uint64_t (xdrs, &objp->ePTS))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->dst_x))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->dst_y))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->dst_width))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->dst_height))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->valid))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RPC_ENC_ELEM_GEN_INFO (XDR *xdrs, VIDEO_RPC_ENC_ELEM_GEN_INFO *objp)
{
	 if (!xdr_ENUM_DVD_VIDEO_ENCODER_OUTPUT_INFO_TYPE (xdrs, &objp->infoType))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->videoInputSource))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->encoderType))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->TVSystemFormat))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->videoRCMode))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->horizontalResolusion))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->video_STD_buffer_size))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->init_STD_buffer_fullness))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->videoBitRate))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->gop_M))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->gop_N))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->numOfGOPsPerVOBU))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RPC_ENC_ELEM_FRAME_INFO (XDR *xdrs, VIDEO_RPC_ENC_ELEM_FRAME_INFO *objp)
{
	 if (!xdr_ENUM_DVD_VIDEO_ENCODER_OUTPUT_INFO_TYPE (xdrs, &objp->infoType))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->pictureNumber))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->pictureType))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->topFieldFirst))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->numOfField))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->newScene))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->PTShigh))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->PTSlow))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->DTShigh))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->DTSlow))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->VBIData))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->VBVfullness))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->resumedVideoFrame))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->newVOBUStart))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->KeyFrame))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->AGCDetection))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->CCData))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->CCStatus))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->frameSize))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RPC_ENDOFSTREAM (XDR *xdrs, VIDEO_RPC_ENDOFSTREAM *objp)
{
	 if (!xdr_long (xdrs, &objp->SP_instanceID))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RPC_DEC_JPEG_INFO (XDR *xdrs, VIDEO_RPC_DEC_JPEG_INFO *objp)
{
	 if (!xdr_long (xdrs, &objp->instanceID))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->destWidth))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->destHeight))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->eventID))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->reserved2))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->reserved3))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RPC_DEC_JPEG_CTRL (XDR *xdrs, VIDEO_RPC_DEC_JPEG_CTRL *objp)
{
	 if (!xdr_long (xdrs, &objp->decodedWidth))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->decodedHeight))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->bitstreamEnd))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->cancel))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->status))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->orgJpegWidth))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->orgJpegHeight))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->croppedJpegX))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->croppedJpegY))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->croppedJpegWidth))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->croppedJpegHeight))
		 return FALSE;
	 if (!xdr_VIDEO_JPEG_ROTATION (xdrs, &objp->orientation))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->percentage))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->reserved3))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->JPEG_CTRL))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->BITMAP_CTRL))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->TIFF_CTRL))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->GIF_CTRL))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->PNG_CTRL))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->Format1_CTRL))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->Format2_CTRL))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->Format3_CTRL))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->bitstreamStart))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->outInstanceID))
		 return FALSE;
	 if (!xdr_VIDEO_IMG_TYPE (xdrs, &objp->imgType))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->pScratchBase))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->scratchSize))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->WEBP_CTRL))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->PSEUDOIMG_CTRL))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->HEIF_CTRL))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RPC_ENC_VBID_WSS_INFO (XDR *xdrs, VIDEO_RPC_ENC_VBID_WSS_INFO *objp)
{
	 if (!xdr_ENUM_DVD_VIDEO_ENCODER_OUTPUT_INFO_TYPE (xdrs, &objp->infoType))
		 return FALSE;
	 if (!xdr_ENUM_TVD_VIDEO_FORMAT (xdrs, &objp->video_format))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->flg_no_signal))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->copy_protected))
		 return FALSE;
	 if (!xdr_VO_VBI_ASPECT_RATIO (xdrs, &objp->vbi_aspect_ratio))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RPC_ENC_PAUSE_INFO (XDR *xdrs, VIDEO_RPC_ENC_PAUSE_INFO *objp)
{
	 if (!xdr_ENUM_DVD_VIDEO_ENCODER_OUTPUT_INFO_TYPE (xdrs, &objp->infoType))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->pausedPTSHigh))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->pausedPTSLow))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->pausedDTSHigh))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->pausedDTSLow))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->resumedPTSHigh))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->resumedPTSLow))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->resumedDTSHigh))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->resumedDTSLow))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->pictureType))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RPC_ENC_AUTOPAUSE_INFO (XDR *xdrs, VIDEO_RPC_ENC_AUTOPAUSE_INFO *objp)
{
	 if (!xdr_ENUM_DVD_VIDEO_ENCODER_OUTPUT_INFO_TYPE (xdrs, &objp->infoType))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->isFinish))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RPC_DEC_ERROR_INFO (XDR *xdrs, VIDEO_RPC_DEC_ERROR_INFO *objp)
{
	 if (!xdr_long (xdrs, &objp->instanceID))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->errCode))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RPC_ENC_AUTOPAUSE (XDR *xdrs, VIDEO_RPC_ENC_AUTOPAUSE *objp)
{
	 if (!xdr_long (xdrs, &objp->instanceID))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->isFinish))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_DEC_FRM_MSG (XDR *xdrs, VIDEO_DEC_FRM_MSG *objp)
{
	 if (!xdr_ENUM_VIDEO_MSG_INFO_TYPE (xdrs, &objp->msgType))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->frame_type))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->PTSL))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->PTSH))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved1))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved2))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved3))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved4))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved5))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved6))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved7))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved8))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved9))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved10))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved11))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved12))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved13))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved14))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved15))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved16))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved17))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved18))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved19))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_DEC_PIC_MSG (XDR *xdrs, VIDEO_DEC_PIC_MSG *objp)
{
	 if (!xdr_ENUM_VIDEO_MSG_INFO_TYPE (xdrs, &objp->msgType))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->frame_rate))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->bit_rate))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->resol))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->disp_resol))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->actXY))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->actWH))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->sarWH))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->prog_info))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->ratio_info))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->afd_3d))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->PTSL))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->PTSH))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->color_transf))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->coeffs_overscan))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->dispXY0))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->dispXY1))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->dispXY2))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->whitePointXY))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->maxL))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->minL))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->videoFullRangeFlag))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->hdr_type))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RPC_SCALER_MESSAGE (XDR *xdrs, VIDEO_RPC_SCALER_MESSAGE *objp)
{
	 if (!xdr_u_int (xdrs, &objp->msgType))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->msgSubType))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->msgIntData))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->msgBodyByteSize))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->msgDataPtrAddr))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->isValidate))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->isSmoothtoggle))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RPC_DEC_MESSAGE (XDR *xdrs, VIDEO_RPC_DEC_MESSAGE *objp)
{
	 if (!xdr_long (xdrs, &objp->instanceID))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->message))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RPC_VOUT_MESSAGE (XDR *xdrs, VIDEO_RPC_VOUT_MESSAGE *objp)
{
	 if (!xdr_long (xdrs, &objp->instanceID))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->message))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->PTShigh))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->PTSlow))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved1))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved2))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved3))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->reserved4))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RPC_DEC_FRAME_INFO (XDR *xdrs, VIDEO_RPC_DEC_FRAME_INFO *objp)
{
	 if (!xdr_long (xdrs, &objp->instanceID))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->PTSH))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->PTSL))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->frame_type))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RPC_DEC_PIC_INFO (XDR *xdrs, VIDEO_RPC_DEC_PIC_INFO *objp)
{
	 if (!xdr_long (xdrs, &objp->instanceID))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->frame_rate))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->aspect_ratio))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->hor_size))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->ver_size))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->bit_rate))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->afd))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->prog_seq))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->prog_frame))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->activeX))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->activeY))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->activeW))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->activeH))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->disp_hor_size))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->disp_ver_size))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->aspect_ratio_idc))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->sar_width))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->sar_height))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->info_3D))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RPC_DEC_MEDIA_INFO (XDR *xdrs, VIDEO_RPC_DEC_MEDIA_INFO *objp)
{
	 if (!xdr_long (xdrs, &objp->instanceID))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->width))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->height))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->frame_rate))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->aspect_ratio_n))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->aspect_ratio_d))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->level))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->profile))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->type_3D))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->par_width))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->par_height))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->type_LR))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->type_Scan))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->afd))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RPC_TO_KERNEL_PARAMETER (XDR *xdrs, VIDEO_RPC_TO_KERNEL_PARAMETER *objp)
{
	 if (!xdr_u_int (xdrs, &objp->command))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->param1))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->param2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RPC_TRANSITION_EFFECT_CTRL (XDR *xdrs, VIDEO_RPC_TRANSITION_EFFECT_CTRL *objp)
{
	 if (!xdr_long (xdrs, &objp->cancel))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->percentage))
		 return FALSE;
	 if (!xdr_VO_RECTANGLE (xdrs, &objp->winStart_A))
		 return FALSE;
	 if (!xdr_VO_RECTANGLE (xdrs, &objp->winEnd_A))
		 return FALSE;
	 if (!xdr_VO_RECTANGLE (xdrs, &objp->winStart_B))
		 return FALSE;
	 if (!xdr_VO_RECTANGLE (xdrs, &objp->winEnd_B))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->timeForKenBurns))
		 return FALSE;
	return TRUE;
}