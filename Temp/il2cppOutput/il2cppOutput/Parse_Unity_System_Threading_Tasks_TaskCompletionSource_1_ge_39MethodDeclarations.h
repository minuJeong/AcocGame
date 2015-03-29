#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
struct TaskCompletionSource_1_t11107;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t2185;
// System.AggregateException
struct AggregateException_t1224;
// System.Exception
struct Exception_t107;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::.ctor()
 void TaskCompletionSource_1__ctor_m82158 (TaskCompletionSource_1_t11107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::get_Task()
 Task_1_t2185 * TaskCompletionSource_1_get_Task_m82159 (TaskCompletionSource_1_t11107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::set_Task(System.Threading.Tasks.Task`1<T>)
 void TaskCompletionSource_1_set_Task_m82160 (TaskCompletionSource_1_t11107 * __this, Task_1_t2185 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetResult(T)
 bool TaskCompletionSource_1_TrySetResult_m82161 (TaskCompletionSource_1_t11107 * __this, uint8_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.AggregateException)
 bool TaskCompletionSource_1_TrySetException_m82162 (TaskCompletionSource_1_t11107 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.Exception)
 bool TaskCompletionSource_1_TrySetException_m82163 (TaskCompletionSource_1_t11107 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetCanceled()
 bool TaskCompletionSource_1_TrySetCanceled_m82164 (TaskCompletionSource_1_t11107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetResult(T)
 void TaskCompletionSource_1_SetResult_m82165 (TaskCompletionSource_1_t11107 * __this, uint8_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.AggregateException)
 void TaskCompletionSource_1_SetException_m82166 (TaskCompletionSource_1_t11107 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.Exception)
 void TaskCompletionSource_1_SetException_m82167 (TaskCompletionSource_1_t11107 * __this, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetCanceled()
 void TaskCompletionSource_1_SetCanceled_m82168 (TaskCompletionSource_1_t11107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
