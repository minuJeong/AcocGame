#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task
struct Task_t390;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t1244;
// System.AggregateException
struct AggregateException_t1224;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1021;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1072;
// System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>
struct IEnumerable_1_t1245;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t1246;
// System.Action
struct Action_t1220;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Threading.Tasks.Task::.ctor()
 void Task__ctor_m6054 (Task_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
 TaskFactory_t1244 * Task_get_Factory_m6055 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
 AggregateException_t1224 * Task_get_Exception_m6056 (Task_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
 bool Task_get_IsCanceled_m2768 (Task_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
 bool Task_get_IsCompleted_m2766 (Task_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
 bool Task_get_IsFaulted_m2767 (Task_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task::Wait()
 void Task_Wait_m6057 (Task_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>)
 Task_t390 * Task_ContinueWith_m6058 (Task_t390 * __this, Action_1_t1021 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>,System.Threading.CancellationToken)
 Task_t390 * Task_ContinueWith_m6059 (Task_t390 * __this, Action_1_t1021 * ___continuation, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Threading.Tasks.Task[])
 Task_t390 * Task_WhenAll_m6060 (Object_t * __this/* static, unused */, TaskU5BU5D_t1072* ___tasks, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>)
 Task_t390 * Task_WhenAll_m6061 (Object_t * __this/* static, unused */, Object_t* ___tasks, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::WhenAny(System.Threading.Tasks.Task[])
 Task_1_t1246 * Task_WhenAny_m6062 (Object_t * __this/* static, unused */, TaskU5BU5D_t1072* ___tasks, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::WhenAny(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>)
 Task_1_t1246 * Task_WhenAny_m6063 (Object_t * __this/* static, unused */, Object_t* ___tasks, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
 Task_t390 * Task_Run_m6064 (Object_t * __this/* static, unused */, Action_t1220 * ___toRun, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.TimeSpan)
 Task_t390 * Task_Delay_m6065 (Object_t * __this/* static, unused */, TimeSpan_t1247  ___timespan, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task::.cctor()
 void Task__cctor_m6066 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Tasks.Task::<.cctor>b__22()
 int32_t Task_U3C_cctorU3Eb__22_m6067 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task::<.cctor>b__23(System.Action)
 void Task_U3C_cctorU3Eb__23_m6068 (Object_t * __this/* static, unused */, Action_t1220 * ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
