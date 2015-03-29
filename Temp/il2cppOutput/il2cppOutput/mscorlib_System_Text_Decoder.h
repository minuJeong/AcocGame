#pragma once
#include <stdint.h>
// System.Text.DecoderFallback
struct DecoderFallback_t3638;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t3637;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.Decoder
struct Decoder_t3328  : public Object_t
{
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t3638 * ___fallback;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t3637 * ___fallback_buffer;
};
