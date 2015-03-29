#pragma once
#include <stdint.h>
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Text.EncoderFallbackException
struct EncoderFallbackException_t3646  : public ArgumentException_t401
{
	// System.Char System.Text.EncoderFallbackException::char_unknown
	uint16_t ___char_unknown;
	// System.Char System.Text.EncoderFallbackException::char_unknown_high
	uint16_t ___char_unknown_high;
	// System.Char System.Text.EncoderFallbackException::char_unknown_low
	uint16_t ___char_unknown_low;
	// System.Int32 System.Text.EncoderFallbackException::index
	int32_t ___index;
};
