﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.SByte,System.Single>
struct Func_2_t7643;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.SByte,System.Single>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m44737 (Func_2_t7643 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.SByte,System.Single>::Invoke(T)
 float Func_2_Invoke_m44738 (Func_2_t7643 * __this, int8_t ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.SByte,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m44739 (Func_2_t7643 * __this, int8_t ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.SByte,System.Single>::EndInvoke(System.IAsyncResult)
 float Func_2_EndInvoke_m44740 (Func_2_t7643 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
