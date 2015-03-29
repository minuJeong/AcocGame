#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1271;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t1275;
// System.Action
struct Action_t1220;

// System.Void System.Threading.Tasks.TaskScheduler::.ctor(System.Threading.SynchronizationContext)
 void TaskScheduler__ctor_m6090 (TaskScheduler_t1271 * __this, SynchronizationContext_t1275 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskScheduler::Post(System.Action)
 void TaskScheduler_Post_m6091 (TaskScheduler_t1271 * __this, Action_t1220 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::FromCurrentSynchronizationContext()
 TaskScheduler_t1271 * TaskScheduler_FromCurrentSynchronizationContext_m6092 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskScheduler::.cctor()
 void TaskScheduler__cctor_m6093 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
