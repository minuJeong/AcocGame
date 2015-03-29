﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.SByte,System.UInt16>
struct Func_2_t7314;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.SByte,System.UInt16>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m40780 (Func_2_t7314 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.SByte,System.UInt16>::Invoke(T)
 uint16_t Func_2_Invoke_m40781 (Func_2_t7314 * __this, int8_t ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.SByte,System.UInt16>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m40782 (Func_2_t7314 * __this, int8_t ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.SByte,System.UInt16>::EndInvoke(System.IAsyncResult)
 uint16_t Func_2_EndInvoke_m40783 (Func_2_t7314 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;