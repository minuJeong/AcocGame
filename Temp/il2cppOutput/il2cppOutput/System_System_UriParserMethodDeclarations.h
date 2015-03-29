#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UriParser
struct UriParser_t2825;
// System.String
struct String_t;
// System.Uri
struct Uri_t80;
// System.UriFormatException
struct UriFormatException_t2829;
// System.Collections.Hashtable
struct Hashtable_t48;

// System.Void System.UriParser::.ctor()
 void UriParser__ctor_m9752 (UriParser_t2825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::.cctor()
 void UriParser__cctor_m9753 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
 void UriParser_InitializeAndValidate_m9754 (UriParser_t2825 * __this, Uri_t80 * ___uri, UriFormatException_t2829 ** ___parsingError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
 void UriParser_OnRegister_m9755 (UriParser_t2825 * __this, String_t* ___schemeName, int32_t ___defaultPort, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_SchemeName(System.String)
 void UriParser_set_SchemeName_m9756 (UriParser_t2825 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UriParser::get_DefaultPort()
 int32_t UriParser_get_DefaultPort_m9757 (UriParser_t2825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_DefaultPort(System.Int32)
 void UriParser_set_DefaultPort_m9758 (UriParser_t2825 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::CreateDefaults()
 void UriParser_CreateDefaults_m9759 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
 void UriParser_InternalRegister_m9760 (Object_t * __this/* static, unused */, Hashtable_t48 * ___table, UriParser_t2825 * ___uriParser, String_t* ___schemeName, int32_t ___defaultPort, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.UriParser::GetParser(System.String)
 UriParser_t2825 * UriParser_GetParser_m9761 (Object_t * __this/* static, unused */, String_t* ___schemeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
