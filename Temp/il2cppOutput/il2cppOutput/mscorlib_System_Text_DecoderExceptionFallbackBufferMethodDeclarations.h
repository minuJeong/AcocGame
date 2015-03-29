#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.DecoderExceptionFallbackBuffer
struct DecoderExceptionFallbackBuffer_t3640;
// System.Byte[]
struct ByteU5BU5D_t21;

// System.Void System.Text.DecoderExceptionFallbackBuffer::.ctor()
 void DecoderExceptionFallbackBuffer__ctor_m13672 (DecoderExceptionFallbackBuffer_t3640 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderExceptionFallbackBuffer::get_Remaining()
 int32_t DecoderExceptionFallbackBuffer_get_Remaining_m13673 (DecoderExceptionFallbackBuffer_t3640 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderExceptionFallbackBuffer::Fallback(System.Byte[],System.Int32)
 bool DecoderExceptionFallbackBuffer_Fallback_m13674 (DecoderExceptionFallbackBuffer_t3640 * __this, ByteU5BU5D_t21* ___bytesUnknown, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.DecoderExceptionFallbackBuffer::GetNextChar()
 uint16_t DecoderExceptionFallbackBuffer_GetNextChar_m13675 (DecoderExceptionFallbackBuffer_t3640 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
