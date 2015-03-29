#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Timer/Scheduler
struct Scheduler_t3671;
// System.Threading.Timer
struct Timer_t2251;
// System.Collections.ArrayList
struct ArrayList_t94;

// System.Void System.Threading.Timer/Scheduler::.ctor()
 void Scheduler__ctor_m13950 (Scheduler_t3671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::.cctor()
 void Scheduler__cctor_m13951 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::get_Instance()
 Scheduler_t3671 * Scheduler_get_Instance_m13952 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Remove(System.Threading.Timer)
 void Scheduler_Remove_m13953 (Scheduler_t3671 * __this, Timer_t2251 * ___timer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Change(System.Threading.Timer,System.Int64)
 void Scheduler_Change_m13954 (Scheduler_t3671 * __this, Timer_t2251 * ___timer, int64_t ___new_next_run, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Add(System.Threading.Timer)
 void Scheduler_Add_m13955 (Scheduler_t3671 * __this, Timer_t2251 * ___timer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Timer/Scheduler::InternalRemove(System.Threading.Timer)
 int32_t Scheduler_InternalRemove_m13956 (Scheduler_t3671 * __this, Timer_t2251 * ___timer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::SchedulerThread()
 void Scheduler_SchedulerThread_m13957 (Scheduler_t3671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::ShrinkIfNeeded(System.Collections.ArrayList,System.Int32)
 void Scheduler_ShrinkIfNeeded_m13958 (Scheduler_t3671 * __this, ArrayList_t94 * ___list, int32_t ___initial, MethodInfo* method) IL2CPP_METHOD_ATTR;
