#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Encoding
struct Encoding_t1422;
// System.Text.DecoderFallback
struct DecoderFallback_t3638;
// System.Text.EncoderFallback
struct EncoderFallback_t3645;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t450;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Text.Decoder
struct Decoder_t3328;
// System.Object[]
struct ObjectU5BU5D_t5;

// System.Void System.Text.Encoding::.ctor()
 void Encoding__ctor_m13730 (Encoding_t1422 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::.ctor(System.Int32)
 void Encoding__ctor_m13731 (Encoding_t1422 * __this, int32_t ___codePage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::.cctor()
 void Encoding__cctor_m13732 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::_(System.String)
 String_t* Encoding___m13733 (Object_t * __this/* static, unused */, String_t* ___arg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.Encoding::get_IsReadOnly()
 bool Encoding_get_IsReadOnly_m13734 (Encoding_t1422 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallback System.Text.Encoding::get_DecoderFallback()
 DecoderFallback_t3638 * Encoding_get_DecoderFallback_m13735 (Encoding_t1422 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::set_DecoderFallback(System.Text.DecoderFallback)
 void Encoding_set_DecoderFallback_m13736 (Encoding_t1422 * __this, DecoderFallback_t3638 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.EncoderFallback System.Text.Encoding::get_EncoderFallback()
 EncoderFallback_t3645 * Encoding_get_EncoderFallback_m13737 (Encoding_t1422 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::SetFallbackInternal(System.Text.EncoderFallback,System.Text.DecoderFallback)
 void Encoding_SetFallbackInternal_m13738 (Encoding_t1422 * __this, EncoderFallback_t3645 * ___e, DecoderFallback_t3638 * ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.Encoding::Equals(System.Object)
 bool Encoding_Equals_m13739 (Encoding_t1422 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
// System.Int32 System.Text.Encoding::GetByteCount(System.String)
 int32_t Encoding_GetByteCount_m13740 (Encoding_t1422 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char[])
 int32_t Encoding_GetByteCount_m13741 (Encoding_t1422 * __this, CharU5BU5D_t450* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
// System.Byte[] System.Text.Encoding::GetBytes(System.String)
 ByteU5BU5D_t21* Encoding_GetBytes_m6479 (Encoding_t1422 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32)
 ByteU5BU5D_t21* Encoding_GetBytes_m13742 (Encoding_t1422 * __this, CharU5BU5D_t450* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.Char[])
 ByteU5BU5D_t21* Encoding_GetBytes_m9978 (Encoding_t1422 * __this, CharU5BU5D_t450* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
// System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
// System.Char[] System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32)
 CharU5BU5D_t450* Encoding_GetChars_m9987 (Encoding_t1422 * __this, ByteU5BU5D_t21* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.Encoding::GetDecoder()
 Decoder_t3328 * Encoding_GetDecoder_m13743 (Encoding_t1422 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.Encoding::InvokeI18N(System.String,System.Object[])
 Object_t * Encoding_InvokeI18N_m13744 (Object_t * __this/* static, unused */, String_t* ___name, ObjectU5BU5D_t5* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.Int32)
 Encoding_t1422 * Encoding_GetEncoding_m13745 (Object_t * __this/* static, unused */, int32_t ___codepage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.String)
 Encoding_t1422 * Encoding_GetEncoding_m9104 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetHashCode()
 int32_t Encoding_GetHashCode_m13746 (Encoding_t1422 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetMaxByteCount(System.Int32)
// System.Int32 System.Text.Encoding::GetMaxCharCount(System.Int32)
// System.Byte[] System.Text.Encoding::GetPreamble()
 ByteU5BU5D_t21* Encoding_GetPreamble_m13747 (Encoding_t1422 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* Encoding_GetString_m7867 (Encoding_t1422 * __this, ByteU5BU5D_t21* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::GetString(System.Byte[])
 String_t* Encoding_GetString_m13748 (Encoding_t1422 * __this, ByteU5BU5D_t21* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::get_HeaderName()
 String_t* Encoding_get_HeaderName_m9106 (Encoding_t1422 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::get_WebName()
 String_t* Encoding_get_WebName_m9111 (Encoding_t1422 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
 Encoding_t1422 * Encoding_get_ASCII_m9099 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_BigEndianUnicode()
 Encoding_t1422 * Encoding_get_BigEndianUnicode_m13749 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::InternalCodePage(System.Int32&)
 String_t* Encoding_InternalCodePage_m13750 (Object_t * __this/* static, unused */, int32_t* ___code_page, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_Default()
 Encoding_t1422 * Encoding_get_Default_m13751 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ISOLatin1()
 Encoding_t1422 * Encoding_get_ISOLatin1_m13752 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF7()
 Encoding_t1422 * Encoding_get_UTF7_m13753 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
 Encoding_t1422 * Encoding_get_UTF8_m6478 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8Unmarked()
 Encoding_t1422 * Encoding_get_UTF8Unmarked_m13754 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8UnmarkedUnsafe()
 Encoding_t1422 * Encoding_get_UTF8UnmarkedUnsafe_m13755 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_Unicode()
 Encoding_t1422 * Encoding_get_Unicode_m13756 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF32()
 Encoding_t1422 * Encoding_get_UTF32_m13757 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_BigEndianUTF32()
 Encoding_t1422 * Encoding_get_BigEndianUTF32_m13758 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char*,System.Int32)
 int32_t Encoding_GetByteCount_m13759 (Encoding_t1422 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t Encoding_GetBytes_m13760 (Encoding_t1422 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
