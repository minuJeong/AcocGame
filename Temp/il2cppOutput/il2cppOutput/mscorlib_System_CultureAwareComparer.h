#pragma once
#include <stdint.h>
// System.Globalization.CompareInfo
struct CompareInfo_t3286;
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.CultureAwareComparer
struct CultureAwareComparer_t3734  : public StringComparer_t2666
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t3286 * ____compareInfo;
};
