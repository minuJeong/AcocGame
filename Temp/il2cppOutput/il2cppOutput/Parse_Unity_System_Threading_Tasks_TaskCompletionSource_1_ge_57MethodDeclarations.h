#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Single>
struct TaskCompletionSource_1_t11241;
// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t2194;
// System.AggregateException
struct AggregateException_t1224;
// System.Exception
struct Exception_t107;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::.ctor()
 void TaskCompletionSource_1__ctor_m82803 (TaskCompletionSource_1_t11241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Single>::get_Task()
 Task_1_t2194 * TaskCompletionSource_1_get_Task_m82804 (TaskCompletionSource_1_t11241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::set_Task(System.Threading.Tasks.Task`1<T>)
 void TaskCompletionSource_1_set_Task_m82805 (TaskCompletionSource_1_t11241 * __this, Task_1_t2194 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetResult(T)
 bool TaskCompletionSource_1_TrySetResult_m82806 (TaskCompletionSource_1_t11241 * __this, float ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.AggregateException)
 bool TaskCompletionSource_1_TrySetException_m82807 (TaskCompletionSource_1_t11241 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.Exception)
 bool TaskCompletionSource_1_TrySetException_m82808 (TaskCompletionSource_1_t11241 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetCanceled()
 bool TaskCompletionSource_1_TrySetCanceled_m82809 (TaskCompletionSource_1_t11241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetResult(T)
 void TaskCompletionSource_1_SetResult_m82810 (TaskCompletionSource_1_t11241 * __this, float ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.AggregateException)
 void TaskCompletionSource_1_SetException_m82811 (TaskCompletionSource_1_t11241 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.Exception)
 void TaskCompletionSource_1_SetException_m82812 (TaskCompletionSource_1_t11241 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetCanceled()
 void TaskCompletionSource_1_SetCanceled_m82813 (TaskCompletionSource_1_t11241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
