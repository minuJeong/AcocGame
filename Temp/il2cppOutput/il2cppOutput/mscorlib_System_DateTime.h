#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4;
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Object
struct Object_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTimeKind
#include "mscorlib_System_DateTimeKind.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DateTime
struct DateTime_t126 
{
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t1247  ___ticks;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind;
};
struct DateTime_t126_StaticFields{
	// System.Int32 System.DateTime::dp400
	int32_t ___dp400;
	// System.Int32 System.DateTime::dp100
	int32_t ___dp100;
	// System.Int32 System.DateTime::dp4
	int32_t ___dp4;
	// System.Int64 System.DateTime::w32file_epoch
	int64_t ___w32file_epoch;
	// System.Int64 System.DateTime::MAX_VALUE_TICKS
	int64_t ___MAX_VALUE_TICKS;
	// System.Int64 System.DateTime::UnixEpoch
	int64_t ___UnixEpoch;
	// System.Int64 System.DateTime::ticks18991230
	int64_t ___ticks18991230;
	// System.Double System.DateTime::OAMinValue
	double ___OAMinValue;
	// System.Double System.DateTime::OAMaxValue
	double ___OAMaxValue;
	// System.String System.DateTime::formatExceptionMessage
	String_t* ___formatExceptionMessage;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t126  ___MaxValue;
	// System.DateTime System.DateTime::MinValue
	DateTime_t126  ___MinValue;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t4* ___ParseTimeFormats;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t4* ___ParseYearDayMonthFormats;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t4* ___ParseYearMonthDayFormats;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t4* ___ParseDayMonthYearFormats;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t4* ___ParseMonthDayYearFormats;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t4* ___MonthDayShortFormats;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t4* ___DayMonthShortFormats;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t257* ___daysmonth;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t257* ___daysmonthleap;
	// System.Object System.DateTime::to_local_time_span_object
	Object_t * ___to_local_time_span_object;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now;
};
