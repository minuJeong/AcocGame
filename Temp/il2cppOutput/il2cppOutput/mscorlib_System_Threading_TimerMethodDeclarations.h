#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Timer
struct Timer_t2251;
// System.Threading.TimerCallback
struct TimerCallback_t2250;
// System.Object
struct Object_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Threading.Timer::.ctor(System.Threading.TimerCallback)
 void Timer__ctor_m7018 (Timer_t2251 * __this, TimerCallback_t2250 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::.cctor()
 void Timer__cctor_m13956 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Init(System.Threading.TimerCallback,System.Object,System.Int64,System.Int64)
 void Timer_Init_m13957 (Timer_t2251 * __this, TimerCallback_t2250 * ___callback, Object_t * ___state, int64_t ___dueTime, int64_t ___period, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.TimeSpan,System.TimeSpan)
 bool Timer_Change_m7020 (Timer_t2251 * __this, TimeSpan_t1247  ___dueTime, TimeSpan_t1247  ___period, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Dispose()
 void Timer_Dispose_m13958 (Timer_t2251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.Int64,System.Int64,System.Boolean)
 bool Timer_Change_m13959 (Timer_t2251 * __this, int64_t ___dueTime, int64_t ___period, bool ___first, MethodInfo* method) IL2CPP_METHOD_ATTR;
