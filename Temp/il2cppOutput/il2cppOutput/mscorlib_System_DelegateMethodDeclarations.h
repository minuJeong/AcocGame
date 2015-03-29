#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Delegate
struct Delegate_t793;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Delegate[]
struct DelegateU5BU5D_t2235;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Reflection.MethodInfo System.Delegate::get_Method()
 MethodInfo_t292 * Delegate_get_Method_m9168 (Delegate_t793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::get_Target()
 Object_t * Delegate_get_Target_m9170 (Delegate_t793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate_internal(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
 Delegate_t793 * Delegate_CreateDelegate_internal_m10956 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___target, MethodInfo_t292 * ___info, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::SetMulticastInvoke()
 void Delegate_SetMulticastInvoke_m10957 (Delegate_t793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::arg_type_match(System.Type,System.Type)
 bool Delegate_arg_type_match_m10958 (Object_t * __this/* static, unused */, Type_t * ___delArgType, Type_t * ___argType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::return_type_match(System.Type,System.Type)
 bool Delegate_return_type_match_m10959 (Object_t * __this/* static, unused */, Type_t * ___delReturnType, Type_t * ___returnType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
 Delegate_t793 * Delegate_CreateDelegate_m10960 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___firstArgument, MethodInfo_t292 * ___method, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
 Delegate_t793 * Delegate_CreateDelegate_m9174 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___firstArgument, MethodInfo_t292 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String)
 Delegate_t793 * Delegate_CreateDelegate_m10961 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Delegate::GetCandidateMethod(System.Type,System.Type,System.String,System.Reflection.BindingFlags,System.Boolean,System.Boolean)
 MethodInfo_t292 * Delegate_GetCandidateMethod_m10962 (Object_t * __this/* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, int32_t ___bflags, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String,System.Boolean,System.Boolean)
 Delegate_t793 * Delegate_CreateDelegate_m10963 (Object_t * __this/* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String)
 Delegate_t793 * Delegate_CreateDelegate_m10964 (Object_t * __this/* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean,System.Boolean)
 Delegate_t793 * Delegate_CreateDelegate_m10965 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean)
 Delegate_t793 * Delegate_CreateDelegate_m10966 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::DynamicInvoke(System.Object[])
 Object_t * Delegate_DynamicInvoke_m10967 (Delegate_t793 * __this, ObjectU5BU5D_t5* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::DynamicInvokeImpl(System.Object[])
 Object_t * Delegate_DynamicInvokeImpl_m10968 (Delegate_t793 * __this, ObjectU5BU5D_t5* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::Clone()
 Object_t * Delegate_Clone_m473 (Delegate_t793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::Equals(System.Object)
 bool Delegate_Equals_m10969 (Delegate_t793 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Delegate::GetHashCode()
 int32_t Delegate_GetHashCode_m10970 (Delegate_t793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Delegate_GetObjectData_m10971 (Delegate_t793 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.Delegate::GetInvocationList()
 DelegateU5BU5D_t2235* Delegate_GetInvocationList_m6983 (Delegate_t793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
 Delegate_t793 * Delegate_Combine_m4230 (Object_t * __this/* static, unused */, Delegate_t793 * ___a, Delegate_t793 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate[])
 Delegate_t793 * Delegate_Combine_m10972 (Object_t * __this/* static, unused */, DelegateU5BU5D_t2235* ___delegates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CombineImpl(System.Delegate)
 Delegate_t793 * Delegate_CombineImpl_m10973 (Delegate_t793 * __this, Delegate_t793 * ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
 Delegate_t793 * Delegate_Remove_m4231 (Object_t * __this/* static, unused */, Delegate_t793 * ___source, Delegate_t793 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::RemoveImpl(System.Delegate)
 Delegate_t793 * Delegate_RemoveImpl_m10974 (Delegate_t793 * __this, Delegate_t793 * ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::op_Equality(System.Delegate,System.Delegate)
 bool Delegate_op_Equality_m10975 (Object_t * __this/* static, unused */, Delegate_t793 * ___d1, Delegate_t793 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
