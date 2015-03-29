﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.EventInfo
struct EventInfo_t3180;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Reflection.EventAttributes
#include "mscorlib_System_Reflection_EventAttributes.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"

// System.Void System.Reflection.EventInfo::.ctor()
 void EventInfo__ctor_m12589 (EventInfo_t3180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventAttributes System.Reflection.EventInfo::get_Attributes()
// System.Type System.Reflection.EventInfo::get_EventHandlerType()
 Type_t * EventInfo_get_EventHandlerType_m12590 (EventInfo_t3180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Reflection.EventInfo::get_MemberType()
 int32_t EventInfo_get_MemberType_m12591 (EventInfo_t3180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.EventInfo::GetAddMethod(System.Boolean)
