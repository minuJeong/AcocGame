#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct TaskCompletionSource_1_t6407;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1099;
// System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Tuple_2_t1085;
// System.AggregateException
struct AggregateException_t1224;
// System.Exception
struct Exception_t107;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m32871(__this, method) (void)TaskCompletionSource_1__ctor_m6136_gshared((TaskCompletionSource_1_t1216 *)__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::get_Task()
#define TaskCompletionSource_1_get_Task_m32872(__this, method) (Task_1_t1099 *)TaskCompletionSource_1_get_Task_m6138_gshared((TaskCompletionSource_1_t1216 *)__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m32873(__this, ___value, method) (void)TaskCompletionSource_1_set_Task_m30356_gshared((TaskCompletionSource_1_t1216 *)__this, (Task_1_t1144 *)___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m32874(__this, ___result, method) (bool)TaskCompletionSource_1_TrySetResult_m30357_gshared((TaskCompletionSource_1_t1216 *)__this, (Object_t *)___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m32875(__this, ___exception, method) (bool)TaskCompletionSource_1_TrySetException_m30358_gshared((TaskCompletionSource_1_t1216 *)__this, (AggregateException_t1224 *)___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m32876(__this, ___exception, method) (bool)TaskCompletionSource_1_TrySetException_m30359_gshared((TaskCompletionSource_1_t1216 *)__this, (Exception_t107 *)___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m32877(__this, method) (bool)TaskCompletionSource_1_TrySetCanceled_m30360_gshared((TaskCompletionSource_1_t1216 *)__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m32878(__this, ___result, method) (void)TaskCompletionSource_1_SetResult_m6929_gshared((TaskCompletionSource_1_t1216 *)__this, (Object_t *)___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m32879(__this, ___exception, method) (void)TaskCompletionSource_1_SetException_m30361_gshared((TaskCompletionSource_1_t1216 *)__this, (AggregateException_t1224 *)___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m32880(__this, ___exception, method) (void)TaskCompletionSource_1_SetException_m30362_gshared((TaskCompletionSource_1_t1216 *)__this, (Exception_t107 *)___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m32881(__this, method) (void)TaskCompletionSource_1_SetCanceled_m6137_gshared((TaskCompletionSource_1_t1216 *)__this, method)
