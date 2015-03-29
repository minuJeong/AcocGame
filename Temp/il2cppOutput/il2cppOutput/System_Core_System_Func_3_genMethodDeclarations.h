#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1272;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>::.ctor(System.Object,System.IntPtr)
// System.Func`3<System.Object,System.Object,System.Object>
#include "System_Core_System_Func_3_gen_0MethodDeclarations.h"
#define Func_3__ctor_m30430(__this, ___object, ___method, method) (void)Func_3__ctor_m6354_gshared((Func_3_t1048 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// TResult System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>::Invoke(T1,T2)
#define Func_3_Invoke_m30431(__this, ___arg1, ___arg2, method) (Object_t *)Func_3_Invoke_m6351_gshared((Func_3_t1048 *)__this, (Object_t *)___arg1, (Object_t *)___arg2, method)
// System.IAsyncResult System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
#define Func_3_BeginInvoke_m30432(__this, ___arg1, ___arg2, ___callback, ___object, method) (Object_t *)Func_3_BeginInvoke_m30433_gshared((Func_3_t1048 *)__this, (Object_t *)___arg1, (Object_t *)___arg2, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// TResult System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>::EndInvoke(System.IAsyncResult)
#define Func_3_EndInvoke_m30434(__this, ___result, method) (Object_t *)Func_3_EndInvoke_m30435_gshared((Func_3_t1048 *)__this, (Object_t *)___result, method)
