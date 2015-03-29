#pragma once
#include <stdint.h>
// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>>
struct TaskCompletionSource_1_t6996;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>>
struct Func_2_t6992;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.CancellationTokenRegistration
#include "Parse_Unity_System_Threading_CancellationTokenRegistration.h"
// System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>>
struct U3CU3Ec__DisplayClass3_1_t6997  : public Object_t
{
	// System.Threading.Tasks.TaskCompletionSource`1<T> System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>>::tcs
	TaskCompletionSource_1_t6996 * ___tcs;
	// System.Threading.CancellationTokenRegistration System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>>::cancellation
	CancellationTokenRegistration_t1227  ___cancellation;
	// System.Func`2<System.Threading.Tasks.Task,T> System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>>::continuation
	Func_2_t6992 * ___continuation;
};
