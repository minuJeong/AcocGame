#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
struct UnityEvent_1_t553;
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
struct UnityAction_1_t5253;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2624;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t545;

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
#define UnityEvent_1__ctor_m4013(__this, method) (void)UnityEvent_1__ctor_m23608_gshared((UnityEvent_1_t5254 *)__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m23609(__this, ___call, method) (void)UnityEvent_1_AddListener_m23610_gshared((UnityEvent_1_t5254 *)__this, (UnityAction_1_t4182 *)___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m23611(__this, ___call, method) (void)UnityEvent_1_RemoveListener_m23612_gshared((UnityEvent_1_t5254 *)__this, (UnityAction_1_t4182 *)___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m4017(__this, ___name, ___targetObj, method) (MethodInfo_t292 *)UnityEvent_1_FindMethod_Impl_m23613_gshared((UnityEvent_1_t5254 *)__this, (String_t*)___name, (Object_t *)___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m4018(__this, ___target, ___theFunction, method) (BaseInvokableCall_t2624 *)UnityEvent_1_GetDelegate_m23614_gshared((UnityEvent_1_t5254 *)__this, (Object_t *)___target, (MethodInfo_t292 *)___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m4019(__this/* static, unused */, ___action, method) (BaseInvokableCall_t2624 *)UnityEvent_1_GetDelegate_m23615_gshared((Object_t *)__this/* static, unused */, (UnityAction_1_t4182 *)___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T0)
#define UnityEvent_1_Invoke_m4024(__this, ___arg0, method) (void)UnityEvent_1_Invoke_m23616_gshared((UnityEvent_1_t5254 *)__this, (Object_t *)___arg0, method)
