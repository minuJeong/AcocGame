#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t38;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Delegate[]
struct DelegateU5BU5D_t2235;
// System.Delegate
struct Delegate_t793;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MulticastDelegate_GetObjectData_m471 (MulticastDelegate_t38 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MulticastDelegate::DynamicInvokeImpl(System.Object[])
 Object_t * MulticastDelegate_DynamicInvokeImpl_m472 (MulticastDelegate_t38 * __this, ObjectU5BU5D_t5* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
 bool MulticastDelegate_Equals_m469 (MulticastDelegate_t38 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
 int32_t MulticastDelegate_GetHashCode_m470 (MulticastDelegate_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
 DelegateU5BU5D_t2235* MulticastDelegate_GetInvocationList_m474 (MulticastDelegate_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
 Delegate_t793 * MulticastDelegate_CombineImpl_m475 (MulticastDelegate_t38 * __this, Delegate_t793 * ___follow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
 bool MulticastDelegate_BaseEquals_m10954 (MulticastDelegate_t38 * __this, MulticastDelegate_t38 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
 MulticastDelegate_t38 * MulticastDelegate_KPM_m10955 (Object_t * __this/* static, unused */, MulticastDelegate_t38 * ___needle, MulticastDelegate_t38 * ___haystack, MulticastDelegate_t38 ** ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
 Delegate_t793 * MulticastDelegate_RemoveImpl_m476 (MulticastDelegate_t38 * __this, Delegate_t793 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
