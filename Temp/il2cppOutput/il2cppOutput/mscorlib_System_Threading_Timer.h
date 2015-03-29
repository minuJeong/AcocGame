#pragma once
#include <stdint.h>
// System.Threading.Timer/Scheduler
struct Scheduler_t3670;
// System.Threading.TimerCallback
struct TimerCallback_t2250;
// System.Object
struct Object_t;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.Threading.Timer
struct Timer_t2251  : public MarshalByRefObject_t3194
{
	// System.Threading.TimerCallback System.Threading.Timer::callback
	TimerCallback_t2250 * ___callback;
	// System.Object System.Threading.Timer::state
	Object_t * ___state;
	// System.Int64 System.Threading.Timer::due_time_ms
	int64_t ___due_time_ms;
	// System.Int64 System.Threading.Timer::period_ms
	int64_t ___period_ms;
	// System.Int64 System.Threading.Timer::next_run
	int64_t ___next_run;
	// System.Boolean System.Threading.Timer::disposed
	bool ___disposed;
};
struct Timer_t2251_StaticFields{
	// System.Threading.Timer/Scheduler System.Threading.Timer::scheduler
	Scheduler_t3670 * ___scheduler;
};
