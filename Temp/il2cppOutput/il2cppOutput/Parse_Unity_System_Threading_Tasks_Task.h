#pragma once
#include <stdint.h>
// System.Threading.ThreadLocal`1<System.Int32>
struct ThreadLocal_1_t1240;
// System.Action`1<System.Action>
struct Action_1_t1241;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Action`1<System.Threading.Tasks.Task>>
struct IList_1_t1242;
// System.AggregateException
struct AggregateException_t1224;
// System.Func`1<System.Int32>
struct Func_1_t1243;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.Tasks.Task
struct Task_t390  : public Object_t
{
	// System.Object System.Threading.Tasks.Task::mutex
	Object_t * ___mutex;
	// System.Collections.Generic.IList`1<System.Action`1<System.Threading.Tasks.Task>> System.Threading.Tasks.Task::continuations
	Object_t* ___continuations;
	// System.AggregateException System.Threading.Tasks.Task::exception
	AggregateException_t1224 * ___exception;
	// System.Boolean System.Threading.Tasks.Task::isCanceled
	bool ___isCanceled;
	// System.Boolean System.Threading.Tasks.Task::isCompleted
	bool ___isCompleted;
};
struct Task_t390_StaticFields{
	// System.Threading.ThreadLocal`1<System.Int32> System.Threading.Tasks.Task::executionDepth
	ThreadLocal_1_t1240 * ___executionDepth;
	// System.Action`1<System.Action> System.Threading.Tasks.Task::immediateExecutor
	Action_1_t1241 * ___immediateExecutor;
	// System.Func`1<System.Int32> System.Threading.Tasks.Task::CS$<>9__CachedAnonymousMethodDelegate24
	Func_1_t1243 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate24;
	// System.Action`1<System.Action> System.Threading.Tasks.Task::CS$<>9__CachedAnonymousMethodDelegate25
	Action_1_t1241 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate25;
};
