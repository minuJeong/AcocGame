#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t21;
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Text.DecoderFallbackException
struct DecoderFallbackException_t3641  : public ArgumentException_t401
{
	// System.Byte[] System.Text.DecoderFallbackException::bytes_unknown
	ByteU5BU5D_t21* ___bytes_unknown;
	// System.Int32 System.Text.DecoderFallbackException::index
	int32_t ___index;
};
