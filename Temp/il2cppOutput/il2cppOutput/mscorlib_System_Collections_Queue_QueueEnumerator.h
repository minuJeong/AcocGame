#pragma once
#include <stdint.h>
// System.Collections.Queue
struct Queue_t2760;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Queue/QueueEnumerator
struct QueueEnumerator_t3297  : public Object_t
{
	// System.Collections.Queue System.Collections.Queue/QueueEnumerator::queue
	Queue_t2760 * ___queue;
	// System.Int32 System.Collections.Queue/QueueEnumerator::_version
	int32_t ____version;
	// System.Int32 System.Collections.Queue/QueueEnumerator::current
	int32_t ___current;
};
