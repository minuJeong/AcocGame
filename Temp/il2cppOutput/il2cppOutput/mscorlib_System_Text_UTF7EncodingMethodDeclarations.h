#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF7Encoding
struct UTF7Encoding_t3656;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t450;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Text.Decoder
struct Decoder_t3328;
// System.String
struct String_t;

// System.Void System.Text.UTF7Encoding::.ctor()
 void UTF7Encoding__ctor_m13812 (UTF7Encoding_t3656 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF7Encoding::.ctor(System.Boolean)
 void UTF7Encoding__ctor_m13813 (UTF7Encoding_t3656 * __this, bool ___allowOptionals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF7Encoding::.cctor()
 void UTF7Encoding__cctor_m13814 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetHashCode()
 int32_t UTF7Encoding_GetHashCode_m13815 (UTF7Encoding_t3656 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF7Encoding::Equals(System.Object)
 bool UTF7Encoding_Equals_m13816 (UTF7Encoding_t3656 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean,System.Boolean)
 int32_t UTF7Encoding_InternalGetByteCount_m13817 (Object_t * __this/* static, unused */, CharU5BU5D_t450* ___chars, int32_t ___index, int32_t ___count, bool ___flush, int32_t ___leftOver, bool ___isInShifted, bool ___allowOptionals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t UTF7Encoding_GetByteCount_m13818 (UTF7Encoding_t3656 * __this, CharU5BU5D_t450* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean,System.Int32&,System.Boolean&,System.Boolean)
 int32_t UTF7Encoding_InternalGetBytes_m13819 (Object_t * __this/* static, unused */, CharU5BU5D_t450* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t21* ___bytes, int32_t ___byteIndex, bool ___flush, int32_t* ___leftOver, bool* ___isInShifted, bool ___allowOptionals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t UTF7Encoding_GetBytes_m13820 (UTF7Encoding_t3656 * __this, CharU5BU5D_t450* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t21* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetCharCount(System.Byte[],System.Int32,System.Int32,System.Int32)
 int32_t UTF7Encoding_InternalGetCharCount_m13821 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___bytes, int32_t ___index, int32_t ___count, int32_t ___leftOver, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t UTF7Encoding_GetCharCount_m13822 (UTF7Encoding_t3656 * __this, ByteU5BU5D_t21* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Int32&)
 int32_t UTF7Encoding_InternalGetChars_m13823 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t450* ___chars, int32_t ___charIndex, int32_t* ___leftOver, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t UTF7Encoding_GetChars_m13824 (UTF7Encoding_t3656 * __this, ByteU5BU5D_t21* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t450* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetMaxByteCount(System.Int32)
 int32_t UTF7Encoding_GetMaxByteCount_m13825 (UTF7Encoding_t3656 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetMaxCharCount(System.Int32)
 int32_t UTF7Encoding_GetMaxCharCount_m13826 (UTF7Encoding_t3656 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF7Encoding::GetDecoder()
 Decoder_t3328 * UTF7Encoding_GetDecoder_m13827 (UTF7Encoding_t3656 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.Char*,System.Int32)
 int32_t UTF7Encoding_GetByteCount_m13828 (UTF7Encoding_t3656 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.String)
 int32_t UTF7Encoding_GetByteCount_m13829 (UTF7Encoding_t3656 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t UTF7Encoding_GetBytes_m13830 (UTF7Encoding_t3656 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF7Encoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* UTF7Encoding_GetString_m13831 (UTF7Encoding_t3656 * __this, ByteU5BU5D_t21* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
