﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t621;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t623;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2624;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
 void UnityEvent_1__ctor_m4141 (UnityEvent_1_t621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_AddListener_m4146 (UnityEvent_1_t621 * __this, UnityAction_1_t623 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_RemoveListener_m24278 (UnityEvent_1_t621 * __this, UnityAction_1_t623 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t292 * UnityEvent_1_FindMethod_Impl_m4142 (UnityEvent_1_t621 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t2624 * UnityEvent_1_GetDelegate_m4143 (UnityEvent_1_t621 * __this, Object_t * ___target, MethodInfo_t292 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
 BaseInvokableCall_t2624 * UnityEvent_1_GetDelegate_m24279 (Object_t * __this/* static, unused */, UnityAction_1_t623 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
 void UnityEvent_1_Invoke_m4145 (UnityEvent_1_t621 * __this, Color_t30  ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
