#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.EnumBuilder
struct EnumBuilder_t3369;
// System.Reflection.Assembly
struct Assembly_t147;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t3179;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1069;
// System.Reflection.Binder
struct Binder_t2701;
// System.Type[]
struct TypeU5BU5D_t291;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t2702;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1408;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Reflection.EventInfo
struct EventInfo_t3180;
// System.Reflection.FieldInfo
struct FieldInfo_t961;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t960;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2451;
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

// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
 Assembly_t147 * EnumBuilder_get_Assembly_m12328 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
 String_t* EnumBuilder_get_AssemblyQualifiedName_m12329 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
 Type_t * EnumBuilder_get_BaseType_m12330 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
 Type_t * EnumBuilder_get_DeclaringType_m12331 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
 String_t* EnumBuilder_get_FullName_m12332 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
 Module_t3179 * EnumBuilder_get_Module_m12333 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
 String_t* EnumBuilder_get_Name_m12334 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
 String_t* EnumBuilder_get_Namespace_m12335 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
 Type_t * EnumBuilder_get_ReflectedType_m12336 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
 RuntimeTypeHandle_t3178  EnumBuilder_get_TypeHandle_m12337 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
 Type_t * EnumBuilder_get_UnderlyingSystemType_m12338 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
 int32_t EnumBuilder_GetAttributeFlagsImpl_m12339 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t1069 * EnumBuilder_GetConstructorImpl_m12340 (EnumBuilder_t3369 * __this, int32_t ___bindingAttr, Binder_t2701 * ___binder, int32_t ___callConvention, TypeU5BU5D_t291* ___types, ParameterModifierU5BU5D_t2702* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t1408* EnumBuilder_GetConstructors_m12341 (EnumBuilder_t3369 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t5* EnumBuilder_GetCustomAttributes_m12342 (EnumBuilder_t3369 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t5* EnumBuilder_GetCustomAttributes_m12343 (EnumBuilder_t3369 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
 Type_t * EnumBuilder_GetElementType_m12344 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t3180 * EnumBuilder_GetEvent_m12345 (EnumBuilder_t3369 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t961 * EnumBuilder_GetField_m12346 (EnumBuilder_t3369 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.EnumBuilder::GetFields(System.Reflection.BindingFlags)
 FieldInfoU5BU5D_t960* EnumBuilder_GetFields_m12347 (EnumBuilder_t3369 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::GetInterface(System.String,System.Boolean)
 Type_t * EnumBuilder_GetInterface_m12348 (EnumBuilder_t3369 * __this, String_t* ___name, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
 TypeU5BU5D_t291* EnumBuilder_GetInterfaces_m12349 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t292 * EnumBuilder_GetMethodImpl_m12350 (EnumBuilder_t3369 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2701 * ___binder, int32_t ___callConvention, TypeU5BU5D_t291* ___types, ParameterModifierU5BU5D_t2702* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t2451* EnumBuilder_GetMethods_m12351 (EnumBuilder_t3369 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.EnumBuilder::GetProperties(System.Reflection.BindingFlags)
 PropertyInfoU5BU5D_t957* EnumBuilder_GetProperties_m12352 (EnumBuilder_t3369 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t958 * EnumBuilder_GetPropertyImpl_m12353 (EnumBuilder_t3369 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2701 * ___binder, Type_t * ___returnType, TypeU5BU5D_t291* ___types, ParameterModifierU5BU5D_t2702* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
 bool EnumBuilder_HasElementTypeImpl_m12354 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * EnumBuilder_InvokeMember_m12355 (EnumBuilder_t3369 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t2701 * ___binder, Object_t * ___target, ObjectU5BU5D_t5* ___args, ParameterModifierU5BU5D_t2702* ___modifiers, CultureInfo_t872 * ___culture, StringU5BU5D_t4* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
 bool EnumBuilder_IsArrayImpl_m12356 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
 bool EnumBuilder_IsByRefImpl_m12357 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
 bool EnumBuilder_IsPointerImpl_m12358 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
 bool EnumBuilder_IsPrimitiveImpl_m12359 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
 bool EnumBuilder_IsValueTypeImpl_m12360 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
 bool EnumBuilder_IsDefined_m12361 (EnumBuilder_t3369 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
 Exception_t107 * EnumBuilder_CreateNotSupportedException_m12362 (EnumBuilder_t3369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
