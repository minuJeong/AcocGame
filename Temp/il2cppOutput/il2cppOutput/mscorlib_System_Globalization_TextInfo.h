#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t872;
// System.Object
#include "mscorlib_System_Object.h"
// System.Globalization.TextInfo/Data
#include "mscorlib_System_Globalization_TextInfo_Data.h"
// System.Globalization.TextInfo
struct TextInfo_t3219  : public Object_t
{
	// System.Boolean System.Globalization.TextInfo::m_isReadOnly
	bool ___m_isReadOnly;
	// System.String System.Globalization.TextInfo::customCultureName
	String_t* ___customCultureName;
	// System.Int32 System.Globalization.TextInfo::m_win32LangID
	int32_t ___m_win32LangID;
	// System.Globalization.CultureInfo System.Globalization.TextInfo::ci
	CultureInfo_t872 * ___ci;
	// System.Boolean System.Globalization.TextInfo::handleDotI
	bool ___handleDotI;
	// System.Globalization.TextInfo/Data System.Globalization.TextInfo::data
	Data_t3325  ___data;
};
