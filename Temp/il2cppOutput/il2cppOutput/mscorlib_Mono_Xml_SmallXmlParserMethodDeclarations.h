#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t3251;
// System.Exception
struct Exception_t107;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t877;
// Mono.Xml.SmallXmlParser/IContentHandler
struct IContentHandler_t3254;
// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t3253;

// System.Void Mono.Xml.SmallXmlParser::.ctor()
 void SmallXmlParser__ctor_m11509 (SmallXmlParser_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::Error(System.String)
 Exception_t107 * SmallXmlParser_Error_m11510 (SmallXmlParser_t3251 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::UnexpectedEndError()
 Exception_t107 * SmallXmlParser_UnexpectedEndError_m11511 (SmallXmlParser_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsNameChar(System.Char,System.Boolean)
 bool SmallXmlParser_IsNameChar_m11512 (SmallXmlParser_t3251 * __this, uint16_t ___c, bool ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsWhitespace(System.Int32)
 bool SmallXmlParser_IsWhitespace_m11513 (SmallXmlParser_t3251 * __this, int32_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces()
 void SmallXmlParser_SkipWhitespaces_m11514 (SmallXmlParser_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleWhitespaces()
 void SmallXmlParser_HandleWhitespaces_m11515 (SmallXmlParser_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces(System.Boolean)
 void SmallXmlParser_SkipWhitespaces_m11516 (SmallXmlParser_t3251 * __this, bool ___expected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Peek()
 int32_t SmallXmlParser_Peek_m11517 (SmallXmlParser_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Read()
 int32_t SmallXmlParser_Read_m11518 (SmallXmlParser_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Expect(System.Int32)
 void SmallXmlParser_Expect_m11519 (SmallXmlParser_t3251 * __this, int32_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadUntil(System.Char,System.Boolean)
 String_t* SmallXmlParser_ReadUntil_m11520 (SmallXmlParser_t3251 * __this, uint16_t ___until, bool ___handleReferences, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadName()
 String_t* SmallXmlParser_ReadName_m11521 (SmallXmlParser_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Parse(System.IO.TextReader,Mono.Xml.SmallXmlParser/IContentHandler)
 void SmallXmlParser_Parse_m11522 (SmallXmlParser_t3251 * __this, TextReader_t877 * ___input, Object_t * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Cleanup()
 void SmallXmlParser_Cleanup_m11523 (SmallXmlParser_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadContent()
 void SmallXmlParser_ReadContent_m11524 (SmallXmlParser_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleBufferedContent()
 void SmallXmlParser_HandleBufferedContent_m11525 (SmallXmlParser_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCharacters()
 void SmallXmlParser_ReadCharacters_m11526 (SmallXmlParser_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadReference()
 void SmallXmlParser_ReadReference_m11527 (SmallXmlParser_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::ReadCharacterReference()
 int32_t SmallXmlParser_ReadCharacterReference_m11528 (SmallXmlParser_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadAttribute(Mono.Xml.SmallXmlParser/AttrListImpl)
 void SmallXmlParser_ReadAttribute_m11529 (SmallXmlParser_t3251 * __this, AttrListImpl_t3253 * ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCDATASection()
 void SmallXmlParser_ReadCDATASection_m11530 (SmallXmlParser_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadComment()
 void SmallXmlParser_ReadComment_m11531 (SmallXmlParser_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
