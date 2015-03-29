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
 void Stopwatch__ctor_m2663 (Stopwatch_t316 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::.cctor()
 void Stopwatch__cctor_m9274 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
 int64_t Stopwatch_GetTimestamp_m9275 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
 TimeSpan_t1247  Stopwatch_get_Elapsed_m9276 (Stopwatch_t316 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
 int64_t Stopwatch_get_ElapsedMilliseconds_m2666 (Stopwatch_t316 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedTicks()
 int64_t Stopwatch_get_ElapsedTicks_m9277 (Stopwatch_t316 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Start()
 void Stopwatch_Start_m2664 (Stopwatch_t316 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Stop()
 void Stopwatch_Stop_m7753 (Stopwatch_t316 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
