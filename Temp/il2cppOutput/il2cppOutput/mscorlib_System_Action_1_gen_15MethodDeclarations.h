﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>
struct Action_1_t2281;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t1246;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_25MethodDeclarations.h"
#define Action_1__ctor_m7059(__this, ___object, ___method, method) (void)Action_1__ctor_m22388_gshared((Action_1_t2964 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::Invoke(T)
#define Action_1_Invoke_m30920(__this, ___obj, method) (void)Action_1_Invoke_m22390_gshared((Action_1_t2964 *)__this, (Object_t *)___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m30921(__this, ___obj, ___callback, ___object, method) (Object_t *)Action_1_BeginInvoke_m22392_gshared((Action_1_t2964 *)__this, (Object_t *)___obj, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m30922(__this, ___result, method) (void)Action_1_EndInvoke_m22394_gshared((Action_1_t2964 *)__this, (Object_t *)___result, method)