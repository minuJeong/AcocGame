#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t3166;
// System.Collections.Stack
struct Stack_t2648;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct SecurityParser_t3251  : public SmallXmlParser_t3252
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t3166 * ___root;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t3166 * ___current;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t2648 * ___stack;
};
