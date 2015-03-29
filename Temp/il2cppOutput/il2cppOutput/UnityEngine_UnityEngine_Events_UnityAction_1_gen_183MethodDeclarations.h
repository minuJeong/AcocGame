﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Camera>
struct UnityAction_1_t11618;
// System.Object
struct Object_t;
// UnityEngine.Camera
struct Camera_t204;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Camera>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m85623(__this, ___object, ___method, method) (void)UnityAction_1__ctor_m16522_gshared((UnityAction_1_t4182 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Camera>::Invoke(T0)
#define UnityAction_1_Invoke_m85624(__this, ___arg0, method) (void)UnityAction_1_Invoke_m16523_gshared((UnityAction_1_t4182 *)__this, (Object_t *)___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Camera>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m85625(__this, ___arg0, ___callback, ___object, method) (Object_t *)UnityAction_1_BeginInvoke_m16524_gshared((UnityAction_1_t4182 *)__this, (Object_t *)___arg0, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Camera>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m85626(__this, ___result, method) (void)UnityAction_1_EndInvoke_m16525_gshared((UnityAction_1_t4182 *)__this, (Object_t *)___result, method)