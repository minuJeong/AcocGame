#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int32,System.UInt32>
struct Func_2_t7413;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int32,System.UInt32>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m41951 (Func_2_t7413 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Int32,System.UInt32>::Invoke(T)
 uint32_t Func_2_Invoke_m41952 (Func_2_t7413 * __this, int32_t ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Int32,System.UInt32>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m41953 (Func_2_t7413 * __this, int32_t ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Int32,System.UInt32>::EndInvoke(System.IAsyncResult)
 uint32_t Func_2_EndInvoke_m41954 (Func_2_t7413 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
