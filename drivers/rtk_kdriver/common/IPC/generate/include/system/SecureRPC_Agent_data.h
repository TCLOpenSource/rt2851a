/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SECURERPC_AGENT_DATA_H_RPCGEN
#define _SECURERPC_AGENT_DATA_H_RPCGEN

#include <RPCBaseDS.h>
#include <SecureRPCBaseDS.h>

struct RPC_tee_rpc_result_t {
	RPC_RtkDrmCode func_code;
	u_long result;
	u_long pSharedMem;
	u_long sharedMemSize;
};
typedef struct RPC_tee_rpc_result_t RPC_tee_rpc_result_t;

struct SECURE_RPC_TOSYSTEM_GET_SETUP_PARAM {
	long type;
	long reserved0;
	long reserved1;
};
typedef struct SECURE_RPC_TOSYSTEM_GET_SETUP_PARAM SECURE_RPC_TOSYSTEM_GET_SETUP_PARAM;

struct SECURE_RPC_TOSYSTEM_SET_PARAM {
	long type;
	long data[5];
};
typedef struct SECURE_RPC_TOSYSTEM_SET_PARAM SECURE_RPC_TOSYSTEM_SET_PARAM;

struct RPCRES_K_S {
	HRESULT result;
	long size;
	long data[10];
};
typedef struct RPCRES_K_S RPCRES_K_S;

struct SECURE_RPC_TOSYSTEM_SEND_RW {
	long type;
	long size;
	long data[16];
};
typedef struct SECURE_RPC_TOSYSTEM_SEND_RW SECURE_RPC_TOSYSTEM_SEND_RW;

struct SECURE_RPC_TOSYSTEM_TVSERVER_CTRL {
	long type;
	long size;
	char cmd[100];
};
typedef struct SECURE_RPC_TOSYSTEM_TVSERVER_CTRL SECURE_RPC_TOSYSTEM_TVSERVER_CTRL;

struct SECURE_RPC_TOSYSTEM_OSD_MSG {
	long type;
	long size;
	long data[200];
};
typedef struct SECURE_RPC_TOSYSTEM_OSD_MSG SECURE_RPC_TOSYSTEM_OSD_MSG;

#endif /* !_SECURERPC_AGENT_DATA_H_RPCGEN */
