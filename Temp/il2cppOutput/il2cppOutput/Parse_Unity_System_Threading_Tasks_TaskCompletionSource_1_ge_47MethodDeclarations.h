#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>
struct TaskCompletionSource_1_t11166;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t2189;
// System.AggregateException
struct AggregateException_t1224;
// System.Exception
struct Exception_t107;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::.ctor()
 void TaskCompletionSource_1__ctor_m82443 (TaskCompletionSource_1_t11166 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::get_Task()
 Task_1_t2189 * TaskCompletionSource_1_get_Task_m82444 (TaskCompletionSource_1_t11166 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::set_Task(System.Threading.Tasks.Task`1<T>)
 void TaskCompletionSource_1_set_Task_m82445 (TaskCompletionSource_1_t11166 * __this, Task_1_t2189 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetResult(T)
 bool TaskCompletionSource_1_TrySetResult_m82446 (TaskCompletionSource_1_t11166 * __this, uint32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.AggregateException)
 bool TaskCompletionSource_1_TrySetException_m82447 (TaskCompletionSource_1_t11166 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.Exception)
 bool TaskCompletionSource_1_TrySetException_m82448 (TaskCompletionSource_1_t11166 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetCanceled()
 bool TaskCompletionSource_1_TrySetCanceled_m82449 (TaskCompletionSource_1_t11166 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetResult(T)
 void TaskCompletionSource_1_SetResult_m82450 (TaskCompletionSource_1_t11166 * __this, uint32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.AggregateException)
 void TaskCompletionSource_1_SetException_m82451 (TaskCompletionSource_1_t11166 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.Exception)
 void TaskCompletionSource_1_SetException_m82452 (TaskCompletionSource_1_t11166 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetCanceled()
 void TaskCompletionSource_1_SetCanceled_m82453 (TaskCompletionSource_1_t11166 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
