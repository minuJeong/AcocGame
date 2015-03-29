#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t1023;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t390;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
// System.Func`1<System.Object>
#include "System_Core_System_Func_1_gen_3MethodDeclarations.h"
#define Func_1__ctor_m6129(__this, ___object, ___method, method) (void)Func_1__ctor_m30350_gshared((Func_1_t1312 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// TResult System.Func`1<System.Threading.Tasks.Task>::Invoke()
#define Func_1_Invoke_m6282(__this, method) (Task_t390 *)Func_1_Invoke_m30352_gshared((Func_1_t1312 *)__this, method)
// System.IAsyncResult System.Func`1<System.Threading.Tasks.Task>::BeginInvoke(System.AsyncCallback,System.Object)
#define Func_1_BeginInvoke_m30405(__this, ___callback, ___object, method) (Object_t *)Func_1_BeginInvoke_m30354_gshared((Func_1_t1312 *)__this, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// TResult System.Func`1<System.Threading.Tasks.Task>::EndInvoke(System.IAsyncResult)
#define Func_1_EndInvoke_m30406(__this, ___result, method) (Task_t390 *)Func_1_EndInvoke_m30356_gshared((Func_1_t1312 *)__this, (Object_t *)___result, method)
