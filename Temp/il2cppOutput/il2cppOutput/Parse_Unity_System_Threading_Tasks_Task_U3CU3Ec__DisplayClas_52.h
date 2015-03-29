#pragma once
#include <stdint.h>
// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>
struct TaskCompletionSource_1_t11095;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>
struct Func_2_t11094;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.CancellationTokenRegistration
#include "Parse_Unity_System_Threading_CancellationTokenRegistration.h"
// System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>
struct U3CU3Ec__DisplayClass3_1_t11096  : public Object_t
{
	// System.Threading.Tasks.TaskCompletionSource`1<T> System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::tcs
	TaskCompletionSource_1_t11095 * ___tcs;
	// System.Threading.CancellationTokenRegistration System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::cancellation
	CancellationTokenRegistration_t1227  ___cancellation;
	// System.Func`2<System.Threading.Tasks.Task,T> System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::continuation
	Func_2_t11094 * ___continuation;
};
