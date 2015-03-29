#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Collections.Generic.List`1<System.Object>>
struct Func_2_t8168;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_13MethodDeclarations.h"
#define Func_2__ctor_m50394(__this, ___object, ___method, method) (void)Func_2__ctor_m6472_gshared((Func_2_t1092 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Invoke(T)
#define Func_2_Invoke_m50395(__this, ___arg1, method) (List_1_t2 *)Func_2_Invoke_m30613_gshared((Func_2_t1092 *)__this, (Object_t *)___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Collections.Generic.List`1<System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m50396(__this, ___arg1, ___callback, ___object, method) (Object_t *)Func_2_BeginInvoke_m30615_gshared((Func_2_t1092 *)__this, (Object_t *)___arg1, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.List`1<System.Object>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m50397(__this, ___result, method) (List_1_t2 *)Func_2_EndInvoke_m30617_gshared((Func_2_t1092 *)__this, (Object_t *)___result, method)
