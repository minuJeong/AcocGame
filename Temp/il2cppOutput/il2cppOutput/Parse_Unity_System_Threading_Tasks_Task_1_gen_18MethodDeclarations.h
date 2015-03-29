#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t2185;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Action_1_t11100;
// System.AggregateException
struct AggregateException_t1224;

// System.Void System.Threading.Tasks.Task`1<System.Byte>::.ctor()
 void Task_1__ctor_m82130 (Task_1_t2185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Threading.Tasks.Task`1<System.Byte>::get_Result()
 uint8_t Task_1_get_Result_m82131 (Task_1_t2185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Byte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t390 * Task_1_ContinueWith_m82132 (Task_1_t2185 * __this, Action_1_t11100 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task`1<System.Byte>::RunContinuations()
 void Task_1_RunContinuations_m82133 (Task_1_t2185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetResult(T)
 bool Task_1_TrySetResult_m82134 (Task_1_t2185 * __this, uint8_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m82135 (Task_1_t2185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m82136 (Task_1_t2185 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
