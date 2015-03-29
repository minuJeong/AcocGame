#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.TextReader
struct TextReader_t877;
// System.Char[]
struct CharU5BU5D_t450;
// System.String
struct String_t;

// System.Void System.IO.TextReader::.ctor()
 void TextReader__ctor_m12254 (TextReader_t877 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::.cctor()
 void TextReader__cctor_m12255 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Close()
 void TextReader_Close_m5286 (TextReader_t877 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose()
 void TextReader_Dispose_m4746 (TextReader_t877 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose(System.Boolean)
 void TextReader_Dispose_m12256 (TextReader_t877 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Peek()
 int32_t TextReader_Peek_m12257 (TextReader_t877 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Read()
 int32_t TextReader_Read_m5310 (TextReader_t877 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t TextReader_Read_m12258 (TextReader_t877 * __this, CharU5BU5D_t450* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextReader::ReadLine()
 String_t* TextReader_ReadLine_m12259 (TextReader_t877 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextReader::ReadToEnd()
 String_t* TextReader_ReadToEnd_m6112 (TextReader_t877 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader System.IO.TextReader::Synchronized(System.IO.TextReader)
 TextReader_t877 * TextReader_Synchronized_m12260 (Object_t * __this/* static, unused */, TextReader_t877 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
