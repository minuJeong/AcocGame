#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Object>
struct Func_1_t1312;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void Func_1__ctor_m30347_gshared (Func_1_t1312 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method);
#define Func_1__ctor_m30347(__this, ___object, ___method, method) (void)Func_1__ctor_m30347_gshared((Func_1_t1312 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// TResult System.Func`1<System.Object>::Invoke()
 Object_t * Func_1_Invoke_m30349_gshared (Func_1_t1312 * __this, MethodInfo* method);
#define Func_1_Invoke_m30349(__this, method) (Object_t *)Func_1_Invoke_m30349_gshared((Func_1_t1312 *)__this, method)
// System.IAsyncResult System.Func`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * Func_1_BeginInvoke_m30351_gshared (Func_1_t1312 * __this, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_1_BeginInvoke_m30351(__this, ___callback, ___object, method) (Object_t *)Func_1_BeginInvoke_m30351_gshared((Func_1_t1312 *)__this, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// TResult System.Func`1<System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * Func_1_EndInvoke_m30353_gshared (Func_1_t1312 * __this, Object_t * ___result, MethodInfo* method);
#define Func_1_EndInvoke_m30353(__this, ___result, method) (Object_t *)Func_1_EndInvoke_m30353_gshared((Func_1_t1312 *)__this, (Object_t *)___result, method)
