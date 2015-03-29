#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>>
struct Task_1_t6808;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>
struct Task_1_t1152;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>>>
struct Action_1_t6809;
// System.AggregateException
struct AggregateException_t1224;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_3MethodDeclarations.h"
#define Task_1__ctor_m35967(__this, method) (void)Task_1__ctor_m22375_gshared((Task_1_t1144 *)__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>>::get_Result()
#define Task_1_get_Result_m35968(__this, method) (Task_1_t1152 *)Task_1_get_Result_m22376_gshared((Task_1_t1144 *)__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m35969(__this, ___continuation, method) (Task_t390 *)Task_1_ContinueWith_m22378_gshared((Task_1_t1144 *)__this, (Action_1_t1335 *)___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>>::RunContinuations()
#define Task_1_RunContinuations_m35970(__this, method) (void)Task_1_RunContinuations_m22380_gshared((Task_1_t1144 *)__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>>::TrySetResult(T)
#define Task_1_TrySetResult_m35971(__this, ___result, method) (bool)Task_1_TrySetResult_m22382_gshared((Task_1_t1144 *)__this, (Object_t *)___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m35972(__this, method) (bool)Task_1_TrySetCanceled_m22384_gshared((Task_1_t1144 *)__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m35973(__this, ___exception, method) (bool)Task_1_TrySetException_m22386_gshared((Task_1_t1144 *)__this, (AggregateException_t1224 *)___exception, method)
