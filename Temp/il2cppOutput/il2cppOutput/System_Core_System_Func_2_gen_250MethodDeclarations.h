#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Double,System.UInt64>
struct Func_2_t7526;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Double,System.UInt64>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m43337 (Func_2_t7526 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Double,System.UInt64>::Invoke(T)
 uint64_t Func_2_Invoke_m43338 (Func_2_t7526 * __this, double ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Double,System.UInt64>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m43339 (Func_2_t7526 * __this, double ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Double,System.UInt64>::EndInvoke(System.IAsyncResult)
 uint64_t Func_2_EndInvoke_m43340 (Func_2_t7526 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
