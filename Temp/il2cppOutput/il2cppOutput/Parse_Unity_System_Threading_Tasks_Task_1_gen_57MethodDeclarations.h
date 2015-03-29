﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Char>>
struct Task_1_t11214;
// System.Threading.Tasks.Task`1<System.Char>
struct Task_1_t2192;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Char>>>
struct Action_1_t11215;
// System.AggregateException
struct AggregateException_t1224;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Char>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_3MethodDeclarations.h"
#define Task_1__ctor_m82677(__this, method) (void)Task_1__ctor_m22378_gshared((Task_1_t1144 *)__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Char>>::get_Result()
#define Task_1_get_Result_m82678(__this, method) (Task_1_t2192 *)Task_1_get_Result_m22379_gshared((Task_1_t1144 *)__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Char>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m82679(__this, ___continuation, method) (Task_t390 *)Task_1_ContinueWith_m22381_gshared((Task_1_t1144 *)__this, (Action_1_t1335 *)___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Char>>::RunContinuations()
#define Task_1_RunContinuations_m82680(__this, method) (void)Task_1_RunContinuations_m22383_gshared((Task_1_t1144 *)__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Char>>::TrySetResult(T)
#define Task_1_TrySetResult_m82681(__this, ___result, method) (bool)Task_1_TrySetResult_m22385_gshared((Task_1_t1144 *)__this, (Object_t *)___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Char>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m82682(__this, method) (bool)Task_1_TrySetCanceled_m22387_gshared((Task_1_t1144 *)__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Char>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m82683(__this, ___exception, method) (bool)Task_1_TrySetException_m22389_gshared((Task_1_t1144 *)__this, (AggregateException_t1224 *)___exception, method)
