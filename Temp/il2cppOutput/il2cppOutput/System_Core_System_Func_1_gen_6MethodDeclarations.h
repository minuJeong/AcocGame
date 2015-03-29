#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Int32>
struct Func_1_t1243;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
 void Func_1__ctor_m7015 (Func_1_t1243 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`1<System.Int32>::Invoke()
 int32_t Func_1_Invoke_m83120 (Func_1_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`1<System.Int32>::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * Func_1_BeginInvoke_m83121 (Func_1_t1243 * __this, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`1<System.Int32>::EndInvoke(System.IAsyncResult)
 int32_t Func_1_EndInvoke_m83122 (Func_1_t1243 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
