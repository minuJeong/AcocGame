#pragma once
#include <stdint.h>
// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>
struct TaskCompletionSource_1_t1267;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1072;
// System.Action`1<System.Threading.Tasks.Task[]>
struct Action_1_t1268;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass20
struct U3CU3Ec__DisplayClass20_t1269  : public Object_t
{
	// System.Int32 System.Threading.Tasks.TaskFactory/<>c__DisplayClass20::remaining
	int32_t ___remaining;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]> System.Threading.Tasks.TaskFactory/<>c__DisplayClass20::tcs
	TaskCompletionSource_1_t1267 * ___tcs;
	// System.Threading.Tasks.Task[] System.Threading.Tasks.TaskFactory/<>c__DisplayClass20::tasks
	TaskU5BU5D_t1072* ___tasks;
	// System.Action`1<System.Threading.Tasks.Task[]> System.Threading.Tasks.TaskFactory/<>c__DisplayClass20::continuationAction
	Action_1_t1268 * ___continuationAction;
};
