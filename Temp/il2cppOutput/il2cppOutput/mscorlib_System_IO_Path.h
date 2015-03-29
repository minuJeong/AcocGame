#pragma once
#include <stdint.h>
// System.Char[]
struct CharU5BU5D_t450;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.IO.Path
struct Path_t1466  : public Object_t
{
};
struct Path_t1466_StaticFields{
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t450* ___InvalidPathChars;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	uint16_t ___AltDirectorySeparatorChar;
	// System.Char System.IO.Path::DirectorySeparatorChar
	uint16_t ___DirectorySeparatorChar;
	// System.Char System.IO.Path::PathSeparator
	uint16_t ___PathSeparator;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr;
	// System.Char System.IO.Path::VolumeSeparatorChar
	uint16_t ___VolumeSeparatorChar;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t450* ___PathSeparatorChars;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume;
};
