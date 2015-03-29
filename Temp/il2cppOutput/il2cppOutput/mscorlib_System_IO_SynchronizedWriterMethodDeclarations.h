#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.SynchronizedWriter
struct SynchronizedWriter_t3357;
// System.IO.TextWriter
struct TextWriter_t920;
// System.Char[]
struct CharU5BU5D_t450;
// System.String
struct String_t;

// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
 void SynchronizedWriter__ctor_m12279 (SynchronizedWriter_t3357 * __this, TextWriter_t920 * ___writer, bool ___neverClose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Close()
 void SynchronizedWriter_Close_m12280 (SynchronizedWriter_t3357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Flush()
 void SynchronizedWriter_Flush_m12281 (SynchronizedWriter_t3357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
 void SynchronizedWriter_Write_m12282 (SynchronizedWriter_t3357 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
 void SynchronizedWriter_Write_m12283 (SynchronizedWriter_t3357 * __this, CharU5BU5D_t450* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Int32)
 void SynchronizedWriter_Write_m12284 (SynchronizedWriter_t3357 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String)
 void SynchronizedWriter_Write_m12285 (SynchronizedWriter_t3357 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
 void SynchronizedWriter_Write_m12286 (SynchronizedWriter_t3357 * __this, CharU5BU5D_t450* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine()
 void SynchronizedWriter_WriteLine_m12287 (SynchronizedWriter_t3357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.Int32)
 void SynchronizedWriter_WriteLine_m12288 (SynchronizedWriter_t3357 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
 void SynchronizedWriter_WriteLine_m12289 (SynchronizedWriter_t3357 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
