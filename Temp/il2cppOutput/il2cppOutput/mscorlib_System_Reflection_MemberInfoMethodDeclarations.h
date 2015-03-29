﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MemberInfo
struct MemberInfo_t484;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t3180;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"

// System.Void System.Reflection.MemberInfo::.ctor()
 void MemberInfo__ctor_m11146 (MemberInfo_t484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MemberInfo::get_DeclaringType()
// System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType()
// System.String System.Reflection.MemberInfo::get_Name()
// System.Type System.Reflection.MemberInfo::get_ReflectedType()
// System.Reflection.Module System.Reflection.MemberInfo::get_Module()
 Module_t3180 * MemberInfo_get_Module_m11147 (MemberInfo_t484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean)
// System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean)
// System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean)
