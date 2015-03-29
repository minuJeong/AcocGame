#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Int32>,System.Boolean>
struct Func_2_t1299;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t994;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Int32>,System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m6111 (Func_2_t1299 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Int32>,System.Boolean>::Invoke(T)
 bool Func_2_Invoke_m30440 (Func_2_t1299 * __this, Task_1_t994 * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Int32>,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m30441 (Func_2_t1299 * __this, Task_1_t994 * ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Int32>,System.Boolean>::EndInvoke(System.IAsyncResult)
 bool Func_2_EndInvoke_m30442 (Func_2_t1299 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
