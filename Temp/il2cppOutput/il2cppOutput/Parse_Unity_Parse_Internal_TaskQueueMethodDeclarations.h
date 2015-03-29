#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.TaskQueue
struct TaskQueue_t1076;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Threading.Tasks.Task Parse.Internal.TaskQueue::GetTaskToAwait(System.Threading.CancellationToken)
 Task_t390 * TaskQueue_GetTaskToAwait_m5524 (TaskQueue_t1076 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.TaskQueue::get_Mutex()
 Object_t * TaskQueue_get_Mutex_m5525 (TaskQueue_t1076 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.TaskQueue::.ctor()
 void TaskQueue__ctor_m5526 (TaskQueue_t1076 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.TaskQueue::<GetTaskToAwait>b__0(System.Threading.Tasks.Task)
 void TaskQueue_U3CGetTaskToAwaitU3Eb__0_m5527 (Object_t * __this/* static, unused */, Task_t390 * ___task, MethodInfo* method) IL2CPP_METHOD_ATTR;
