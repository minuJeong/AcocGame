#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t291;
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"

// System.Void System.Reflection.MethodInfo::.ctor()
 void MethodInfo__ctor_m12615 (MethodInfo_t292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition()
// System.Reflection.MemberTypes System.Reflection.MethodInfo::get_MemberType()
 int32_t MethodInfo_get_MemberType_m12616 (MethodInfo_t292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MethodInfo::get_ReturnType()
 Type_t * MethodInfo_get_ReturnType_m2508 (MethodInfo_t292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MethodInfo::GetGenericMethodDefinition()
 MethodInfo_t292 * MethodInfo_GetGenericMethodDefinition_m6833 (MethodInfo_t292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[])
 MethodInfo_t292 * MethodInfo_MakeGenericMethod_m2098 (MethodInfo_t292 * __this, TypeU5BU5D_t291* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MethodInfo::GetGenericArguments()
 TypeU5BU5D_t291* MethodInfo_GetGenericArguments_m12617 (MethodInfo_t292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethod()
 bool MethodInfo_get_IsGenericMethod_m12618 (MethodInfo_t292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethodDefinition()
 bool MethodInfo_get_IsGenericMethodDefinition_m12619 (MethodInfo_t292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_ContainsGenericParameters()
 bool MethodInfo_get_ContainsGenericParameters_m12620 (MethodInfo_t292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
