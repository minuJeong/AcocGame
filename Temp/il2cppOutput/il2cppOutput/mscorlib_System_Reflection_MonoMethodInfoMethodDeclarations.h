#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t3406;
// System.Type
struct Type_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t289;
// System.Reflection.MemberInfo
struct MemberInfo_t484;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.MonoMethodInfo
#include "mscorlib_System_Reflection_MonoMethodInfo.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Void System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)
 void MonoMethodInfo_get_method_info_m12674 (Object_t * __this/* static, unused */, IntPtr_t39 ___handle, MonoMethodInfo_t3406 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoMethodInfo System.Reflection.MonoMethodInfo::GetMethodInfo(System.IntPtr)
 MonoMethodInfo_t3406  MonoMethodInfo_GetMethodInfo_m12675 (Object_t * __this/* static, unused */, IntPtr_t39 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethodInfo::GetDeclaringType(System.IntPtr)
 Type_t * MonoMethodInfo_GetDeclaringType_m12676 (Object_t * __this/* static, unused */, IntPtr_t39 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethodInfo::GetReturnType(System.IntPtr)
 Type_t * MonoMethodInfo_GetReturnType_m12677 (Object_t * __this/* static, unused */, IntPtr_t39 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::GetAttributes(System.IntPtr)
 int32_t MonoMethodInfo_GetAttributes_m12678 (Object_t * __this/* static, unused */, IntPtr_t39 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::GetCallingConvention(System.IntPtr)
 int32_t MonoMethodInfo_GetCallingConvention_m12679 (Object_t * __this/* static, unused */, IntPtr_t39 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)
 ParameterInfoU5BU5D_t289* MonoMethodInfo_get_parameter_info_m12680 (Object_t * __this/* static, unused */, IntPtr_t39 ___handle, MemberInfo_t484 * ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::GetParametersInfo(System.IntPtr,System.Reflection.MemberInfo)
 ParameterInfoU5BU5D_t289* MonoMethodInfo_GetParametersInfo_m12681 (Object_t * __this/* static, unused */, IntPtr_t39 ___handle, MemberInfo_t484 * ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
