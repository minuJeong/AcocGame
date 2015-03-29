#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t450;
// System.IFormatProvider
struct IFormatProvider_t905;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Char>
struct IEnumerator_1_t3168;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.String[]
struct StringU5BU5D_t4;
// System.Globalization.CultureInfo
struct CultureInfo_t872;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Text.StringBuilder
struct StringBuilder_t531;
// System.Text.Encoding
struct Encoding_t1422;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"

// System.Void System.String::.ctor(System.Char*,System.Int32,System.Int32)
 void String__ctor_m10686 (String_t* __this, uint16_t* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char[],System.Int32,System.Int32)
 void String__ctor_m10687 (String_t* __this, CharU5BU5D_t450* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char[])
 void String__ctor_m9925 (String_t* __this, CharU5BU5D_t450* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char,System.Int32)
 void String__ctor_m4362 (String_t* __this, uint16_t ___c, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.cctor()
 void String__cctor_m10688 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool String_System_IConvertible_ToBoolean_m10689 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.String::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t String_System_IConvertible_ToByte_m10690 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t String_System_IConvertible_ToChar_m10691 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.String::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t126  String_System_IConvertible_ToDateTime_m10692 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.String::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t881  String_System_IConvertible_ToDecimal_m10693 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.String::System.IConvertible.ToDouble(System.IFormatProvider)
 double String_System_IConvertible_ToDouble_m10694 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.String::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t String_System_IConvertible_ToInt16_m10695 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t String_System_IConvertible_ToInt32_m10696 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.String::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t String_System_IConvertible_ToInt64_m10697 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.String::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t String_System_IConvertible_ToSByte_m10698 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.String::System.IConvertible.ToSingle(System.IFormatProvider)
 float String_System_IConvertible_ToSingle_m10699 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.String::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * String_System_IConvertible_ToType_m10700 (String_t* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.String::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t String_System_IConvertible_ToUInt16_m10701 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.String::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t String_System_IConvertible_ToUInt32_m10702 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.String::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t String_System_IConvertible_ToUInt64_m10703 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Char> System.String::System.Collections.Generic.IEnumerable<char>.GetEnumerator()
 Object_t* String_System_Collections_Generic_IEnumerableU3CcharU3E_GetEnumerator_m10704 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.String::System.Collections.IEnumerable.GetEnumerator()
 Object_t * String_System_Collections_IEnumerable_GetEnumerator_m10705 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String,System.String)
 bool String_Equals_m10706 (Object_t * __this/* static, unused */, String_t* ___a, String_t* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.Object)
 bool String_Equals_m10707 (String_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
 bool String_Equals_m407 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
 uint16_t String_get_Chars_m2249 (String_t* __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CopyTo(System.Int32,System.Char[],System.Int32,System.Int32)
 void String_CopyTo_m10708 (String_t* __this, int32_t ___sourceIndex, CharU5BU5D_t450* ___destination, int32_t ___destinationIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
 CharU5BU5D_t450* String_ToCharArray_m4749 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray(System.Int32,System.Int32)
 CharU5BU5D_t450* String_ToCharArray_m10709 (String_t* __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
 StringU5BU5D_t4* String_Split_m2251 (String_t* __this, CharU5BU5D_t450* ___separator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[],System.Int32)
 StringU5BU5D_t4* String_Split_m2246 (String_t* __this, CharU5BU5D_t450* ___separator, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
 String_t* String_Substring_m2197 (String_t* __this, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
 String_t* String_Substring_m606 (String_t* __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::SubstringUnchecked(System.Int32,System.Int32)
 String_t* String_SubstringUnchecked_m10710 (String_t* __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim()
 String_t* String_Trim_m2555 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim(System.Char[])
 String_t* String_Trim_m9099 (String_t* __this, CharU5BU5D_t450* ___trimChars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimStart(System.Char[])
 String_t* String_TrimStart_m9976 (String_t* __this, CharU5BU5D_t450* ___trimChars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimEnd(System.Char[])
 String_t* String_TrimEnd_m10711 (String_t* __this, CharU5BU5D_t450* ___trimChars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::FindNotWhiteSpace(System.Int32,System.Int32,System.Int32)
 int32_t String_FindNotWhiteSpace_m10712 (String_t* __this, int32_t ___pos, int32_t ___target, int32_t ___change, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::FindNotInTable(System.Int32,System.Int32,System.Int32,System.Char[])
 int32_t String_FindNotInTable_m10713 (String_t* __this, int32_t ___pos, int32_t ___target, int32_t ___change, CharU5BU5D_t450* ___table, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String)
 int32_t String_Compare_m10714 (Object_t * __this/* static, unused */, String_t* ___strA, String_t* ___strB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
 int32_t String_Compare_m10715 (Object_t * __this/* static, unused */, String_t* ___strA, String_t* ___strB, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
 int32_t String_Compare_m10716 (Object_t * __this/* static, unused */, String_t* ___strA, String_t* ___strB, bool ___ignoreCase, CultureInfo_t872 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean,System.Globalization.CultureInfo)
 int32_t String_Compare_m10717 (Object_t * __this/* static, unused */, String_t* ___strA, int32_t ___indexA, String_t* ___strB, int32_t ___indexB, int32_t ___length, bool ___ignoreCase, CultureInfo_t872 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
 int32_t String_Compare_m10718 (Object_t * __this/* static, unused */, String_t* ___strA, String_t* ___strB, int32_t ___comparisonType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String,System.StringComparison)
 bool String_Equals_m2377 (String_t* __this, String_t* ___value, int32_t ___comparisonType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareTo(System.Object)
 int32_t String_CompareTo_m10719 (String_t* __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareTo(System.String)
 int32_t String_CompareTo_m10720 (String_t* __this, String_t* ___strB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
 int32_t String_CompareOrdinal_m9970 (Object_t * __this/* static, unused */, String_t* ___strA, int32_t ___indexA, String_t* ___strB, int32_t ___indexB, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinalUnchecked(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
 int32_t String_CompareOrdinalUnchecked_m10721 (Object_t * __this/* static, unused */, String_t* ___strA, int32_t ___indexA, int32_t ___lenA, String_t* ___strB, int32_t ___indexB, int32_t ___lenB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinalCaseInsensitiveUnchecked(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
 int32_t String_CompareOrdinalCaseInsensitiveUnchecked_m10722 (Object_t * __this/* static, unused */, String_t* ___strA, int32_t ___indexA, int32_t ___lenA, String_t* ___strB, int32_t ___indexB, int32_t ___lenB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::EndsWith(System.String)
 bool String_EndsWith_m9154 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[])
 int32_t String_IndexOfAny_m9969 (String_t* __this, CharU5BU5D_t450* ___anyOf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32)
 int32_t String_IndexOfAny_m4356 (String_t* __this, CharU5BU5D_t450* ___anyOf, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAnyUnchecked(System.Char[],System.Int32,System.Int32)
 int32_t String_IndexOfAnyUnchecked_m10723 (String_t* __this, CharU5BU5D_t450* ___anyOf, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
 int32_t String_IndexOf_m9097 (String_t* __this, String_t* ___value, int32_t ___comparisonType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.Int32,System.StringComparison)
 int32_t String_IndexOf_m10724 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___comparisonType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinal(System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
 int32_t String_IndexOfOrdinal_m10725 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinalUnchecked(System.String,System.Int32,System.Int32)
 int32_t String_IndexOfOrdinalUnchecked_m10726 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinalIgnoreCaseUnchecked(System.String,System.Int32,System.Int32)
 int32_t String_IndexOfOrdinalIgnoreCaseUnchecked_m10727 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char)
 int32_t String_IndexOf_m2668 (String_t* __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
 int32_t String_IndexOf_m9098 (String_t* __this, uint16_t ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char,System.Int32,System.Int32)
 int32_t String_IndexOf_m9977 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfUnchecked(System.Char,System.Int32,System.Int32)
 int32_t String_IndexOfUnchecked_m10728 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String)
 int32_t String_IndexOf_m2196 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32)
 int32_t String_IndexOf_m9155 (String_t* __this, String_t* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.Int32)
 int32_t String_IndexOf_m10729 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAny(System.Char[])
 int32_t String_LastIndexOfAny_m10730 (String_t* __this, CharU5BU5D_t450* ___anyOf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAny(System.Char[],System.Int32)
 int32_t String_LastIndexOfAny_m4357 (String_t* __this, CharU5BU5D_t450* ___anyOf, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAnyUnchecked(System.Char[],System.Int32,System.Int32)
 int32_t String_LastIndexOfAnyUnchecked_m10731 (String_t* __this, CharU5BU5D_t450* ___anyOf, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char)
 int32_t String_LastIndexOf_m2660 (String_t* __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32)
 int32_t String_LastIndexOf_m9971 (String_t* __this, uint16_t ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32,System.Int32)
 int32_t String_LastIndexOf_m9978 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfUnchecked(System.Char,System.Int32,System.Int32)
 int32_t String_LastIndexOfUnchecked_m10732 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String)
 int32_t String_LastIndexOf_m9157 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String,System.Int32,System.Int32)
 int32_t String_LastIndexOf_m10733 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Contains(System.String)
 bool String_Contains_m390 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
 bool String_IsNullOrEmpty_m398 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::PadLeft(System.Int32,System.Char)
 String_t* String_PadLeft_m4752 (String_t* __this, int32_t ___totalWidth, uint16_t ___paddingChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::PadRight(System.Int32,System.Char)
 String_t* String_PadRight_m9056 (String_t* __this, int32_t ___totalWidth, uint16_t ___paddingChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String)
 bool String_StartsWith_m1998 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.Char,System.Char)
 String_t* String_Replace_m9156 (String_t* __this, uint16_t ___oldChar, uint16_t ___newChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.String,System.String)
 String_t* String_Replace_m6489 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ReplaceUnchecked(System.String,System.String)
 String_t* String_ReplaceUnchecked_m10734 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ReplaceFallback(System.String,System.String,System.Int32)
 String_t* String_ReplaceFallback_m10735 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, int32_t ___testedCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Remove(System.Int32,System.Int32)
 String_t* String_Remove_m4358 (String_t* __this, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower()
 String_t* String_ToLower_m607 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower(System.Globalization.CultureInfo)
 String_t* String_ToLower_m9973 (String_t* __this, CultureInfo_t872 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLowerInvariant()
 String_t* String_ToLowerInvariant_m10736 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToUpper()
 String_t* String_ToUpper_m7724 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToUpper(System.Globalization.CultureInfo)
 String_t* String_ToUpper_m10737 (String_t* __this, CultureInfo_t872 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToUpperInvariant()
 String_t* String_ToUpperInvariant_m10738 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToString()
 String_t* String_ToString_m1974 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToString(System.IFormatProvider)
 String_t* String_ToString_m10739 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
 String_t* String_Format_m2070 (Object_t * __this/* static, unused */, String_t* ___format, Object_t * ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
 String_t* String_Format_m392 (Object_t * __this/* static, unused */, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
 String_t* String_Format_m376 (Object_t * __this/* static, unused */, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
 String_t* String_Format_m2370 (Object_t * __this/* static, unused */, String_t* ___format, ObjectU5BU5D_t5* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
 String_t* String_Format_m10740 (Object_t * __this/* static, unused */, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t5* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.String::FormatHelper(System.Text.StringBuilder,System.IFormatProvider,System.String,System.Object[])
 StringBuilder_t531 * String_FormatHelper_m10741 (Object_t * __this/* static, unused */, StringBuilder_t531 * ___result, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t5* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Copy(System.String)
 String_t* String_Copy_m4701 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
 String_t* String_Concat_m380 (Object_t * __this/* static, unused */, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
 String_t* String_Concat_m2471 (Object_t * __this/* static, unused */, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
 String_t* String_Concat_m604 (Object_t * __this/* static, unused */, String_t* ___str0, String_t* ___str1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
 String_t* String_Concat_m417 (Object_t * __this/* static, unused */, String_t* ___str0, String_t* ___str1, String_t* ___str2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
 String_t* String_Concat_m457 (Object_t * __this/* static, unused */, String_t* ___str0, String_t* ___str1, String_t* ___str2, String_t* ___str3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
 String_t* String_Concat_m2222 (Object_t * __this/* static, unused */, ObjectU5BU5D_t5* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
 String_t* String_Concat_m2288 (Object_t * __this/* static, unused */, StringU5BU5D_t4* ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ConcatInternal(System.String[],System.Int32)
 String_t* String_ConcatInternal_m10742 (Object_t * __this/* static, unused */, StringU5BU5D_t4* ___values, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Insert(System.Int32,System.String)
 String_t* String_Insert_m4360 (String_t* __this, int32_t ___startIndex, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[])
 String_t* String_Join_m1989 (Object_t * __this/* static, unused */, String_t* ___separator, StringU5BU5D_t4* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[],System.Int32,System.Int32)
 String_t* String_Join_m10743 (Object_t * __this/* static, unused */, String_t* ___separator, StringU5BU5D_t4* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::JoinUnchecked(System.String,System.String[],System.Int32,System.Int32)
 String_t* String_JoinUnchecked_m10744 (Object_t * __this/* static, unused */, String_t* ___separator, StringU5BU5D_t4* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
 int32_t String_get_Length_m605 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::ParseFormatSpecifier(System.String,System.Int32&,System.Int32&,System.Int32&,System.Boolean&,System.String&)
 void String_ParseFormatSpecifier_m10745 (Object_t * __this/* static, unused */, String_t* ___str, int32_t* ___ptr, int32_t* ___n, int32_t* ___width, bool* ___left_align, String_t** ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::ParseDecimal(System.String,System.Int32&)
 int32_t String_ParseDecimal_m10746 (Object_t * __this/* static, unused */, String_t* ___str, int32_t* ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::InternalSetChar(System.Int32,System.Char)
 void String_InternalSetChar_m10747 (String_t* __this, int32_t ___idx, uint16_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::InternalSetLength(System.Int32)
 void String_InternalSetLength_m10748 (String_t* __this, int32_t ___newLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetHashCode()
 int32_t String_GetHashCode_m2670 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetCaseInsensitiveHashCode()
 int32_t String_GetCaseInsensitiveHashCode_m10749 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*)
 String_t* String_CreateString_m10750 (String_t* __this, int8_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*,System.Int32,System.Int32)
 String_t* String_CreateString_m10751 (String_t* __this, int8_t* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*,System.Int32,System.Int32,System.Text.Encoding)
 String_t* String_CreateString_m10752 (String_t* __this, int8_t* ___value, int32_t ___startIndex, int32_t ___length, Encoding_t1422 * ___enc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char*)
 String_t* String_CreateString_m10753 (String_t* __this, uint16_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char*,System.Int32,System.Int32)
 String_t* String_CreateString_m10754 (String_t* __this, uint16_t* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
 String_t* String_CreateString_m10755 (String_t* __this, CharU5BU5D_t450* ___val, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[])
 String_t* String_CreateString_m9926 (String_t* __this, CharU5BU5D_t450* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char,System.Int32)
 String_t* String_CreateString_m4394 (String_t* __this, uint16_t ___c, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy4(System.Byte*,System.Byte*,System.Int32)
 void String_memcpy4_m10756 (Object_t * __this/* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy2(System.Byte*,System.Byte*,System.Int32)
 void String_memcpy2_m10757 (Object_t * __this/* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy1(System.Byte*,System.Byte*,System.Int32)
 void String_memcpy1_m10758 (Object_t * __this/* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy(System.Byte*,System.Byte*,System.Int32)
 void String_memcpy_m10759 (Object_t * __this/* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.Char*,System.Char*,System.Int32)
 void String_CharCopy_m10760 (Object_t * __this/* static, unused */, uint16_t* ___dest, uint16_t* ___src, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopyReverse(System.Char*,System.Char*,System.Int32)
 void String_CharCopyReverse_m10761 (Object_t * __this/* static, unused */, uint16_t* ___dest, uint16_t* ___src, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.String,System.Int32,System.String,System.Int32,System.Int32)
 void String_CharCopy_m10762 (Object_t * __this/* static, unused */, String_t* ___target, int32_t ___targetIndex, String_t* ___source, int32_t ___sourceIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.String,System.Int32,System.Char[],System.Int32,System.Int32)
 void String_CharCopy_m10763 (Object_t * __this/* static, unused */, String_t* ___target, int32_t ___targetIndex, CharU5BU5D_t450* ___source, int32_t ___sourceIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopyReverse(System.String,System.Int32,System.String,System.Int32,System.Int32)
 void String_CharCopyReverse_m10764 (Object_t * __this/* static, unused */, String_t* ___target, int32_t ___targetIndex, String_t* ___source, int32_t ___sourceIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::InternalSplit(System.Char[],System.Int32,System.Int32)
 StringU5BU5D_t4* String_InternalSplit_m10765 (String_t* __this, CharU5BU5D_t450* ___separator, int32_t ___count, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::InternalAllocateStr(System.Int32)
 String_t* String_InternalAllocateStr_m10766 (Object_t * __this/* static, unused */, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
 bool String_op_Equality_m580 (Object_t * __this/* static, unused */, String_t* ___a, String_t* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
 bool String_op_Inequality_m637 (Object_t * __this/* static, unused */, String_t* ___a, String_t* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
