#pragma once
#include <stdint.h>
// System.Threading.SynchronizationContext
struct SynchronizationContext_t1275;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1271  : public Object_t
{
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskScheduler::context
	SynchronizationContext_t1275 * ___context;
};
struct TaskScheduler_t1271_StaticFields{
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskScheduler::defaultContext
	SynchronizationContext_t1275 * ___defaultContext;
};
