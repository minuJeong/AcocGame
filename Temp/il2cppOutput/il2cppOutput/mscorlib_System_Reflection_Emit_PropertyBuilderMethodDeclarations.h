#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.PropertyBuilder
struct PropertyBuilder_t3375;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t3179;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t289;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t2701;
// System.Globalization.CultureInfo
struct CultureInfo_t872;
// System.Exception
struct Exception_t107;
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Reflection.PropertyAttributes System.Reflection.Emit.PropertyBuilder::get_Attributes()
 int32_t PropertyBuilder_get_Attributes_m12454 (PropertyBuilder_t3375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanRead()
 bool PropertyBuilder_get_CanRead_m12455 (PropertyBuilder_t3375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanWrite()
 bool PropertyBuilder_get_CanWrite_m12456 (PropertyBuilder_t3375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_DeclaringType()
 Type_t * PropertyBuilder_get_DeclaringType_m12457 (PropertyBuilder_t3375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.PropertyBuilder::get_Name()
 String_t* PropertyBuilder_get_Name_m12458 (PropertyBuilder_t3375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_PropertyType()
 Type_t * PropertyBuilder_get_PropertyType_m12459 (PropertyBuilder_t3375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_ReflectedType()
 Type_t * PropertyBuilder_get_ReflectedType_m12460 (PropertyBuilder_t3375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t5* PropertyBuilder_GetCustomAttributes_m12461 (PropertyBuilder_t3375 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t5* PropertyBuilder_GetCustomAttributes_m12462 (PropertyBuilder_t3375 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetGetMethod(System.Boolean)
 MethodInfo_t292 * PropertyBuilder_GetGetMethod_m12463 (PropertyBuilder_t3375 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.PropertyBuilder::GetIndexParameters()
 ParameterInfoU5BU5D_t289* PropertyBuilder_GetIndexParameters_m12464 (PropertyBuilder_t3375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetSetMethod(System.Boolean)
 MethodInfo_t292 * PropertyBuilder_GetSetMethod_m12465 (PropertyBuilder_t3375 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Object[])
 Object_t * PropertyBuilder_GetValue_m12466 (PropertyBuilder_t3375 * __this, Object_t * ___obj, ObjectU5BU5D_t5* ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * PropertyBuilder_GetValue_m12467 (PropertyBuilder_t3375 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2701 * ___binder, ObjectU5BU5D_t5* ___index, CultureInfo_t872 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::IsDefined(System.Type,System.Boolean)
 bool PropertyBuilder_IsDefined_m12468 (PropertyBuilder_t3375 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Object[])
 void PropertyBuilder_SetValue_m12469 (PropertyBuilder_t3375 * __this, Object_t * ___obj, Object_t * ___value, ObjectU5BU5D_t5* ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 void PropertyBuilder_SetValue_m12470 (PropertyBuilder_t3375 * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t2701 * ___binder, ObjectU5BU5D_t5* ___index, CultureInfo_t872 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.PropertyBuilder::get_Module()
 Module_t3179 * PropertyBuilder_get_Module_m12471 (PropertyBuilder_t3375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.PropertyBuilder::not_supported()
 Exception_t107 * PropertyBuilder_not_supported_m12472 (PropertyBuilder_t3375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
