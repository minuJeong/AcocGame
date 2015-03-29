﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseObject>>
struct Action_1_t6442;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1125;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseObject>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_25MethodDeclarations.h"
#define Action_1__ctor_m33058(__this, ___object, ___method, method) (void)Action_1__ctor_m22391_gshared((Action_1_t2965 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseObject>>::Invoke(T)
#define Action_1_Invoke_m33059(__this, ___obj, method) (void)Action_1_Invoke_m22393_gshared((Action_1_t2965 *)__this, (Object_t *)___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseObject>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m33060(__this, ___obj, ___callback, ___object, method) (Object_t *)Action_1_BeginInvoke_m22395_gshared((Action_1_t2965 *)__this, (Object_t *)___obj, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseObject>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m33061(__this, ___result, method) (void)Action_1_EndInvoke_m22397_gshared((Action_1_t2965 *)__this, (Object_t *)___result, method)
