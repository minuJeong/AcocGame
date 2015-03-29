#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int16>
struct TaskCompletionSource_1_t11136;
// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t2187;
// System.AggregateException
struct AggregateException_t1224;
// System.Exception
struct Exception_t107;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::.ctor()
 void TaskCompletionSource_1__ctor_m82299 (TaskCompletionSource_1_t11136 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::get_Task()
 Task_1_t2187 * TaskCompletionSource_1_get_Task_m82300 (TaskCompletionSource_1_t11136 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::set_Task(System.Threading.Tasks.Task`1<T>)
 void TaskCompletionSource_1_set_Task_m82301 (TaskCompletionSource_1_t11136 * __this, Task_1_t2187 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetResult(T)
 bool TaskCompletionSource_1_TrySetResult_m82302 (TaskCompletionSource_1_t11136 * __this, int16_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.AggregateException)
 bool TaskCompletionSource_1_TrySetException_m82303 (TaskCompletionSource_1_t11136 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.Exception)
 bool TaskCompletionSource_1_TrySetException_m82304 (TaskCompletionSource_1_t11136 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetCanceled()
 bool TaskCompletionSource_1_TrySetCanceled_m82305 (TaskCompletionSource_1_t11136 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetResult(T)
 void TaskCompletionSource_1_SetResult_m82306 (TaskCompletionSource_1_t11136 * __this, int16_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.AggregateException)
 void TaskCompletionSource_1_SetException_m82307 (TaskCompletionSource_1_t11136 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.Exception)
 void TaskCompletionSource_1_SetException_m82308 (TaskCompletionSource_1_t11136 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetCanceled()
 void TaskCompletionSource_1_SetCanceled_m82309 (TaskCompletionSource_1_t11136 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
