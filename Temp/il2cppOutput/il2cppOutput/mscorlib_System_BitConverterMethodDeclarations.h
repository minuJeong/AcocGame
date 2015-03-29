#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.BitConverter
struct BitConverter_t2446;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.String
struct String_t;

// System.Void System.BitConverter::.cctor()
 void BitConverter__cctor_m14012 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::AmILittleEndian()
 bool BitConverter_AmILittleEndian_m14013 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::DoubleWordsAreSwapped()
 bool BitConverter_DoubleWordsAreSwapped_m14014 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
 int64_t BitConverter_DoubleToInt64Bits_m14015 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Byte*,System.Int32)
 ByteU5BU5D_t21* BitConverter_GetBytes_m14016 (Object_t * __this/* static, unused */, uint8_t* ___ptr, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
 ByteU5BU5D_t21* BitConverter_GetBytes_m14017 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Double)
 ByteU5BU5D_t21* BitConverter_GetBytes_m14018 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.BitConverter::PutBytes(System.Byte*,System.Byte[],System.Int32,System.Int32)
 void BitConverter_PutBytes_m14019 (Object_t * __this/* static, unused */, uint8_t* ___dst, ByteU5BU5D_t21* ___src, int32_t ___start_index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
 int64_t BitConverter_ToInt64_m7864 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.BitConverter::ToUInt16(System.Byte[],System.Int32)
 uint16_t BitConverter_ToUInt16_m14020 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.BitConverter::ToUInt32(System.Byte[],System.Int32)
 uint32_t BitConverter_ToUInt32_m14021 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.BitConverter::ToUInt64(System.Byte[],System.Int32)
 uint64_t BitConverter_ToUInt64_m14022 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
 float BitConverter_ToSingle_m7865 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.BitConverter::ToDouble(System.Byte[],System.Int32)
 double BitConverter_ToDouble_m7866 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[])
 String_t* BitConverter_ToString_m7880 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[],System.Int32,System.Int32)
 String_t* BitConverter_ToString_m14023 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
