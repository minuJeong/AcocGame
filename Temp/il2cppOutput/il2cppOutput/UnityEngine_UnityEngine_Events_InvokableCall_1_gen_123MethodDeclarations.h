#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t5336;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t623;
// System.Object[]
struct ObjectU5BU5D_t5;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
 void InvokableCall_1__ctor_m24283 (InvokableCall_1_t5336 * __this, Object_t * ___target, MethodInfo_t292 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
 void InvokableCall_1__ctor_m24284 (InvokableCall_1_t5336 * __this, UnityAction_1_t623 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
 void InvokableCall_1_Invoke_m24285 (InvokableCall_1_t5336 * __this, ObjectU5BU5D_t5* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
 bool InvokableCall_1_Find_m24286 (InvokableCall_1_t5336 * __this, Object_t * ___targetObj, MethodInfo_t292 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
