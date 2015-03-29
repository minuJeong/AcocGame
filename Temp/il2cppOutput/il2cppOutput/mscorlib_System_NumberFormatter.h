#pragma once
#include <stdint.h>
// System.Threading.Thread
struct Thread_t1419;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t870;
// System.Char[]
struct CharU5BU5D_t450;
// System.NumberFormatter
struct NumberFormatter_t3729;
// System.Object
#include "mscorlib_System_Object.h"
// System.NumberFormatter
struct NumberFormatter_t3729  : public Object_t
{
	// System.Threading.Thread System.NumberFormatter::_thread
	Thread_t1419 * ____thread;
	// System.Globalization.NumberFormatInfo System.NumberFormatter::_nfi
	NumberFormatInfo_t870 * ____nfi;
	// System.Boolean System.NumberFormatter::_NaN
	bool ____NaN;
	// System.Boolean System.NumberFormatter::_infinity
	bool ____infinity;
	// System.Boolean System.NumberFormatter::_isCustomFormat
	bool ____isCustomFormat;
	// System.Boolean System.NumberFormatter::_specifierIsUpper
	bool ____specifierIsUpper;
	// System.Boolean System.NumberFormatter::_positive
	bool ____positive;
	// System.Char System.NumberFormatter::_specifier
	uint16_t ____specifier;
	// System.Int32 System.NumberFormatter::_precision
	int32_t ____precision;
	// System.Int32 System.NumberFormatter::_defPrecision
	int32_t ____defPrecision;
	// System.Int32 System.NumberFormatter::_digitsLen
	int32_t ____digitsLen;
	// System.Int32 System.NumberFormatter::_offset
	int32_t ____offset;
	// System.Int32 System.NumberFormatter::_decPointPos
	int32_t ____decPointPos;
	// System.UInt32 System.NumberFormatter::_val1
	uint32_t ____val1;
	// System.UInt32 System.NumberFormatter::_val2
	uint32_t ____val2;
	// System.UInt32 System.NumberFormatter::_val3
	uint32_t ____val3;
	// System.UInt32 System.NumberFormatter::_val4
	uint32_t ____val4;
	// System.Char[] System.NumberFormatter::_cbuf
	CharU5BU5D_t450* ____cbuf;
	// System.Int32 System.NumberFormatter::_ind
	int32_t ____ind;
};
struct NumberFormatter_t3729_StaticFields{
	// System.UInt64* System.NumberFormatter::MantissaBitsTable
	uint64_t* ___MantissaBitsTable;
	// System.Int32* System.NumberFormatter::TensExponentTable
	int32_t* ___TensExponentTable;
	// System.Char* System.NumberFormatter::DigitLowerTable
	uint16_t* ___DigitLowerTable;
	// System.Char* System.NumberFormatter::DigitUpperTable
	uint16_t* ___DigitUpperTable;
	// System.Int64* System.NumberFormatter::TenPowersList
	int64_t* ___TenPowersList;
	// System.Int32* System.NumberFormatter::DecHexDigits
	int32_t* ___DecHexDigits;
};
struct NumberFormatter_t3729_ThreadStaticFields{
	// System.NumberFormatter System.NumberFormatter::threadNumberFormatter
	NumberFormatter_t3729 * ___threadNumberFormatter;
};
