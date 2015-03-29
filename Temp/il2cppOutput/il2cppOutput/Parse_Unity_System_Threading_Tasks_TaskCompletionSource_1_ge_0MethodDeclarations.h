#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t1216;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1144;
// System.Object
struct Object_t;
// System.AggregateException
struct AggregateException_t1224;
// System.Exception
struct Exception_t107;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
 void TaskCompletionSource_1__ctor_m6138_gshared (TaskCompletionSource_1_t1216 * __this, MethodInfo* method);
#define TaskCompletionSource_1__ctor_m6138(__this, method) (void)TaskCompletionSource_1__ctor_m6138_gshared((TaskCompletionSource_1_t1216 *)__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
 Task_1_t1144 * TaskCompletionSource_1_get_Task_m6140_gshared (TaskCompletionSource_1_t1216 * __this, MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m6140(__this, method) (Task_1_t1144 *)TaskCompletionSource_1_get_Task_m6140_gshared((TaskCompletionSource_1_t1216 *)__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::set_Task(System.Threading.Tasks.Task`1<T>)
 void TaskCompletionSource_1_set_Task_m30359_gshared (TaskCompletionSource_1_t1216 * __this, Task_1_t1144 * ___value, MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m30359(__this, ___value, method) (void)TaskCompletionSource_1_set_Task_m30359_gshared((TaskCompletionSource_1_t1216 *)__this, (Task_1_t1144 *)___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(T)
 bool TaskCompletionSource_1_TrySetResult_m30360_gshared (TaskCompletionSource_1_t1216 * __this, Object_t * ___result, MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m30360(__this, ___result, method) (bool)TaskCompletionSource_1_TrySetResult_m30360_gshared((TaskCompletionSource_1_t1216 *)__this, (Object_t *)___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.AggregateException)
 bool TaskCompletionSource_1_TrySetException_m30361_gshared (TaskCompletionSource_1_t1216 * __this, AggregateException_t1224 * ___exception, MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30361(__this, ___exception, method) (bool)TaskCompletionSource_1_TrySetException_m30361_gshared((TaskCompletionSource_1_t1216 *)__this, (AggregateException_t1224 *)___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
 bool TaskCompletionSource_1_TrySetException_m30362_gshared (TaskCompletionSource_1_t1216 * __this, Exception_t107 * ___exception, MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30362(__this, ___exception, method) (bool)TaskCompletionSource_1_TrySetException_m30362_gshared((TaskCompletionSource_1_t1216 *)__this, (Exception_t107 *)___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
 bool TaskCompletionSource_1_TrySetCanceled_m30363_gshared (TaskCompletionSource_1_t1216 * __this, MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m30363(__this, method) (bool)TaskCompletionSource_1_TrySetCanceled_m30363_gshared((TaskCompletionSource_1_t1216 *)__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(T)
 void TaskCompletionSource_1_SetResult_m6931_gshared (TaskCompletionSource_1_t1216 * __this, Object_t * ___result, MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m6931(__this, ___result, method) (void)TaskCompletionSource_1_SetResult_m6931_gshared((TaskCompletionSource_1_t1216 *)__this, (Object_t *)___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.AggregateException)
 void TaskCompletionSource_1_SetException_m30364_gshared (TaskCompletionSource_1_t1216 * __this, AggregateException_t1224 * ___exception, MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30364(__this, ___exception, method) (void)TaskCompletionSource_1_SetException_m30364_gshared((TaskCompletionSource_1_t1216 *)__this, (AggregateException_t1224 *)___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
 void TaskCompletionSource_1_SetException_m30365_gshared (TaskCompletionSource_1_t1216 * __this, Exception_t107 * ___exception, MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30365(__this, ___exception, method) (void)TaskCompletionSource_1_SetException_m30365_gshared((TaskCompletionSource_1_t1216 *)__this, (Exception_t107 *)___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
 void TaskCompletionSource_1_SetCanceled_m6139_gshared (TaskCompletionSource_1_t1216 * __this, MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m6139(__this, method) (void)TaskCompletionSource_1_SetCanceled_m6139_gshared((TaskCompletionSource_1_t1216 *)__this, method)
