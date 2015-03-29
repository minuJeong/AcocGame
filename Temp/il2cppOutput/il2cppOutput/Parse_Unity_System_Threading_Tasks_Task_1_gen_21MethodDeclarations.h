#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t2188;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt16>>
struct Action_1_t11145;
// System.AggregateException
struct AggregateException_t1224;

// System.Void System.Threading.Tasks.Task`1<System.UInt16>::.ctor()
 void Task_1__ctor_m82346 (Task_1_t2188 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Threading.Tasks.Task`1<System.UInt16>::get_Result()
 uint16_t Task_1_get_Result_m82347 (Task_1_t2188 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t390 * Task_1_ContinueWith_m82348 (Task_1_t2188 * __this, Action_1_t11145 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task`1<System.UInt16>::RunContinuations()
 void Task_1_RunContinuations_m82349 (Task_1_t2188 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetResult(T)
 bool Task_1_TrySetResult_m82350 (Task_1_t2188 * __this, uint16_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m82351 (Task_1_t2188 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m82352 (Task_1_t2188 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
