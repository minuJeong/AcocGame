#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.FieldBuilder
struct FieldBuilder_t3372;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t3371;
// System.Reflection.Module
struct Module_t3180;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t2703;
// System.Globalization.CultureInfo
struct CultureInfo_t872;
// System.Exception
struct Exception_t107;
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::get_Attributes()
 int32_t FieldBuilder_get_Attributes_m12366 (FieldBuilder_t3372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_DeclaringType()
 Type_t * FieldBuilder_get_DeclaringType_m12367 (FieldBuilder_t3372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeFieldHandle System.Reflection.Emit.FieldBuilder::get_FieldHandle()
 RuntimeFieldHandle_t3182  FieldBuilder_get_FieldHandle_m12368 (FieldBuilder_t3372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_FieldType()
 Type_t * FieldBuilder_get_FieldType_m12369 (FieldBuilder_t3372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.FieldBuilder::get_Name()
 String_t* FieldBuilder_get_Name_m12370 (FieldBuilder_t3372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_ReflectedType()
 Type_t * FieldBuilder_get_ReflectedType_m12371 (FieldBuilder_t3372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t5* FieldBuilder_GetCustomAttributes_m12372 (FieldBuilder_t3372 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t5* FieldBuilder_GetCustomAttributes_m12373 (FieldBuilder_t3372 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.FieldBuilder::GetValue(System.Object)
 Object_t * FieldBuilder_GetValue_m12374 (FieldBuilder_t3372 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.FieldBuilder::IsDefined(System.Type,System.Boolean)
 bool FieldBuilder_IsDefined_m12375 (FieldBuilder_t3372 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.FieldBuilder::GetFieldOffset()
 int32_t FieldBuilder_GetFieldOffset_m12376 (FieldBuilder_t3372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.FieldBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
 void FieldBuilder_SetValue_m12377 (FieldBuilder_t3372 * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t2703 * ___binder, CultureInfo_t872 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::get_UMarshal()
 UnmanagedMarshal_t3371 * FieldBuilder_get_UMarshal_m12378 (FieldBuilder_t3372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.FieldBuilder::CreateNotSupportedException()
 Exception_t107 * FieldBuilder_CreateNotSupportedException_m12379 (FieldBuilder_t3372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.FieldBuilder::get_Module()
 Module_t3180 * FieldBuilder_get_Module_m12380 (FieldBuilder_t3372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
