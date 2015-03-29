#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>
struct Task_1_t2195;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1031;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>>
struct Action_1_t11262;
// System.AggregateException
struct AggregateException_t1224;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_3MethodDeclarations.h"
#define Task_1__ctor_m82898(__this, method) (void)Task_1__ctor_m22375_gshared((Task_1_t1144 *)__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::get_Result()
#define Task_1_get_Result_m82899(__this, method) (Object_t*)Task_1_get_Result_m22376_gshared((Task_1_t1144 *)__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m82900(__this, ___continuation, method) (Task_t390 *)Task_1_ContinueWith_m22378_gshared((Task_1_t1144 *)__this, (Action_1_t1335 *)___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::RunContinuations()
#define Task_1_RunContinuations_m82901(__this, method) (void)Task_1_RunContinuations_m22380_gshared((Task_1_t1144 *)__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::TrySetResult(T)
#define Task_1_TrySetResult_m82902(__this, ___result, method) (bool)Task_1_TrySetResult_m22382_gshared((Task_1_t1144 *)__this, (Object_t *)___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m82903(__this, method) (bool)Task_1_TrySetCanceled_m22384_gshared((Task_1_t1144 *)__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m82904(__this, ___exception, method) (bool)Task_1_TrySetException_m22386_gshared((Task_1_t1144 *)__this, (AggregateException_t1224 *)___exception, method)
