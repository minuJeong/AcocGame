﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Boolean
struct Boolean_t64;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t905;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"

// System.Void System.Boolean::.cctor()
 void Boolean__cctor_m10901 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Boolean::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * Boolean_System_IConvertible_ToType_m10902 (bool* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool Boolean_System_IConvertible_ToBoolean_m10903 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Boolean::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t Boolean_System_IConvertible_ToByte_m10904 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Boolean::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t Boolean_System_IConvertible_ToChar_m10905 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Boolean::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t126  Boolean_System_IConvertible_ToDateTime_m10906 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Boolean::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t881  Boolean_System_IConvertible_ToDecimal_m10907 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Boolean::System.IConvertible.ToDouble(System.IFormatProvider)
 double Boolean_System_IConvertible_ToDouble_m10908 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Boolean::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t Boolean_System_IConvertible_ToInt16_m10909 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t Boolean_System_IConvertible_ToInt32_m10910 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Boolean::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t Boolean_System_IConvertible_ToInt64_m10911 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Boolean::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t Boolean_System_IConvertible_ToSByte_m10912 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Boolean::System.IConvertible.ToSingle(System.IFormatProvider)
 float Boolean_System_IConvertible_ToSingle_m10913 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Boolean::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t Boolean_System_IConvertible_ToUInt16_m10914 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Boolean::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t Boolean_System_IConvertible_ToUInt32_m10915 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Boolean::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t Boolean_System_IConvertible_ToUInt64_m10916 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::CompareTo(System.Object)
 int32_t Boolean_CompareTo_m10917 (bool* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::Equals(System.Object)
 bool Boolean_Equals_m10918 (bool* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::CompareTo(System.Boolean)
 int32_t Boolean_CompareTo_m10919 (bool* __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::Equals(System.Boolean)
 bool Boolean_Equals_m5159 (bool* __this, bool ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::GetHashCode()
 int32_t Boolean_GetHashCode_m10920 (bool* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::Parse(System.String)
 bool Boolean_Parse_m10921 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Boolean::ToString()
 String_t* Boolean_ToString_m1967 (bool* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Boolean::GetTypeCode()
 int32_t Boolean_GetTypeCode_m10922 (bool* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Boolean::ToString(System.IFormatProvider)
 String_t* Boolean_ToString_m10923 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
