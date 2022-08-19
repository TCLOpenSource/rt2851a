/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _AUDIORPC_AGENT_H_RPCGEN
#define _AUDIORPC_AGENT_H_RPCGEN

#include <RPCstruct.h>

#include "AudioRPC_Agent_data.h"

#ifdef __cplusplus
extern "C" {
#endif

#include <RPCBaseDS.h>
#include <AudioRPCBaseDS.h>

#define AUDIO_AGENT 202
#define VERSION 0

struct REG_STRUCT * AUDIO_AGENT_0_register(struct REG_STRUCT *rnode);

#if defined(__STDC__) || defined(__cplusplus)
#define AUDIO_RPC_ToSystem_ErrorStatus 1
extern  HRESULT * AUDIO_RPC_ToSystem_ErrorStatus_0(AUDIO_RPC_ERROR *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_ErrorStatus_0_svc(AUDIO_RPC_ERROR *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_ErrorStatus_0_svc)(AUDIO_RPC_ERROR *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_DeliverFlush 2
extern  HRESULT * AUDIO_RPC_ToSystem_DeliverFlush_0(AUDIO_RPC_SENDIO *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_DeliverFlush_0_svc(AUDIO_RPC_SENDIO *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_DeliverFlush_0_svc)(AUDIO_RPC_SENDIO *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_EndOfStream 3
extern  HRESULT * AUDIO_RPC_ToSystem_EndOfStream_0(AUDIO_RPC_SENDPIN_LONG *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_EndOfStream_0_svc(AUDIO_RPC_SENDPIN_LONG *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_EndOfStream_0_svc)(AUDIO_RPC_SENDPIN_LONG *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_ENC_GeneralInfo 11
extern  HRESULT * AUDIO_RPC_ToSystem_ENC_GeneralInfo_0(rpc_s32_t *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_ENC_GeneralInfo_0_svc(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_ENC_GeneralInfo_0_svc)(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_ENC_FrameInfo 12
extern  HRESULT * AUDIO_RPC_ToSystem_ENC_FrameInfo_0(rpc_s32_t *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_ENC_FrameInfo_0_svc(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_ENC_FrameInfo_0_svc)(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_ENC_EndOfStream 13
extern  HRESULT * AUDIO_RPC_ToSystem_ENC_EndOfStream_0(rpc_s32_t *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_ENC_EndOfStream_0_svc(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_ENC_EndOfStream_0_svc)(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_DEC_GeneralInfo 21
extern  HRESULT * AUDIO_RPC_ToSystem_DEC_GeneralInfo_0(AUDIO_RPC_DEC_GENERAL_INFO *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_DEC_GeneralInfo_0_svc(AUDIO_RPC_DEC_GENERAL_INFO *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_DEC_GeneralInfo_0_svc)(AUDIO_RPC_DEC_GENERAL_INFO *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_DEC_FrameInfo 22
extern  HRESULT * AUDIO_RPC_ToSystem_DEC_FrameInfo_0(AUDIO_RPC_DEC_GENERAL_INFO *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_DEC_FrameInfo_0_svc(AUDIO_RPC_DEC_GENERAL_INFO *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_DEC_FrameInfo_0_svc)(AUDIO_RPC_DEC_GENERAL_INFO *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_AIN_FrameInfo 26
extern  HRESULT * AUDIO_RPC_ToSystem_AIN_FrameInfo_0(rpc_s32_t *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_AIN_FrameInfo_0_svc(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_AIN_FrameInfo_0_svc)(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_AO_KaraokeModeIndicate 31
extern  HRESULT * AUDIO_RPC_ToSystem_AO_KaraokeModeIndicate_0(rpc_s32_t *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_AO_KaraokeModeIndicate_0_svc(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_AO_KaraokeModeIndicate_0_svc)(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_AO_ReportSPDIFStatus 32
extern  HRESULT * AUDIO_RPC_ToSystem_AO_ReportSPDIFStatus_0(AUDIO_RPC_SPDIF_CHANNEL_STATUS *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_AO_ReportSPDIFStatus_0_svc(AUDIO_RPC_SPDIF_CHANNEL_STATUS *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_AO_ReportSPDIFStatus_0_svc)(AUDIO_RPC_SPDIF_CHANNEL_STATUS *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_AO_PostMastership 33
extern  HRESULT * AUDIO_RPC_ToSystem_AO_PostMastership_0(AUDIO_RPC_MASTERSHIP *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_AO_PostMastership_0_svc(AUDIO_RPC_MASTERSHIP *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_AO_PostMastership_0_svc)(AUDIO_RPC_MASTERSHIP *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_AO_ConfigDACDone 34
extern  HRESULT * AUDIO_RPC_ToSystem_AO_ConfigDACDone_0(rpc_s32_t *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_AO_ConfigDACDone_0_svc(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_AO_ConfigDACDone_0_svc)(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_DAC_HardwareMute 40
extern  HRESULT * AUDIO_RPC_ToSystem_DAC_HardwareMute_0(rpc_s32_t *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_DAC_HardwareMute_0_svc(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_DAC_HardwareMute_0_svc)(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_ADC_HardwareMute 41
extern  HRESULT * AUDIO_RPC_ToSystem_ADC_HardwareMute_0(rpc_s32_t *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_ADC_HardwareMute_0_svc(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_ADC_HardwareMute_0_svc)(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_HashCheck 42
extern  RPCRES_LONG * AUDIO_RPC_ToSystem_HashCheck_0(AUDIO_RPC_HASH *, CLNT_STRUCT *);
extern  RPCRES_LONG * AUDIO_RPC_ToSystem_HashCheck_0_svc(AUDIO_RPC_HASH *, RPC_STRUCT *, RPCRES_LONG *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  RPCRES_LONG * (*p_AUDIO_RPC_ToSystem_HashCheck_0_svc)(AUDIO_RPC_HASH *, RPC_STRUCT *, RPCRES_LONG *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_CreateIOBuf 43
extern  AUDIO_RPC_IOBUFFER * AUDIO_RPC_ToSystem_CreateIOBuf_0(rpc_s32_t *, CLNT_STRUCT *);
extern  AUDIO_RPC_IOBUFFER * AUDIO_RPC_ToSystem_CreateIOBuf_0_svc(rpc_s32_t *, RPC_STRUCT *, AUDIO_RPC_IOBUFFER *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  AUDIO_RPC_IOBUFFER * (*p_AUDIO_RPC_ToSystem_CreateIOBuf_0_svc)(rpc_s32_t *, RPC_STRUCT *, AUDIO_RPC_IOBUFFER *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_FreeIOBuf 44
extern  HRESULT * AUDIO_RPC_ToSystem_FreeIOBuf_0(rpc_s32_t *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_FreeIOBuf_0_svc(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_FreeIOBuf_0_svc)(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_CreateBuf 45
extern  AUDIO_RPC_BUFFER * AUDIO_RPC_ToSystem_CreateBuf_0(rpc_s32_t *, CLNT_STRUCT *);
extern  AUDIO_RPC_BUFFER * AUDIO_RPC_ToSystem_CreateBuf_0_svc(rpc_s32_t *, RPC_STRUCT *, AUDIO_RPC_BUFFER *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  AUDIO_RPC_BUFFER * (*p_AUDIO_RPC_ToSystem_CreateBuf_0_svc)(rpc_s32_t *, RPC_STRUCT *, AUDIO_RPC_BUFFER *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_FreeBuf 46
extern  HRESULT * AUDIO_RPC_ToSystem_FreeBuf_0(rpc_s32_t *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_FreeBuf_0_svc(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_FreeBuf_0_svc)(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_Process_Open 47
extern  SYSTEM_PROCESS_RES * AUDIO_RPC_ToSystem_Process_Open_0(SYSTEM_PROCESS_INFO *, CLNT_STRUCT *);
extern  SYSTEM_PROCESS_RES * AUDIO_RPC_ToSystem_Process_Open_0_svc(SYSTEM_PROCESS_INFO *, RPC_STRUCT *, SYSTEM_PROCESS_RES *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  SYSTEM_PROCESS_RES * (*p_AUDIO_RPC_ToSystem_Process_Open_0_svc)(SYSTEM_PROCESS_INFO *, RPC_STRUCT *, SYSTEM_PROCESS_RES *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_Process_Close 48
extern  HRESULT * AUDIO_RPC_ToSystem_Process_Close_0(SYSTEM_PROCESS_INFO *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_Process_Close_0_svc(SYSTEM_PROCESS_INFO *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_Process_Close_0_svc)(SYSTEM_PROCESS_INFO *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_HDMI_Mute 49
extern  HRESULT * AUDIO_RPC_ToSystem_HDMI_Mute_0(rpc_s32_t *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_HDMI_Mute_0_svc(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_HDMI_Mute_0_svc)(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_HDMI_Setting 50
extern  HRESULT * AUDIO_RPC_ToSystem_HDMI_Setting_0(struct AUDIO_HDMI_SETTING_INFO *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_HDMI_Setting_0_svc(struct AUDIO_HDMI_SETTING_INFO *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_HDMI_Setting_0_svc)(struct AUDIO_HDMI_SETTING_INFO *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_AudioHaltDone 51
extern  HRESULT * AUDIO_RPC_ToSystem_AudioHaltDone_0(rpc_s32_t *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_AudioHaltDone_0_svc(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_AudioHaltDone_0_svc)(rpc_s32_t *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_PrivateInfo 52
extern  HRESULT * AUDIO_RPC_ToSystem_PrivateInfo_0(AUDIO_RPC_PRIVATEINFO_TO_SYS *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToSystem_PrivateInfo_0_svc(AUDIO_RPC_PRIVATEINFO_TO_SYS *, RPC_STRUCT *, HRESULT *);
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_PrivateInfo_0_svc)(AUDIO_RPC_PRIVATEINFO_TO_SYS *, RPC_STRUCT *, HRESULT *);
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToKernel_SimpleCommand 100
extern  HRESULT * AUDIO_RPC_ToKernel_SimpleCommand_0(AUDIO_RPC_TO_KERNEL_PARAMETER *, CLNT_STRUCT *);
extern  HRESULT * AUDIO_RPC_ToKernel_SimpleCommand_0_svc(AUDIO_RPC_TO_KERNEL_PARAMETER *, RPC_STRUCT *, HRESULT *);

#else /* K&R C */
#define AUDIO_RPC_ToSystem_ErrorStatus 1
extern  HRESULT * AUDIO_RPC_ToSystem_ErrorStatus_0();
extern  HRESULT * AUDIO_RPC_ToSystem_ErrorStatus_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_ErrorStatus_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_DeliverFlush 2
extern  HRESULT * AUDIO_RPC_ToSystem_DeliverFlush_0();
extern  HRESULT * AUDIO_RPC_ToSystem_DeliverFlush_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_DeliverFlush_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_EndOfStream 3
extern  HRESULT * AUDIO_RPC_ToSystem_EndOfStream_0();
extern  HRESULT * AUDIO_RPC_ToSystem_EndOfStream_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_EndOfStream_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_ENC_GeneralInfo 11
extern  HRESULT * AUDIO_RPC_ToSystem_ENC_GeneralInfo_0();
extern  HRESULT * AUDIO_RPC_ToSystem_ENC_GeneralInfo_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_ENC_GeneralInfo_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_ENC_FrameInfo 12
extern  HRESULT * AUDIO_RPC_ToSystem_ENC_FrameInfo_0();
extern  HRESULT * AUDIO_RPC_ToSystem_ENC_FrameInfo_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_ENC_FrameInfo_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_ENC_EndOfStream 13
extern  HRESULT * AUDIO_RPC_ToSystem_ENC_EndOfStream_0();
extern  HRESULT * AUDIO_RPC_ToSystem_ENC_EndOfStream_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_ENC_EndOfStream_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_DEC_GeneralInfo 21
extern  HRESULT * AUDIO_RPC_ToSystem_DEC_GeneralInfo_0();
extern  HRESULT * AUDIO_RPC_ToSystem_DEC_GeneralInfo_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_DEC_GeneralInfo_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_DEC_FrameInfo 22
extern  HRESULT * AUDIO_RPC_ToSystem_DEC_FrameInfo_0();
extern  HRESULT * AUDIO_RPC_ToSystem_DEC_FrameInfo_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_DEC_FrameInfo_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_AIN_FrameInfo 26
extern  HRESULT * AUDIO_RPC_ToSystem_AIN_FrameInfo_0();
extern  HRESULT * AUDIO_RPC_ToSystem_AIN_FrameInfo_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_AIN_FrameInfo_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_AO_KaraokeModeIndicate 31
extern  HRESULT * AUDIO_RPC_ToSystem_AO_KaraokeModeIndicate_0();
extern  HRESULT * AUDIO_RPC_ToSystem_AO_KaraokeModeIndicate_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_AO_KaraokeModeIndicate_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_AO_ReportSPDIFStatus 32
extern  HRESULT * AUDIO_RPC_ToSystem_AO_ReportSPDIFStatus_0();
extern  HRESULT * AUDIO_RPC_ToSystem_AO_ReportSPDIFStatus_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_AO_ReportSPDIFStatus_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_AO_PostMastership 33
extern  HRESULT * AUDIO_RPC_ToSystem_AO_PostMastership_0();
extern  HRESULT * AUDIO_RPC_ToSystem_AO_PostMastership_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_AO_PostMastership_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_AO_ConfigDACDone 34
extern  HRESULT * AUDIO_RPC_ToSystem_AO_ConfigDACDone_0();
extern  HRESULT * AUDIO_RPC_ToSystem_AO_ConfigDACDone_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_AO_ConfigDACDone_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_DAC_HardwareMute 40
extern  HRESULT * AUDIO_RPC_ToSystem_DAC_HardwareMute_0();
extern  HRESULT * AUDIO_RPC_ToSystem_DAC_HardwareMute_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_DAC_HardwareMute_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_ADC_HardwareMute 41
extern  HRESULT * AUDIO_RPC_ToSystem_ADC_HardwareMute_0();
extern  HRESULT * AUDIO_RPC_ToSystem_ADC_HardwareMute_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_ADC_HardwareMute_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_HashCheck 42
extern  RPCRES_LONG * AUDIO_RPC_ToSystem_HashCheck_0();
extern  RPCRES_LONG * AUDIO_RPC_ToSystem_HashCheck_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  RPCRES_LONG * (*p_AUDIO_RPC_ToSystem_HashCheck_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_CreateIOBuf 43
extern  AUDIO_RPC_IOBUFFER * AUDIO_RPC_ToSystem_CreateIOBuf_0();
extern  AUDIO_RPC_IOBUFFER * AUDIO_RPC_ToSystem_CreateIOBuf_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  AUDIO_RPC_IOBUFFER * (*p_AUDIO_RPC_ToSystem_CreateIOBuf_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_FreeIOBuf 44
extern  HRESULT * AUDIO_RPC_ToSystem_FreeIOBuf_0();
extern  HRESULT * AUDIO_RPC_ToSystem_FreeIOBuf_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_FreeIOBuf_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_CreateBuf 45
extern  AUDIO_RPC_BUFFER * AUDIO_RPC_ToSystem_CreateBuf_0();
extern  AUDIO_RPC_BUFFER * AUDIO_RPC_ToSystem_CreateBuf_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  AUDIO_RPC_BUFFER * (*p_AUDIO_RPC_ToSystem_CreateBuf_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_FreeBuf 46
extern  HRESULT * AUDIO_RPC_ToSystem_FreeBuf_0();
extern  HRESULT * AUDIO_RPC_ToSystem_FreeBuf_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_FreeBuf_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_Process_Open 47
extern  SYSTEM_PROCESS_RES * AUDIO_RPC_ToSystem_Process_Open_0();
extern  SYSTEM_PROCESS_RES * AUDIO_RPC_ToSystem_Process_Open_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  SYSTEM_PROCESS_RES * (*p_AUDIO_RPC_ToSystem_Process_Open_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_Process_Close 48
extern  HRESULT * AUDIO_RPC_ToSystem_Process_Close_0();
extern  HRESULT * AUDIO_RPC_ToSystem_Process_Close_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_Process_Close_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_HDMI_Mute 49
extern  HRESULT * AUDIO_RPC_ToSystem_HDMI_Mute_0();
extern  HRESULT * AUDIO_RPC_ToSystem_HDMI_Mute_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_HDMI_Mute_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_HDMI_Setting 50
extern  HRESULT * AUDIO_RPC_ToSystem_HDMI_Setting_0();
extern  HRESULT * AUDIO_RPC_ToSystem_HDMI_Setting_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_HDMI_Setting_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_AudioHaltDone 51
extern  HRESULT * AUDIO_RPC_ToSystem_AudioHaltDone_0();
extern  HRESULT * AUDIO_RPC_ToSystem_AudioHaltDone_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_AudioHaltDone_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToSystem_PrivateInfo 52
extern  HRESULT * AUDIO_RPC_ToSystem_PrivateInfo_0();
extern  HRESULT * AUDIO_RPC_ToSystem_PrivateInfo_0_svc();
#ifdef ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
extern  HRESULT * (*p_AUDIO_RPC_ToSystem_PrivateInfo_0_svc)();
#endif //ENABLE_FW2SYSTEM_RPC_HOOK_FUNCTION_IN_COMMON
#define AUDIO_RPC_ToKernel_SimpleCommand 100
extern  HRESULT * AUDIO_RPC_ToKernel_SimpleCommand_0();
extern  HRESULT * AUDIO_RPC_ToKernel_SimpleCommand_0_svc();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_AUDIORPC_AGENT_H_RPCGEN */