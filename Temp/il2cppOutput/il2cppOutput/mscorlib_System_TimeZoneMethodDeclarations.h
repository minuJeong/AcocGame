#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeZone
struct TimeZone_t3738;
// System.Globalization.DaylightTime
struct DaylightTime_t3322;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.TimeZone::.ctor()
 void TimeZone__ctor_m14727 (TimeZone_t3738 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZone::.cctor()
 void TimeZone__cctor_m14728 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
 TimeZone_t3738 * TimeZone_get_CurrentTimeZone_m14729 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32)
// System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime)
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
 bool TimeZone_IsDaylightSavingTime_m14730 (TimeZone_t3738 * __this, DateTime_t126  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
 bool TimeZone_IsDaylightSavingTime_m14731 (Object_t * __this/* static, unused */, DateTime_t126  ___time, DaylightTime_t3322 * ___daylightTimes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
 DateTime_t126  TimeZone_ToLocalTime_m14732 (TimeZone_t3738 * __this, DateTime_t126  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
 DateTime_t126  TimeZone_ToUniversalTime_m14733 (TimeZone_t3738 * __this, DateTime_t126  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
 TimeSpan_t1247  TimeZone_GetLocalTimeDiff_m14734 (TimeZone_t3738 * __this, DateTime_t126  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
 TimeSpan_t1247  TimeZone_GetLocalTimeDiff_m14735 (TimeZone_t3738 * __this, DateTime_t126  ___time, TimeSpan_t1247  ___utc_offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
