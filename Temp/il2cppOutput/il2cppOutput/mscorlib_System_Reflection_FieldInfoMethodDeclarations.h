#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.FieldInfo
struct FieldInfo_t961;
// System.Type
struct Type_t;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t3370;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t2701;
// System.Globalization.CultureInfo
struct CultureInfo_t872;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.FieldInfo::.ctor()
 void FieldInfo__ctor_m12592 (FieldInfo_t961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes()
// System.RuntimeFieldHandle System.Reflection.FieldInfo::get_FieldHandle()
// System.Type System.Reflection.FieldInfo::get_FieldType()
// System.Object System.Reflection.FieldInfo::GetValue(System.Object)
// System.Reflection.MemberTypes System.Reflection.FieldInfo::get_MemberType()
 int32_t FieldInfo_get_MemberType_m12593 (FieldInfo_t961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsLiteral()
 bool FieldInfo_get_IsLiteral_m12594 (FieldInfo_t961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
 bool FieldInfo_get_IsStatic_m10149 (FieldInfo_t961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsNotSerialized()
 bool FieldInfo_get_IsNotSerialized_m12595 (FieldInfo_t961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
 void FieldInfo_SetValue_m5230 (FieldInfo_t961 * __this, Object_t * ___obj, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)
 FieldInfo_t961 * FieldInfo_internal_from_handle_type_m12596 (Object_t * __this/* static, unused */, IntPtr_t39 ___field_handle, IntPtr_t39 ___type_handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.FieldInfo::GetFieldFromHandle(System.RuntimeFieldHandle)
 FieldInfo_t961 * FieldInfo_GetFieldFromHandle_m6827 (Object_t * __this/* static, unused */, RuntimeFieldHandle_t3181  ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.FieldInfo::GetFieldOffset()
 int32_t FieldInfo_GetFieldOffset_m12597 (FieldInfo_t961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::GetUnmanagedMarshal()
 UnmanagedMarshal_t3370 * FieldInfo_GetUnmanagedMarshal_m12598 (FieldInfo_t961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::get_UMarshal()
 UnmanagedMarshal_t3370 * FieldInfo_get_UMarshal_m12599 (FieldInfo_t961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.FieldInfo::GetPseudoCustomAttributes()
 ObjectU5BU5D_t5* FieldInfo_GetPseudoCustomAttributes_m12600 (FieldInfo_t961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
