#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t2189;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt32>>
struct Action_1_t11160;
// System.AggregateException
struct AggregateException_t1224;

// System.Void System.Threading.Tasks.Task`1<System.UInt32>::.ctor()
 void Task_1__ctor_m82418 (Task_1_t2189 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Threading.Tasks.Task`1<System.UInt32>::get_Result()
 uint32_t Task_1_get_Result_m82419 (Task_1_t2189 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t390 * Task_1_ContinueWith_m82420 (Task_1_t2189 * __this, Action_1_t11160 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task`1<System.UInt32>::RunContinuations()
 void Task_1_RunContinuations_m82421 (Task_1_t2189 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetResult(T)
 bool Task_1_TrySetResult_m82422 (Task_1_t2189 * __this, uint32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m82423 (Task_1_t2189 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m82424 (Task_1_t2189 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
