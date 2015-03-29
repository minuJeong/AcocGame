#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t993;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t6097;
// System.AggregateException
struct AggregateException_t1224;

// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor()
 void Task_1__ctor_m30388 (Task_1_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
 bool Task_1_get_Result_m6278 (Task_1_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Boolean>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t390 * Task_1_ContinueWith_m30389 (Task_1_t993 * __this, Action_1_t6097 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::RunContinuations()
 void Task_1_RunContinuations_m30390 (Task_1_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetResult(T)
 bool Task_1_TrySetResult_m30391 (Task_1_t993 * __this, bool ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m30392 (Task_1_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m30393 (Task_1_t993 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
