#pragma once
#include <stdint.h>
// System.UInt32[]
struct UInt32U5BU5D_t2344;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Security.Cryptography.MD5
#include "mscorlib_System_Security_Cryptography_MD5.h"
// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_t3587  : public MD5_t3586
{
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_t2344* ____H;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_t2344* ___buff;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_t21* ____ProcessingBuffer;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount;
};
struct MD5CryptoServiceProvider_t3587_StaticFields{
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_t2344* ___K;
};
