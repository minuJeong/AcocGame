#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>
struct TaskCompletionSource_1_t11196;
// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t2191;
// System.AggregateException
struct AggregateException_t1224;
// System.Exception
struct Exception_t107;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::.ctor()
 void TaskCompletionSource_1__ctor_m82587 (TaskCompletionSource_1_t11196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::get_Task()
 Task_1_t2191 * TaskCompletionSource_1_get_Task_m82588 (TaskCompletionSource_1_t11196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::set_Task(System.Threading.Tasks.Task`1<T>)
 void TaskCompletionSource_1_set_Task_m82589 (TaskCompletionSource_1_t11196 * __this, Task_1_t2191 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetResult(T)
 bool TaskCompletionSource_1_TrySetResult_m82590 (TaskCompletionSource_1_t11196 * __this, uint64_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.AggregateException)
 bool TaskCompletionSource_1_TrySetException_m82591 (TaskCompletionSource_1_t11196 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.Exception)
 bool TaskCompletionSource_1_TrySetException_m82592 (TaskCompletionSource_1_t11196 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetCanceled()
 bool TaskCompletionSource_1_TrySetCanceled_m82593 (TaskCompletionSource_1_t11196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetResult(T)
 void TaskCompletionSource_1_SetResult_m82594 (TaskCompletionSource_1_t11196 * __this, uint64_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.AggregateException)
 void TaskCompletionSource_1_SetException_m82595 (TaskCompletionSource_1_t11196 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.Exception)
 void TaskCompletionSource_1_SetException_m82596 (TaskCompletionSource_1_t11196 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetCanceled()
 void TaskCompletionSource_1_SetCanceled_m82597 (TaskCompletionSource_1_t11196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
