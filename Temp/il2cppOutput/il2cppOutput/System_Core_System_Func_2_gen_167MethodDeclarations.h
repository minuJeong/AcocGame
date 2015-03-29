#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int32,System.SByte>
struct Func_2_t7221;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int32,System.SByte>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m39663 (Func_2_t7221 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Int32,System.SByte>::Invoke(T)
 int8_t Func_2_Invoke_m39664 (Func_2_t7221 * __this, int32_t ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Int32,System.SByte>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m39665 (Func_2_t7221 * __this, int32_t ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Int32,System.SByte>::EndInvoke(System.IAsyncResult)
 int8_t Func_2_EndInvoke_m39666 (Func_2_t7221 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
