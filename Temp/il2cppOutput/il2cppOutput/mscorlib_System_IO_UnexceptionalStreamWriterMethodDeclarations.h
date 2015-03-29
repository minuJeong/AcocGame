#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t3359;
// System.IO.Stream
struct Stream_t990;
// System.Text.Encoding
struct Encoding_t1422;
// System.Char[]
struct CharU5BU5D_t450;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
 void UnexceptionalStreamWriter__ctor_m12298 (UnexceptionalStreamWriter_t3359 * __this, Stream_t990 * ___stream, Encoding_t1422 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
 void UnexceptionalStreamWriter_Flush_m12299 (UnexceptionalStreamWriter_t3359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
 void UnexceptionalStreamWriter_Write_m12300 (UnexceptionalStreamWriter_t3359 * __this, CharU5BU5D_t450* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
 void UnexceptionalStreamWriter_Write_m12301 (UnexceptionalStreamWriter_t3359 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
 void UnexceptionalStreamWriter_Write_m12302 (UnexceptionalStreamWriter_t3359 * __this, CharU5BU5D_t450* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
 void UnexceptionalStreamWriter_Write_m12303 (UnexceptionalStreamWriter_t3359 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
