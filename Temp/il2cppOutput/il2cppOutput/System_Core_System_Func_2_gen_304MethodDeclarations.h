#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.IList`1<System.Int32>,System.Object>
struct Func_2_t7787;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2197;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Collections.Generic.IList`1<System.Int32>,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_13MethodDeclarations.h"
#define Func_2__ctor_m46463(__this, ___object, ___method, method) (void)Func_2__ctor_m6470_gshared((Func_2_t1092 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// TResult System.Func`2<System.Collections.Generic.IList`1<System.Int32>,System.Object>::Invoke(T)
#define Func_2_Invoke_m46464(__this, ___arg1, method) (Object_t *)Func_2_Invoke_m30610_gshared((Func_2_t1092 *)__this, (Object_t *)___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.IList`1<System.Int32>,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m46465(__this, ___arg1, ___callback, ___object, method) (Object_t *)Func_2_BeginInvoke_m30612_gshared((Func_2_t1092 *)__this, (Object_t *)___arg1, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// TResult System.Func`2<System.Collections.Generic.IList`1<System.Int32>,System.Object>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m46466(__this, ___result, method) (Object_t *)Func_2_EndInvoke_m30614_gshared((Func_2_t1092 *)__this, (Object_t *)___result, method)
