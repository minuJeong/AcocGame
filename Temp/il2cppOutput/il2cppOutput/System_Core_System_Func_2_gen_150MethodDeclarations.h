#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Byte,System.Byte>
struct Func_2_t7158;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Byte,System.Byte>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m38912 (Func_2_t7158 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Byte,System.Byte>::Invoke(T)
 uint8_t Func_2_Invoke_m38913 (Func_2_t7158 * __this, uint8_t ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Byte,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m38914 (Func_2_t7158 * __this, uint8_t ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Byte,System.Byte>::EndInvoke(System.IAsyncResult)
 uint8_t Func_2_EndInvoke_m38915 (Func_2_t7158 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
