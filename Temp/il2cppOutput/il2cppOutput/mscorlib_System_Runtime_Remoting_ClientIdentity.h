#pragma once
#include <stdint.h>
// System.WeakReference
struct WeakReference_t983;
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_Identity.h"
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t3502  : public Identity_t3501
{
	// System.WeakReference System.Runtime.Remoting.ClientIdentity::_proxyReference
	WeakReference_t983 * ____proxyReference;
};
