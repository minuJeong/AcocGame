#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t147;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t3179;
// System.Reflection.MemberInfo
struct MemberInfo_t484;
// System.Object
struct Object_t;
// System.Type[]
struct TypeU5BU5D_t291;
// System.Reflection.EventInfo
struct EventInfo_t3180;
// System.Reflection.FieldInfo
struct FieldInfo_t961;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t960;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Reflection.Binder
struct Binder_t2701;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t2702;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2451;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t957;
// System.Reflection.PropertyInfo
struct PropertyInfo_t958;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1069;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1408;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Globalization.CultureInfo
struct CultureInfo_t872;
// System.String[]
struct StringU5BU5D_t4;
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Void System.Type::.ctor()
 void Type__ctor_m11096 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Type::.cctor()
 void Type__cctor_m11097 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterName_impl(System.Reflection.MemberInfo,System.Object)
 bool Type_FilterName_impl_m11098 (Object_t * __this/* static, unused */, MemberInfo_t484 * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterNameIgnoreCase_impl(System.Reflection.MemberInfo,System.Object)
 bool Type_FilterNameIgnoreCase_impl_m11099 (Object_t * __this/* static, unused */, MemberInfo_t484 * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterAttribute_impl(System.Reflection.MemberInfo,System.Object)
 bool Type_FilterAttribute_impl_m11100 (Object_t * __this/* static, unused */, MemberInfo_t484 * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Type::get_Assembly()
// System.String System.Type::get_AssemblyQualifiedName()
// System.Reflection.TypeAttributes System.Type::get_Attributes()
 int32_t Type_get_Attributes_m11101 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::get_BaseType()
// System.Type System.Type::get_DeclaringType()
 Type_t * Type_get_DeclaringType_m11102 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Type::get_FullName()
// System.Boolean System.Type::get_HasElementType()
 bool Type_get_HasElementType_m11103 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsAbstract()
 bool Type_get_IsAbstract_m11104 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsArray()
 bool Type_get_IsArray_m2511 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsByRef()
 bool Type_get_IsByRef_m10146 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsClass()
 bool Type_get_IsClass_m5215 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsContextful()
 bool Type_get_IsContextful_m11105 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsEnum()
 bool Type_get_IsEnum_m5221 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsExplicitLayout()
 bool Type_get_IsExplicitLayout_m11106 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsInterface()
 bool Type_get_IsInterface_m11107 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsMarshalByRef()
 bool Type_get_IsMarshalByRef_m11108 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPointer()
 bool Type_get_IsPointer_m11109 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPrimitive()
 bool Type_get_IsPrimitive_m6396 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSealed()
 bool Type_get_IsSealed_m11110 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSerializable()
 bool Type_get_IsSerializable_m11111 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsValueType()
 bool Type_get_IsValueType_m10147 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Type::get_MemberType()
 int32_t Type_get_MemberType_m11112 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Type::get_Module()
// System.String System.Type::get_Namespace()
// System.Type System.Type::get_ReflectedType()
 Type_t * Type_get_ReflectedType_m11113 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Type::get_TypeHandle()
 RuntimeTypeHandle_t3178  Type_get_TypeHandle_m11114 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::get_UnderlyingSystemType()
// System.Boolean System.Type::Equals(System.Object)
 bool Type_Equals_m11115 (Type_t * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::Equals(System.Type)
 bool Type_Equals_m2513 (Type_t * __this, Type_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::EqualsInternal(System.Type)
 bool Type_EqualsInternal_m11116 (Type_t * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_handle(System.IntPtr)
 Type_t * Type_internal_from_handle_m11117 (Object_t * __this/* static, unused */, IntPtr_t39 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_name(System.String,System.Boolean,System.Boolean)
 Type_t * Type_internal_from_name_m11118 (Object_t * __this/* static, unused */, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String)
 Type_t * Type_GetType_m6463 (Object_t * __this/* static, unused */, String_t* ___typeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String,System.Boolean)
 Type_t * Type_GetType_m9195 (Object_t * __this/* static, unused */, String_t* ___typeName, bool ___throwOnError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCodeInternal(System.Type)
 int32_t Type_GetTypeCodeInternal_m11119 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCode(System.Type)
 int32_t Type_GetTypeCode_m7853 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
 Type_t * Type_GetTypeFromHandle_m385 (Object_t * __this/* static, unused */, RuntimeTypeHandle_t3178  ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Type::GetTypeHandle(System.Object)
 RuntimeTypeHandle_t3178  Type_GetTypeHandle_m11120 (Object_t * __this/* static, unused */, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_subtype_of(System.Type,System.Type,System.Boolean)
 bool Type_type_is_subtype_of_m11121 (Object_t * __this/* static, unused */, Type_t * ___a, Type_t * ___b, bool ___check_interfaces, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_assignable_from(System.Type,System.Type)
 bool Type_type_is_assignable_from_m11122 (Object_t * __this/* static, unused */, Type_t * ___a, Type_t * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsSubclassOf(System.Type)
 bool Type_IsSubclassOf_m10150 (Type_t * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetInterface(System.String)
 Type_t * Type_GetInterface_m5192 (Type_t * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetInterface(System.String,System.Boolean)
// System.Type[] System.Type::GetInterfaces()
// System.Boolean System.Type::IsAssignableFrom(System.Type)
 bool Type_IsAssignableFrom_m5216 (Type_t * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsInstanceOfType(System.Object)
 bool Type_IsInstanceOfType_m11123 (Type_t * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Type::GetArrayRank()
 int32_t Type_GetArrayRank_m10218 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetElementType()
// System.Reflection.EventInfo System.Type::GetEvent(System.String,System.Reflection.BindingFlags)
// System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags)
// System.Reflection.FieldInfo[] System.Type::GetFields()
 FieldInfoU5BU5D_t960* Type_GetFields_m5200 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags)
// System.Int32 System.Type::GetHashCode()
 int32_t Type_GetHashCode_m11124 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
 MethodInfo_t292 * Type_GetMethod_m2097 (Type_t * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
 MethodInfo_t292 * Type_GetMethod_m10217 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Type[])
 MethodInfo_t292 * Type_GetMethod_m5213 (Type_t * __this, String_t* ___name, TypeU5BU5D_t291* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t292 * Type_GetMethod_m9214 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2701 * ___binder, TypeU5BU5D_t291* ___types, ParameterModifierU5BU5D_t2702* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t292 * Type_GetMethod_m11125 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2701 * ___binder, int32_t ___callConvention, TypeU5BU5D_t291* ___types, ParameterModifierU5BU5D_t2702* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags)
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
 PropertyInfoU5BU5D_t957* Type_GetProperties_m5193 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags)
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
 PropertyInfo_t958 * Type_GetProperty_m6411 (Type_t * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags)
 PropertyInfo_t958 * Type_GetProperty_m11126 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type)
 PropertyInfo_t958 * Type_GetProperty_m11127 (Type_t * __this, String_t* ___name, Type_t * ___returnType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type,System.Type[])
 PropertyInfo_t958 * Type_GetProperty_m11128 (Type_t * __this, String_t* ___name, Type_t * ___returnType, TypeU5BU5D_t291* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t958 * Type_GetProperty_m11129 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2701 * ___binder, Type_t * ___returnType, TypeU5BU5D_t291* ___types, ParameterModifierU5BU5D_t2702* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.ConstructorInfo System.Type::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.TypeAttributes System.Type::GetAttributeFlagsImpl()
// System.Boolean System.Type::HasElementTypeImpl()
// System.Boolean System.Type::IsArrayImpl()
// System.Boolean System.Type::IsByRefImpl()
// System.Boolean System.Type::IsPointerImpl()
// System.Boolean System.Type::IsPrimitiveImpl()
// System.Boolean System.Type::IsArrayImpl(System.Type)
 bool Type_IsArrayImpl_m11130 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsValueTypeImpl()
 bool Type_IsValueTypeImpl_m11131 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsContextfulImpl()
 bool Type_IsContextfulImpl_m11132 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsMarshalByRefImpl()
 bool Type_IsMarshalByRefImpl_m11133 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
 ConstructorInfo_t1069 * Type_GetConstructor_m9196 (Type_t * __this, TypeU5BU5D_t291* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t1069 * Type_GetConstructor_m11134 (Type_t * __this, int32_t ___bindingAttr, Binder_t2701 * ___binder, TypeU5BU5D_t291* ___types, ParameterModifierU5BU5D_t2702* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t1069 * Type_GetConstructor_m11135 (Type_t * __this, int32_t ___bindingAttr, Binder_t2701 * ___binder, int32_t ___callConvention, TypeU5BU5D_t291* ___types, ParameterModifierU5BU5D_t2702* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Type::GetConstructors()
 ConstructorInfoU5BU5D_t1408* Type_GetConstructors_m6400 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Type::GetConstructors(System.Reflection.BindingFlags)
// System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
// System.String System.Type::ToString()
 String_t* Type_ToString_m10201 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSystemType()
 bool Type_get_IsSystemType_m11136 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Type::GetGenericArguments()
 TypeU5BU5D_t291* Type_GetGenericArguments_m6401 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_ContainsGenericParameters()
 bool Type_get_ContainsGenericParameters_m11137 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericTypeDefinition()
 bool Type_get_IsGenericTypeDefinition_m6399 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetGenericTypeDefinition_impl()
 Type_t * Type_GetGenericTypeDefinition_impl_m11138 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetGenericTypeDefinition()
 Type_t * Type_GetGenericTypeDefinition_m6412 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericType()
 bool Type_get_IsGenericType_m6398 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type,System.Type[])
 Type_t * Type_MakeGenericType_m11139 (Object_t * __this/* static, unused */, Type_t * ___gt, TypeU5BU5D_t291* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type[])
 Type_t * Type_MakeGenericType_m7866 (Type_t * __this, TypeU5BU5D_t291* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericParameter()
 bool Type_get_IsGenericParameter_m11140 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsNested()
 bool Type_get_IsNested_m11141 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Type::GetPseudoCustomAttributes()
 ObjectU5BU5D_t5* Type_GetPseudoCustomAttributes_m11142 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
