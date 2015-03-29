#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskFactory
struct TaskFactory_t1244;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1271;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1272;
// System.Action`1<System.IAsyncResult>
struct Action_1_t1264;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1072;
// System.Action`1<System.Threading.Tasks.Task[]>
struct Action_1_t1268;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Threading.Tasks.TaskCreationOptions
#include "Parse_Unity_System_Threading_Tasks_TaskCreationOptions.h"
// System.Threading.Tasks.TaskContinuationOptions
#include "Parse_Unity_System_Threading_Tasks_TaskContinuationOptions.h"

// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
 void TaskFactory__ctor_m6080 (TaskFactory_t1244 * __this, TaskScheduler_t1271 * ___scheduler, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.Tasks.TaskScheduler)
 void TaskFactory__ctor_m6081 (TaskFactory_t1244 * __this, TaskScheduler_t1271 * ___scheduler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.CancellationToken)
 void TaskFactory__ctor_m6082 (TaskFactory_t1244 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor()
 void TaskFactory__ctor_m6083 (TaskFactory_t1244 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
 void TaskFactory__ctor_m6084 (TaskFactory_t1244 * __this, CancellationToken_t992  ___cancellationToken, int32_t ___creationOptions, int32_t ___continuationOptions, TaskScheduler_t1271 * ___scheduler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::get_Scheduler()
 TaskScheduler_t1271 * TaskFactory_get_Scheduler_m6085 (TaskFactory_t1244 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,System.Object)
 Task_t390 * TaskFactory_FromAsync_m6086 (TaskFactory_t1244 * __this, Func_3_t1272 * ___beginMethod, Action_1_t1264 * ___endMethod, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::ContinueWhenAll(System.Threading.Tasks.Task[],System.Action`1<System.Threading.Tasks.Task[]>)
 Task_t390 * TaskFactory_ContinueWhenAll_m6087 (TaskFactory_t1244 * __this, TaskU5BU5D_t1072* ___tasks, Action_1_t1268 * ___continuationAction, MethodInfo* method) IL2CPP_METHOD_ATTR;
