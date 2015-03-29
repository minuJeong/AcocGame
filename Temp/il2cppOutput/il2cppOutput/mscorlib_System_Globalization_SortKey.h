#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Object
#include "mscorlib_System_Object.h"
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"
// System.Globalization.SortKey
struct SortKey_t3221  : public Object_t
{
	// System.String System.Globalization.SortKey::source
	String_t* ___source;
	// System.Globalization.CompareOptions System.Globalization.SortKey::options
	int32_t ___options;
	// System.Byte[] System.Globalization.SortKey::key
	ByteU5BU5D_t21* ___key;
	// System.Int32 System.Globalization.SortKey::lcid
	int32_t ___lcid;
};
