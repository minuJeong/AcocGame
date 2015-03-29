#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t2191;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt64>>
struct Action_1_t11191;
// System.AggregateException
struct AggregateException_t1224;

// System.Void System.Threading.Tasks.Task`1<System.UInt64>::.ctor()
 void Task_1__ctor_m82565 (Task_1_t2191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Threading.Tasks.Task`1<System.UInt64>::get_Result()
 uint64_t Task_1_get_Result_m82566 (Task_1_t2191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t390 * Task_1_ContinueWith_m82567 (Task_1_t2191 * __this, Action_1_t11191 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task`1<System.UInt64>::RunContinuations()
 void Task_1_RunContinuations_m82568 (Task_1_t2191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetResult(T)
 bool Task_1_TrySetResult_m82569 (Task_1_t2191 * __this, uint64_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m82570 (Task_1_t2191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m82571 (Task_1_t2191 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
