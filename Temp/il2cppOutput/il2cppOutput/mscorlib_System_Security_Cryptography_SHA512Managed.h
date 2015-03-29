#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t21;
// System.UInt64[]
struct UInt64U5BU5D_t3605;
// System.Security.Cryptography.SHA512
#include "mscorlib_System_Security_Cryptography_SHA512.h"
// System.Security.Cryptography.SHA512Managed
struct SHA512Managed_t3608  : public SHA512_t3607
{
	// System.Byte[] System.Security.Cryptography.SHA512Managed::xBuf
	ByteU5BU5D_t21* ___xBuf;
	// System.Int32 System.Security.Cryptography.SHA512Managed::xBufOff
	int32_t ___xBufOff;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount1
	uint64_t ___byteCount1;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount2
	uint64_t ___byteCount2;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H1
	uint64_t ___H1;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H2
	uint64_t ___H2;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H3
	uint64_t ___H3;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H4
	uint64_t ___H4;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H5
	uint64_t ___H5;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H6
	uint64_t ___H6;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H7
	uint64_t ___H7;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H8
	uint64_t ___H8;
	// System.UInt64[] System.Security.Cryptography.SHA512Managed::W
	UInt64U5BU5D_t3605* ___W;
	// System.Int32 System.Security.Cryptography.SHA512Managed::wOff
	int32_t ___wOff;
};
