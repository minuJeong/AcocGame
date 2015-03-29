#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWWTranscoder
struct WWWTranscoder_t2534;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t1422;

// System.Void UnityEngine.WWWTranscoder::.cctor()
 void WWWTranscoder__cctor_m8506 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
 ByteU5BU5D_t21* WWWTranscoder_Byte2Hex_m8507 (Object_t * __this/* static, unused */, uint8_t ___b, ByteU5BU5D_t21* ___hexChars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
 ByteU5BU5D_t21* WWWTranscoder_URLEncode_m8508 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___toEncode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
 String_t* WWWTranscoder_QPEncode_m8509 (Object_t * __this/* static, unused */, String_t* ___toEncode, Encoding_t1422 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte,System.Byte[],System.Boolean)
 ByteU5BU5D_t21* WWWTranscoder_Encode_m8510 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___input, uint8_t ___escapeChar, uint8_t ___space, ByteU5BU5D_t21* ___forbidden, bool ___uppercase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
 bool WWWTranscoder_ByteArrayContains_m8511 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___array, uint8_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
 bool WWWTranscoder_SevenBitClean_m8512 (Object_t * __this/* static, unused */, String_t* ___s, Encoding_t1422 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte[])
 bool WWWTranscoder_SevenBitClean_m8513 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
