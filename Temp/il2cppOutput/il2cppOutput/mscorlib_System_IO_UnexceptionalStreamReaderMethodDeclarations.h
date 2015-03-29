#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamReader
struct UnexceptionalStreamReader_t3359;
// System.IO.Stream
struct Stream_t990;
// System.Text.Encoding
struct Encoding_t1422;
// System.Char[]
struct CharU5BU5D_t450;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
 void UnexceptionalStreamReader__ctor_m12293 (UnexceptionalStreamReader_t3359 * __this, Stream_t990 * ___stream, Encoding_t1422 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamReader::.cctor()
 void UnexceptionalStreamReader__cctor_m12294 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Peek()
 int32_t UnexceptionalStreamReader_Peek_m12295 (UnexceptionalStreamReader_t3359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Read()
 int32_t UnexceptionalStreamReader_Read_m12296 (UnexceptionalStreamReader_t3359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t UnexceptionalStreamReader_Read_m12297 (UnexceptionalStreamReader_t3359 * __this, CharU5BU5D_t450* ___dest_buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnexceptionalStreamReader::CheckEOL(System.Char)
 bool UnexceptionalStreamReader_CheckEOL_m12298 (UnexceptionalStreamReader_t3359 * __this, uint16_t ___current, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.UnexceptionalStreamReader::ReadLine()
 String_t* UnexceptionalStreamReader_ReadLine_m12299 (UnexceptionalStreamReader_t3359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.UnexceptionalStreamReader::ReadToEnd()
 String_t* UnexceptionalStreamReader_ReadToEnd_m12300 (UnexceptionalStreamReader_t3359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
