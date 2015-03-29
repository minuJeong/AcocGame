#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.String>
struct Func_1_t1309;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.String>::.ctor(System.Object,System.IntPtr)
// System.Func`1<System.Object>
#include "System_Core_System_Func_1_gen_3MethodDeclarations.h"
#define Func_1__ctor_m6126(__this, ___object, ___method, method) (void)Func_1__ctor_m30350_gshared((Func_1_t1312 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// TResult System.Func`1<System.String>::Invoke()
#define Func_1_Invoke_m30351(__this, method) (String_t*)Func_1_Invoke_m30352_gshared((Func_1_t1312 *)__this, method)
// System.IAsyncResult System.Func`1<System.String>::BeginInvoke(System.AsyncCallback,System.Object)
#define Func_1_BeginInvoke_m30353(__this, ___callback, ___object, method) (Object_t *)Func_1_BeginInvoke_m30354_gshared((Func_1_t1312 *)__this, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// TResult System.Func`1<System.String>::EndInvoke(System.IAsyncResult)
#define Func_1_EndInvoke_m30355(__this, ___result, method) (String_t*)Func_1_EndInvoke_m30356_gshared((Func_1_t1312 *)__this, (Object_t *)___result, method)
