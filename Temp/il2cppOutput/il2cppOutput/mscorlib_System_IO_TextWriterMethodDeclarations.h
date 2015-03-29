#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.TextWriter
struct TextWriter_t920;
// System.Char[]
struct CharU5BU5D_t450;
// System.String
struct String_t;

// System.Void System.IO.TextWriter::.ctor()
 void TextWriter__ctor_m12272 (TextWriter_t920 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::.cctor()
 void TextWriter__cctor_m12273 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Close()
 void TextWriter_Close_m12274 (TextWriter_t920 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose(System.Boolean)
 void TextWriter_Dispose_m12275 (TextWriter_t920 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose()
 void TextWriter_Dispose_m12276 (TextWriter_t920 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Flush()
 void TextWriter_Flush_m7878 (TextWriter_t920 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter,System.Boolean)
 TextWriter_t920 * TextWriter_Synchronized_m12277 (Object_t * __this/* static, unused */, TextWriter_t920 * ___writer, bool ___neverClose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char)
 void TextWriter_Write_m5295 (TextWriter_t920 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[])
 void TextWriter_Write_m5296 (TextWriter_t920 * __this, CharU5BU5D_t450* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Int32)
 void TextWriter_Write_m12278 (TextWriter_t920 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String)
 void TextWriter_Write_m5239 (TextWriter_t920 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32)
 void TextWriter_Write_m12279 (TextWriter_t920 * __this, CharU5BU5D_t450* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine()
 void TextWriter_WriteLine_m12280 (TextWriter_t920 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.Int32)
 void TextWriter_WriteLine_m12281 (TextWriter_t920 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String)
 void TextWriter_WriteLine_m7877 (TextWriter_t920 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
