﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int16,System.Char>
struct Func_2_t7557;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int16,System.Char>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m43706 (Func_2_t7557 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Int16,System.Char>::Invoke(T)
 uint16_t Func_2_Invoke_m43707 (Func_2_t7557 * __this, int16_t ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Int16,System.Char>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m43708 (Func_2_t7557 * __this, int16_t ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Int16,System.Char>::EndInvoke(System.IAsyncResult)
 uint16_t Func_2_EndInvoke_m43709 (Func_2_t7557 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
