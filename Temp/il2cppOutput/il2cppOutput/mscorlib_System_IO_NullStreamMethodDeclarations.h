#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.NullStream
struct NullStream_t3352;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.NullStream::.ctor()
 void NullStream__ctor_m12179 (NullStream_t3352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.NullStream::get_CanRead()
 bool NullStream_get_CanRead_m12180 (NullStream_t3352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.NullStream::get_CanSeek()
 bool NullStream_get_CanSeek_m12181 (NullStream_t3352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.NullStream::get_CanWrite()
 bool NullStream_get_CanWrite_m12182 (NullStream_t3352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.NullStream::get_Length()
 int64_t NullStream_get_Length_m12183 (NullStream_t3352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.NullStream::get_Position()
 int64_t NullStream_get_Position_m12184 (NullStream_t3352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullStream::set_Position(System.Int64)
 void NullStream_set_Position_m12185 (NullStream_t3352 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullStream::Flush()
 void NullStream_Flush_m12186 (NullStream_t3352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.NullStream::Read(System.Byte[],System.Int32,System.Int32)
 int32_t NullStream_Read_m12187 (NullStream_t3352 * __this, ByteU5BU5D_t21* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.NullStream::ReadByte()
 int32_t NullStream_ReadByte_m12188 (NullStream_t3352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.NullStream::Seek(System.Int64,System.IO.SeekOrigin)
 int64_t NullStream_Seek_m12189 (NullStream_t3352 * __this, int64_t ___offset, int32_t ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullStream::SetLength(System.Int64)
 void NullStream_SetLength_m12190 (NullStream_t3352 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullStream::Write(System.Byte[],System.Int32,System.Int32)
 void NullStream_Write_m12191 (NullStream_t3352 * __this, ByteU5BU5D_t21* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullStream::WriteByte(System.Byte)
 void NullStream_WriteByte_m12192 (NullStream_t3352 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
