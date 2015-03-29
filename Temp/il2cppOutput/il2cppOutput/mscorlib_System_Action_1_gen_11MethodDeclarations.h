#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
struct Action_1_t2180;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t997;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.String>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_25MethodDeclarations.h"
#define Action_1__ctor_m6939(__this, ___object, ___method, method) (void)Action_1__ctor_m22388_gshared((Action_1_t2964 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.String>>::Invoke(T)
#define Action_1_Invoke_m30342(__this, ___obj, method) (void)Action_1_Invoke_m22390_gshared((Action_1_t2964 *)__this, (Object_t *)___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.String>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m30343(__this, ___obj, ___callback, ___object, method) (Object_t *)Action_1_BeginInvoke_m22392_gshared((Action_1_t2964 *)__this, (Object_t *)___obj, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.String>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m30344(__this, ___result, method) (void)Action_1_EndInvoke_m22394_gshared((Action_1_t2964 *)__this, (Object_t *)___result, method)
