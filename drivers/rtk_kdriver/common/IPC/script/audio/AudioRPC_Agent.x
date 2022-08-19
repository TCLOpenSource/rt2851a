
.insert <RPCBaseDS.h>
.insert <AudioRPCBaseDS.h>
program AUDIO_AGENT {
  version VERSION {
  
 /** General **/
  	HRESULT		AUDIO_RPC_ToSystem_ErrorStatus(AUDIO_RPC_ERROR) = 1;
  	HRESULT		AUDIO_RPC_ToSystem_DeliverFlush(AUDIO_RPC_SENDIO)= 2;
	HRESULT		AUDIO_RPC_ToSystem_EndOfStream(AUDIO_RPC_SENDPIN_LONG)=3;

/** encoder **/
	HRESULT		AUDIO_RPC_ToSystem_ENC_GeneralInfo(rpc_s32_t)=11;
	HRESULT		AUDIO_RPC_ToSystem_ENC_FrameInfo(rpc_s32_t)=12;
	HRESULT		AUDIO_RPC_ToSystem_ENC_EndOfStream(rpc_s32_t)=13;
  
/** decoder **/
	HRESULT		AUDIO_RPC_ToSystem_DEC_GeneralInfo(AUDIO_RPC_DEC_GENERAL_INFO)=21;
	HRESULT		AUDIO_RPC_ToSystem_DEC_FrameInfo(AUDIO_RPC_DEC_GENERAL_INFO)=22;

/** AIN **/
  HRESULT		AUDIO_RPC_ToSystem_AIN_FrameInfo(rpc_s32_t)=26;

/*
	In parse mode, if audio agent still send a lot of RPC call; they mighr be jammed in the system side.
Howevr, if we do not call AUDIO_RPC_ToSystem_DEC_FrameInfo in parsing mode, it is OK!
*/
/** AIO & PP **/

/* This function will tell the system whether the Karaoke mode is supported in the bit stream.
   for AC3, bsmod = 7 means Karaoke mode. In this case, x = 1. Otherwise, x = 0 */

	HRESULT		AUDIO_RPC_ToSystem_AO_KaraokeModeIndicate(rpc_s32_t)=31;
	HRESULT		AUDIO_RPC_ToSystem_AO_ReportSPDIFStatus(AUDIO_RPC_SPDIF_CHANNEL_STATUS)=32;	
	HRESULT		AUDIO_RPC_ToSystem_AO_PostMastership(AUDIO_RPC_MASTERSHIP)=33;
	HRESULT		AUDIO_RPC_ToSystem_AO_ConfigDACDone(rpc_s32_t)=34;  

/* The acknoledge of AUDIO_RPC_ToSystem_AO_ConfigDACDone is to tell the SCPU to unmute the DAC by I2C again */

/** temp **/
  
/*  	HRESULT		AUDIO_RPC_ToSystem_UpdateReadPtr(AUDIO_RPC_READPACK)=101;*/
/*  	HRESULT		AUDIO_RPC_ToSystem_UpdateWritePtr(AUDIO_RPC_WRITEPACK)=102;*/
/*  	HRESULT		AUDIO_RPC_ToSystem_PCMFormat(AUDIO_RPC_PCMFORMAT)=103;
  		HRESULT		AUDIO_RPC_ToSystem_FrameBoundary(AUDIO_RPC_FRAME_BOUNDARY)=104;
*/  	
/* MISCELLANEOUS */
	HRESULT		AUDIO_RPC_ToSystem_DAC_HardwareMute(rpc_s32_t)=40;
    HRESULT     AUDIO_RPC_ToSystem_ADC_HardwareMute(rpc_s32_t)=41;
    RPCRES_LONG AUDIO_RPC_ToSystem_HashCheck(AUDIO_RPC_HASH)=42;

/* SYSTEM CO-PROCESS*/
    AUDIO_RPC_IOBUFFER AUDIO_RPC_ToSystem_CreateIOBuf(rpc_s32_t)=43;
    HRESULT            AUDIO_RPC_ToSystem_FreeIOBuf(rpc_s32_t)=44;
    AUDIO_RPC_BUFFER   AUDIO_RPC_ToSystem_CreateBuf(rpc_s32_t)=45;
    HRESULT            AUDIO_RPC_ToSystem_FreeBuf(rpc_s32_t)=46;
    SYSTEM_PROCESS_RES AUDIO_RPC_ToSystem_Process_Open(SYSTEM_PROCESS_INFO)=47;
    HRESULT            AUDIO_RPC_ToSystem_Process_Close(SYSTEM_PROCESS_INFO)=48;

/* HDMI */
	HRESULT		AUDIO_RPC_ToSystem_HDMI_Mute(rpc_s32_t)=49;
	HRESULT		AUDIO_RPC_ToSystem_HDMI_Setting(struct AUDIO_HDMI_SETTING_INFO *)=50;

	HRESULT		AUDIO_RPC_ToSystem_AudioHaltDone(rpc_s32_t)=51;  
	HRESULT		AUDIO_RPC_ToSystem_PrivateInfo(AUDIO_RPC_PRIVATEINFO_TO_SYS) = 52;

/* KERNEL */
	HRESULT		AUDIO_RPC_ToKernel_SimpleCommand(AUDIO_RPC_TO_KERNEL_PARAMETER) = 100;

  }=0;
}=202;

