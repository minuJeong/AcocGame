#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t21;
// System.UInt64[]
struct UInt64U5BU5D_t3604;
// System.Security.Cryptography.SHA384
#include "mscorlib_System_Security_Cryptography_SHA384.h"
// System.Security.Cryptography.SHA384Managed
struct SHA384Managed_t3605  : public SHA384_t3603
{
	// System.Byte[] System.Security.Cryptography.SHA384Managed::xBuf
	ByteU5BU5D_t21* ___xBuf;
	// System.Int32 System.Security.Cryptography.SHA384Managed::xBufOff
	int32_t ___xBufOff;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount1
	uint64_t ___byteCount1;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount2
	uint64_t ___byteCount2;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H1
	uint64_t ___H1;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H2
	uint64_t ___H2;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H3
	uint64_t ___H3;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H4
	uint64_t ___H4;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H5
	uint64_t ___H5;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H6
	uint64_t ___H6;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H7
	uint64_t ___H7;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H8
	uint64_t ___H8;
	// System.UInt64[] System.Security.Cryptography.SHA384Managed::W
	UInt64U5BU5D_t3604* ___W;
	// System.Int32 System.Security.Cryptography.SHA384Managed::wOff
	int32_t ___wOff;
};
