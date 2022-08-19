#ifndef _H_CLIENT_STUB_H
#define _H_CLIENT_STUB_H

#include <xdr/types.h>
#include <xdr/xdr.h>
#include <RPCstruct.h>
#include <rpcstubapi.h>

#ifdef __cplusplus
extern "C" {
#endif

#define RPC_SUCCESS 0
#define RPC_ERROR 1

//#define DEBUG_RPCCALL

#ifdef DEBUG_RPCCALL
#define client_call(rpc, procedureID, sendMode, args, args_ptr, args_size)	__client_call(__func__, __LINE__, #procedureID, rpc, procedureID, sendMode, args, args_ptr, args_size)
int __client_call (char *func, int line, char *procName, RPC_STRUCT *rpc, u_long procedureID, int sendMode, xdrproc_t xdr_args, caddr_t args_ptr, long args_size );
#else
int client_call (RPC_STRUCT *rpc, u_long procedureID, int sendMode, xdrproc_t xdr_args, caddr_t args_ptr, long args_size );
#endif

RPC_STRUCT
prepareRPCCall (CLNT_STRUCT *clnt,
		int result);

void
RTK_SendReply(
   u_long     req_taskID,
   int        req_context,
   char     * ReplyParameter,   // parameter's start address
   u_long     ParameterSize,    // parameter's size
   xdrproc_t  _xdr_result,
   int        opt);

#define SendReply RTK_SendReply

#ifdef __cplusplus
}
#endif
#endif

