﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t567;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IDragHandler
struct IDragHandler_t588;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t545;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_17MethodDeclarations.h"
#define EventFunction_1__ctor_m4036(__this, ___object, ___method, method) (void)EventFunction_1__ctor_m22805_gshared((EventFunction_1_t5164 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m23650(__this, ___handler, ___eventData, method) (void)EventFunction_1_Invoke_m22807_gshared((EventFunction_1_t5164 *)__this, (Object_t *)___handler, (BaseEventData_t545 *)___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m23651(__this, ___handler, ___eventData, ___callback, ___object, method) (Object_t *)EventFunction_1_BeginInvoke_m22809_gshared((EventFunction_1_t5164 *)__this, (Object_t *)___handler, (BaseEventData_t545 *)___eventData, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m23652(__this, ___result, method) (void)EventFunction_1_EndInvoke_m22811_gshared((EventFunction_1_t5164 *)__this, (Object_t *)___result, method)