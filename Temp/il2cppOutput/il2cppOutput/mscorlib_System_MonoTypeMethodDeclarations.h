#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MonoType
struct MonoType_t3725;
// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t147;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t3180;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1069;
// System.Reflection.Binder
struct Binder_t2703;
// System.Type[]
struct TypeU5BU5D_t291;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t2704;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1408;
// System.Reflection.EventInfo
struct EventInfo_t3181;
// System.Reflection.FieldInfo
struct FieldInfo_t961;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t960;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2451;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t957;
// System.Reflection.PropertyInfo
struct PropertyInfo_t958;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Globalization.CultureInfo
struct CultureInfo_t872;
// System.String[]
struct StringU5BU5D_t4;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Reflection.MethodBase
struct MethodBase_t424;
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Reflection.TypeAttributes System.MonoType::get_attributes(System.Type)
 int32_t MonoType_get_attributes_m14491 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetDefaultConstructor()
 ConstructorInfo_t1069 * MonoType_GetDefaultConstructor_m14492 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.MonoType::GetAttributeFlagsImpl()
 int32_t MonoType_GetAttributeFlagsImpl_m14493 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t1069 * MonoType_GetConstructorImpl_m14494 (MonoType_t3725 * __this, int32_t ___bindingAttr, Binder_t2703 * ___binder, int32_t ___callConvention, TypeU5BU5D_t291* ___types, ParameterModifierU5BU5D_t2704* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors_internal(System.Reflection.BindingFlags,System.Type)
 ConstructorInfoU5BU5D_t1408* MonoType_GetConstructors_internal_m14495 (MonoType_t3725 * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t1408* MonoType_GetConstructors_m14496 (MonoType_t3725 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::InternalGetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t3181 * MonoType_InternalGetEvent_m14497 (MonoType_t3725 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t3181 * MonoType_GetEvent_m14498 (MonoType_t3725 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.MonoType::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t961 * MonoType_GetField_m14499 (MonoType_t3725 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.MonoType::GetFields_internal(System.Reflection.BindingFlags,System.Type)
 FieldInfoU5BU5D_t960* MonoType_GetFields_internal_m14500 (MonoType_t3725 * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.MonoType::GetFields(System.Reflection.BindingFlags)
 FieldInfoU5BU5D_t960* MonoType_GetFields_m14501 (MonoType_t3725 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetInterface(System.String,System.Boolean)
 Type_t * MonoType_GetInterface_m14502 (MonoType_t3725 * __this, String_t* ___name, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetInterfaces()
 TypeU5BU5D_t291* MonoType_GetInterfaces_m14503 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
 MethodInfoU5BU5D_t2451* MonoType_GetMethodsByName_m14504 (MonoType_t3725 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t2451* MonoType_GetMethods_m14505 (MonoType_t3725 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.MonoType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t292 * MonoType_GetMethodImpl_m14506 (MonoType_t3725 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2703 * ___binder, int32_t ___callConvention, TypeU5BU5D_t291* ___types, ParameterModifierU5BU5D_t2704* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.MonoType::GetPropertiesByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
 PropertyInfoU5BU5D_t957* MonoType_GetPropertiesByName_m14507 (MonoType_t3725 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___icase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.MonoType::GetProperties(System.Reflection.BindingFlags)
 PropertyInfoU5BU5D_t957* MonoType_GetProperties_m14508 (MonoType_t3725 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t958 * MonoType_GetPropertyImpl_m14509 (MonoType_t3725 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2703 * ___binder, Type_t * ___returnType, TypeU5BU5D_t291* ___types, ParameterModifierU5BU5D_t2704* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::HasElementTypeImpl()
 bool MonoType_HasElementTypeImpl_m14510 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsArrayImpl()
 bool MonoType_IsArrayImpl_m14511 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsByRefImpl()
 bool MonoType_IsByRefImpl_m14512 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPointerImpl()
 bool MonoType_IsPointerImpl_m14513 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPrimitiveImpl()
 bool MonoType_IsPrimitiveImpl_m14514 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsSubclassOf(System.Type)
 bool MonoType_IsSubclassOf_m14515 (MonoType_t3725 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MonoType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * MonoType_InvokeMember_m14516 (MonoType_t3725 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t2703 * ___binder, Object_t * ___target, ObjectU5BU5D_t5* ___args, ParameterModifierU5BU5D_t2704* ___modifiers, CultureInfo_t872 * ___culture, StringU5BU5D_t4* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetElementType()
 Type_t * MonoType_GetElementType_m14517 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_UnderlyingSystemType()
 Type_t * MonoType_get_UnderlyingSystemType_m14518 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.MonoType::get_Assembly()
 Assembly_t147 * MonoType_get_Assembly_m14519 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_AssemblyQualifiedName()
 String_t* MonoType_get_AssemblyQualifiedName_m14520 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::getFullName(System.Boolean,System.Boolean)
 String_t* MonoType_getFullName_m14521 (MonoType_t3725 * __this, bool ___full_name, bool ___assembly_qualified, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_BaseType()
 Type_t * MonoType_get_BaseType_m14522 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_FullName()
 String_t* MonoType_get_FullName_m14523 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsDefined(System.Type,System.Boolean)
 bool MonoType_IsDefined_m14524 (MonoType_t3725 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t5* MonoType_GetCustomAttributes_m14525 (MonoType_t3725 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t5* MonoType_GetCustomAttributes_m14526 (MonoType_t3725 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.MonoType::get_MemberType()
 int32_t MonoType_get_MemberType_m14527 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Name()
 String_t* MonoType_get_Name_m14528 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Namespace()
 String_t* MonoType_get_Namespace_m14529 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.MonoType::get_Module()
 Module_t3180 * MonoType_get_Module_m14530 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_DeclaringType()
 Type_t * MonoType_get_DeclaringType_m14531 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_ReflectedType()
 Type_t * MonoType_get_ReflectedType_m14532 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.MonoType::get_TypeHandle()
 RuntimeTypeHandle_t3179  MonoType_get_TypeHandle_m14533 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MonoType::GetArrayRank()
 int32_t MonoType_GetArrayRank_m14534 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoType_GetObjectData_m14535 (MonoType_t3725 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::ToString()
 String_t* MonoType_ToString_m14536 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetGenericArguments()
 TypeU5BU5D_t291* MonoType_GetGenericArguments_m14537 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_ContainsGenericParameters()
 bool MonoType_get_ContainsGenericParameters_m14538 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_IsGenericParameter()
 bool MonoType_get_IsGenericParameter_m14539 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetGenericTypeDefinition()
 Type_t * MonoType_GetGenericTypeDefinition_m14540 (MonoType_t3725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.MonoType::CheckMethodSecurity(System.Reflection.MethodBase)
 MethodBase_t424 * MonoType_CheckMethodSecurity_m14541 (MonoType_t3725 * __this, MethodBase_t424 * ___mb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::ReorderParamArrayArguments(System.Object[]&,System.Reflection.MethodBase)
 void MonoType_ReorderParamArrayArguments_m14542 (MonoType_t3725 * __this, ObjectU5BU5D_t5** ___args, MethodBase_t424 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
