#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Char>
struct Task_1_t2192;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Action`1<System.Threading.Tasks.Task`1<System.Char>>
struct Action_1_t11205;
// System.AggregateException
struct AggregateException_t1224;

// System.Void System.Threading.Tasks.Task`1<System.Char>::.ctor()
 void Task_1__ctor_m82634 (Task_1_t2192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Threading.Tasks.Task`1<System.Char>::get_Result()
 uint16_t Task_1_get_Result_m82635 (Task_1_t2192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Char>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t390 * Task_1_ContinueWith_m82636 (Task_1_t2192 * __this, Action_1_t11205 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task`1<System.Char>::RunContinuations()
 void Task_1_RunContinuations_m82637 (Task_1_t2192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetResult(T)
 bool Task_1_TrySetResult_m82638 (Task_1_t2192 * __this, uint16_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m82639 (Task_1_t2192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m82640 (Task_1_t2192 * __this, AggregateException_t1224 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
