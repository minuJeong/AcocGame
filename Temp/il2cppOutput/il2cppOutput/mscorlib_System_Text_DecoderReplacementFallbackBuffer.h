#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Text.DecoderFallbackBuffer
#include "mscorlib_System_Text_DecoderFallbackBuffer.h"
// System.Text.DecoderReplacementFallbackBuffer
struct DecoderReplacementFallbackBuffer_t3642  : public DecoderFallbackBuffer_t3636
{
	// System.Boolean System.Text.DecoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned;
	// System.Int32 System.Text.DecoderReplacementFallbackBuffer::current
	int32_t ___current;
	// System.String System.Text.DecoderReplacementFallbackBuffer::replacement
	String_t* ___replacement;
};
