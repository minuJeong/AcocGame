#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Collections.Hashtable
struct Hashtable_t48;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.RegularExpressions.QuickSearch
struct QuickSearch_t2797  : public Object_t
{
	// System.String System.Text.RegularExpressions.QuickSearch::str
	String_t* ___str;
	// System.Int32 System.Text.RegularExpressions.QuickSearch::len
	int32_t ___len;
	// System.Boolean System.Text.RegularExpressions.QuickSearch::ignore
	bool ___ignore;
	// System.Boolean System.Text.RegularExpressions.QuickSearch::reverse
	bool ___reverse;
	// System.Byte[] System.Text.RegularExpressions.QuickSearch::shift
	ByteU5BU5D_t21* ___shift;
	// System.Collections.Hashtable System.Text.RegularExpressions.QuickSearch::shiftExtended
	Hashtable_t48 * ___shiftExtended;
};
struct QuickSearch_t2797_StaticFields{
	// System.Int32 System.Text.RegularExpressions.QuickSearch::THRESHOLD
	int32_t ___THRESHOLD;
};
