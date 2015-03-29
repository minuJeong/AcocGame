#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t3166;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t3460;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t3499;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Identity
struct Identity_t3501  : public Object_t
{
	// System.String System.Runtime.Remoting.Identity::_objectUri
	String_t* ____objectUri;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::_channelSink
	Object_t * ____channelSink;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::_envoySink
	Object_t * ____envoySink;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::_clientDynamicProperties
	DynamicPropertyCollection_t3460 * ____clientDynamicProperties;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::_serverDynamicProperties
	DynamicPropertyCollection_t3460 * ____serverDynamicProperties;
	// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::_objRef
	ObjRef_t3499 * ____objRef;
	// System.Boolean System.Runtime.Remoting.Identity::_disposed
	bool ____disposed;
};
