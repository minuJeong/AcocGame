#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t2830;
// System.UriParser
struct UriParser_t2827;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t57;
// System.Object
#include "mscorlib_System_Object.h"
// System.Uri
struct Uri_t80  : public Object_t
{
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath;
	// System.String System.Uri::source
	String_t* ___source;
	// System.String System.Uri::scheme
	String_t* ___scheme;
	// System.String System.Uri::host
	String_t* ___host;
	// System.Int32 System.Uri::port
	int32_t ___port;
	// System.String System.Uri::path
	String_t* ___path;
	// System.String System.Uri::query
	String_t* ___query;
	// System.String System.Uri::fragment
	String_t* ___fragment;
	// System.String System.Uri::userinfo
	String_t* ___userinfo;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode;
	// System.UriParser System.Uri::parser
	UriParser_t2827 * ___parser;
};
struct Uri_t80_StaticFields{
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t2830* ___schemes;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t57 * ___U3CU3Ef__switch$map14;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t57 * ___U3CU3Ef__switch$map15;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t57 * ___U3CU3Ef__switch$map16;
};
