#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoField
struct MonoField_t3400;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Object
struct Object_t;
// System.Reflection.FieldInfo
struct FieldInfo_t961;
// System.Reflection.Binder
struct Binder_t2701;
// System.Globalization.CultureInfo
struct CultureInfo_t872;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoField::.ctor()
 void MonoField__ctor_m12648 (MonoField_t3400 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldAttributes System.Reflection.MonoField::get_Attributes()
 int32_t MonoField_get_Attributes_m12649 (MonoField_t3400 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeFieldHandle System.Reflection.MonoField::get_FieldHandle()
 RuntimeFieldHandle_t3181  MonoField_get_FieldHandle_m12650 (MonoField_t3400 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_FieldType()
 Type_t * MonoField_get_FieldType_m12651 (MonoField_t3400 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::GetParentType(System.Boolean)
 Type_t * MonoField_GetParentType_m12652 (MonoField_t3400 * __this, bool ___declaring, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_ReflectedType()
 Type_t * MonoField_get_ReflectedType_m12653 (MonoField_t3400 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_DeclaringType()
 Type_t * MonoField_get_DeclaringType_m12654 (MonoField_t3400 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoField::get_Name()
 String_t* MonoField_get_Name_m12655 (MonoField_t3400 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoField::IsDefined(System.Type,System.Boolean)
 bool MonoField_IsDefined_m12656 (MonoField_t3400 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t5* MonoField_GetCustomAttributes_m12657 (MonoField_t3400 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t5* MonoField_GetCustomAttributes_m12658 (MonoField_t3400 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.MonoField::GetFieldOffset()
 int32_t MonoField_GetFieldOffset_m12659 (MonoField_t3400 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoField::GetValueInternal(System.Object)
 Object_t * MonoField_GetValueInternal_m12660 (MonoField_t3400 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoField::GetValue(System.Object)
 Object_t * MonoField_GetValue_m12661 (MonoField_t3400 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoField::ToString()
 String_t* MonoField_ToString_m12662 (MonoField_t3400 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)
 void MonoField_SetValueInternal_m12663 (Object_t * __this/* static, unused */, FieldInfo_t961 * ___fi, Object_t * ___obj, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
 void MonoField_SetValue_m12664 (MonoField_t3400 * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t2701 * ___binder, CultureInfo_t872 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoField_GetObjectData_m12665 (MonoField_t3400 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::CheckGeneric()
 void MonoField_CheckGeneric_m12666 (MonoField_t3400 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
