﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Attribute
struct Attribute_t862;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t484;
// System.Reflection.ParameterInfo
struct ParameterInfo_t290;

// System.Void System.Attribute::.ctor()
 void Attribute__ctor_m4722 (Attribute_t862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::CheckParameters(System.Object,System.Type)
 void Attribute_CheckParameters_m10424 (Object_t * __this/* static, unused */, Object_t * ___element, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
 Attribute_t862 * Attribute_GetCustomAttribute_m10425 (Object_t * __this/* static, unused */, MemberInfo_t484 * ___element, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
 Attribute_t862 * Attribute_GetCustomAttribute_m10426 (Object_t * __this/* static, unused */, MemberInfo_t484 * ___element, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Attribute::GetHashCode()
 int32_t Attribute_GetHashCode_m4729 (Attribute_t862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type)
 bool Attribute_IsDefined_m10427 (Object_t * __this/* static, unused */, ParameterInfo_t290 * ___element, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type)
 bool Attribute_IsDefined_m10428 (Object_t * __this/* static, unused */, MemberInfo_t484 * ___element, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type,System.Boolean)
 bool Attribute_IsDefined_m10429 (Object_t * __this/* static, unused */, MemberInfo_t484 * ___element, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type,System.Boolean)
 bool Attribute_IsDefined_m10430 (Object_t * __this/* static, unused */, ParameterInfo_t290 * ___element, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::Equals(System.Object)
 bool Attribute_Equals_m4728 (Attribute_t862 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
