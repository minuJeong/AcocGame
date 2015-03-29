#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamReader/NullStreamReader
struct NullStreamReader_t3354;
// System.Char[]
struct CharU5BU5D_t450;
// System.String
struct String_t;

// System.Void System.IO.StreamReader/NullStreamReader::.ctor()
 void NullStreamReader__ctor_m12200 (NullStreamReader_t3354 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader/NullStreamReader::Peek()
 int32_t NullStreamReader_Peek_m12201 (NullStreamReader_t3354 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader/NullStreamReader::Read()
 int32_t NullStreamReader_Read_m12202 (NullStreamReader_t3354 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader/NullStreamReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t NullStreamReader_Read_m12203 (NullStreamReader_t3354 * __this, CharU5BU5D_t450* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader/NullStreamReader::ReadLine()
 String_t* NullStreamReader_ReadLine_m12204 (NullStreamReader_t3354 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader/NullStreamReader::ReadToEnd()
 String_t* NullStreamReader_ReadToEnd_m12205 (NullStreamReader_t3354 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
