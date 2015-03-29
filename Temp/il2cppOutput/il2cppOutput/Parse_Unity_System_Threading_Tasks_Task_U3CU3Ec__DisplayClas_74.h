#pragma once
#include <stdint.h>
// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct TaskCompletionSource_1_t11258;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Func_2_t11254;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.CancellationTokenRegistration
#include "Parse_Unity_System_Threading_CancellationTokenRegistration.h"
// System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct U3CU3Ec__DisplayClass3_1_t11259  : public Object_t
{
	// System.Threading.Tasks.TaskCompletionSource`1<T> System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::tcs
	TaskCompletionSource_1_t11258 * ___tcs;
	// System.Threading.CancellationTokenRegistration System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::cancellation
	CancellationTokenRegistration_t1227  ___cancellation;
	// System.Func`2<System.Threading.Tasks.Task,T> System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::continuation
	Func_2_t11254 * ___continuation;
};
