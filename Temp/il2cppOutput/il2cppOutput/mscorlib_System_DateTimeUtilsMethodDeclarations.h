#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DateTimeUtils
struct DateTimeUtils_t3691;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t531;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t954;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_5.h"

// System.Int32 System.DateTimeUtils::CountRepeat(System.String,System.Int32,System.Char)
 int32_t DateTimeUtils_CountRepeat_m14353 (Object_t * __this/* static, unused */, String_t* ___fmt, int32_t ___p, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeUtils::ZeroPad(System.Text.StringBuilder,System.Int32,System.Int32)
 void DateTimeUtils_ZeroPad_m14354 (Object_t * __this/* static, unused */, StringBuilder_t531 * ___output, int32_t ___digits, int32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeUtils::ParseQuotedString(System.String,System.Int32,System.Text.StringBuilder)
 int32_t DateTimeUtils_ParseQuotedString_m14355 (Object_t * __this/* static, unused */, String_t* ___fmt, int32_t ___pos, StringBuilder_t531 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeUtils::GetStandardPattern(System.Char,System.Globalization.DateTimeFormatInfo,System.Boolean&,System.Boolean&)
 String_t* DateTimeUtils_GetStandardPattern_m14356 (Object_t * __this/* static, unused */, uint16_t ___format, DateTimeFormatInfo_t954 * ___dfi, bool* ___useutc, bool* ___use_invariant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeUtils::GetStandardPattern(System.Char,System.Globalization.DateTimeFormatInfo,System.Boolean&,System.Boolean&,System.Boolean)
 String_t* DateTimeUtils_GetStandardPattern_m14357 (Object_t * __this/* static, unused */, uint16_t ___format, DateTimeFormatInfo_t954 * ___dfi, bool* ___useutc, bool* ___use_invariant, bool ___date_time_offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeUtils::ToString(System.DateTime,System.String,System.Globalization.DateTimeFormatInfo)
 String_t* DateTimeUtils_ToString_m14358 (Object_t * __this/* static, unused */, DateTime_t126  ___dt, String_t* ___format, DateTimeFormatInfo_t954 * ___dfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeUtils::ToString(System.DateTime,System.Nullable`1<System.TimeSpan>,System.String,System.Globalization.DateTimeFormatInfo)
 String_t* DateTimeUtils_ToString_m14359 (Object_t * __this/* static, unused */, DateTime_t126  ___dt, Nullable_1_t3692  ___utc_offset, String_t* ___format, DateTimeFormatInfo_t954 * ___dfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
