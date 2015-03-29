#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Module
struct Module_t3179;
// System.Reflection.Assembly
struct Assembly_t147;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.Module::.ctor()
 void Module__ctor_m12624 (Module_t3179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Module::.cctor()
 void Module__cctor_m12625 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Module::get_Assembly()
 Assembly_t147 * Module_get_Assembly_m12626 (Module_t3179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Module::get_ScopeName()
 String_t* Module_get_ScopeName_m12627 (Module_t3179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Module::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t5* Module_GetCustomAttributes_m12628 (Module_t3179 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Module::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Module_GetObjectData_m12629 (Module_t3179 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::IsDefined(System.Type,System.Boolean)
 bool Module_IsDefined_m12630 (Module_t3179 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::IsResource()
 bool Module_IsResource_m12631 (Module_t3179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Module::ToString()
 String_t* Module_ToString_m12632 (Module_t3179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::filter_by_type_name(System.Type,System.Object)
 bool Module_filter_by_type_name_m12633 (Object_t * __this/* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::filter_by_type_name_ignore_case(System.Type,System.Object)
 bool Module_filter_by_type_name_ignore_case_m12634 (Object_t * __this/* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
