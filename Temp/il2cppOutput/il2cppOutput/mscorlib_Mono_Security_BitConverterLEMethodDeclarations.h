#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.BitConverterLE
struct BitConverterLE_t3248;
// System.Byte[]
struct ByteU5BU5D_t21;

// System.Byte[] Mono.Security.BitConverterLE::GetUShortBytes(System.Byte*)
 ByteU5BU5D_t21* BitConverterLE_GetUShortBytes_m11478 (Object_t * __this/* static, unused */, uint8_t* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetUIntBytes(System.Byte*)
 ByteU5BU5D_t21* BitConverterLE_GetUIntBytes_m11479 (Object_t * __this/* static, unused */, uint8_t* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetBytes(System.Int16)
 ByteU5BU5D_t21* BitConverterLE_GetBytes_m11480 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetBytes(System.Int32)
 ByteU5BU5D_t21* BitConverterLE_GetBytes_m11481 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::UShortFromBytes(System.Byte*,System.Byte[],System.Int32)
 void BitConverterLE_UShortFromBytes_m11482 (Object_t * __this/* static, unused */, uint8_t* ___dst, ByteU5BU5D_t21* ___src, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::UIntFromBytes(System.Byte*,System.Byte[],System.Int32)
 void BitConverterLE_UIntFromBytes_m11483 (Object_t * __this/* static, unused */, uint8_t* ___dst, ByteU5BU5D_t21* ___src, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::ULongFromBytes(System.Byte*,System.Byte[],System.Int32)
 void BitConverterLE_ULongFromBytes_m11484 (Object_t * __this/* static, unused */, uint8_t* ___dst, ByteU5BU5D_t21* ___src, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.BitConverterLE::ToInt16(System.Byte[],System.Int32)
 int16_t BitConverterLE_ToInt16_m11485 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.BitConverterLE::ToInt32(System.Byte[],System.Int32)
 int32_t BitConverterLE_ToInt32_m11486 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Mono.Security.BitConverterLE::ToSingle(System.Byte[],System.Int32)
 float BitConverterLE_ToSingle_m11487 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Mono.Security.BitConverterLE::ToDouble(System.Byte[],System.Int32)
 double BitConverterLE_ToDouble_m11488 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
