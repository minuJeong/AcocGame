#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t21;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.IO.MemoryStream
struct MemoryStream_t242  : public Stream_t990
{
	// System.Boolean System.IO.MemoryStream::canWrite
	bool ___canWrite;
	// System.Boolean System.IO.MemoryStream::allowGetBuffer
	bool ___allowGetBuffer;
	// System.Int32 System.IO.MemoryStream::capacity
	int32_t ___capacity;
	// System.Int32 System.IO.MemoryStream::length
	int32_t ___length;
	// System.Byte[] System.IO.MemoryStream::internalBuffer
	ByteU5BU5D_t21* ___internalBuffer;
	// System.Int32 System.IO.MemoryStream::initialIndex
	int32_t ___initialIndex;
	// System.Boolean System.IO.MemoryStream::expandable
	bool ___expandable;
	// System.Boolean System.IO.MemoryStream::streamClosed
	bool ___streamClosed;
	// System.Int32 System.IO.MemoryStream::position
	int32_t ___position;
	// System.Int32 System.IO.MemoryStream::dirty_bytes
	int32_t ___dirty_bytes;
};
