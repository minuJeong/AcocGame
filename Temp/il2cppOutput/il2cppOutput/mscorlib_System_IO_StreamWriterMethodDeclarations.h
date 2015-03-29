#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamWriter
struct StreamWriter_t1599;
// System.IO.Stream
struct Stream_t990;
// System.Text.Encoding
struct Encoding_t1422;
// System.Char[]
struct CharU5BU5D_t450;
// System.String
struct String_t;

// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream)
 void StreamWriter__ctor_m6913 (StreamWriter_t1599 * __this, Stream_t990 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
 void StreamWriter__ctor_m12220 (StreamWriter_t1599 * __this, Stream_t990 * ___stream, Encoding_t1422 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Int32)
 void StreamWriter__ctor_m12221 (StreamWriter_t1599 * __this, Stream_t990 * ___stream, Encoding_t1422 * ___encoding, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.cctor()
 void StreamWriter__cctor_m12222 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Initialize(System.Text.Encoding,System.Int32)
 void StreamWriter_Initialize_m12223 (StreamWriter_t1599 * __this, Encoding_t1422 * ___encoding, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean)
 void StreamWriter_set_AutoFlush_m12224 (StreamWriter_t1599 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Dispose(System.Boolean)
 void StreamWriter_Dispose_m12225 (StreamWriter_t1599 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Flush()
 void StreamWriter_Flush_m12226 (StreamWriter_t1599 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::FlushBytes()
 void StreamWriter_FlushBytes_m12227 (StreamWriter_t1599 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Decode()
 void StreamWriter_Decode_m12228 (StreamWriter_t1599 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[],System.Int32,System.Int32)
 void StreamWriter_Write_m12229 (StreamWriter_t1599 * __this, CharU5BU5D_t450* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.Char[],System.Int32,System.Int32)
 void StreamWriter_LowLevelWrite_m12230 (StreamWriter_t1599 * __this, CharU5BU5D_t450* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.String)
 void StreamWriter_LowLevelWrite_m12231 (StreamWriter_t1599 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char)
 void StreamWriter_Write_m12232 (StreamWriter_t1599 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[])
 void StreamWriter_Write_m12233 (StreamWriter_t1599 * __this, CharU5BU5D_t450* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.String)
 void StreamWriter_Write_m12234 (StreamWriter_t1599 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Close()
 void StreamWriter_Close_m12235 (StreamWriter_t1599 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Finalize()
 void StreamWriter_Finalize_m12236 (StreamWriter_t1599 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
