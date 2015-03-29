#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.WaitCallback
struct WaitCallback_t2183;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
 void WaitCallback__ctor_m6969 (WaitCallback_t2183 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitCallback::Invoke(System.Object)
 void WaitCallback_Invoke_m14812 (WaitCallback_t2183 * __this, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Threading.WaitCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
 Object_t * WaitCallback_BeginInvoke_m14813 (WaitCallback_t2183 * __this, Object_t * ___state, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitCallback::EndInvoke(System.IAsyncResult)
 void WaitCallback_EndInvoke_m14814 (WaitCallback_t2183 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
