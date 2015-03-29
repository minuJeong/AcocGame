#pragma once
#include <stdint.h>
// System.Threading.Tasks.Task
struct Task_t390;
// System.Object
struct Object_t;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1021;
// System.Object
#include "mscorlib_System_Object.h"
// Parse.Internal.TaskQueue
struct TaskQueue_t1076  : public Object_t
{
	// System.Threading.Tasks.Task Parse.Internal.TaskQueue::tail
	Task_t390 * ___tail;
	// System.Object Parse.Internal.TaskQueue::mutex
	Object_t * ___mutex;
};
struct TaskQueue_t1076_StaticFields{
	// System.Action`1<System.Threading.Tasks.Task> Parse.Internal.TaskQueue::CS$<>9__CachedAnonymousMethodDelegate1
	Action_1_t1021 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate1;
};
