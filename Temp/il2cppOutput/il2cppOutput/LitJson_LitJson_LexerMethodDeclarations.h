#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.Lexer
struct Lexer_t916;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t877;
// LitJson.FsmContext
struct FsmContext_t921;

// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
 void Lexer__ctor_m5046 (Lexer_t916 * __this, TextReader_t877 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::.cctor()
 void Lexer__cctor_m5047 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::get_AllowComments()
 bool Lexer_get_AllowComments_m5048 (Lexer_t916 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::set_AllowComments(System.Boolean)
 void Lexer_set_AllowComments_m5049 (Lexer_t916 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::get_AllowSingleQuotedStrings()
 bool Lexer_get_AllowSingleQuotedStrings_m5050 (Lexer_t916 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::set_AllowSingleQuotedStrings(System.Boolean)
 void Lexer_set_AllowSingleQuotedStrings_m5051 (Lexer_t916 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::get_EndOfInput()
 bool Lexer_get_EndOfInput_m5052 (Lexer_t916 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::get_Token()
 int32_t Lexer_get_Token_m5053 (Lexer_t916 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.Lexer::get_StringValue()
 String_t* Lexer_get_StringValue_m5054 (Lexer_t916 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
 int32_t Lexer_HexValue_m5055 (Object_t * __this/* static, unused */, int32_t ___digit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::PopulateFsmTables()
 void Lexer_PopulateFsmTables_m5056 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
 uint16_t Lexer_ProcessEscChar_m5057 (Object_t * __this/* static, unused */, int32_t ___esc_char, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
 bool Lexer_State1_m5058 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
 bool Lexer_State2_m5059 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
 bool Lexer_State3_m5060 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
 bool Lexer_State4_m5061 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
 bool Lexer_State5_m5062 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
 bool Lexer_State6_m5063 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
 bool Lexer_State7_m5064 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
 bool Lexer_State8_m5065 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
 bool Lexer_State9_m5066 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
 bool Lexer_State10_m5067 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
 bool Lexer_State11_m5068 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
 bool Lexer_State12_m5069 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
 bool Lexer_State13_m5070 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
 bool Lexer_State14_m5071 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
 bool Lexer_State15_m5072 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
 bool Lexer_State16_m5073 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
 bool Lexer_State17_m5074 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
 bool Lexer_State18_m5075 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
 bool Lexer_State19_m5076 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
 bool Lexer_State20_m5077 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
 bool Lexer_State21_m5078 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
 bool Lexer_State22_m5079 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
 bool Lexer_State23_m5080 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
 bool Lexer_State24_m5081 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
 bool Lexer_State25_m5082 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
 bool Lexer_State26_m5083 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
 bool Lexer_State27_m5084 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
 bool Lexer_State28_m5085 (Object_t * __this/* static, unused */, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::GetChar()
 bool Lexer_GetChar_m5086 (Lexer_t916 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::NextChar()
 int32_t Lexer_NextChar_m5087 (Lexer_t916 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::NextToken()
 bool Lexer_NextToken_m5088 (Lexer_t916 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::UngetChar()
 void Lexer_UngetChar_m5089 (Lexer_t916 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
