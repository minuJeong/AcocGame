#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.MethodCall
struct MethodCall_t3477;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t3483;
// System.Reflection.MethodBase
struct MethodBase_t424;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t255;
// System.Type[]
struct TypeU5BU5D_t291;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t3484;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Type
struct Type_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Remoting.Messaging.Header[])
 void MethodCall__ctor_m12916 (MethodCall_t3477 * __this, HeaderU5BU5D_t3484* ___h1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MethodCall__ctor_m12917 (MethodCall_t3477 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor()
 void MethodCall__ctor_m12918 (MethodCall_t3477 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
 void MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m12919 (MethodCall_t3477 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object)
 void MethodCall_InitMethodProperty_m12920 (MethodCall_t3477 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MethodCall_GetObjectData_m12921 (MethodCall_t3477 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::get_Args()
 ObjectU5BU5D_t5* MethodCall_get_Args_m12922 (MethodCall_t3477 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::get_LogicalCallContext()
 LogicalCallContext_t3483 * MethodCall_get_LogicalCallContext_m12923 (MethodCall_t3477 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase()
 MethodBase_t424 * MethodCall_get_MethodBase_m12924 (MethodCall_t3477 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_MethodName()
 String_t* MethodCall_get_MethodName_m12925 (MethodCall_t3477 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodCall::get_MethodSignature()
 Object_t * MethodCall_get_MethodSignature_m12926 (MethodCall_t3477 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties()
 Object_t * MethodCall_get_Properties_m12927 (MethodCall_t3477 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary()
 void MethodCall_InitDictionary_m12928 (MethodCall_t3477 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName()
 String_t* MethodCall_get_TypeName_m12929 (MethodCall_t3477 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_Uri()
 String_t* MethodCall_get_Uri_m12930 (MethodCall_t3477 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String)
 void MethodCall_set_Uri_m12931 (MethodCall_t3477 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::Init()
 void MethodCall_Init_m12932 (MethodCall_t3477 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::ResolveMethod()
 void MethodCall_ResolveMethod_m12933 (MethodCall_t3477 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Messaging.MethodCall::CastTo(System.String,System.Type)
 Type_t * MethodCall_CastTo_m12934 (MethodCall_t3477 * __this, String_t* ___clientType, Type_t * ___serverType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::GetTypeNameFromAssemblyQualifiedName(System.String)
 String_t* MethodCall_GetTypeNameFromAssemblyQualifiedName_m12935 (Object_t * __this/* static, unused */, String_t* ___aqname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::get_GenericArguments()
 TypeU5BU5D_t291* MethodCall_get_GenericArguments_m12936 (MethodCall_t3477 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
