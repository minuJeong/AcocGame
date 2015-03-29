#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.SecurityParser
struct SecurityParser_t3251;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t3166;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t3252;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t3253;

// System.Void Mono.Xml.SecurityParser::.ctor()
 void SecurityParser__ctor_m11496 (SecurityParser_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::LoadXml(System.String)
 void SecurityParser_LoadXml_m11497 (SecurityParser_t3251 * __this, String_t* ___xml, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement Mono.Xml.SecurityParser::ToXml()
 SecurityElement_t3166 * SecurityParser_ToXml_m11498 (SecurityParser_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartParsing(Mono.Xml.SmallXmlParser)
 void SecurityParser_OnStartParsing_m11499 (SecurityParser_t3251 * __this, SmallXmlParser_t3252 * ___parser, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnProcessingInstruction(System.String,System.String)
 void SecurityParser_OnProcessingInstruction_m11500 (SecurityParser_t3251 * __this, String_t* ___name, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnIgnorableWhitespace(System.String)
 void SecurityParser_OnIgnorableWhitespace_m11501 (SecurityParser_t3251 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
 void SecurityParser_OnStartElement_m11502 (SecurityParser_t3251 * __this, String_t* ___name, Object_t * ___attrs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndElement(System.String)
 void SecurityParser_OnEndElement_m11503 (SecurityParser_t3251 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnChars(System.String)
 void SecurityParser_OnChars_m11504 (SecurityParser_t3251 * __this, String_t* ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndParsing(Mono.Xml.SmallXmlParser)
 void SecurityParser_OnEndParsing_m11505 (SecurityParser_t3251 * __this, SmallXmlParser_t3252 * ___parser, MethodInfo* method) IL2CPP_METHOD_ATTR;
