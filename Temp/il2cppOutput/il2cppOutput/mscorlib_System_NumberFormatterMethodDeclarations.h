#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.NumberFormatter
struct NumberFormatter_t3729;
// System.Globalization.CultureInfo
struct CultureInfo_t872;
// System.Threading.Thread
struct Thread_t1419;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t870;
// System.IFormatProvider
struct IFormatProvider_t905;
// System.Text.StringBuilder
struct StringBuilder_t531;
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.NumberFormatter::.ctor(System.Threading.Thread)
 void NumberFormatter__ctor_m14555 (NumberFormatter_t3729 * __this, Thread_t1419 * ___current, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::.cctor()
 void NumberFormatter__cctor_m14556 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::GetFormatterTables(System.UInt64*&,System.Int32*&,System.Char*&,System.Char*&,System.Int64*&,System.Int32*&)
 void NumberFormatter_GetFormatterTables_m14557 (Object_t * __this/* static, unused */, uint64_t** ___MantissaBitsTable, int32_t** ___TensExponentTable, uint16_t** ___DigitLowerTable, uint16_t** ___DigitUpperTable, int64_t** ___TenPowersList, int32_t** ___DecHexDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.NumberFormatter::GetTenPowerOf(System.Int32)
 int64_t NumberFormatter_GetTenPowerOf_m14558 (Object_t * __this/* static, unused */, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32)
 void NumberFormatter_InitDecHexDigits_m14559 (NumberFormatter_t3729 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt64)
 void NumberFormatter_InitDecHexDigits_m14560 (NumberFormatter_t3729 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32,System.UInt64)
 void NumberFormatter_InitDecHexDigits_m14561 (NumberFormatter_t3729 * __this, uint32_t ___hi, uint64_t ___lo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::FastToDecHex(System.Int32)
 uint32_t NumberFormatter_FastToDecHex_m14562 (Object_t * __this/* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::ToDecHex(System.Int32)
 uint32_t NumberFormatter_ToDecHex_m14563 (Object_t * __this/* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::FastDecHexLen(System.Int32)
 int32_t NumberFormatter_FastDecHexLen_m14564 (Object_t * __this/* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen(System.UInt32)
 int32_t NumberFormatter_DecHexLen_m14565 (Object_t * __this/* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen()
 int32_t NumberFormatter_DecHexLen_m14566 (NumberFormatter_t3729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ScaleOrder(System.Int64)
 int32_t NumberFormatter_ScaleOrder_m14567 (Object_t * __this/* static, unused */, int64_t ___hi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::InitialFloatingPrecision()
 int32_t NumberFormatter_InitialFloatingPrecision_m14568 (NumberFormatter_t3729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ParsePrecision(System.String)
 int32_t NumberFormatter_ParsePrecision_m14569 (Object_t * __this/* static, unused */, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String)
 void NumberFormatter_Init_m14570 (NumberFormatter_t3729 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitHex(System.UInt64)
 void NumberFormatter_InitHex_m14571 (NumberFormatter_t3729 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int32,System.Int32)
 void NumberFormatter_Init_m14572 (NumberFormatter_t3729 * __this, String_t* ___format, int32_t ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt32,System.Int32)
 void NumberFormatter_Init_m14573 (NumberFormatter_t3729 * __this, String_t* ___format, uint32_t ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int64)
 void NumberFormatter_Init_m14574 (NumberFormatter_t3729 * __this, String_t* ___format, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt64)
 void NumberFormatter_Init_m14575 (NumberFormatter_t3729 * __this, String_t* ___format, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Double,System.Int32)
 void NumberFormatter_Init_m14576 (NumberFormatter_t3729 * __this, String_t* ___format, double ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Decimal)
 void NumberFormatter_Init_m14577 (NumberFormatter_t3729 * __this, String_t* ___format, Decimal_t881  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ResetCharBuf(System.Int32)
 void NumberFormatter_ResetCharBuf_m14578 (NumberFormatter_t3729 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Resize(System.Int32)
 void NumberFormatter_Resize_m14579 (NumberFormatter_t3729 * __this, int32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char)
 void NumberFormatter_Append_m14580 (NumberFormatter_t3729 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char,System.Int32)
 void NumberFormatter_Append_m14581 (NumberFormatter_t3729 * __this, uint16_t ___c, int32_t ___cnt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.String)
 void NumberFormatter_Append_m14582 (NumberFormatter_t3729 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.NumberFormatter::GetNumberFormatInstance(System.IFormatProvider)
 NumberFormatInfo_t870 * NumberFormatter_GetNumberFormatInstance_m14583 (NumberFormatter_t3729 * __this, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::set_CurrentCulture(System.Globalization.CultureInfo)
 void NumberFormatter_set_CurrentCulture_m14584 (NumberFormatter_t3729 * __this, CultureInfo_t872 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_IntegerDigits()
 int32_t NumberFormatter_get_IntegerDigits_m14585 (NumberFormatter_t3729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_DecimalDigits()
 int32_t NumberFormatter_get_DecimalDigits_m14586 (NumberFormatter_t3729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsFloatingSource()
 bool NumberFormatter_get_IsFloatingSource_m14587 (NumberFormatter_t3729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZero()
 bool NumberFormatter_get_IsZero_m14588 (NumberFormatter_t3729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZeroInteger()
 bool NumberFormatter_get_IsZeroInteger_m14589 (NumberFormatter_t3729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RoundPos(System.Int32)
 void NumberFormatter_RoundPos_m14590 (NumberFormatter_t3729 * __this, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundDecimal(System.Int32)
 bool NumberFormatter_RoundDecimal_m14591 (NumberFormatter_t3729 * __this, int32_t ___decimals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundBits(System.Int32)
 bool NumberFormatter_RoundBits_m14592 (NumberFormatter_t3729 * __this, int32_t ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RemoveTrailingZeros()
 void NumberFormatter_RemoveTrailingZeros_m14593 (NumberFormatter_t3729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AddOneToDecHex()
 void NumberFormatter_AddOneToDecHex_m14594 (NumberFormatter_t3729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::AddOneToDecHex(System.UInt32)
 uint32_t NumberFormatter_AddOneToDecHex_m14595 (Object_t * __this/* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros()
 int32_t NumberFormatter_CountTrailingZeros_m14596 (NumberFormatter_t3729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros(System.UInt32)
 int32_t NumberFormatter_CountTrailingZeros_m14597 (Object_t * __this/* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetInstance()
 NumberFormatter_t3729 * NumberFormatter_GetInstance_m14598 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Release()
 void NumberFormatter_Release_m14599 (NumberFormatter_t3729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::SetThreadCurrentCulture(System.Globalization.CultureInfo)
 void NumberFormatter_SetThreadCurrentCulture_m14600 (Object_t * __this/* static, unused */, CultureInfo_t872 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.SByte,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m14601 (Object_t * __this/* static, unused */, String_t* ___format, int8_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Byte,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m14602 (Object_t * __this/* static, unused */, String_t* ___format, uint8_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt16,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m14603 (Object_t * __this/* static, unused */, String_t* ___format, uint16_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int16,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m14604 (Object_t * __this/* static, unused */, String_t* ___format, int16_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt32,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m14605 (Object_t * __this/* static, unused */, String_t* ___format, uint32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int32,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m14606 (Object_t * __this/* static, unused */, String_t* ___format, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt64,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m14607 (Object_t * __this/* static, unused */, String_t* ___format, uint64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int64,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m14608 (Object_t * __this/* static, unused */, String_t* ___format, int64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Single,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m14609 (Object_t * __this/* static, unused */, String_t* ___format, float ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Double,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m14610 (Object_t * __this/* static, unused */, String_t* ___format, double ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Decimal,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m14611 (Object_t * __this/* static, unused */, String_t* ___format, Decimal_t881  ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt32,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m14612 (Object_t * __this/* static, unused */, uint32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int32,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m14613 (Object_t * __this/* static, unused */, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt64,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m14614 (Object_t * __this/* static, unused */, uint64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int64,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m14615 (Object_t * __this/* static, unused */, int64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Single,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m14616 (Object_t * __this/* static, unused */, float ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Double,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m14617 (Object_t * __this/* static, unused */, double ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FastIntegerToString(System.Int32,System.IFormatProvider)
 String_t* NumberFormatter_FastIntegerToString_m14618 (NumberFormatter_t3729 * __this, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::IntegerToString(System.String,System.IFormatProvider)
 String_t* NumberFormatter_IntegerToString_m14619 (NumberFormatter_t3729 * __this, String_t* ___format, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_NumberToString_m14620 (NumberFormatter_t3729 * __this, String_t* ___format, NumberFormatInfo_t870 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCurrency(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatCurrency_m14621 (NumberFormatter_t3729 * __this, int32_t ___precision, NumberFormatInfo_t870 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatDecimal(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatDecimal_m14622 (NumberFormatter_t3729 * __this, int32_t ___precision, NumberFormatInfo_t870 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatHexadecimal(System.Int32)
 String_t* NumberFormatter_FormatHexadecimal_m14623 (NumberFormatter_t3729 * __this, int32_t ___precision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatFixedPoint(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatFixedPoint_m14624 (NumberFormatter_t3729 * __this, int32_t ___precision, NumberFormatInfo_t870 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Double,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatRoundtrip_m14625 (NumberFormatter_t3729 * __this, double ___origval, NumberFormatInfo_t870 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Single,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatRoundtrip_m14626 (NumberFormatter_t3729 * __this, float ___origval, NumberFormatInfo_t870 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatGeneral(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatGeneral_m14627 (NumberFormatter_t3729 * __this, int32_t ___precision, NumberFormatInfo_t870 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatNumber(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatNumber_m14628 (NumberFormatter_t3729 * __this, int32_t ___precision, NumberFormatInfo_t870 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatPercent(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatPercent_m14629 (NumberFormatter_t3729 * __this, int32_t ___precision, NumberFormatInfo_t870 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatExponential_m14630 (NumberFormatter_t3729 * __this, int32_t ___precision, NumberFormatInfo_t870 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo,System.Int32)
 String_t* NumberFormatter_FormatExponential_m14631 (NumberFormatter_t3729 * __this, int32_t ___precision, NumberFormatInfo_t870 * ___nfi, int32_t ___expDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCustom(System.String,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatCustom_m14632 (NumberFormatter_t3729 * __this, String_t* ___format, NumberFormatInfo_t870 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ZeroTrimEnd(System.Text.StringBuilder,System.Boolean)
 void NumberFormatter_ZeroTrimEnd_m14633 (Object_t * __this/* static, unused */, StringBuilder_t531 * ___sb, bool ___canEmpty, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::IsZeroOnly(System.Text.StringBuilder)
 bool NumberFormatter_IsZeroOnly_m14634 (Object_t * __this/* static, unused */, StringBuilder_t531 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendNonNegativeNumber(System.Text.StringBuilder,System.Int32)
 void NumberFormatter_AppendNonNegativeNumber_m14635 (Object_t * __this/* static, unused */, StringBuilder_t531 * ___sb, int32_t ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32,System.Text.StringBuilder)
 void NumberFormatter_AppendIntegerString_m14636 (NumberFormatter_t3729 * __this, int32_t ___minLength, StringBuilder_t531 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32)
 void NumberFormatter_AppendIntegerString_m14637 (NumberFormatter_t3729 * __this, int32_t ___minLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32,System.Text.StringBuilder)
 void NumberFormatter_AppendDecimalString_m14638 (NumberFormatter_t3729 * __this, int32_t ___precision, StringBuilder_t531 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32)
 void NumberFormatter_AppendDecimalString_m14639 (NumberFormatter_t3729 * __this, int32_t ___precision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerStringWithGroupSeparator(System.Int32[],System.String)
 void NumberFormatter_AppendIntegerStringWithGroupSeparator_m14640 (NumberFormatter_t3729 * __this, Int32U5BU5D_t257* ___groups, String_t* ___groupSeparator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendExponent(System.Globalization.NumberFormatInfo,System.Int32,System.Int32)
 void NumberFormatter_AppendExponent_m14641 (NumberFormatter_t3729 * __this, NumberFormatInfo_t870 * ___nfi, int32_t ___exponent, int32_t ___minDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendOneDigit(System.Int32)
 void NumberFormatter_AppendOneDigit_m14642 (NumberFormatter_t3729 * __this, int32_t ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::FastAppendDigits(System.Int32,System.Boolean)
 void NumberFormatter_FastAppendDigits_m14643 (NumberFormatter_t3729 * __this, int32_t ___val, bool ___force, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32)
 void NumberFormatter_AppendDigits_m14644 (NumberFormatter_t3729 * __this, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32,System.Text.StringBuilder)
 void NumberFormatter_AppendDigits_m14645 (NumberFormatter_t3729 * __this, int32_t ___start, int32_t ___end, StringBuilder_t531 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Multiply10(System.Int32)
 void NumberFormatter_Multiply10_m14646 (NumberFormatter_t3729 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Divide10(System.Int32)
 void NumberFormatter_Divide10_m14647 (NumberFormatter_t3729 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetClone()
 NumberFormatter_t3729 * NumberFormatter_GetClone_m14648 (NumberFormatter_t3729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
