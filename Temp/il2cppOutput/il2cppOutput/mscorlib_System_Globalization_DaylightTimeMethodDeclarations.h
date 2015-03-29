#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.DaylightTime
struct DaylightTime_t3321;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Globalization.DaylightTime::.ctor(System.DateTime,System.DateTime,System.TimeSpan)
 void DaylightTime__ctor_m11939 (DaylightTime_t3321 * __this, DateTime_t126  ___start, DateTime_t126  ___end, TimeSpan_t1247  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_Start()
 DateTime_t126  DaylightTime_get_Start_m11940 (DaylightTime_t3321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_End()
 DateTime_t126  DaylightTime_get_End_m11941 (DaylightTime_t3321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Globalization.DaylightTime::get_Delta()
 TimeSpan_t1247  DaylightTime_get_Delta_m11942 (DaylightTime_t3321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
