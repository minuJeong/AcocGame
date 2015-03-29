#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Action
struct Action_t1220;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t1226  : public Object_t
{
	// System.Object System.Threading.CancellationTokenSource::mutex
	Object_t * ___mutex;
	// System.Action System.Threading.CancellationTokenSource::actions
	Action_t1220 * ___actions;
	// System.Boolean System.Threading.CancellationTokenSource::isCancellationRequested
	bool ___isCancellationRequested;
};
