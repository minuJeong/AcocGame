#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t674;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t5551;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2625;

// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
#define UnityEvent_1__ctor_m4305(__this, method) (void)UnityEvent_1__ctor_m23611_gshared((UnityEvent_1_t5255 *)__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m26071(__this, ___call, method) (void)UnityEvent_1_AddListener_m23613_gshared((UnityEvent_1_t5255 *)__this, (UnityAction_1_t4183 *)___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m26072(__this, ___call, method) (void)UnityEvent_1_RemoveListener_m23615_gshared((UnityEvent_1_t5255 *)__this, (UnityAction_1_t4183 *)___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.String>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m4306(__this, ___name, ___targetObj, method) (MethodInfo_t292 *)UnityEvent_1_FindMethod_Impl_m23616_gshared((UnityEvent_1_t5255 *)__this, (String_t*)___name, (Object_t *)___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m4307(__this, ___target, ___theFunction, method) (BaseInvokableCall_t2625 *)UnityEvent_1_GetDelegate_m23617_gshared((UnityEvent_1_t5255 *)__this, (Object_t *)___target, (MethodInfo_t292 *)___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m4308(__this/* static, unused */, ___action, method) (BaseInvokableCall_t2625 *)UnityEvent_1_GetDelegate_m23618_gshared((Object_t *)__this/* static, unused */, (UnityAction_1_t4183 *)___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
#define UnityEvent_1_Invoke_m4363(__this, ___arg0, method) (void)UnityEvent_1_Invoke_m23619_gshared((UnityEvent_1_t5255 *)__this, (Object_t *)___arg0, method)
