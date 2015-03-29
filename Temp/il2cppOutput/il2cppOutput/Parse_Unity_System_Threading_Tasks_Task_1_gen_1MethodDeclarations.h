#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t994;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Action_1_t6099;
// System.AggregateException
struct AggregateException_t1224;

// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
 void Task_1__ctor_m30404 (Task_1_t994 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Threading.Tasks.Task`1<System.Int32>::get_Result()
 int32_t Task_1_get_Result_m6114 (Task_1_t994 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t390 * Task_1_ContinueWith_m30405 (Task_1_t994 * __this, Action_1_t6099 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task`1<System.Int32>::RunContinuations()
 void Task_1_RunContinuations_m30406 (Task_1_t994 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(T)
 bool Task_1_TrySetResult_m30407 (Task_1_t994 * __this, int32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m30408 (Task_1_t994 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m30409 (Task_1_t994 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
