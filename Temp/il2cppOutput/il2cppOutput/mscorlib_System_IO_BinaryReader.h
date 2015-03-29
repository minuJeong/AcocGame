#pragma once
#include <stdint.h>
// System.IO.Stream
struct Stream_t990;
// System.Text.Encoding
struct Encoding_t1422;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Text.Decoder
struct Decoder_t3327;
// System.Char[]
struct CharU5BU5D_t450;
// System.Object
#include "mscorlib_System_Object.h"
// System.IO.BinaryReader
struct BinaryReader_t3328  : public Object_t
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t990 * ___m_stream;
	// System.Text.Encoding System.IO.BinaryReader::m_encoding
	Encoding_t1422 * ___m_encoding;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_t21* ___m_buffer;
	// System.Text.Decoder System.IO.BinaryReader::decoder
	Decoder_t3327 * ___decoder;
	// System.Char[] System.IO.BinaryReader::charBuffer
	CharU5BU5D_t450* ___charBuffer;
	// System.Boolean System.IO.BinaryReader::m_disposed
	bool ___m_disposed;
};
