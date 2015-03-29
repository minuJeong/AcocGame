#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Encoding/ForwardingDecoder
struct ForwardingDecoder_t3649;
// System.Text.Encoding
struct Encoding_t1422;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Char[]
struct CharU5BU5D_t450;

// System.Void System.Text.Encoding/ForwardingDecoder::.ctor(System.Text.Encoding)
 void ForwardingDecoder__ctor_m13725 (ForwardingDecoder_t3649 * __this, Encoding_t1422 * ___enc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding/ForwardingDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t ForwardingDecoder_GetChars_m13726 (ForwardingDecoder_t3649 * __this, ByteU5BU5D_t21* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t450* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
