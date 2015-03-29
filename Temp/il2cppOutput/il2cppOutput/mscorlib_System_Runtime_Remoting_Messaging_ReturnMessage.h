#pragma once
#include <stdint.h>
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t3483;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t107;
// System.Reflection.MethodBase
struct MethodBase_t424;
// System.Type[]
struct TypeU5BU5D_t291;
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_t3488;
// System.Runtime.Remoting.Messaging.ArgInfo
struct ArgInfo_t3471;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Messaging.ReturnMessage
struct ReturnMessage_t3495  : public Object_t
{
	// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::_outArgs
	ObjectU5BU5D_t5* ____outArgs;
	// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::_args
	ObjectU5BU5D_t5* ____args;
	// System.Int32 System.Runtime.Remoting.Messaging.ReturnMessage::_outArgsCount
	int32_t ____outArgsCount;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::_callCtx
	LogicalCallContext_t3483 * ____callCtx;
	// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::_returnValue
	Object_t * ____returnValue;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_uri
	String_t* ____uri;
	// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::_exception
	Exception_t107 * ____exception;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::_methodBase
	MethodBase_t424 * ____methodBase;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_methodName
	String_t* ____methodName;
	// System.Type[] System.Runtime.Remoting.Messaging.ReturnMessage::_methodSignature
	TypeU5BU5D_t291* ____methodSignature;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_typeName
	String_t* ____typeName;
	// System.Runtime.Remoting.Messaging.MethodReturnDictionary System.Runtime.Remoting.Messaging.ReturnMessage::_properties
	MethodReturnDictionary_t3488 * ____properties;
	// System.Runtime.Remoting.Messaging.ArgInfo System.Runtime.Remoting.Messaging.ReturnMessage::_inArgInfo
	ArgInfo_t3471 * ____inArgInfo;
};
