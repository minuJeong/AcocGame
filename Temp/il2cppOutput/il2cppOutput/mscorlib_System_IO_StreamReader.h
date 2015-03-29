#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Char[]
struct CharU5BU5D_t450;
// System.Text.Encoding
struct Encoding_t1422;
// System.Text.Decoder
struct Decoder_t3327;
// System.IO.Stream
struct Stream_t990;
// System.Text.StringBuilder
struct StringBuilder_t531;
// System.IO.StreamReader
struct StreamReader_t988;
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.IO.StreamReader
struct StreamReader_t988  : public TextReader_t877
{
	// System.Byte[] System.IO.StreamReader::input_buffer
	ByteU5BU5D_t21* ___input_buffer;
	// System.Char[] System.IO.StreamReader::decoded_buffer
	CharU5BU5D_t450* ___decoded_buffer;
	// System.Int32 System.IO.StreamReader::decoded_count
	int32_t ___decoded_count;
	// System.Int32 System.IO.StreamReader::pos
	int32_t ___pos;
	// System.Int32 System.IO.StreamReader::buffer_size
	int32_t ___buffer_size;
	// System.Int32 System.IO.StreamReader::do_checks
	int32_t ___do_checks;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t1422 * ___encoding;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t3327 * ___decoder;
	// System.IO.Stream System.IO.StreamReader::base_stream
	Stream_t990 * ___base_stream;
	// System.Boolean System.IO.StreamReader::mayBlock
	bool ___mayBlock;
	// System.Text.StringBuilder System.IO.StreamReader::line_builder
	StringBuilder_t531 * ___line_builder;
	// System.Boolean System.IO.StreamReader::foundCR
	bool ___foundCR;
};
struct StreamReader_t988_StaticFields{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t988 * ___Null;
};
