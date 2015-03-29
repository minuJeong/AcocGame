#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UnicodeEncoding
struct UnicodeEncoding_t3659;
// System.Char[]
struct CharU5BU5D_t450;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Text.Decoder
struct Decoder_t3327;
// System.Object
struct Object_t;

// System.Void System.Text.UnicodeEncoding::.ctor()
 void UnicodeEncoding__ctor_m13860 (UnicodeEncoding_t3659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean)
 void UnicodeEncoding__ctor_m13861 (UnicodeEncoding_t3659 * __this, bool ___bigEndian, bool ___byteOrderMark, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
 void UnicodeEncoding__ctor_m13862 (UnicodeEncoding_t3659 * __this, bool ___bigEndian, bool ___byteOrderMark, bool ___throwOnInvalidBytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t UnicodeEncoding_GetByteCount_m13863 (UnicodeEncoding_t3659 * __this, CharU5BU5D_t450* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.String)
 int32_t UnicodeEncoding_GetByteCount_m13864 (UnicodeEncoding_t3659 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.Char*,System.Int32)
 int32_t UnicodeEncoding_GetByteCount_m13865 (UnicodeEncoding_t3659 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t UnicodeEncoding_GetBytes_m13866 (UnicodeEncoding_t3659 * __this, CharU5BU5D_t450* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t21* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t UnicodeEncoding_GetBytes_m13867 (UnicodeEncoding_t3659 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytesInternal(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t UnicodeEncoding_GetBytesInternal_m13868 (UnicodeEncoding_t3659 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t UnicodeEncoding_GetCharCount_m13869 (UnicodeEncoding_t3659 * __this, ByteU5BU5D_t21* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t UnicodeEncoding_GetChars_m13870 (UnicodeEncoding_t3659 * __this, ByteU5BU5D_t21* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t450* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UnicodeEncoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* UnicodeEncoding_GetString_m13871 (UnicodeEncoding_t3659 * __this, ByteU5BU5D_t21* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetCharsInternal(System.Byte*,System.Int32,System.Char*,System.Int32)
 int32_t UnicodeEncoding_GetCharsInternal_m13872 (UnicodeEncoding_t3659 * __this, uint8_t* ___bytes, int32_t ___byteCount, uint16_t* ___chars, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetMaxByteCount(System.Int32)
 int32_t UnicodeEncoding_GetMaxByteCount_m13873 (UnicodeEncoding_t3659 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetMaxCharCount(System.Int32)
 int32_t UnicodeEncoding_GetMaxCharCount_m13874 (UnicodeEncoding_t3659 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UnicodeEncoding::GetDecoder()
 Decoder_t3327 * UnicodeEncoding_GetDecoder_m13875 (UnicodeEncoding_t3659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UnicodeEncoding::GetPreamble()
 ByteU5BU5D_t21* UnicodeEncoding_GetPreamble_m13876 (UnicodeEncoding_t3659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UnicodeEncoding::Equals(System.Object)
 bool UnicodeEncoding_Equals_m13877 (UnicodeEncoding_t3659 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetHashCode()
 int32_t UnicodeEncoding_GetHashCode_m13878 (UnicodeEncoding_t3659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::CopyChars(System.Byte*,System.Byte*,System.Int32,System.Boolean)
 void UnicodeEncoding_CopyChars_m13879 (Object_t * __this/* static, unused */, uint8_t* ___src, uint8_t* ___dest, int32_t ___count, bool ___bigEndian, MethodInfo* method) IL2CPP_METHOD_ATTR;
