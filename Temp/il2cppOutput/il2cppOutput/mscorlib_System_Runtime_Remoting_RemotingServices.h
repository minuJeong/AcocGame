#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t48;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t3514;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Remoting.RemotingServices
struct RemotingServices_t3515  : public Object_t
{
};
struct RemotingServices_t3515_StaticFields{
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingServices::uri_hash
	Hashtable_t48 * ___uri_hash;
	// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter System.Runtime.Remoting.RemotingServices::_serializationFormatter
	BinaryFormatter_t3514 * ____serializationFormatter;
	// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter System.Runtime.Remoting.RemotingServices::_deserializationFormatter
	BinaryFormatter_t3514 * ____deserializationFormatter;
	// System.String System.Runtime.Remoting.RemotingServices::app_id
	String_t* ___app_id;
	// System.Int32 System.Runtime.Remoting.RemotingServices::next_id
	int32_t ___next_id;
	// System.Reflection.BindingFlags System.Runtime.Remoting.RemotingServices::methodBindings
	int32_t ___methodBindings;
	// System.Reflection.MethodInfo System.Runtime.Remoting.RemotingServices::FieldSetterMethod
	MethodInfo_t292 * ___FieldSetterMethod;
	// System.Reflection.MethodInfo System.Runtime.Remoting.RemotingServices::FieldGetterMethod
	MethodInfo_t292 * ___FieldGetterMethod;
};
