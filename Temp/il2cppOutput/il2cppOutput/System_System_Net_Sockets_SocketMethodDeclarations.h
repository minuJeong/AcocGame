#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Sockets.Socket
struct Socket_t2759;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"
// System.Net.Sockets.SocketType
#include "System_System_Net_Sockets_SocketType.h"
// System.Net.Sockets.ProtocolType
#include "System_System_Net_Sockets_ProtocolType.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Net.Sockets.SelectMode
#include "System_System_Net_Sockets_SelectMode.h"
// System.Net.Sockets.SocketShutdown
#include "System_System_Net_Sockets_SocketShutdown.h"
// System.Net.Sockets.SocketOptionLevel
#include "System_System_Net_Sockets_SocketOptionLevel.h"
// System.Net.Sockets.SocketOptionName
#include "System_System_Net_Sockets_SocketOptionName.h"

// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
 void Socket__ctor_m9275 (Socket_t2759 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.cctor()
 void Socket__cctor_m9276 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::CheckProtocolSupport()
 void Socket_CheckProtocolSupport_m9277 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_SupportsIPv4()
 bool Socket_get_SupportsIPv4_m9278 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_SupportsIPv6()
 bool Socket_get_SupportsIPv6_m9279 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Net.Sockets.Socket::Socket_internal(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Int32&)
 IntPtr_t39 Socket_Socket_internal_m9280 (Socket_t2759 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Finalize()
 void Socket_Finalize_m9281 (Socket_t2759 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Linger(System.IntPtr)
 void Socket_Linger_m9282 (Socket_t2759 * __this, IntPtr_t39 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Dispose(System.Boolean)
 void Socket_Dispose_m9283 (Socket_t2759 * __this, bool ___explicitDisposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Dispose()
 void Socket_Dispose_m9284 (Socket_t2759 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close_internal(System.IntPtr,System.Int32&)
 void Socket_Close_internal_m9285 (Object_t * __this/* static, unused */, IntPtr_t39 ___socket, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close()
 void Socket_Close_m9286 (Socket_t2759 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll_internal(System.IntPtr,System.Net.Sockets.SelectMode,System.Int32,System.Int32&)
 bool Socket_Poll_internal_m9287 (Object_t * __this/* static, unused */, IntPtr_t39 ___socket, int32_t ___mode, int32_t ___timeout, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Shutdown_internal(System.IntPtr,System.Net.Sockets.SocketShutdown,System.Int32&)
 void Socket_Shutdown_internal_m9288 (Object_t * __this/* static, unused */, IntPtr_t39 ___socket, int32_t ___how, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
 void Socket_SetSocketOption_internal_m9289 (Object_t * __this/* static, unused */, IntPtr_t39 ___socket, int32_t ___level, int32_t ___name, Object_t * ___obj_val, ByteU5BU5D_t21* ___byte_val, int32_t ___int_val, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
