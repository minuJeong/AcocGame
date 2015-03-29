#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.DateTime>
struct Func_2_t7684;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Func`2<System.Object,System.DateTime>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m45195 (Func_2_t7684 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Object,System.DateTime>::Invoke(T)
 DateTime_t126  Func_2_Invoke_m45196 (Func_2_t7684 * __this, Object_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Object,System.DateTime>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m45197 (Func_2_t7684 * __this, Object_t * ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Object,System.DateTime>::EndInvoke(System.IAsyncResult)
 DateTime_t126  Func_2_EndInvoke_m45198 (Func_2_t7684 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
