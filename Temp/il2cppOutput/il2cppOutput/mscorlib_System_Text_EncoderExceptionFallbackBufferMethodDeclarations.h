﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.EncoderExceptionFallbackBuffer
struct EncoderExceptionFallbackBuffer_t3646;

// System.Void System.Text.EncoderExceptionFallbackBuffer::.ctor()
 void EncoderExceptionFallbackBuffer__ctor_m13701 (EncoderExceptionFallbackBuffer_t3646 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.EncoderExceptionFallbackBuffer::get_Remaining()
 int32_t EncoderExceptionFallbackBuffer_get_Remaining_m13702 (EncoderExceptionFallbackBuffer_t3646 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderExceptionFallbackBuffer::Fallback(System.Char,System.Int32)
 bool EncoderExceptionFallbackBuffer_Fallback_m13703 (EncoderExceptionFallbackBuffer_t3646 * __this, uint16_t ___charUnknown, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderExceptionFallbackBuffer::Fallback(System.Char,System.Char,System.Int32)
 bool EncoderExceptionFallbackBuffer_Fallback_m13704 (EncoderExceptionFallbackBuffer_t3646 * __this, uint16_t ___charUnknownHigh, uint16_t ___charUnknownLow, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.EncoderExceptionFallbackBuffer::GetNextChar()
 uint16_t EncoderExceptionFallbackBuffer_GetNextChar_m13705 (EncoderExceptionFallbackBuffer_t3646 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
