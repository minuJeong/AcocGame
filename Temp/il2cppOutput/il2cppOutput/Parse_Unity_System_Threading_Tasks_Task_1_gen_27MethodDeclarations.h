#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t2194;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Action`1<System.Threading.Tasks.Task`1<System.Single>>
struct Action_1_t11235;
// System.AggregateException
struct AggregateException_t1224;

// System.Void System.Threading.Tasks.Task`1<System.Single>::.ctor()
 void Task_1__ctor_m82778 (Task_1_t2194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Threading.Tasks.Task`1<System.Single>::get_Result()
 float Task_1_get_Result_m82779 (Task_1_t2194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Single>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t390 * Task_1_ContinueWith_m82780 (Task_1_t2194 * __this, Action_1_t11235 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task`1<System.Single>::RunContinuations()
 void Task_1_RunContinuations_m82781 (Task_1_t2194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetResult(T)
 bool Task_1_TrySetResult_m82782 (Task_1_t2194 * __this, float ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m82783 (Task_1_t2194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m82784 (Task_1_t2194 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
