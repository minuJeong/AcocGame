#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int64>
struct TaskCompletionSource_1_t11181;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t2190;
// System.AggregateException
struct AggregateException_t1224;
// System.Exception
struct Exception_t107;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::.ctor()
 void TaskCompletionSource_1__ctor_m82515 (TaskCompletionSource_1_t11181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::get_Task()
 Task_1_t2190 * TaskCompletionSource_1_get_Task_m82516 (TaskCompletionSource_1_t11181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::set_Task(System.Threading.Tasks.Task`1<T>)
 void TaskCompletionSource_1_set_Task_m82517 (TaskCompletionSource_1_t11181 * __this, Task_1_t2190 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetResult(T)
 bool TaskCompletionSource_1_TrySetResult_m82518 (TaskCompletionSource_1_t11181 * __this, int64_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.AggregateException)
 bool TaskCompletionSource_1_TrySetException_m82519 (TaskCompletionSource_1_t11181 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.Exception)
 bool TaskCompletionSource_1_TrySetException_m82520 (TaskCompletionSource_1_t11181 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetCanceled()
 bool TaskCompletionSource_1_TrySetCanceled_m82521 (TaskCompletionSource_1_t11181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetResult(T)
 void TaskCompletionSource_1_SetResult_m82522 (TaskCompletionSource_1_t11181 * __this, int64_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.AggregateException)
 void TaskCompletionSource_1_SetException_m82523 (TaskCompletionSource_1_t11181 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.Exception)
 void TaskCompletionSource_1_SetException_m82524 (TaskCompletionSource_1_t11181 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetCanceled()
 void TaskCompletionSource_1_SetCanceled_m82525 (TaskCompletionSource_1_t11181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
