#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoEvent
struct MonoEvent_t3399;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Reflection.EventAttributes
#include "mscorlib_System_Reflection_EventAttributes.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoEvent::.ctor()
 void MonoEvent__ctor_m12637 (MonoEvent_t3399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventAttributes System.Reflection.MonoEvent::get_Attributes()
 int32_t MonoEvent_get_Attributes_m12638 (MonoEvent_t3399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoEvent::GetAddMethod(System.Boolean)
 MethodInfo_t292 * MonoEvent_GetAddMethod_m12639 (MonoEvent_t3399 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoEvent::get_DeclaringType()
 Type_t * MonoEvent_get_DeclaringType_m12640 (MonoEvent_t3399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoEvent::get_ReflectedType()
 Type_t * MonoEvent_get_ReflectedType_m12641 (MonoEvent_t3399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoEvent::get_Name()
 String_t* MonoEvent_get_Name_m12642 (MonoEvent_t3399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoEvent::ToString()
 String_t* MonoEvent_ToString_m12643 (MonoEvent_t3399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoEvent::IsDefined(System.Type,System.Boolean)
 bool MonoEvent_IsDefined_m12644 (MonoEvent_t3399 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoEvent::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t5* MonoEvent_GetCustomAttributes_m12645 (MonoEvent_t3399 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoEvent::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t5* MonoEvent_GetCustomAttributes_m12646 (MonoEvent_t3399 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoEvent::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoEvent_GetObjectData_m12647 (MonoEvent_t3399 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
