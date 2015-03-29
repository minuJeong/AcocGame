﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t697;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t5574;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2624;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
 void UnityEvent_1__ctor_m4412 (UnityEvent_1_t697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_AddListener_m26184 (UnityEvent_1_t697 * __this, UnityAction_1_t5574 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_RemoveListener_m26185 (UnityEvent_1_t697 * __this, UnityAction_1_t5574 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t292 * UnityEvent_1_FindMethod_Impl_m4413 (UnityEvent_1_t697 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t2624 * UnityEvent_1_GetDelegate_m4414 (UnityEvent_1_t697 * __this, Object_t * ___target, MethodInfo_t292 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
 BaseInvokableCall_t2624 * UnityEvent_1_GetDelegate_m26186 (Object_t * __this/* static, unused */, UnityAction_1_t5574 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
 void UnityEvent_1_Invoke_m4423 (UnityEvent_1_t697 * __this, Vector2_t51  ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
