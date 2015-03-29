#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t21;
// System.UInt32[]
struct UInt32U5BU5D_t2344;
// System.Security.Cryptography.RIPEMD160
#include "mscorlib_System_Security_Cryptography_RIPEMD160.h"
// System.Security.Cryptography.RIPEMD160Managed
struct RIPEMD160Managed_t3592  : public RIPEMD160_t3591
{
	// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::_ProcessingBuffer
	ByteU5BU5D_t21* ____ProcessingBuffer;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_X
	UInt32U5BU5D_t2344* ____X;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_HashValue
	UInt32U5BU5D_t2344* ____HashValue;
	// System.UInt64 System.Security.Cryptography.RIPEMD160Managed::_Length
	uint64_t ____Length;
	// System.Int32 System.Security.Cryptography.RIPEMD160Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount;
};
