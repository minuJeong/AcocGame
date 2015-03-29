#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2322;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
 void SendOrPostCallback__ctor_m7106 (SendOrPostCallback_t2322 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
 void SendOrPostCallback_Invoke_m14803 (SendOrPostCallback_t2322 * __this, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Threading.SendOrPostCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
 Object_t * SendOrPostCallback_BeginInvoke_m14804 (SendOrPostCallback_t2322 * __this, Object_t * ___state, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SendOrPostCallback::EndInvoke(System.IAsyncResult)
 void SendOrPostCallback_EndInvoke_m14805 (SendOrPostCallback_t2322 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
