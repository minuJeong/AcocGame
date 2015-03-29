﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.PersistentCall
struct PersistentCall_t2633;
// UnityEngine.Object
struct Object_t111;
struct Object_t111_marshaled;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t2624;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2625;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t2634;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"

// System.Void UnityEngine.Events.PersistentCall::.ctor()
 void PersistentCall__ctor_m9001 (PersistentCall_t2633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
 Object_t111 * PersistentCall_get_target_m9002 (PersistentCall_t2633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
 String_t* PersistentCall_get_methodName_m9003 (PersistentCall_t2633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
 int32_t PersistentCall_get_mode_m9004 (PersistentCall_t2633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
 ArgumentCache_t2624 * PersistentCall_get_arguments_m9005 (PersistentCall_t2633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
 bool PersistentCall_IsValid_m9006 (PersistentCall_t2633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
 BaseInvokableCall_t2625 * PersistentCall_GetRuntimeCall_m9007 (PersistentCall_t2633 * __this, UnityEventBase_t2634 * ___theEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
 BaseInvokableCall_t2625 * PersistentCall_GetObjectCall_m9008 (Object_t * __this/* static, unused */, Object_t111 * ___target, MethodInfo_t292 * ___method, ArgumentCache_t2624 * ___arguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
