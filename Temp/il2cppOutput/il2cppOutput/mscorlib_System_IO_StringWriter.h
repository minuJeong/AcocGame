#pragma once
#include <stdint.h>
// System.Text.StringBuilder
struct StringBuilder_t531;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.IO.StringWriter
struct StringWriter_t938  : public TextWriter_t920
{
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t531 * ___internalString;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed;
};
