#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t715;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t5641;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2624;

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
 void UnityEvent_1__ctor_m4485 (UnityEvent_1_t715 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_AddListener_m26735 (UnityEvent_1_t715 * __this, UnityAction_1_t5641 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_RemoveListener_m26736 (UnityEvent_1_t715 * __this, UnityAction_1_t5641 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t292 * UnityEvent_1_FindMethod_Impl_m4486 (UnityEvent_1_t715 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t2624 * UnityEvent_1_GetDelegate_m4487 (UnityEvent_1_t715 * __this, Object_t * ___target, MethodInfo_t292 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
 BaseInvokableCall_t2624 * UnityEvent_1_GetDelegate_m26737 (Object_t * __this/* static, unused */, UnityAction_1_t5641 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
 void UnityEvent_1_Invoke_m4488 (UnityEvent_1_t715 * __this, bool ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
