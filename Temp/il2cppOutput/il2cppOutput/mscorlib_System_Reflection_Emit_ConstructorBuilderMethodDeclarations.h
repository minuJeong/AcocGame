﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t3368;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3365;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t3180;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t289;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t2703;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Globalization.CultureInfo
struct CultureInfo_t872;
// System.Exception
struct Exception_t107;
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention()
 int32_t ConstructorBuilder_get_CallingConvention_m12312 (ConstructorBuilder_t3368 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::get_TypeBuilder()
 TypeBuilder_t3365 * ConstructorBuilder_get_TypeBuilder_m12313 (ConstructorBuilder_t3368 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParameters()
 ParameterInfoU5BU5D_t289* ConstructorBuilder_GetParameters_m12314 (ConstructorBuilder_t3368 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParametersInternal()
 ParameterInfoU5BU5D_t289* ConstructorBuilder_GetParametersInternal_m12315 (ConstructorBuilder_t3368 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * ConstructorBuilder_Invoke_m12316 (ConstructorBuilder_t3368 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2703 * ___binder, ObjectU5BU5D_t5* ___parameters, CultureInfo_t872 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * ConstructorBuilder_Invoke_m12317 (ConstructorBuilder_t3368 * __this, int32_t ___invokeAttr, Binder_t2703 * ___binder, ObjectU5BU5D_t5* ___parameters, CultureInfo_t872 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::get_MethodHandle()
 RuntimeMethodHandle_t3369  ConstructorBuilder_get_MethodHandle_m12318 (ConstructorBuilder_t3368 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes()
 int32_t ConstructorBuilder_get_Attributes_m12319 (ConstructorBuilder_t3368 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_ReflectedType()
 Type_t * ConstructorBuilder_get_ReflectedType_m12320 (ConstructorBuilder_t3368 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_DeclaringType()
 Type_t * ConstructorBuilder_get_DeclaringType_m12321 (ConstructorBuilder_t3368 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::get_Name()
 String_t* ConstructorBuilder_get_Name_m12322 (ConstructorBuilder_t3368 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::IsDefined(System.Type,System.Boolean)
 bool ConstructorBuilder_IsDefined_m12323 (ConstructorBuilder_t3368 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t5* ConstructorBuilder_GetCustomAttributes_m12324 (ConstructorBuilder_t3368 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t5* ConstructorBuilder_GetCustomAttributes_m12325 (ConstructorBuilder_t3368 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.ConstructorBuilder::get_Module()
 Module_t3180 * ConstructorBuilder_get_Module_m12326 (ConstructorBuilder_t3368 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::ToString()
 String_t* ConstructorBuilder_ToString_m12327 (ConstructorBuilder_t3368 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::get_IsCompilerContext()
 bool ConstructorBuilder_get_IsCompilerContext_m12328 (ConstructorBuilder_t3368 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_supported()
 Exception_t107 * ConstructorBuilder_not_supported_m12329 (ConstructorBuilder_t3368 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_created()
 Exception_t107 * ConstructorBuilder_not_created_m12330 (ConstructorBuilder_t3368 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
