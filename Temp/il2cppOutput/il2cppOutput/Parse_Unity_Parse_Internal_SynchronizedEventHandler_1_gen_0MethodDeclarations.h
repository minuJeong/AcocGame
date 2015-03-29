#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.SynchronizedEventHandler`1<System.Object>
struct SynchronizedEventHandler_1_t6498;
// System.Delegate
struct Delegate_t793;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Object
struct Object_t;

// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Add(System.Delegate)
 void SynchronizedEventHandler_1_Add_m33406_gshared (SynchronizedEventHandler_1_t6498 * __this, Delegate_t793 * ___del, MethodInfo* method);
#define SynchronizedEventHandler_1_Add_m33406(__this, ___del, method) (void)SynchronizedEventHandler_1_Add_m33406_gshared((SynchronizedEventHandler_1_t6498 *)__this, (Delegate_t793 *)___del, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Remove(System.Delegate)
 void SynchronizedEventHandler_1_Remove_m33407_gshared (SynchronizedEventHandler_1_t6498 * __this, Delegate_t793 * ___del, MethodInfo* method);
#define SynchronizedEventHandler_1_Remove_m33407(__this, ___del, method) (void)SynchronizedEventHandler_1_Remove_m33407_gshared((SynchronizedEventHandler_1_t6498 *)__this, (Delegate_t793 *)___del, method)
// System.Threading.Tasks.Task Parse.Internal.SynchronizedEventHandler`1<System.Object>::Invoke(System.Object,T)
 Task_t390 * SynchronizedEventHandler_1_Invoke_m33408_gshared (SynchronizedEventHandler_1_t6498 * __this, Object_t * ___sender, Object_t * ___args, MethodInfo* method);
#define SynchronizedEventHandler_1_Invoke_m33408(__this, ___sender, ___args, method) (Task_t390 *)SynchronizedEventHandler_1_Invoke_m33408_gshared((SynchronizedEventHandler_1_t6498 *)__this, (Object_t *)___sender, (Object_t *)___args, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::.ctor()
 void SynchronizedEventHandler_1__ctor_m33409_gshared (SynchronizedEventHandler_1_t6498 * __this, MethodInfo* method);
#define SynchronizedEventHandler_1__ctor_m33409(__this, method) (void)SynchronizedEventHandler_1__ctor_m33409_gshared((SynchronizedEventHandler_1_t6498 *)__this, method)
