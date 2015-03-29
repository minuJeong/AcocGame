#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t48;
// System.Runtime.Remoting.Messaging.CallContextRemotingData
struct CallContextRemotingData_t3482;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t3483  : public Object_t
{
	// System.Collections.Hashtable System.Runtime.Remoting.Messaging.LogicalCallContext::_data
	Hashtable_t48 * ____data;
	// System.Runtime.Remoting.Messaging.CallContextRemotingData System.Runtime.Remoting.Messaging.LogicalCallContext::_remotingData
	CallContextRemotingData_t3482 * ____remotingData;
};
