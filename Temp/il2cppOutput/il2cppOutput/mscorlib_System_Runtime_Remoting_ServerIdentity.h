#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.MarshalByRefObject
struct MarshalByRefObject_t3194;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t3166;
// System.Runtime.Remoting.Contexts.Context
struct Context_t3452;
// System.Runtime.Remoting.Lifetime.Lease
struct Lease_t3468;
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_Identity.h"
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t3193  : public Identity_t3501
{
	// System.Type System.Runtime.Remoting.ServerIdentity::_objectType
	Type_t * ____objectType;
	// System.MarshalByRefObject System.Runtime.Remoting.ServerIdentity::_serverObject
	MarshalByRefObject_t3194 * ____serverObject;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.ServerIdentity::_serverSink
	Object_t * ____serverSink;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.ServerIdentity::_context
	Context_t3452 * ____context;
	// System.Runtime.Remoting.Lifetime.Lease System.Runtime.Remoting.ServerIdentity::_lease
	Lease_t3468 * ____lease;
};
