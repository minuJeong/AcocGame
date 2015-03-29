#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.JsonReader
struct JsonReader_t912;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t877;
// System.Int32[]
struct Int32U5BU5D_t257;
// LitJson.JsonToken
#include "LitJson_LitJson_JsonToken.h"
// LitJson.ParserToken
#include "LitJson_LitJson_ParserToken.h"

// System.Void LitJson.JsonReader::.ctor(System.String)
 void JsonReader__ctor_m4986 (JsonReader_t912 * __this, String_t* ___json_text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader)
 void JsonReader__ctor_m4987 (JsonReader_t912 * __this, TextReader_t877 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
 void JsonReader__ctor_m4988 (JsonReader_t912 * __this, TextReader_t877 * ___reader, bool ___owned, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.cctor()
 void JsonReader__cctor_m4989 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_AllowComments()
 bool JsonReader_get_AllowComments_m4990 (JsonReader_t912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::set_AllowComments(System.Boolean)
 void JsonReader_set_AllowComments_m4991 (JsonReader_t912 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_AllowSingleQuotedStrings()
 bool JsonReader_get_AllowSingleQuotedStrings_m4992 (JsonReader_t912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::set_AllowSingleQuotedStrings(System.Boolean)
 void JsonReader_set_AllowSingleQuotedStrings_m4993 (JsonReader_t912 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_SkipNonMembers()
 bool JsonReader_get_SkipNonMembers_m4994 (JsonReader_t912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::set_SkipNonMembers(System.Boolean)
 void JsonReader_set_SkipNonMembers_m4995 (JsonReader_t912 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_EndOfInput()
 bool JsonReader_get_EndOfInput_m4996 (JsonReader_t912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_EndOfJson()
 bool JsonReader_get_EndOfJson_m4997 (JsonReader_t912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonToken LitJson.JsonReader::get_Token()
 int32_t JsonReader_get_Token_m4998 (JsonReader_t912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonReader::get_Value()
 Object_t * JsonReader_get_Value_m4999 (JsonReader_t912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::PopulateParseTable()
 void JsonReader_PopulateParseTable_m5000 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
 void JsonReader_TableAddCol_m5001 (Object_t * __this/* static, unused */, int32_t ___row, int32_t ___col, Int32U5BU5D_t257* ___symbols, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
 void JsonReader_TableAddRow_m5002 (Object_t * __this/* static, unused */, int32_t ___rule, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
 void JsonReader_ProcessNumber_m5003 (JsonReader_t912 * __this, String_t* ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessSymbol()
 void JsonReader_ProcessSymbol_m5004 (JsonReader_t912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::ReadToken()
 bool JsonReader_ReadToken_m5005 (JsonReader_t912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::Close()
 void JsonReader_Close_m5006 (JsonReader_t912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::Read()
 bool JsonReader_Read_m5007 (JsonReader_t912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
