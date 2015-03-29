#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.ASCIIEncoding
struct ASCIIEncoding_t3634;
// System.Char[]
struct CharU5BU5D_t450;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t3635;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t3636;
// System.Text.Decoder
struct Decoder_t3327;

// System.Void System.Text.ASCIIEncoding::.ctor()
 void ASCIIEncoding__ctor_m13648 (ASCIIEncoding_t3634 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t ASCIIEncoding_GetByteCount_m13649 (ASCIIEncoding_t3634 * __this, CharU5BU5D_t450* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
 int32_t ASCIIEncoding_GetByteCount_m13650 (ASCIIEncoding_t3634 * __this, String_t* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ASCIIEncoding_GetBytes_m13651 (ASCIIEncoding_t3634 * __this, CharU5BU5D_t450* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t21* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
 int32_t ASCIIEncoding_GetBytes_m13652 (ASCIIEncoding_t3634 * __this, CharU5BU5D_t450* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t21* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t3635 ** ___buffer, CharU5BU5D_t450** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t ASCIIEncoding_GetCharCount_m13653 (ASCIIEncoding_t3634 * __this, ByteU5BU5D_t21* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t ASCIIEncoding_GetChars_m13654 (ASCIIEncoding_t3634 * __this, ByteU5BU5D_t21* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t450* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
 int32_t ASCIIEncoding_GetChars_m13655 (ASCIIEncoding_t3634 * __this, ByteU5BU5D_t21* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t450* ___chars, int32_t ___charIndex, DecoderFallbackBuffer_t3636 ** ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
 int32_t ASCIIEncoding_GetMaxByteCount_m13656 (ASCIIEncoding_t3634 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
 int32_t ASCIIEncoding_GetMaxCharCount_m13657 (ASCIIEncoding_t3634 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* ASCIIEncoding_GetString_m13658 (ASCIIEncoding_t3634 * __this, ByteU5BU5D_t21* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t ASCIIEncoding_GetBytes_m13659 (ASCIIEncoding_t3634 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
 int32_t ASCIIEncoding_GetByteCount_m13660 (ASCIIEncoding_t3634 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
 Decoder_t3327 * ASCIIEncoding_GetDecoder_m13661 (ASCIIEncoding_t3634 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
