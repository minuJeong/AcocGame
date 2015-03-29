#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.Byte>
struct Func_2_t11104;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t390;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Byte>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m82149 (Func_2_t11104 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Threading.Tasks.Task,System.Byte>::Invoke(T)
 uint8_t Func_2_Invoke_m82150 (Func_2_t11104 * __this, Task_t390 * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m82151 (Func_2_t11104 * __this, Task_t390 * ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Threading.Tasks.Task,System.Byte>::EndInvoke(System.IAsyncResult)
 uint8_t Func_2_EndInvoke_m82152 (Func_2_t11104 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
