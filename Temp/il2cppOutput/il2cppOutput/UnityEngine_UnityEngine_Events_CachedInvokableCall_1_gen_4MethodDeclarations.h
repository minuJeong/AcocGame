﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t4180;
// UnityEngine.Object
struct Object_t111;
struct Object_t111_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t5;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
 void CachedInvokableCall_1__ctor_m16515_gshared (CachedInvokableCall_1_t4180 * __this, Object_t111 * ___target, MethodInfo_t292 * ___theFunction, Object_t * ___argument, MethodInfo* method);
#define CachedInvokableCall_1__ctor_m16515(__this, ___target, ___theFunction, ___argument, method) (void)CachedInvokableCall_1__ctor_m16515_gshared((CachedInvokableCall_1_t4180 *)__this, (Object_t111 *)___target, (MethodInfo_t292 *)___theFunction, (Object_t *)___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
 void CachedInvokableCall_1_Invoke_m16517_gshared (CachedInvokableCall_1_t4180 * __this, ObjectU5BU5D_t5* ___args, MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m16517(__this, ___args, method) (void)CachedInvokableCall_1_Invoke_m16517_gshared((CachedInvokableCall_1_t4180 *)__this, (ObjectU5BU5D_t5*)___args, method)
