#pragma once
#include <stdint.h>
// System.UInt32[]
struct UInt32U5BU5D_t2344;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Security.Cryptography.SHA256
#include "mscorlib_System_Security_Cryptography_SHA256.h"
// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_t2424  : public SHA256_t2429
{
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_H
	UInt32U5BU5D_t2344* ____H;
	// System.UInt64 System.Security.Cryptography.SHA256Managed::count
	uint64_t ___count;
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_ProcessingBuffer
	ByteU5BU5D_t21* ____ProcessingBuffer;
	// System.Int32 System.Security.Cryptography.SHA256Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::buff
	UInt32U5BU5D_t2344* ___buff;
};
