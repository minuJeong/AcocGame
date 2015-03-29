#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamReader
struct StreamReader_t988;
// System.IO.Stream
struct Stream_t990;
// System.Text.Encoding
struct Encoding_t1422;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t450;

// System.Void System.IO.StreamReader::.ctor()
 void StreamReader__ctor_m12206 (StreamReader_t988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
 void StreamReader__ctor_m6913 (StreamReader_t988 * __this, Stream_t990 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
 void StreamReader__ctor_m12207 (StreamReader_t988 * __this, Stream_t990 * ___stream, Encoding_t1422 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
 void StreamReader__ctor_m12208 (StreamReader_t988 * __this, Stream_t990 * ___stream, Encoding_t1422 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String)
 void StreamReader__ctor_m12209 (StreamReader_t988 * __this, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
 void StreamReader__ctor_m12210 (StreamReader_t988 * __this, String_t* ___path, Encoding_t1422 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.cctor()
 void StreamReader__cctor_m12211 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Initialize(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
 void StreamReader_Initialize_m12212 (StreamReader_t988 * __this, Stream_t990 * ___stream, Encoding_t1422 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Close()
 void StreamReader_Close_m12213 (StreamReader_t988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Dispose(System.Boolean)
 void StreamReader_Dispose_m12214 (StreamReader_t988 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::DoChecks(System.Int32)
 int32_t StreamReader_DoChecks_m12215 (StreamReader_t988 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::ReadBuffer()
 int32_t StreamReader_ReadBuffer_m12216 (StreamReader_t988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Peek()
 int32_t StreamReader_Peek_m12217 (StreamReader_t988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read()
 int32_t StreamReader_Read_m12218 (StreamReader_t988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t StreamReader_Read_m12219 (StreamReader_t988 * __this, CharU5BU5D_t450* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::FindNextEOL()
 int32_t StreamReader_FindNextEOL_m12220 (StreamReader_t988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadLine()
 String_t* StreamReader_ReadLine_m12221 (StreamReader_t988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadToEnd()
 String_t* StreamReader_ReadToEnd_m12222 (StreamReader_t988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
