#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.PropertyInfo
struct PropertyInfo_t958;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t289;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Reflection.Binder
struct Binder_t2701;
// System.Globalization.CultureInfo
struct CultureInfo_t872;
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.PropertyInfo::.ctor()
 void PropertyInfo__ctor_m12767 (PropertyInfo_t958 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyAttributes System.Reflection.PropertyInfo::get_Attributes()
// System.Boolean System.Reflection.PropertyInfo::get_CanRead()
// System.Boolean System.Reflection.PropertyInfo::get_CanWrite()
// System.Reflection.MemberTypes System.Reflection.PropertyInfo::get_MemberType()
 int32_t PropertyInfo_get_MemberType_m12768 (PropertyInfo_t958 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.PropertyInfo::get_PropertyType()
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean)
// System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters()
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean)
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[])
 Object_t * PropertyInfo_GetValue_m5246 (PropertyInfo_t958 * __this, Object_t * ___obj, ObjectU5BU5D_t5* ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[])
 void PropertyInfo_SetValue_m5232 (PropertyInfo_t958 * __this, Object_t * ___obj, Object_t * ___value, ObjectU5BU5D_t5* ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
