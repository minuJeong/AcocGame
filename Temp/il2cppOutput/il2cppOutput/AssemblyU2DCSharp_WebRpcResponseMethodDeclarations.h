#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WebRpcResponse
struct WebRpcResponse_t294;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t122;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t13;

// System.Void WebRpcResponse::.ctor(ExitGames.Client.Photon.OperationResponse)
 void WebRpcResponse__ctor_m1415 (WebRpcResponse_t294 * __this, OperationResponse_t13 * ___response, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebRpcResponse::get_Name()
 String_t* WebRpcResponse_get_Name_m1416 (WebRpcResponse_t294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_Name(System.String)
 void WebRpcResponse_set_Name_m1417 (WebRpcResponse_t294 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebRpcResponse::get_ReturnCode()
 int32_t WebRpcResponse_get_ReturnCode_m1418 (WebRpcResponse_t294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_ReturnCode(System.Int32)
 void WebRpcResponse_set_ReturnCode_m1419 (WebRpcResponse_t294 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebRpcResponse::get_DebugMessage()
 String_t* WebRpcResponse_get_DebugMessage_m1420 (WebRpcResponse_t294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_DebugMessage(System.String)
 void WebRpcResponse_set_DebugMessage_m1421 (WebRpcResponse_t294 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> WebRpcResponse::get_Parameters()
 Dictionary_2_t122 * WebRpcResponse_get_Parameters_m1422 (WebRpcResponse_t294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
 void WebRpcResponse_set_Parameters_m1423 (WebRpcResponse_t294 * __this, Dictionary_2_t122 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebRpcResponse::ToStringFull()
 String_t* WebRpcResponse_ToStringFull_m1424 (WebRpcResponse_t294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
