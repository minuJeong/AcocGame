#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.Stopwatch
struct Stopwatch_t316;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Diagnostics.Stopwatch::.ctor()
 void Stopwatch__ctor_m2661 (Stopwatch_t316 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::.cctor()
 void Stopwatch__cctor_m9270 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
 int64_t Stopwatch_GetTimestamp_m9271 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
 TimeSpan_t1247  Stopwatch_get_Elapsed_m9272 (Stopwatch_t316 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
 int64_t Stopwatch_get_ElapsedMilliseconds_m2664 (Stopwatch_t316 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedTicks()
 int64_t Stopwatch_get_ElapsedTicks_m9273 (Stopwatch_t316 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Start()
 void Stopwatch_Start_m2662 (Stopwatch_t316 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Stop()
 void Stopwatch_Stop_m7751 (Stopwatch_t316 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
