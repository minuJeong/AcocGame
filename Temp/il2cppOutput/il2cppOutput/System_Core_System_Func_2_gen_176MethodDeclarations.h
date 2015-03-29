#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Byte,System.Int16>
struct Func_2_t7261;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Byte,System.Int16>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m40137 (Func_2_t7261 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Byte,System.Int16>::Invoke(T)
 int16_t Func_2_Invoke_m40138 (Func_2_t7261 * __this, uint8_t ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Byte,System.Int16>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m40139 (Func_2_t7261 * __this, uint8_t ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Byte,System.Int16>::EndInvoke(System.IAsyncResult)
 int16_t Func_2_EndInvoke_m40140 (Func_2_t7261 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
