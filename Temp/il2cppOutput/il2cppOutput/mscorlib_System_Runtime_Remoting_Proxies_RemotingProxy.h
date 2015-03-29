#pragma once
#include <stdint.h>
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t3166;
// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t3444;
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxy.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
struct RemotingProxy_t3503  : public RealProxy_t3498
{
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Proxies.RemotingProxy::_sink
	Object_t * ____sink;
	// System.Boolean System.Runtime.Remoting.Proxies.RemotingProxy::_hasEnvoySink
	bool ____hasEnvoySink;
	// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Proxies.RemotingProxy::_ctorCall
	ConstructionCall_t3444 * ____ctorCall;
};
struct RemotingProxy_t3503_StaticFields{
	// System.Reflection.MethodInfo System.Runtime.Remoting.Proxies.RemotingProxy::_cache_GetTypeMethod
	MethodInfo_t292 * ____cache_GetTypeMethod;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Proxies.RemotingProxy::_cache_GetHashCodeMethod
	MethodInfo_t292 * ____cache_GetHashCodeMethod;
};
