#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3365;
// System.Reflection.Assembly
struct Assembly_t147;
// System.String
struct String_t;
// System.Type
struct Type_t;
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
// System.Object[]
struct ObjectU5BU5D_t5;
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
// System.Globalization.CultureInfo
struct CultureInfo_t872;
// System.String[]
struct StringU5BU5D_t4;
// System.Exception
struct Exception_t107;
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
 int32_t TypeBuilder_GetAttributeFlagsImpl_m12476 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
 Assembly_t147 * TypeBuilder_get_Assembly_m12477 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
 String_t* TypeBuilder_get_AssemblyQualifiedName_m12478 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
 Type_t * TypeBuilder_get_BaseType_m12479 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
 Type_t * TypeBuilder_get_DeclaringType_m12480 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
 Type_t * TypeBuilder_get_UnderlyingSystemType_m12481 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
 String_t* TypeBuilder_get_FullName_m12482 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
 Module_t3180 * TypeBuilder_get_Module_m12483 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
 String_t* TypeBuilder_get_Name_m12484 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
 String_t* TypeBuilder_get_Namespace_m12485 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
 Type_t * TypeBuilder_get_ReflectedType_m12486 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t1069 * TypeBuilder_GetConstructorImpl_m12487 (TypeBuilder_t3365 * __this, int32_t ___bindingAttr, Binder_t2703 * ___binder, int32_t ___callConvention, TypeU5BU5D_t291* ___types, ParameterModifierU5BU5D_t2704* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
 bool TypeBuilder_IsDefined_m12488 (TypeBuilder_t3365 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t5* TypeBuilder_GetCustomAttributes_m12489 (TypeBuilder_t3365 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t5* TypeBuilder_GetCustomAttributes_m12490 (TypeBuilder_t3365 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t1408* TypeBuilder_GetConstructors_m12491 (TypeBuilder_t3365 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t1408* TypeBuilder_GetConstructorsInternal_m12492 (TypeBuilder_t3365 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
 Type_t * TypeBuilder_GetElementType_m12493 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t3181 * TypeBuilder_GetEvent_m12494 (TypeBuilder_t3365 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t961 * TypeBuilder_GetField_m12495 (TypeBuilder_t3365 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.TypeBuilder::GetFields(System.Reflection.BindingFlags)
 FieldInfoU5BU5D_t960* TypeBuilder_GetFields_m12496 (TypeBuilder_t3365 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetInterface(System.String,System.Boolean)
 Type_t * TypeBuilder_GetInterface_m12497 (TypeBuilder_t3365 * __this, String_t* ___name, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
 TypeU5BU5D_t291* TypeBuilder_GetInterfaces_m12498 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
 MethodInfoU5BU5D_t2451* TypeBuilder_GetMethodsByName_m12499 (TypeBuilder_t3365 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t2451* TypeBuilder_GetMethods_m12500 (TypeBuilder_t3365 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t292 * TypeBuilder_GetMethodImpl_m12501 (TypeBuilder_t3365 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2703 * ___binder, int32_t ___callConvention, TypeU5BU5D_t291* ___types, ParameterModifierU5BU5D_t2704* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.TypeBuilder::GetProperties(System.Reflection.BindingFlags)
 PropertyInfoU5BU5D_t957* TypeBuilder_GetProperties_m12502 (TypeBuilder_t3365 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t958 * TypeBuilder_GetPropertyImpl_m12503 (TypeBuilder_t3365 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2703 * ___binder, Type_t * ___returnType, TypeU5BU5D_t291* ___types, ParameterModifierU5BU5D_t2704* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
 bool TypeBuilder_HasElementTypeImpl_m12504 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * TypeBuilder_InvokeMember_m12505 (TypeBuilder_t3365 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t2703 * ___binder, Object_t * ___target, ObjectU5BU5D_t5* ___args, ParameterModifierU5BU5D_t2704* ___modifiers, CultureInfo_t872 * ___culture, StringU5BU5D_t4* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
 bool TypeBuilder_IsArrayImpl_m12506 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
 bool TypeBuilder_IsByRefImpl_m12507 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
 bool TypeBuilder_IsPointerImpl_m12508 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
 bool TypeBuilder_IsPrimitiveImpl_m12509 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
 bool TypeBuilder_IsValueTypeImpl_m12510 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
 Type_t * TypeBuilder_MakeGenericType_m12511 (TypeBuilder_t3365 * __this, TypeU5BU5D_t291* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
 RuntimeTypeHandle_t3179  TypeBuilder_get_TypeHandle_m12512 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
 bool TypeBuilder_get_IsCompilerContext_m12513 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
 bool TypeBuilder_get_is_created_m12514 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
 Exception_t107 * TypeBuilder_not_supported_m12515 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
 void TypeBuilder_check_created_m12516 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::ToString()
 String_t* TypeBuilder_ToString_m12517 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
 bool TypeBuilder_IsAssignableFrom_m12518 (TypeBuilder_t3365 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
 bool TypeBuilder_IsSubclassOf_m12519 (TypeBuilder_t3365 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
 bool TypeBuilder_IsAssignableTo_m12520 (TypeBuilder_t3365 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
 TypeU5BU5D_t291* TypeBuilder_GetGenericArguments_m12521 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
 Type_t * TypeBuilder_GetGenericTypeDefinition_m12522 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
 bool TypeBuilder_get_ContainsGenericParameters_m12523 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
 bool TypeBuilder_get_IsGenericParameter_m12524 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
 bool TypeBuilder_get_IsGenericTypeDefinition_m12525 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
 bool TypeBuilder_get_IsGenericType_m12526 (TypeBuilder_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
