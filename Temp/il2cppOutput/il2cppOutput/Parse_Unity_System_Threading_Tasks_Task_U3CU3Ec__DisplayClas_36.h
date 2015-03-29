#pragma once
#include <stdint.h>
// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>>
struct TaskCompletionSource_1_t6848;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>>
struct Func_2_t6844;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.CancellationTokenRegistration
#include "Parse_Unity_System_Threading_CancellationTokenRegistration.h"
// System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>>
struct U3CU3Ec__DisplayClass3_1_t6849  : public Object_t
{
	// System.Threading.Tasks.TaskCompletionSource`1<T> System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>>::tcs
	TaskCompletionSource_1_t6848 * ___tcs;
	// System.Threading.CancellationTokenRegistration System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>>::cancellation
	CancellationTokenRegistration_t1227  ___cancellation;
	// System.Func`2<System.Threading.Tasks.Task,T> System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>>::continuation
	Func_2_t6844 * ___continuation;
};
