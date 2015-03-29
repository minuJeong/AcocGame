#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Messaging.Header
struct Header_t3481  : public Object_t
{
	// System.String System.Runtime.Remoting.Messaging.Header::HeaderNamespace
	String_t* ___HeaderNamespace;
	// System.Boolean System.Runtime.Remoting.Messaging.Header::MustUnderstand
	bool ___MustUnderstand;
	// System.String System.Runtime.Remoting.Messaging.Header::Name
	String_t* ___Name;
	// System.Object System.Runtime.Remoting.Messaging.Header::Value
	Object_t * ___Value;
};
