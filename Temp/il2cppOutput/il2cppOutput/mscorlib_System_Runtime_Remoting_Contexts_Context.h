#pragma once
#include <stdint.h>
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t3166;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Collections.ArrayList
struct ArrayList_t94;
// System.Collections.Hashtable
struct Hashtable_t48;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t3460;
// System.Runtime.Remoting.Contexts.ContextCallbackObject
struct ContextCallbackObject_t3461;
// System.Object
#include "mscorlib_System_Object.h"
// System.UIntPtr
#include "mscorlib_System_UIntPtr.h"
// System.Runtime.Remoting.Contexts.Context
struct Context_t3452  : public Object_t
{
	// System.Int32 System.Runtime.Remoting.Contexts.Context::domain_id
	int32_t ___domain_id;
	// System.Int32 System.Runtime.Remoting.Contexts.Context::context_id
	int32_t ___context_id;
	// System.UIntPtr System.Runtime.Remoting.Contexts.Context::static_data
	UIntPtr_t3169  ___static_data;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::server_context_sink_chain
	Object_t * ___server_context_sink_chain;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::client_context_sink_chain
	Object_t * ___client_context_sink_chain;
	// System.Object[] System.Runtime.Remoting.Contexts.Context::datastore
	ObjectU5BU5D_t5* ___datastore;
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.Context::context_properties
	ArrayList_t94 * ___context_properties;
	// System.Boolean System.Runtime.Remoting.Contexts.Context::frozen
	bool ___frozen;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::context_dynamic_properties
	DynamicPropertyCollection_t3460 * ___context_dynamic_properties;
	// System.Runtime.Remoting.Contexts.ContextCallbackObject System.Runtime.Remoting.Contexts.Context::callback_object
	ContextCallbackObject_t3461 * ___callback_object;
};
struct Context_t3452_StaticFields{
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::default_server_context_sink
	Object_t * ___default_server_context_sink;
	// System.Int32 System.Runtime.Remoting.Contexts.Context::global_count
	int32_t ___global_count;
	// System.Collections.Hashtable System.Runtime.Remoting.Contexts.Context::namedSlots
	Hashtable_t48 * ___namedSlots;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::global_dynamic_properties
	DynamicPropertyCollection_t3460 * ___global_dynamic_properties;
};
