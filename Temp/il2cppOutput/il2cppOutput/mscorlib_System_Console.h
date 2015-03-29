#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t920;
// System.IO.TextReader
struct TextReader_t877;
// System.Text.Encoding
struct Encoding_t1422;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct Console_t2423  : public Object_t
{
};
struct Console_t2423_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t920 * ___stdout;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t920 * ___stderr;
	// System.IO.TextReader System.Console::stdin
	TextReader_t877 * ___stdin;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t1422 * ___inputEncoding;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t1422 * ___outputEncoding;
};
