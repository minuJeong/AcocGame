#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty
struct MonoProperty_t3407;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t289;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t2701;
// System.Globalization.CultureInfo
struct CultureInfo_t872;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoProperty::.ctor()
 void MonoProperty__ctor_m12730 (MonoProperty_t3407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::CachePropertyInfo(System.Reflection.PInfo)
 void MonoProperty_CachePropertyInfo_m12731 (MonoProperty_t3407 * __this, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyAttributes System.Reflection.MonoProperty::get_Attributes()
 int32_t MonoProperty_get_Attributes_m12732 (MonoProperty_t3407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanRead()
 bool MonoProperty_get_CanRead_m12733 (MonoProperty_t3407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanWrite()
 bool MonoProperty_get_CanWrite_m12734 (MonoProperty_t3407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_PropertyType()
 Type_t * MonoProperty_get_PropertyType_m12735 (MonoProperty_t3407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_ReflectedType()
 Type_t * MonoProperty_get_ReflectedType_m12736 (MonoProperty_t3407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_DeclaringType()
 Type_t * MonoProperty_get_DeclaringType_m12737 (MonoProperty_t3407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::get_Name()
 String_t* MonoProperty_get_Name_m12738 (MonoProperty_t3407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetGetMethod(System.Boolean)
 MethodInfo_t292 * MonoProperty_GetGetMethod_m12739 (MonoProperty_t3407 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoProperty::GetIndexParameters()
 ParameterInfoU5BU5D_t289* MonoProperty_GetIndexParameters_m12740 (MonoProperty_t3407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetSetMethod(System.Boolean)
 MethodInfo_t292 * MonoProperty_GetSetMethod_m12741 (MonoProperty_t3407 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::IsDefined(System.Type,System.Boolean)
 bool MonoProperty_IsDefined_m12742 (MonoProperty_t3407 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t5* MonoProperty_GetCustomAttributes_m12743 (MonoProperty_t3407 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t5* MonoProperty_GetCustomAttributes_m12744 (MonoProperty_t3407 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Object[])
 Object_t * MonoProperty_GetValue_m12745 (MonoProperty_t3407 * __this, Object_t * ___obj, ObjectU5BU5D_t5* ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MonoProperty_GetValue_m12746 (MonoProperty_t3407 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2701 * ___binder, ObjectU5BU5D_t5* ___index, CultureInfo_t872 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 void MonoProperty_SetValue_m12747 (MonoProperty_t3407 * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t2701 * ___binder, ObjectU5BU5D_t5* ___index, CultureInfo_t872 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::ToString()
 String_t* MonoProperty_ToString_m12748 (MonoProperty_t3407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoProperty_GetObjectData_m12749 (MonoProperty_t3407 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
