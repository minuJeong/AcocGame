﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>>
struct Action_1_t11140;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>
struct Task_1_t11139;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_25MethodDeclarations.h"
#define Action_1__ctor_m82324(__this, ___object, ___method, method) (void)Action_1__ctor_m22391_gshared((Action_1_t2965 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>>::Invoke(T)
#define Action_1_Invoke_m82325(__this, ___obj, method) (void)Action_1_Invoke_m22393_gshared((Action_1_t2965 *)__this, (Object_t *)___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m82326(__this, ___obj, ___callback, ___object, method) (Object_t *)Action_1_BeginInvoke_m22395_gshared((Action_1_t2965 *)__this, (Object_t *)___obj, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m82327(__this, ___result, method) (void)Action_1_EndInvoke_m22397_gshared((Action_1_t2965 *)__this, (Object_t *)___result, method)
