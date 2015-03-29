#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t4181;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t4182;
// System.Object[]
struct ObjectU5BU5D_t5;

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
 void InvokableCall_1__ctor_m16518_gshared (InvokableCall_1_t4181 * __this, Object_t * ___target, MethodInfo_t292 * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m16518(__this, ___target, ___theFunction, method) (void)InvokableCall_1__ctor_m16518_gshared((InvokableCall_1_t4181 *)__this, (Object_t *)___target, (MethodInfo_t292 *)___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
 void InvokableCall_1__ctor_m16519_gshared (InvokableCall_1_t4181 * __this, UnityAction_1_t4182 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m16519(__this, ___callback, method) (void)InvokableCall_1__ctor_m16519_gshared((InvokableCall_1_t4181 *)__this, (UnityAction_1_t4182 *)___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
 void InvokableCall_1_Invoke_m16520_gshared (InvokableCall_1_t4181 * __this, ObjectU5BU5D_t5* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m16520(__this, ___args, method) (void)InvokableCall_1_Invoke_m16520_gshared((InvokableCall_1_t4181 *)__this, (ObjectU5BU5D_t5*)___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
 bool InvokableCall_1_Find_m16521_gshared (InvokableCall_1_t4181 * __this, Object_t * ___targetObj, MethodInfo_t292 * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m16521(__this, ___targetObj, ___method, method) (bool)InvokableCall_1_Find_m16521_gshared((InvokableCall_1_t4181 *)__this, (Object_t *)___targetObj, (MethodInfo_t292 *)___method, method)
