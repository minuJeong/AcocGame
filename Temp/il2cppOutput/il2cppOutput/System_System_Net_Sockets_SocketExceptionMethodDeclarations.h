#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Sockets.SocketException
struct SocketException_t2760;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.Sockets.SocketException::.ctor()
 void SocketException__ctor_m9290 (SocketException_t2760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketException::.ctor(System.Int32)
 void SocketException__ctor_m9291 (SocketException_t2760 * __this, int32_t ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void SocketException__ctor_m9292 (SocketException_t2760 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SocketException::WSAGetLastError_internal()
 int32_t SocketException_WSAGetLastError_internal_m9293 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Sockets.SocketException::get_Message()
 String_t* SocketException_get_Message_m9294 (SocketException_t2760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
