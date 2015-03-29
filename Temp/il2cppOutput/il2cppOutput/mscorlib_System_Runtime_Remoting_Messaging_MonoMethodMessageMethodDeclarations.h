#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t3473;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t3483;
// System.Reflection.MethodBase
struct MethodBase_t424;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t107;

// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
 ObjectU5BU5D_t5* MonoMethodMessage_get_Args_m12971 (MonoMethodMessage_t3473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
 LogicalCallContext_t3483 * MonoMethodMessage_get_LogicalCallContext_m12972 (MonoMethodMessage_t3473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
 MethodBase_t424 * MonoMethodMessage_get_MethodBase_m12973 (MonoMethodMessage_t3473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
 String_t* MonoMethodMessage_get_MethodName_m12974 (MonoMethodMessage_t3473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
 Object_t * MonoMethodMessage_get_MethodSignature_m12975 (MonoMethodMessage_t3473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
 String_t* MonoMethodMessage_get_TypeName_m12976 (MonoMethodMessage_t3473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
 String_t* MonoMethodMessage_get_Uri_m12977 (MonoMethodMessage_t3473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
 void MonoMethodMessage_set_Uri_m12978 (MonoMethodMessage_t3473 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
 Exception_t107 * MonoMethodMessage_get_Exception_m12979 (MonoMethodMessage_t3473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
 int32_t MonoMethodMessage_get_OutArgCount_m12980 (MonoMethodMessage_t3473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
 ObjectU5BU5D_t5* MonoMethodMessage_get_OutArgs_m12981 (MonoMethodMessage_t3473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
 Object_t * MonoMethodMessage_get_ReturnValue_m12982 (MonoMethodMessage_t3473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
