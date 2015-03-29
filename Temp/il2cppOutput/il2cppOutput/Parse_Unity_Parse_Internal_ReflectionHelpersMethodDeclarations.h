#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.ReflectionHelpers
struct ReflectionHelpers_t1065;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t1066;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t291;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1067;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
struct IEnumerable_1_t1068;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1069;
// System.Reflection.PropertyInfo
struct PropertyInfo_t958;
// <>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>
struct U3CU3Ef__AnonymousType0_2_t1070;
// <>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>>
struct U3CU3Ef__AnonymousType1_2_t1060;
// System.Reflection.ParameterInfo
struct ParameterInfo_t290;

// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> Parse.Internal.ReflectionHelpers::GetProperties(System.Type)
 Object_t* ReflectionHelpers_GetProperties_m5510 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Parse.Internal.ReflectionHelpers::GetMethod(System.Type,System.String,System.Type[])
 MethodInfo_t292 * ReflectionHelpers_GetMethod_m5511 (Object_t * __this/* static, unused */, Type_t * ___type, String_t* ___name, TypeU5BU5D_t291* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.ReflectionHelpers::IsPrimitive(System.Type)
 bool ReflectionHelpers_IsPrimitive_m5512 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Type> Parse.Internal.ReflectionHelpers::GetInterfaces(System.Type)
 Object_t* ReflectionHelpers_GetInterfaces_m5513 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.ReflectionHelpers::IsConstructedGenericType(System.Type)
 bool ReflectionHelpers_IsConstructedGenericType_m5514 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> Parse.Internal.ReflectionHelpers::GetConstructors(System.Type)
 Object_t* ReflectionHelpers_GetConstructors_m5515 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Parse.Internal.ReflectionHelpers::GetGenericTypeArguments(System.Type)
 TypeU5BU5D_t291* ReflectionHelpers_GetGenericTypeArguments_m5516 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Parse.Internal.ReflectionHelpers::FindConstructor(System.Type,System.Type[])
 ConstructorInfo_t1069 * ReflectionHelpers_FindConstructor_m5517 (Object_t * __this/* static, unused */, Type_t * ___self, TypeU5BU5D_t291* ___parameterTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo Parse.Internal.ReflectionHelpers::GetProperty(System.Type,System.String)
 PropertyInfo_t958 * ReflectionHelpers_GetProperty_m5518 (Object_t * __this/* static, unused */, Type_t * ___type, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.ReflectionHelpers::IsNullable(System.Type)
 bool ReflectionHelpers_IsNullable_m5519 (Object_t * __this/* static, unused */, Type_t * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// <>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]> Parse.Internal.ReflectionHelpers::<FindConstructor>b__2(System.Reflection.ConstructorInfo)
 U3CU3Ef__AnonymousType0_2_t1070 * ReflectionHelpers_U3CFindConstructorU3Eb__2_m5520 (Object_t * __this/* static, unused */, ConstructorInfo_t1069 * ___constructor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// <>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>> Parse.Internal.ReflectionHelpers::<FindConstructor>b__3(<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>)
 U3CU3Ef__AnonymousType1_2_t1060 * ReflectionHelpers_U3CFindConstructorU3Eb__3_m5521 (Object_t * __this/* static, unused */, U3CU3Ef__AnonymousType0_2_t1070 * ___U3CU3Eh__TransparentIdentifier0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Parse.Internal.ReflectionHelpers::<FindConstructor>b__6(<>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>>)
 ConstructorInfo_t1069 * ReflectionHelpers_U3CFindConstructorU3Eb__6_m5522 (Object_t * __this/* static, unused */, U3CU3Ef__AnonymousType1_2_t1060 * ___U3CU3Eh__TransparentIdentifier1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.Internal.ReflectionHelpers::<FindConstructor>b__4(System.Reflection.ParameterInfo)
 Type_t * ReflectionHelpers_U3CFindConstructorU3Eb__4_m5523 (Object_t * __this/* static, unused */, ParameterInfo_t290 * ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
