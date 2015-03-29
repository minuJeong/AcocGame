#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Text.EncoderFallbackBuffer
#include "mscorlib_System_Text_EncoderFallbackBuffer.h"
// System.Text.EncoderReplacementFallbackBuffer
struct EncoderReplacementFallbackBuffer_t3649  : public EncoderFallbackBuffer_t3636
{
	// System.String System.Text.EncoderReplacementFallbackBuffer::replacement
	String_t* ___replacement;
	// System.Int32 System.Text.EncoderReplacementFallbackBuffer::current
	int32_t ___current;
	// System.Boolean System.Text.EncoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned;
};
