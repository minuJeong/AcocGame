#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t954;
// System.String[]
struct StringU5BU5D_t4;
// System.String
struct String_t;
// System.Globalization.Calendar
struct Calendar_t3313;
// System.IFormatProvider
struct IFormatProvider_t905;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"

// System.Void System.Globalization.DateTimeFormatInfo::.ctor(System.Boolean)
 void DateTimeFormatInfo__ctor_m11899 (DateTimeFormatInfo_t954 * __this, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.ctor()
 void DateTimeFormatInfo__ctor_m11900 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.cctor()
 void DateTimeFormatInfo__cctor_m11901 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::GetInstance(System.IFormatProvider)
 DateTimeFormatInfo_t954 * DateTimeFormatInfo_GetInstance_m11902 (Object_t * __this/* static, unused */, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.DateTimeFormatInfo::get_IsReadOnly()
 bool DateTimeFormatInfo_get_IsReadOnly_m11903 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::ReadOnly(System.Globalization.DateTimeFormatInfo)
 DateTimeFormatInfo_t954 * DateTimeFormatInfo_ReadOnly_m11904 (Object_t * __this/* static, unused */, DateTimeFormatInfo_t954 * ___dtfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::Clone()
 Object_t * DateTimeFormatInfo_Clone_m11905 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::GetFormat(System.Type)
 Object_t * DateTimeFormatInfo_GetFormat_m11906 (DateTimeFormatInfo_t954 * __this, Type_t * ___formatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedMonthName(System.Int32)
 String_t* DateTimeFormatInfo_GetAbbreviatedMonthName_m11907 (DateTimeFormatInfo_t954 * __this, int32_t ___month, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetEraName(System.Int32)
 String_t* DateTimeFormatInfo_GetEraName_m11908 (DateTimeFormatInfo_t954 * __this, int32_t ___era, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetMonthName(System.Int32)
 String_t* DateTimeFormatInfo_GetMonthName_m11909 (DateTimeFormatInfo_t954 * __this, int32_t ___month, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedDayNames()
 StringU5BU5D_t4* DateTimeFormatInfo_get_RawAbbreviatedDayNames_m11910 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedMonthNames()
 StringU5BU5D_t4* DateTimeFormatInfo_get_RawAbbreviatedMonthNames_m11911 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawDayNames()
 StringU5BU5D_t4* DateTimeFormatInfo_get_RawDayNames_m11912 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawMonthNames()
 StringU5BU5D_t4* DateTimeFormatInfo_get_RawMonthNames_m11913 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_AMDesignator()
 String_t* DateTimeFormatInfo_get_AMDesignator_m11914 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_PMDesignator()
 String_t* DateTimeFormatInfo_get_PMDesignator_m11915 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_DateSeparator()
 String_t* DateTimeFormatInfo_get_DateSeparator_m11916 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_TimeSeparator()
 String_t* DateTimeFormatInfo_get_TimeSeparator_m11917 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongDatePattern()
 String_t* DateTimeFormatInfo_get_LongDatePattern_m11918 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortDatePattern()
 String_t* DateTimeFormatInfo_get_ShortDatePattern_m11919 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortTimePattern()
 String_t* DateTimeFormatInfo_get_ShortTimePattern_m11920 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongTimePattern()
 String_t* DateTimeFormatInfo_get_LongTimePattern_m11921 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_MonthDayPattern()
 String_t* DateTimeFormatInfo_get_MonthDayPattern_m11922 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_YearMonthPattern()
 String_t* DateTimeFormatInfo_get_YearMonthPattern_m11923 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_FullDateTimePattern()
 String_t* DateTimeFormatInfo_get_FullDateTimePattern_m11924 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_CurrentInfo()
 DateTimeFormatInfo_t954 * DateTimeFormatInfo_get_CurrentInfo_m11925 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
 DateTimeFormatInfo_t954 * DateTimeFormatInfo_get_InvariantInfo_m5188 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::get_Calendar()
 Calendar_t3313 * DateTimeFormatInfo_get_Calendar_m11926 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::set_Calendar(System.Globalization.Calendar)
 void DateTimeFormatInfo_set_Calendar_m11927 (DateTimeFormatInfo_t954 * __this, Calendar_t3313 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RFC1123Pattern()
 String_t* DateTimeFormatInfo_get_RFC1123Pattern_m11928 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RoundtripPattern()
 String_t* DateTimeFormatInfo_get_RoundtripPattern_m11929 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_SortableDateTimePattern()
 String_t* DateTimeFormatInfo_get_SortableDateTimePattern_m11930 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_UniversalSortableDateTimePattern()
 String_t* DateTimeFormatInfo_get_UniversalSortableDateTimePattern_m11931 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllDateTimePatternsInternal()
 StringU5BU5D_t4* DateTimeFormatInfo_GetAllDateTimePatternsInternal_m11932 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillAllDateTimePatterns()
 void DateTimeFormatInfo_FillAllDateTimePatterns_m11933 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllRawDateTimePatterns(System.Char)
 StringU5BU5D_t4* DateTimeFormatInfo_GetAllRawDateTimePatterns_m11934 (DateTimeFormatInfo_t954 * __this, uint16_t ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetDayName(System.DayOfWeek)
 String_t* DateTimeFormatInfo_GetDayName_m11935 (DateTimeFormatInfo_t954 * __this, int32_t ___dayofweek, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedDayName(System.DayOfWeek)
 String_t* DateTimeFormatInfo_GetAbbreviatedDayName_m11936 (DateTimeFormatInfo_t954 * __this, int32_t ___dayofweek, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillInvariantPatterns()
 void DateTimeFormatInfo_FillInvariantPatterns_m11937 (DateTimeFormatInfo_t954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::PopulateCombinedList(System.String[],System.String[])
 StringU5BU5D_t4* DateTimeFormatInfo_PopulateCombinedList_m11938 (DateTimeFormatInfo_t954 * __this, StringU5BU5D_t4* ___dates, StringU5BU5D_t4* ___times, MethodInfo* method) IL2CPP_METHOD_ATTR;
