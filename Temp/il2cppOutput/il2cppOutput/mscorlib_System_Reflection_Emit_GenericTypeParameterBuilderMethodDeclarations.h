#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.GenericTypeParameterBuilder
struct GenericTypeParameterBuilder_t3374;
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

// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsSubclassOf(System.Type)
 bool GenericTypeParameterBuilder_IsSubclassOf_m12381 (GenericTypeParameterBuilder_t3374 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.GenericTypeParameterBuilder::GetAttributeFlagsImpl()
 int32_t GenericTypeParameterBuilder_GetAttributeFlagsImpl_m12382 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t1069 * GenericTypeParameterBuilder_GetConstructorImpl_m12383 (GenericTypeParameterBuilder_t3374 * __this, int32_t ___bindingAttr, Binder_t2703 * ___binder, int32_t ___callConvention, TypeU5BU5D_t291* ___types, ParameterModifierU5BU5D_t2704* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t1408* GenericTypeParameterBuilder_GetConstructors_m12384 (GenericTypeParameterBuilder_t3374 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t3181 * GenericTypeParameterBuilder_GetEvent_m12385 (GenericTypeParameterBuilder_t3374 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t961 * GenericTypeParameterBuilder_GetField_m12386 (GenericTypeParameterBuilder_t3374 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetFields(System.Reflection.BindingFlags)
 FieldInfoU5BU5D_t960* GenericTypeParameterBuilder_GetFields_m12387 (GenericTypeParameterBuilder_t3374 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetInterface(System.String,System.Boolean)
 Type_t * GenericTypeParameterBuilder_GetInterface_m12388 (GenericTypeParameterBuilder_t3374 * __this, String_t* ___name, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaces()
 TypeU5BU5D_t291* GenericTypeParameterBuilder_GetInterfaces_m12389 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t2451* GenericTypeParameterBuilder_GetMethods_m12390 (GenericTypeParameterBuilder_t3374 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t292 * GenericTypeParameterBuilder_GetMethodImpl_m12391 (GenericTypeParameterBuilder_t3374 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2703 * ___binder, int32_t ___callConvention, TypeU5BU5D_t291* ___types, ParameterModifierU5BU5D_t2704* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetProperties(System.Reflection.BindingFlags)
 PropertyInfoU5BU5D_t957* GenericTypeParameterBuilder_GetProperties_m12392 (GenericTypeParameterBuilder_t3374 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t958 * GenericTypeParameterBuilder_GetPropertyImpl_m12393 (GenericTypeParameterBuilder_t3374 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2703 * ___binder, Type_t * ___returnType, TypeU5BU5D_t291* ___types, ParameterModifierU5BU5D_t2704* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::HasElementTypeImpl()
 bool GenericTypeParameterBuilder_HasElementTypeImpl_m12394 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsAssignableFrom(System.Type)
 bool GenericTypeParameterBuilder_IsAssignableFrom_m12395 (GenericTypeParameterBuilder_t3374 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsInstanceOfType(System.Object)
 bool GenericTypeParameterBuilder_IsInstanceOfType_m12396 (GenericTypeParameterBuilder_t3374 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsArrayImpl()
 bool GenericTypeParameterBuilder_IsArrayImpl_m12397 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsByRefImpl()
 bool GenericTypeParameterBuilder_IsByRefImpl_m12398 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPointerImpl()
 bool GenericTypeParameterBuilder_IsPointerImpl_m12399 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPrimitiveImpl()
 bool GenericTypeParameterBuilder_IsPrimitiveImpl_m12400 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsValueTypeImpl()
 bool GenericTypeParameterBuilder_IsValueTypeImpl_m12401 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.GenericTypeParameterBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * GenericTypeParameterBuilder_InvokeMember_m12402 (GenericTypeParameterBuilder_t3374 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t2703 * ___binder, Object_t * ___target, ObjectU5BU5D_t5* ___args, ParameterModifierU5BU5D_t2704* ___modifiers, CultureInfo_t872 * ___culture, StringU5BU5D_t4* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetElementType()
 Type_t * GenericTypeParameterBuilder_GetElementType_m12403 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_UnderlyingSystemType()
 Type_t * GenericTypeParameterBuilder_get_UnderlyingSystemType_m12404 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.GenericTypeParameterBuilder::get_Assembly()
 Assembly_t147 * GenericTypeParameterBuilder_get_Assembly_m12405 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_AssemblyQualifiedName()
 String_t* GenericTypeParameterBuilder_get_AssemblyQualifiedName_m12406 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType()
 Type_t * GenericTypeParameterBuilder_get_BaseType_m12407 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_FullName()
 String_t* GenericTypeParameterBuilder_get_FullName_m12408 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsDefined(System.Type,System.Boolean)
 bool GenericTypeParameterBuilder_IsDefined_m12409 (GenericTypeParameterBuilder_t3374 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t5* GenericTypeParameterBuilder_GetCustomAttributes_m12410 (GenericTypeParameterBuilder_t3374 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t5* GenericTypeParameterBuilder_GetCustomAttributes_m12411 (GenericTypeParameterBuilder_t3374 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Name()
 String_t* GenericTypeParameterBuilder_get_Name_m12412 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Namespace()
 String_t* GenericTypeParameterBuilder_get_Namespace_m12413 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.GenericTypeParameterBuilder::get_Module()
 Module_t3180 * GenericTypeParameterBuilder_get_Module_m12414 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType()
 Type_t * GenericTypeParameterBuilder_get_DeclaringType_m12415 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_ReflectedType()
 Type_t * GenericTypeParameterBuilder_get_ReflectedType_m12416 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.GenericTypeParameterBuilder::get_TypeHandle()
 RuntimeTypeHandle_t3179  GenericTypeParameterBuilder_get_TypeHandle_m12417 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericArguments()
 TypeU5BU5D_t291* GenericTypeParameterBuilder_GetGenericArguments_m12418 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericTypeDefinition()
 Type_t * GenericTypeParameterBuilder_GetGenericTypeDefinition_m12419 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_ContainsGenericParameters()
 bool GenericTypeParameterBuilder_get_ContainsGenericParameters_m12420 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericParameter()
 bool GenericTypeParameterBuilder_get_IsGenericParameter_m12421 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericType()
 bool GenericTypeParameterBuilder_get_IsGenericType_m12422 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericTypeDefinition()
 bool GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m12423 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.GenericTypeParameterBuilder::not_supported()
 Exception_t107 * GenericTypeParameterBuilder_not_supported_m12424 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::ToString()
 String_t* GenericTypeParameterBuilder_ToString_m12425 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::Equals(System.Object)
 bool GenericTypeParameterBuilder_Equals_m12426 (GenericTypeParameterBuilder_t3374 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::GetHashCode()
 int32_t GenericTypeParameterBuilder_GetHashCode_m12427 (GenericTypeParameterBuilder_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeGenericType(System.Type[])
 Type_t * GenericTypeParameterBuilder_MakeGenericType_m12428 (GenericTypeParameterBuilder_t3374 * __this, TypeU5BU5D_t291* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
