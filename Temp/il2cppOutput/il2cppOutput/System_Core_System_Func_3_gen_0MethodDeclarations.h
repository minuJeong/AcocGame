#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t1048;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void Func_3__ctor_m6352_gshared (Func_3_t1048 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method);
#define Func_3__ctor_m6352(__this, ___object, ___method, method) (void)Func_3__ctor_m6352_gshared((Func_3_t1048 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// TResult System.Func`3<System.Object,System.Object,System.Object>::Invoke(T1,T2)
 Object_t * Func_3_Invoke_m6349_gshared (Func_3_t1048 * __this, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method);
#define Func_3_Invoke_m6349(__this, ___arg1, ___arg2, method) (Object_t *)Func_3_Invoke_m6349_gshared((Func_3_t1048 *)__this, (Object_t *)___arg1, (Object_t *)___arg2, method)
// System.IAsyncResult System.Func`3<System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
 Object_t * Func_3_BeginInvoke_m30430_gshared (Func_3_t1048 * __this, Object_t * ___arg1, Object_t * ___arg2, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_3_BeginInvoke_m30430(__this, ___arg1, ___arg2, ___callback, ___object, method) (Object_t *)Func_3_BeginInvoke_m30430_gshared((Func_3_t1048 *)__this, (Object_t *)___arg1, (Object_t *)___arg2, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// TResult System.Func`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * Func_3_EndInvoke_m30432_gshared (Func_3_t1048 * __this, Object_t * ___result, MethodInfo* method);
#define Func_3_EndInvoke_m30432(__this, ___result, method) (Object_t *)Func_3_EndInvoke_m30432_gshared((Func_3_t1048 *)__this, (Object_t *)___result, method)
