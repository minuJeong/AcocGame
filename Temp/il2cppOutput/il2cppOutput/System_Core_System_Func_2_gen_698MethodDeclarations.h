﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.SByte>
struct Func_2_t11119;
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

// System.Void System.Func`2<System.Threading.Tasks.Task,System.SByte>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m82221 (Func_2_t11119 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Threading.Tasks.Task,System.SByte>::Invoke(T)
 int8_t Func_2_Invoke_m82222 (Func_2_t11119 * __this, Task_t390 * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.SByte>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m82223 (Func_2_t11119 * __this, Task_t390 * ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Threading.Tasks.Task,System.SByte>::EndInvoke(System.IAsyncResult)
 int8_t Func_2_EndInvoke_m82224 (Func_2_t11119 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;