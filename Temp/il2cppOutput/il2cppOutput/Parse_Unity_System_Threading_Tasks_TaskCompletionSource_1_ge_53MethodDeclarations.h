#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Char>
struct TaskCompletionSource_1_t11212;
// System.Threading.Tasks.Task`1<System.Char>
struct Task_1_t2192;
// System.AggregateException
struct AggregateException_t1224;
// System.Exception
struct Exception_t107;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Char>::.ctor()
 void TaskCompletionSource_1__ctor_m82662 (TaskCompletionSource_1_t11212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Char>::get_Task()
 Task_1_t2192 * TaskCompletionSource_1_get_Task_m82663 (TaskCompletionSource_1_t11212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Char>::set_Task(System.Threading.Tasks.Task`1<T>)
 void TaskCompletionSource_1_set_Task_m82664 (TaskCompletionSource_1_t11212 * __this, Task_1_t2192 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Char>::TrySetResult(T)
 bool TaskCompletionSource_1_TrySetResult_m82665 (TaskCompletionSource_1_t11212 * __this, uint16_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Char>::TrySetException(System.AggregateException)
 bool TaskCompletionSource_1_TrySetException_m82666 (TaskCompletionSource_1_t11212 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Char>::TrySetException(System.Exception)
 bool TaskCompletionSource_1_TrySetException_m82667 (TaskCompletionSource_1_t11212 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Char>::TrySetCanceled()
 bool TaskCompletionSource_1_TrySetCanceled_m82668 (TaskCompletionSource_1_t11212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Char>::SetResult(T)
 void TaskCompletionSource_1_SetResult_m82669 (TaskCompletionSource_1_t11212 * __this, uint16_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Char>::SetException(System.AggregateException)
 void TaskCompletionSource_1_SetException_m82670 (TaskCompletionSource_1_t11212 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Char>::SetException(System.Exception)
 void TaskCompletionSource_1_SetException_m82671 (TaskCompletionSource_1_t11212 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Char>::SetCanceled()
 void TaskCompletionSource_1_SetCanceled_m82672 (TaskCompletionSource_1_t11212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
