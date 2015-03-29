﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Object>
struct Action_1_t2964;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void Action_1__ctor_m22388_gshared (Action_1_t2964 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method);
#define Action_1__ctor_m22388(__this, ___object, ___method, method) (void)Action_1__ctor_m22388_gshared((Action_1_t2964 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// System.Void System.Action`1<System.Object>::Invoke(T)
 void Action_1_Invoke_m22390_gshared (Action_1_t2964 * __this, Object_t * ___obj, MethodInfo* method);
#define Action_1_Invoke_m22390(__this, ___obj, method) (void)Action_1_Invoke_m22390_gshared((Action_1_t2964 *)__this, (Object_t *)___obj, method)
// System.IAsyncResult System.Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Action_1_BeginInvoke_m22392_gshared (Action_1_t2964 * __this, Object_t * ___obj, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method);
#define Action_1_BeginInvoke_m22392(__this, ___obj, ___callback, ___object, method) (Object_t *)Action_1_BeginInvoke_m22392_gshared((Action_1_t2964 *)__this, (Object_t *)___obj, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// System.Void System.Action`1<System.Object>::EndInvoke(System.IAsyncResult)
 void Action_1_EndInvoke_m22394_gshared (Action_1_t2964 * __this, Object_t * ___result, MethodInfo* method);
#define Action_1_EndInvoke_m22394(__this, ___result, method) (void)Action_1_EndInvoke_m22394_gshared((Action_1_t2964 *)__this, (Object_t *)___result, method)