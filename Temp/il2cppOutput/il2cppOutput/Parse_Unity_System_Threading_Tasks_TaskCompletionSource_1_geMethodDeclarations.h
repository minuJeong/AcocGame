#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t1231;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t994;
// System.AggregateException
struct AggregateException_t1224;
// System.Exception
struct Exception_t107;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
 void TaskCompletionSource_1__ctor_m6130 (TaskCompletionSource_1_t1231 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
 Task_1_t994 * TaskCompletionSource_1_get_Task_m6132 (TaskCompletionSource_1_t1231 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::set_Task(System.Threading.Tasks.Task`1<T>)
 void TaskCompletionSource_1_set_Task_m30419 (TaskCompletionSource_1_t1231 * __this, Task_1_t994 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(T)
 bool TaskCompletionSource_1_TrySetResult_m7005 (TaskCompletionSource_1_t1231 * __this, int32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.AggregateException)
 bool TaskCompletionSource_1_TrySetException_m7055 (TaskCompletionSource_1_t1231 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.Exception)
 bool TaskCompletionSource_1_TrySetException_m30420 (TaskCompletionSource_1_t1231 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetCanceled()
 bool TaskCompletionSource_1_TrySetCanceled_m7056 (TaskCompletionSource_1_t1231 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(T)
 void TaskCompletionSource_1_SetResult_m6999 (TaskCompletionSource_1_t1231 * __this, int32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.AggregateException)
 void TaskCompletionSource_1_SetException_m6997 (TaskCompletionSource_1_t1231 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
 void TaskCompletionSource_1_SetException_m30421 (TaskCompletionSource_1_t1231 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
 void TaskCompletionSource_1_SetCanceled_m6131 (TaskCompletionSource_1_t1231 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
