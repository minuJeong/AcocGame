#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.JsonWriter
struct JsonWriter_t885;
// System.IO.TextWriter
struct TextWriter_t920;
// System.Text.StringBuilder
struct StringBuilder_t531;
// System.Char[]
struct CharU5BU5D_t450;
// System.String
struct String_t;
// LitJson.Condition
#include "LitJson_LitJson_Condition.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void LitJson.JsonWriter::.ctor()
 void JsonWriter__ctor_m5009 (JsonWriter_t885 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.ctor(System.Text.StringBuilder)
 void JsonWriter__ctor_m5010 (JsonWriter_t885 * __this, StringBuilder_t531 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.ctor(System.IO.TextWriter)
 void JsonWriter__ctor_m5011 (JsonWriter_t885 * __this, TextWriter_t920 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.cctor()
 void JsonWriter__cctor_m5012 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonWriter::get_IndentValue()
 int32_t JsonWriter_get_IndentValue_m5013 (JsonWriter_t885 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::set_IndentValue(System.Int32)
 void JsonWriter_set_IndentValue_m5014 (JsonWriter_t885 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonWriter::get_PrettyPrint()
 bool JsonWriter_get_PrettyPrint_m5015 (JsonWriter_t885 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::set_PrettyPrint(System.Boolean)
 void JsonWriter_set_PrettyPrint_m5016 (JsonWriter_t885 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
 TextWriter_t920 * JsonWriter_get_TextWriter_m5017 (JsonWriter_t885 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonWriter::get_Validate()
 bool JsonWriter_get_Validate_m5018 (JsonWriter_t885 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::set_Validate(System.Boolean)
 void JsonWriter_set_Validate_m5019 (JsonWriter_t885 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
 void JsonWriter_DoValidation_m5020 (JsonWriter_t885 * __this, int32_t ___cond, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Init()
 void JsonWriter_Init_m5021 (JsonWriter_t885 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
 void JsonWriter_IntToHex_m5022 (Object_t * __this/* static, unused */, int32_t ___n, CharU5BU5D_t450* ___hex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Indent()
 void JsonWriter_Indent_m5023 (JsonWriter_t885 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Put(System.String)
 void JsonWriter_Put_m5024 (JsonWriter_t885 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutNewline()
 void JsonWriter_PutNewline_m5025 (JsonWriter_t885 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
 void JsonWriter_PutNewline_m5026 (JsonWriter_t885 * __this, bool ___add_comma, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutString(System.String)
 void JsonWriter_PutString_m5027 (JsonWriter_t885 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Unindent()
 void JsonWriter_Unindent_m5028 (JsonWriter_t885 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonWriter::ToString()
 String_t* JsonWriter_ToString_m5029 (JsonWriter_t885 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Reset()
 void JsonWriter_Reset_m5030 (JsonWriter_t885 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Boolean)
 void JsonWriter_Write_m5031 (JsonWriter_t885 * __this, bool ___boolean, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Decimal)
 void JsonWriter_Write_m5032 (JsonWriter_t885 * __this, Decimal_t881  ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Double)
 void JsonWriter_Write_m5033 (JsonWriter_t885 * __this, double ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Int32)
 void JsonWriter_Write_m5034 (JsonWriter_t885 * __this, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Int64)
 void JsonWriter_Write_m5035 (JsonWriter_t885 * __this, int64_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.String)
 void JsonWriter_Write_m5036 (JsonWriter_t885 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.UInt64)
 void JsonWriter_Write_m5037 (JsonWriter_t885 * __this, uint64_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteArrayEnd()
 void JsonWriter_WriteArrayEnd_m5038 (JsonWriter_t885 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteArrayStart()
 void JsonWriter_WriteArrayStart_m5039 (JsonWriter_t885 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteObjectEnd()
 void JsonWriter_WriteObjectEnd_m5040 (JsonWriter_t885 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteObjectStart()
 void JsonWriter_WriteObjectStart_m5041 (JsonWriter_t885 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
 void JsonWriter_WritePropertyName_m5042 (JsonWriter_t885 * __this, String_t* ___property_name, MethodInfo* method) IL2CPP_METHOD_ATTR;
