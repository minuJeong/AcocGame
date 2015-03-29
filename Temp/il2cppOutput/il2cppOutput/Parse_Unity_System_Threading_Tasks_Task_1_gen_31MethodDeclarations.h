#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseConfig>>
struct Task_1_t6434;
// System.Threading.Tasks.Task`1<Parse.ParseConfig>
struct Task_1_t1104;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseConfig>>>
struct Action_1_t6435;
// System.AggregateException
struct AggregateException_t1224;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseConfig>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_3MethodDeclarations.h"
#define Task_1__ctor_m33014(__this, method) (void)Task_1__ctor_m22378_gshared((Task_1_t1144 *)__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseConfig>>::get_Result()
#define Task_1_get_Result_m33015(__this, method) (Task_1_t1104 *)Task_1_get_Result_m22379_gshared((Task_1_t1144 *)__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseConfig>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m33016(__this, ___continuation, method) (Task_t390 *)Task_1_ContinueWith_m22381_gshared((Task_1_t1144 *)__this, (Action_1_t1335 *)___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseConfig>>::RunContinuations()
#define Task_1_RunContinuations_m33017(__this, method) (void)Task_1_RunContinuations_m22383_gshared((Task_1_t1144 *)__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseConfig>>::TrySetResult(T)
#define Task_1_TrySetResult_m33018(__this, ___result, method) (bool)Task_1_TrySetResult_m22385_gshared((Task_1_t1144 *)__this, (Object_t *)___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseConfig>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m33019(__this, method) (bool)Task_1_TrySetCanceled_m22387_gshared((Task_1_t1144 *)__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseConfig>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m33020(__this, ___exception, method) (bool)Task_1_TrySetException_m22389_gshared((Task_1_t1144 *)__this, (AggregateException_t1224 *)___exception, method)
