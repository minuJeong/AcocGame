#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoMethod
struct MonoMethod_t3403;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodBase
struct MethodBase_t424;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t289;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Exception
struct Exception_t107;
// System.Reflection.Binder
struct Binder_t2703;
// System.Globalization.CultureInfo
struct CultureInfo_t872;
// System.Runtime.InteropServices.DllImportAttribute
struct DllImportAttribute_t3184;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Type[]
struct TypeU5BU5D_t291;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoMethod::.ctor()
 void MonoMethod__ctor_m12682 (MonoMethod_t3403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)
 String_t* MonoMethod_get_name_m12683 (Object_t * __this/* static, unused */, MethodBase_t424 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoMethod System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)
 MonoMethod_t3403 * MonoMethod_get_base_definition_m12684 (Object_t * __this/* static, unused */, MonoMethod_t3403 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetBaseDefinition()
 MethodInfo_t292 * MonoMethod_GetBaseDefinition_m12685 (MonoMethod_t3403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_ReturnType()
 Type_t * MonoMethod_get_ReturnType_m12686 (MonoMethod_t3403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters()
 ParameterInfoU5BU5D_t289* MonoMethod_GetParameters_m12687 (MonoMethod_t3403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
 Object_t * MonoMethod_InternalInvoke_m12688 (MonoMethod_t3403 * __this, Object_t * ___obj, ObjectU5BU5D_t5* ___parameters, Exception_t107 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MonoMethod_Invoke_m12689 (MonoMethod_t3403 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2703 * ___binder, ObjectU5BU5D_t5* ___parameters, CultureInfo_t872 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoMethod::get_MethodHandle()
 RuntimeMethodHandle_t3369  MonoMethod_get_MethodHandle_m12690 (MonoMethod_t3403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoMethod::get_Attributes()
 int32_t MonoMethod_get_Attributes_m12691 (MonoMethod_t3403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoMethod::get_CallingConvention()
 int32_t MonoMethod_get_CallingConvention_m12692 (MonoMethod_t3403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_ReflectedType()
 Type_t * MonoMethod_get_ReflectedType_m12693 (MonoMethod_t3403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_DeclaringType()
 Type_t * MonoMethod_get_DeclaringType_m12694 (MonoMethod_t3403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::get_Name()
 String_t* MonoMethod_get_Name_m12695 (MonoMethod_t3403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::IsDefined(System.Type,System.Boolean)
 bool MonoMethod_IsDefined_m12696 (MonoMethod_t3403 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t5* MonoMethod_GetCustomAttributes_m12697 (MonoMethod_t3403 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t5* MonoMethod_GetCustomAttributes_m12698 (MonoMethod_t3403 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.DllImportAttribute System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)
 DllImportAttribute_t3184 * MonoMethod_GetDllImportAttribute_m12699 (Object_t * __this/* static, unused */, IntPtr_t39 ___mhandle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetPseudoCustomAttributes()
 ObjectU5BU5D_t5* MonoMethod_GetPseudoCustomAttributes_m12700 (MonoMethod_t3403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::ShouldPrintFullName(System.Type)
 bool MonoMethod_ShouldPrintFullName_m12701 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::ToString()
 String_t* MonoMethod_ToString_m12702 (MonoMethod_t3403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoMethod_GetObjectData_m12703 (MonoMethod_t3403 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod(System.Type[])
 MethodInfo_t292 * MonoMethod_MakeGenericMethod_m12704 (MonoMethod_t3403 * __this, TypeU5BU5D_t291* ___methodInstantiation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])
 MethodInfo_t292 * MonoMethod_MakeGenericMethod_impl_m12705 (MonoMethod_t3403 * __this, TypeU5BU5D_t291* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoMethod::GetGenericArguments()
 TypeU5BU5D_t291* MonoMethod_GetGenericArguments_m12706 (MonoMethod_t3403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetGenericMethodDefinition_impl()
 MethodInfo_t292 * MonoMethod_GetGenericMethodDefinition_impl_m12707 (MonoMethod_t3403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetGenericMethodDefinition()
 MethodInfo_t292 * MonoMethod_GetGenericMethodDefinition_m12708 (MonoMethod_t3403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethodDefinition()
 bool MonoMethod_get_IsGenericMethodDefinition_m12709 (MonoMethod_t3403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod()
 bool MonoMethod_get_IsGenericMethod_m12710 (MonoMethod_t3403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_ContainsGenericParameters()
 bool MonoMethod_get_ContainsGenericParameters_m12711 (MonoMethod_t3403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
