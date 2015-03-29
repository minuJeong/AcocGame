#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.SByte>
struct TaskCompletionSource_1_t11122;
// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t2186;
// System.AggregateException
struct AggregateException_t1224;
// System.Exception
struct Exception_t107;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::.ctor()
 void TaskCompletionSource_1__ctor_m82230 (TaskCompletionSource_1_t11122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::get_Task()
 Task_1_t2186 * TaskCompletionSource_1_get_Task_m82231 (TaskCompletionSource_1_t11122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::set_Task(System.Threading.Tasks.Task`1<T>)
 void TaskCompletionSource_1_set_Task_m82232 (TaskCompletionSource_1_t11122 * __this, Task_1_t2186 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetResult(T)
 bool TaskCompletionSource_1_TrySetResult_m82233 (TaskCompletionSource_1_t11122 * __this, int8_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.AggregateException)
 bool TaskCompletionSource_1_TrySetException_m82234 (TaskCompletionSource_1_t11122 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.Exception)
 bool TaskCompletionSource_1_TrySetException_m82235 (TaskCompletionSource_1_t11122 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetCanceled()
 bool TaskCompletionSource_1_TrySetCanceled_m82236 (TaskCompletionSource_1_t11122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetResult(T)
 void TaskCompletionSource_1_SetResult_m82237 (TaskCompletionSource_1_t11122 * __this, int8_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.AggregateException)
 void TaskCompletionSource_1_SetException_m82238 (TaskCompletionSource_1_t11122 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.Exception)
 void TaskCompletionSource_1_SetException_m82239 (TaskCompletionSource_1_t11122 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetCanceled()
 void TaskCompletionSource_1_SetCanceled_m82240 (TaskCompletionSource_1_t11122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
