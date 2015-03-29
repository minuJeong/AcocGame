#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF8Encoding/UTF8Decoder
struct UTF8Decoder_t3656;
// System.Text.DecoderFallback
struct DecoderFallback_t3637;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Char[]
struct CharU5BU5D_t450;

// System.Void System.Text.UTF8Encoding/UTF8Decoder::.ctor(System.Text.DecoderFallback)
 void UTF8Decoder__ctor_m13829 (UTF8Decoder_t3656 * __this, DecoderFallback_t3637 * ___fallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding/UTF8Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t UTF8Decoder_GetChars_m13830 (UTF8Decoder_t3656 * __this, ByteU5BU5D_t21* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t450* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
