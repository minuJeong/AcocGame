#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.TimerCallback
struct TimerCallback_t2250;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.TimerCallback::.ctor(System.Object,System.IntPtr)
 void TimerCallback__ctor_m7017 (TimerCallback_t2250 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.TimerCallback::Invoke(System.Object)
 void TimerCallback_Invoke_m14809 (TimerCallback_t2250 * __this, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Threading.TimerCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
 Object_t * TimerCallback_BeginInvoke_m14810 (TimerCallback_t2250 * __this, Object_t * ___state, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.TimerCallback::EndInvoke(System.IAsyncResult)
 void TimerCallback_EndInvoke_m14811 (TimerCallback_t2250 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
