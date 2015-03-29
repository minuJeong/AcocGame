#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Single,System.Double>
struct Func_2_t7631;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Single,System.Double>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m44597 (Func_2_t7631 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Single,System.Double>::Invoke(T)
 double Func_2_Invoke_m44598 (Func_2_t7631 * __this, float ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Single,System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m44599 (Func_2_t7631 * __this, float ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Single,System.Double>::EndInvoke(System.IAsyncResult)
 double Func_2_EndInvoke_m44600 (Func_2_t7631 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
