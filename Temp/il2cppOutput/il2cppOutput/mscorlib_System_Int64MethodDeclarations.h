#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Int64
struct Int64_t513;
// System.IFormatProvider
struct IFormatProvider_t905;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t107;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Boolean System.Int64::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool Int64_System_IConvertible_ToBoolean_m10468 (int64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Int64::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t Int64_System_IConvertible_ToByte_m10469 (int64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Int64::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t Int64_System_IConvertible_ToChar_m10470 (int64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Int64::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t126  Int64_System_IConvertible_ToDateTime_m10471 (int64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Int64::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t881  Int64_System_IConvertible_ToDecimal_m10472 (int64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Int64::System.IConvertible.ToDouble(System.IFormatProvider)
 double Int64_System_IConvertible_ToDouble_m10473 (int64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Int64::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t Int64_System_IConvertible_ToInt16_m10474 (int64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int64::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t Int64_System_IConvertible_ToInt32_m10475 (int64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Int64::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t Int64_System_IConvertible_ToInt64_m10476 (int64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Int64::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t Int64_System_IConvertible_ToSByte_m10477 (int64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Int64::System.IConvertible.ToSingle(System.IFormatProvider)
 float Int64_System_IConvertible_ToSingle_m10478 (int64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Int64::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * Int64_System_IConvertible_ToType_m10479 (int64_t* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Int64::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t Int64_System_IConvertible_ToUInt16_m10480 (int64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Int64::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t Int64_System_IConvertible_ToUInt32_m10481 (int64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Int64::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t Int64_System_IConvertible_ToUInt64_m10482 (int64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int64::CompareTo(System.Object)
 int32_t Int64_CompareTo_m10483 (int64_t* __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::Equals(System.Object)
 bool Int64_Equals_m10484 (int64_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int64::GetHashCode()
 int32_t Int64_GetHashCode_m10485 (int64_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int64::CompareTo(System.Int64)
 int32_t Int64_CompareTo_m10486 (int64_t* __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::Equals(System.Int64)
 bool Int64_Equals_m5155 (int64_t* __this, int64_t ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::Parse(System.String,System.Boolean,System.Int64&,System.Exception&)
 bool Int64_Parse_m10487 (Object_t * __this/* static, unused */, String_t* ___s, bool ___tryParse, int64_t* ___result, Exception_t107 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Int64::Parse(System.String,System.IFormatProvider)
 int64_t Int64_Parse_m4746 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.Int64&,System.Exception&)
 bool Int64_Parse_m10488 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___fp, bool ___tryParse, int64_t* ___result, Exception_t107 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Int64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
 int64_t Int64_Parse_m10489 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
 bool Int64_TryParse_m5283 (Object_t * __this/* static, unused */, String_t* ___s, int64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
 bool Int64_TryParse_m9865 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, int64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int64::ToString()
 String_t* Int64_ToString_m5160 (int64_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int64::ToString(System.IFormatProvider)
 String_t* Int64_ToString_m10490 (int64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int64::ToString(System.String)
 String_t* Int64_ToString_m10491 (int64_t* __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int64::ToString(System.String,System.IFormatProvider)
 String_t* Int64_ToString_m10492 (int64_t* __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
