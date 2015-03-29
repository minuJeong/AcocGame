#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1144;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t1335;
// System.AggregateException
struct AggregateException_t1224;

// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
 void Task_1__ctor_m22375_gshared (Task_1_t1144 * __this, MethodInfo* method);
#define Task_1__ctor_m22375(__this, method) (void)Task_1__ctor_m22375_gshared((Task_1_t1144 *)__this, method)
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
 Object_t * Task_1_get_Result_m22376_gshared (Task_1_t1144 * __this, MethodInfo* method);
#define Task_1_get_Result_m22376(__this, method) (Object_t *)Task_1_get_Result_m22376_gshared((Task_1_t1144 *)__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
 Task_t390 * Task_1_ContinueWith_m22378_gshared (Task_1_t1144 * __this, Action_1_t1335 * ___continuation, MethodInfo* method);
#define Task_1_ContinueWith_m22378(__this, ___continuation, method) (Task_t390 *)Task_1_ContinueWith_m22378_gshared((Task_1_t1144 *)__this, (Action_1_t1335 *)___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
 void Task_1_RunContinuations_m22380_gshared (Task_1_t1144 * __this, MethodInfo* method);
#define Task_1_RunContinuations_m22380(__this, method) (void)Task_1_RunContinuations_m22380_gshared((Task_1_t1144 *)__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
 bool Task_1_TrySetResult_m22382_gshared (Task_1_t1144 * __this, Object_t * ___result, MethodInfo* method);
#define Task_1_TrySetResult_m22382(__this, ___result, method) (bool)Task_1_TrySetResult_m22382_gshared((Task_1_t1144 *)__this, (Object_t *)___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
 bool Task_1_TrySetCanceled_m22384_gshared (Task_1_t1144 * __this, MethodInfo* method);
#define Task_1_TrySetCanceled_m22384(__this, method) (bool)Task_1_TrySetCanceled_m22384_gshared((Task_1_t1144 *)__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
 bool Task_1_TrySetException_m22386_gshared (Task_1_t1144 * __this, AggregateException_t1224 * ___exception, MethodInfo* method);
#define Task_1_TrySetException_m22386(__this, ___exception, method) (bool)Task_1_TrySetException_m22386_gshared((Task_1_t1144 *)__this, (AggregateException_t1224 *)___exception, method)
