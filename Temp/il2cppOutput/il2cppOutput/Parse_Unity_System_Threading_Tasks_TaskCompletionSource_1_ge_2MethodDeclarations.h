#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t6107;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t993;
// System.AggregateException
struct AggregateException_t1224;
// System.Exception
struct Exception_t107;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
 void TaskCompletionSource_1__ctor_m30453 (TaskCompletionSource_1_t6107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
 Task_1_t993 * TaskCompletionSource_1_get_Task_m30454 (TaskCompletionSource_1_t6107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::set_Task(System.Threading.Tasks.Task`1<T>)
 void TaskCompletionSource_1_set_Task_m30455 (TaskCompletionSource_1_t6107 * __this, Task_1_t993 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetResult(T)
 bool TaskCompletionSource_1_TrySetResult_m30456 (TaskCompletionSource_1_t6107 * __this, bool ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetException(System.AggregateException)
 bool TaskCompletionSource_1_TrySetException_m30457 (TaskCompletionSource_1_t6107 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetException(System.Exception)
 bool TaskCompletionSource_1_TrySetException_m30458 (TaskCompletionSource_1_t6107 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetCanceled()
 bool TaskCompletionSource_1_TrySetCanceled_m30459 (TaskCompletionSource_1_t6107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetResult(T)
 void TaskCompletionSource_1_SetResult_m30460 (TaskCompletionSource_1_t6107 * __this, bool ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetException(System.AggregateException)
 void TaskCompletionSource_1_SetException_m30461 (TaskCompletionSource_1_t6107 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetException(System.Exception)
 void TaskCompletionSource_1_SetException_m30462 (TaskCompletionSource_1_t6107 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetCanceled()
 void TaskCompletionSource_1_SetCanceled_m30463 (TaskCompletionSource_1_t6107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
