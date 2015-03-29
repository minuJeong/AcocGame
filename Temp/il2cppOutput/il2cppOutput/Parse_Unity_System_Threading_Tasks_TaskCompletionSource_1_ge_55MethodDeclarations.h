#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Double>
struct TaskCompletionSource_1_t11226;
// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t2193;
// System.AggregateException
struct AggregateException_t1224;
// System.Exception
struct Exception_t107;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::.ctor()
 void TaskCompletionSource_1__ctor_m82731 (TaskCompletionSource_1_t11226 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Double>::get_Task()
 Task_1_t2193 * TaskCompletionSource_1_get_Task_m82732 (TaskCompletionSource_1_t11226 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::set_Task(System.Threading.Tasks.Task`1<T>)
 void TaskCompletionSource_1_set_Task_m82733 (TaskCompletionSource_1_t11226 * __this, Task_1_t2193 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetResult(T)
 bool TaskCompletionSource_1_TrySetResult_m82734 (TaskCompletionSource_1_t11226 * __this, double ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.AggregateException)
 bool TaskCompletionSource_1_TrySetException_m82735 (TaskCompletionSource_1_t11226 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.Exception)
 bool TaskCompletionSource_1_TrySetException_m82736 (TaskCompletionSource_1_t11226 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetCanceled()
 bool TaskCompletionSource_1_TrySetCanceled_m82737 (TaskCompletionSource_1_t11226 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetResult(T)
 void TaskCompletionSource_1_SetResult_m82738 (TaskCompletionSource_1_t11226 * __this, double ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.AggregateException)
 void TaskCompletionSource_1_SetException_m82739 (TaskCompletionSource_1_t11226 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.Exception)
 void TaskCompletionSource_1_SetException_m82740 (TaskCompletionSource_1_t11226 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetCanceled()
 void TaskCompletionSource_1_SetCanceled_m82741 (TaskCompletionSource_1_t11226 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
