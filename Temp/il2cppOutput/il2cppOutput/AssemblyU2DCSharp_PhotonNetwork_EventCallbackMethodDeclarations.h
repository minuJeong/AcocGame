#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonNetwork/EventCallback
struct EventCallback_t301;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void PhotonNetwork/EventCallback::.ctor(System.Object,System.IntPtr)
 void EventCallback__ctor_m1457 (EventCallback_t301 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork/EventCallback::Invoke(System.Byte,System.Object,System.Int32)
 void EventCallback_Invoke_m1458 (EventCallback_t301 * __this, uint8_t ___eventCode, Object_t * ___content, int32_t ___senderId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult PhotonNetwork/EventCallback::BeginInvoke(System.Byte,System.Object,System.Int32,System.AsyncCallback,System.Object)
 Object_t * EventCallback_BeginInvoke_m1459 (EventCallback_t301 * __this, uint8_t ___eventCode, Object_t * ___content, int32_t ___senderId, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork/EventCallback::EndInvoke(System.IAsyncResult)
 void EventCallback_EndInvoke_m1460 (EventCallback_t301 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
