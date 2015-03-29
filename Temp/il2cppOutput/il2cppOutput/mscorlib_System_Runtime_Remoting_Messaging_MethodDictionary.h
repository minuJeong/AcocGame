#pragma once
#include <stdint.h>
// System.Collections.IDictionary
struct IDictionary_t255;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t3487;
// System.String[]
struct StringU5BU5D_t4;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t57;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t3480  : public Object_t
{
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::_internalProperties
	Object_t * ____internalProperties;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MethodDictionary::_message
	Object_t * ____message;
	// System.String[] System.Runtime.Remoting.Messaging.MethodDictionary::_methodKeys
	StringU5BU5D_t4* ____methodKeys;
	// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::_ownProperties
	bool ____ownProperties;
};
struct MethodDictionary_t3480_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map21
	Dictionary_2_t57 * ___U3CU3Ef__switch$map21;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map22
	Dictionary_2_t57 * ___U3CU3Ef__switch$map22;
};
