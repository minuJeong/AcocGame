#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StringWriter
struct StringWriter_t938;
// System.Text.StringBuilder
struct StringBuilder_t531;
// System.IFormatProvider
struct IFormatProvider_t905;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t450;

// System.Void System.IO.StringWriter::.ctor()
 void StringWriter__ctor_m5160 (StringWriter_t938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
 void StringWriter__ctor_m5291 (StringWriter_t938 * __this, StringBuilder_t531 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder,System.IFormatProvider)
 void StringWriter__ctor_m12245 (StringWriter_t938 * __this, StringBuilder_t531 * ___sb, Object_t * ___formatProvider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Close()
 void StringWriter_Close_m12246 (StringWriter_t938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Dispose(System.Boolean)
 void StringWriter_Dispose_m12247 (StringWriter_t938 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringWriter::ToString()
 String_t* StringWriter_ToString_m12248 (StringWriter_t938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char)
 void StringWriter_Write_m12249 (StringWriter_t938 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.String)
 void StringWriter_Write_m12250 (StringWriter_t938 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char[],System.Int32,System.Int32)
 void StringWriter_Write_m12251 (StringWriter_t938 * __this, CharU5BU5D_t450* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
