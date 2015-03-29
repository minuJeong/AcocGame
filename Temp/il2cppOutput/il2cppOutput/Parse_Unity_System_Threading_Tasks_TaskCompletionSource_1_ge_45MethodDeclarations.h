#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>
struct TaskCompletionSource_1_t11151;
// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t2188;
// System.AggregateException
struct AggregateException_t1224;
// System.Exception
struct Exception_t107;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::.ctor()
 void TaskCompletionSource_1__ctor_m82371 (TaskCompletionSource_1_t11151 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::get_Task()
 Task_1_t2188 * TaskCompletionSource_1_get_Task_m82372 (TaskCompletionSource_1_t11151 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::set_Task(System.Threading.Tasks.Task`1<T>)
 void TaskCompletionSource_1_set_Task_m82373 (TaskCompletionSource_1_t11151 * __this, Task_1_t2188 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetResult(T)
 bool TaskCompletionSource_1_TrySetResult_m82374 (TaskCompletionSource_1_t11151 * __this, uint16_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.AggregateException)
 bool TaskCompletionSource_1_TrySetException_m82375 (TaskCompletionSource_1_t11151 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.Exception)
 bool TaskCompletionSource_1_TrySetException_m82376 (TaskCompletionSource_1_t11151 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetCanceled()
 bool TaskCompletionSource_1_TrySetCanceled_m82377 (TaskCompletionSource_1_t11151 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetResult(T)
 void TaskCompletionSource_1_SetResult_m82378 (TaskCompletionSource_1_t11151 * __this, uint16_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.AggregateException)
 void TaskCompletionSource_1_SetException_m82379 (TaskCompletionSource_1_t11151 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.Exception)
 void TaskCompletionSource_1_SetException_m82380 (TaskCompletionSource_1_t11151 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetCanceled()
 void TaskCompletionSource_1_SetCanceled_m82381 (TaskCompletionSource_1_t11151 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
