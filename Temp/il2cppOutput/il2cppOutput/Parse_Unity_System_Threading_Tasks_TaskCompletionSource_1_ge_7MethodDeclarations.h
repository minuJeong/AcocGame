#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct TaskCompletionSource_1_t1213;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1006;
// System.Tuple`2<System.Net.HttpStatusCode,System.String>
struct Tuple_2_t1334;
// System.AggregateException
struct AggregateException_t1224;
// System.Exception
struct Exception_t107;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m6934(__this, method) (void)TaskCompletionSource_1__ctor_m6136_gshared((TaskCompletionSource_1_t1216 *)__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::get_Task()
#define TaskCompletionSource_1_get_Task_m6926(__this, method) (Task_1_t1006 *)TaskCompletionSource_1_get_Task_m6138_gshared((TaskCompletionSource_1_t1216 *)__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m82066(__this, ___value, method) (void)TaskCompletionSource_1_set_Task_m30356_gshared((TaskCompletionSource_1_t1216 *)__this, (Task_1_t1144 *)___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m6924(__this, ___result, method) (bool)TaskCompletionSource_1_TrySetResult_m30357_gshared((TaskCompletionSource_1_t1216 *)__this, (Object_t *)___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m82067(__this, ___exception, method) (bool)TaskCompletionSource_1_TrySetException_m30358_gshared((TaskCompletionSource_1_t1216 *)__this, (AggregateException_t1224 *)___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m82068(__this, ___exception, method) (bool)TaskCompletionSource_1_TrySetException_m30359_gshared((TaskCompletionSource_1_t1216 *)__this, (Exception_t107 *)___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m6921(__this, method) (bool)TaskCompletionSource_1_TrySetCanceled_m30360_gshared((TaskCompletionSource_1_t1216 *)__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m82069(__this, ___result, method) (void)TaskCompletionSource_1_SetResult_m6929_gshared((TaskCompletionSource_1_t1216 *)__this, (Object_t *)___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m82070(__this, ___exception, method) (void)TaskCompletionSource_1_SetException_m30361_gshared((TaskCompletionSource_1_t1216 *)__this, (AggregateException_t1224 *)___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m82071(__this, ___exception, method) (void)TaskCompletionSource_1_SetException_m30362_gshared((TaskCompletionSource_1_t1216 *)__this, (Exception_t107 *)___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m82072(__this, method) (void)TaskCompletionSource_1_SetCanceled_m6137_gshared((TaskCompletionSource_1_t1216 *)__this, method)
