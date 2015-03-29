#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.MiniJSON.Json/Parser
struct Parser_t867;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t122;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2;
// Facebook.MiniJSON.Json/Parser/TOKEN
#include "IFacebook_Facebook_MiniJSON_Json_Parser_TOKEN.h"

// System.Void Facebook.MiniJSON.Json/Parser::.ctor(System.String)
 void Parser__ctor_m4656 (Parser_t867 * __this, String_t* ___jsonString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json/Parser::Parse(System.String)
 Object_t * Parser_Parse_m4657 (Object_t * __this/* static, unused */, String_t* ___jsonString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Parser::Dispose()
 void Parser_Dispose_m4658 (Parser_t867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Facebook.MiniJSON.Json/Parser::ParseObject()
 Dictionary_2_t122 * Parser_ParseObject_m4659 (Parser_t867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> Facebook.MiniJSON.Json/Parser::ParseArray()
 List_1_t2 * Parser_ParseArray_m4660 (Parser_t867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json/Parser::ParseValue()
 Object_t * Parser_ParseValue_m4661 (Parser_t867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json/Parser::ParseByToken(Facebook.MiniJSON.Json/Parser/TOKEN)
 Object_t * Parser_ParseByToken_m4662 (Parser_t867 * __this, int32_t ___token, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.MiniJSON.Json/Parser::ParseString()
 String_t* Parser_ParseString_m4663 (Parser_t867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json/Parser::ParseNumber()
 Object_t * Parser_ParseNumber_m4664 (Parser_t867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Parser::EatWhitespace()
 void Parser_EatWhitespace_m4665 (Parser_t867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Facebook.MiniJSON.Json/Parser::get_PeekChar()
 uint16_t Parser_get_PeekChar_m4666 (Parser_t867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Facebook.MiniJSON.Json/Parser::get_NextChar()
 uint16_t Parser_get_NextChar_m4667 (Parser_t867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.MiniJSON.Json/Parser::get_NextWord()
 String_t* Parser_get_NextWord_m4668 (Parser_t867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.MiniJSON.Json/Parser/TOKEN Facebook.MiniJSON.Json/Parser::get_NextToken()
 int32_t Parser_get_NextToken_m4669 (Parser_t867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
