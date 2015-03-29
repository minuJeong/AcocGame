#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t954;
// System.Globalization.Calendar
struct Calendar_t3313;
// System.Int32[]
struct Int32U5BU5D_t257;
// System.String[] modreq(System.Runtime.CompilerServices.IsVolatile)
struct StringU5BU5D_t4;
// System.Object
#include "mscorlib_System_Object.h"
// System.Globalization.DateTimeFormatFlags
#include "mscorlib_System_Globalization_DateTimeFormatFlags.h"
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t954  : public Object_t
{
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isReadOnly
	bool ___m_isReadOnly;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern;
	// System.String System.Globalization.DateTimeFormatInfo::_RFC1123Pattern
	String_t* ____RFC1123Pattern;
	// System.String System.Globalization.DateTimeFormatInfo::_SortableDateTimePattern
	String_t* ____SortableDateTimePattern;
	// System.String System.Globalization.DateTimeFormatInfo::_UniversalSortableDateTimePattern
	String_t* ____UniversalSortableDateTimePattern;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_t3313 * ___calendar;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_t4* ___abbreviatedDayNames;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_t4* ___dayNames;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_t4* ___monthNames;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_t4* ___abbreviatedMonthNames;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_t4* ___allShortDatePatterns;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_t4* ___allLongDatePatterns;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_t4* ___allShortTimePatterns;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_t4* ___allLongTimePatterns;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthDayPatterns
	StringU5BU5D_t4* ___monthDayPatterns;
	// System.String[] System.Globalization.DateTimeFormatInfo::yearMonthPatterns
	StringU5BU5D_t4* ___yearMonthPatterns;
	// System.String[] System.Globalization.DateTimeFormatInfo::shortDayNames
	StringU5BU5D_t4* ___shortDayNames;
	// System.Int32 System.Globalization.DateTimeFormatInfo::nDataItem
	int32_t ___nDataItem;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_useUserOverride
	bool ___m_useUserOverride;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isDefaultCalendar
	bool ___m_isDefaultCalendar;
	// System.Int32 System.Globalization.DateTimeFormatInfo::CultureID
	int32_t ___CultureID;
	// System.Boolean System.Globalization.DateTimeFormatInfo::bUseCalendarInfo
	bool ___bUseCalendarInfo;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_t4* ___m_eraNames;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_t4* ___m_abbrevEraNames;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_t4* ___m_abbrevEnglishEraNames;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_dateWords
	StringU5BU5D_t4* ___m_dateWords;
	// System.Int32[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	Int32U5BU5D_t257* ___optionalCalendars;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_t4* ___m_superShortDayNames;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_t4* ___genitiveMonthNames;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_t4* ___m_genitiveAbbreviatedMonthNames;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_t4* ___leapYearMonthNames;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags;
	// System.String System.Globalization.DateTimeFormatInfo::m_name
	String_t* ___m_name;
	// System.String[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::all_date_time_patterns
	StringU5BU5D_t4* ___all_date_time_patterns;
};
struct DateTimeFormatInfo_t954_StaticFields{
	// System.String System.Globalization.DateTimeFormatInfo::_RoundtripPattern
	String_t* ____RoundtripPattern;
	// System.String System.Globalization.DateTimeFormatInfo::MSG_READONLY
	String_t* ___MSG_READONLY;
	// System.String System.Globalization.DateTimeFormatInfo::MSG_ARRAYSIZE_MONTH
	String_t* ___MSG_ARRAYSIZE_MONTH;
	// System.String System.Globalization.DateTimeFormatInfo::MSG_ARRAYSIZE_DAY
	String_t* ___MSG_ARRAYSIZE_DAY;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_ABBREVIATED_DAY_NAMES
	StringU5BU5D_t4* ___INVARIANT_ABBREVIATED_DAY_NAMES;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_DAY_NAMES
	StringU5BU5D_t4* ___INVARIANT_DAY_NAMES;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_ABBREVIATED_MONTH_NAMES
	StringU5BU5D_t4* ___INVARIANT_ABBREVIATED_MONTH_NAMES;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_MONTH_NAMES
	StringU5BU5D_t4* ___INVARIANT_MONTH_NAMES;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_SHORT_DAY_NAMES
	StringU5BU5D_t4* ___INVARIANT_SHORT_DAY_NAMES;
	// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::theInvariantDateTimeFormatInfo
	DateTimeFormatInfo_t954 * ___theInvariantDateTimeFormatInfo;
};
