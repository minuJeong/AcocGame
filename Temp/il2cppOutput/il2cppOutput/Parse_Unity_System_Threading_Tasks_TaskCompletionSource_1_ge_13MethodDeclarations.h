#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>
struct TaskCompletionSource_1_t6167;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>
struct Task_1_t6164;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t1246;
// System.AggregateException
struct AggregateException_t1224;
// System.Exception
struct Exception_t107;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m30963(__this, method) (void)TaskCompletionSource_1__ctor_m6138_gshared((TaskCompletionSource_1_t1216 *)__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::get_Task()
#define TaskCompletionSource_1_get_Task_m30964(__this, method) (Task_1_t6164 *)TaskCompletionSource_1_get_Task_m6140_gshared((TaskCompletionSource_1_t1216 *)__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m30965(__this, ___value, method) (void)TaskCompletionSource_1_set_Task_m30359_gshared((TaskCompletionSource_1_t1216 *)__this, (Task_1_t1144 *)___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m30966(__this, ___result, method) (bool)TaskCompletionSource_1_TrySetResult_m30360_gshared((TaskCompletionSource_1_t1216 *)__this, (Object_t *)___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m30967(__this, ___exception, method) (bool)TaskCompletionSource_1_TrySetException_m30361_gshared((TaskCompletionSource_1_t1216 *)__this, (AggregateException_t1224 *)___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m30968(__this, ___exception, method) (bool)TaskCompletionSource_1_TrySetException_m30362_gshared((TaskCompletionSource_1_t1216 *)__this, (Exception_t107 *)___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m30969(__this, method) (bool)TaskCompletionSource_1_TrySetCanceled_m30363_gshared((TaskCompletionSource_1_t1216 *)__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m30970(__this, ___result, method) (void)TaskCompletionSource_1_SetResult_m6931_gshared((TaskCompletionSource_1_t1216 *)__this, (Object_t *)___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m30971(__this, ___exception, method) (void)TaskCompletionSource_1_SetException_m30364_gshared((TaskCompletionSource_1_t1216 *)__this, (AggregateException_t1224 *)___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m30972(__this, ___exception, method) (void)TaskCompletionSource_1_SetException_m30365_gshared((TaskCompletionSource_1_t1216 *)__this, (Exception_t107 *)___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m30973(__this, method) (void)TaskCompletionSource_1_SetCanceled_m6139_gshared((TaskCompletionSource_1_t1216 *)__this, method)
