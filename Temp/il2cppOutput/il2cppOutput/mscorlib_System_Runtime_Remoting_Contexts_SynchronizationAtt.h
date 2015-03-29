#pragma once
#include <stdint.h>
// System.Threading.Mutex
struct Mutex_t3464;
// System.Threading.Thread
struct Thread_t1419;
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttribute.h"
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t3465  : public ContextAttribute_t3450
{
	// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::_bReEntrant
	bool ____bReEntrant;
	// System.Int32 System.Runtime.Remoting.Contexts.SynchronizationAttribute::_flavor
	int32_t ____flavor;
	// System.Int32 System.Runtime.Remoting.Contexts.SynchronizationAttribute::_lockCount
	int32_t ____lockCount;
	// System.Threading.Mutex System.Runtime.Remoting.Contexts.SynchronizationAttribute::_mutex
	Mutex_t3464 * ____mutex;
	// System.Threading.Thread System.Runtime.Remoting.Contexts.SynchronizationAttribute::_ownerThread
	Thread_t1419 * ____ownerThread;
};
