#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_1_t1024;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t993;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>::.ctor(System.Object,System.IntPtr)
// System.Func`1<System.Object>
#include "System_Core_System_Func_1_gen_3MethodDeclarations.h"
#define Func_1__ctor_m6126(__this, ___object, ___method, method) (void)Func_1__ctor_m30347_gshared((Func_1_t1312 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// TResult System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>::Invoke()
#define Func_1_Invoke_m6275(__this, method) (Task_1_t993 *)Func_1_Invoke_m30349_gshared((Func_1_t1312 *)__this, method)
// System.IAsyncResult System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>::BeginInvoke(System.AsyncCallback,System.Object)
#define Func_1_BeginInvoke_m30400(__this, ___callback, ___object, method) (Object_t *)Func_1_BeginInvoke_m30351_gshared((Func_1_t1312 *)__this, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// TResult System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>::EndInvoke(System.IAsyncResult)
#define Func_1_EndInvoke_m30401(__this, ___result, method) (Task_1_t993 *)Func_1_EndInvoke_m30353_gshared((Func_1_t1312 *)__this, (Object_t *)___result, method)
