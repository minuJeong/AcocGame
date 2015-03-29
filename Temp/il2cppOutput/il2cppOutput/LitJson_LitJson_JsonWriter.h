#pragma once
#include <stdint.h>
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t870;
// LitJson.WriterContext
struct WriterContext_t918;
// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_t919;
// System.Char[]
struct CharU5BU5D_t450;
// System.Text.StringBuilder
struct StringBuilder_t531;
// System.IO.TextWriter
struct TextWriter_t920;
// System.Object
#include "mscorlib_System_Object.h"
// LitJson.JsonWriter
struct JsonWriter_t885  : public Object_t
{
	// LitJson.WriterContext LitJson.JsonWriter::context
	WriterContext_t918 * ___context;
	// System.Collections.Generic.Stack`1<LitJson.WriterContext> LitJson.JsonWriter::ctx_stack
	Stack_1_t919 * ___ctx_stack;
	// System.Boolean LitJson.JsonWriter::has_reached_end
	bool ___has_reached_end;
	// System.Char[] LitJson.JsonWriter::hex_seq
	CharU5BU5D_t450* ___hex_seq;
	// System.Int32 LitJson.JsonWriter::indentation
	int32_t ___indentation;
	// System.Int32 LitJson.JsonWriter::indent_value
	int32_t ___indent_value;
	// System.Text.StringBuilder LitJson.JsonWriter::inst_string_builder
	StringBuilder_t531 * ___inst_string_builder;
	// System.Boolean LitJson.JsonWriter::pretty_print
	bool ___pretty_print;
	// System.Boolean LitJson.JsonWriter::validate
	bool ___validate;
	// System.IO.TextWriter LitJson.JsonWriter::writer
	TextWriter_t920 * ___writer;
};
struct JsonWriter_t885_StaticFields{
	// System.Globalization.NumberFormatInfo LitJson.JsonWriter::number_format
	NumberFormatInfo_t870 * ___number_format;
};
