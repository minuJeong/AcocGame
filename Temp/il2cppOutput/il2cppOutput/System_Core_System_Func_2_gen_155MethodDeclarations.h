#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.UInt32,System.Byte>
struct Func_2_t7173;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.UInt32,System.Byte>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m39087 (Func_2_t7173 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.UInt32,System.Byte>::Invoke(T)
 uint8_t Func_2_Invoke_m39088 (Func_2_t7173 * __this, uint32_t ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.UInt32,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m39089 (Func_2_t7173 * __this, uint32_t ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.UInt32,System.Byte>::EndInvoke(System.IAsyncResult)
 uint8_t Func_2_EndInvoke_m39090 (Func_2_t7173 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
