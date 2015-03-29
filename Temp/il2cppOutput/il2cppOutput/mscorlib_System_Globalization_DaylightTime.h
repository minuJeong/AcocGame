#pragma once
#include <stdint.h>
// System.Object
#include "mscorlib_System_Object.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Globalization.DaylightTime
struct DaylightTime_t3322  : public Object_t
{
	// System.DateTime System.Globalization.DaylightTime::m_start
	DateTime_t126  ___m_start;
	// System.DateTime System.Globalization.DaylightTime::m_end
	DateTime_t126  ___m_end;
	// System.TimeSpan System.Globalization.DaylightTime::m_delta
	TimeSpan_t1247  ___m_delta;
};
