#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Single,System.Int16>
struct Func_2_t7290;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Single,System.Int16>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m40484 (Func_2_t7290 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Single,System.Int16>::Invoke(T)
 int16_t Func_2_Invoke_m40485 (Func_2_t7290 * __this, float ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Single,System.Int16>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m40486 (Func_2_t7290 * __this, float ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Single,System.Int16>::EndInvoke(System.IAsyncResult)
 int16_t Func_2_EndInvoke_m40487 (Func_2_t7290 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
