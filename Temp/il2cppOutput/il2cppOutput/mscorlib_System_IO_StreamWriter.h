#pragma once
#include <stdint.h>
// System.Text.Encoding
struct Encoding_t1422;
// System.IO.Stream
struct Stream_t990;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Char[]
struct CharU5BU5D_t450;
// System.IO.StreamWriter
struct StreamWriter_t1599;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.IO.StreamWriter
struct StreamWriter_t1599  : public TextWriter_t920
{
	// System.Text.Encoding System.IO.StreamWriter::internalEncoding
	Encoding_t1422 * ___internalEncoding;
	// System.IO.Stream System.IO.StreamWriter::internalStream
	Stream_t990 * ___internalStream;
	// System.Boolean System.IO.StreamWriter::iflush
	bool ___iflush;
	// System.Byte[] System.IO.StreamWriter::byte_buf
	ByteU5BU5D_t21* ___byte_buf;
	// System.Int32 System.IO.StreamWriter::byte_pos
	int32_t ___byte_pos;
	// System.Char[] System.IO.StreamWriter::decode_buf
	CharU5BU5D_t450* ___decode_buf;
	// System.Int32 System.IO.StreamWriter::decode_pos
	int32_t ___decode_pos;
	// System.Boolean System.IO.StreamWriter::DisposedAlready
	bool ___DisposedAlready;
	// System.Boolean System.IO.StreamWriter::preamble_done
	bool ___preamble_done;
};
struct StreamWriter_t1599_StaticFields{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t1599 * ___Null;
};
