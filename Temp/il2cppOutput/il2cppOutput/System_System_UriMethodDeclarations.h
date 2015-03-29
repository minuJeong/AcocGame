#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Uri
struct Uri_t80;
// System.String
struct String_t;
// System.UriParser
struct UriParser_t2827;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t450;
// System.IO.MemoryStream
struct MemoryStream_t242;
// System.Text.Encoding
struct Encoding_t1422;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.UriKind
#include "System_System_UriKind.h"
// System.UriHostNameType
#include "System_System_UriHostNameType.h"
// System.UriPartial
#include "System_System_UriPartial.h"

// System.Void System.Uri::.ctor(System.String)
 void Uri__ctor_m6466 (Uri_t80 * __this, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Uri__ctor_m9702 (Uri_t80 * __this, SerializationInfo_t2615 * ___serializationInfo, StreamingContext_t2616  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.UriKind)
 void Uri__ctor_m6210 (Uri_t80 * __this, String_t* ___uriString, int32_t ___uriKind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Uri,System.Uri)
 void Uri__ctor_m6481 (Uri_t80 * __this, Uri_t80 * ___baseUri, Uri_t80 * ___relativeUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.Boolean)
 void Uri__ctor_m9703 (Uri_t80 * __this, String_t* ___uriString, bool ___dontEscape, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Uri,System.String)
 void Uri__ctor_m6186 (Uri_t80 * __this, Uri_t80 * ___baseUri, String_t* ___relativeUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.cctor()
 void Uri__cctor_m9704 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m9705 (Uri_t80 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Merge(System.Uri,System.String)
 void Uri_Merge_m9706 (Uri_t80 * __this, Uri_t80 * ___baseUri, String_t* ___relativeUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsoluteUri()
 String_t* Uri_get_AbsoluteUri_m6200 (Uri_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Fragment()
 String_t* Uri_get_Fragment_m6201 (Uri_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsUnc()
 bool Uri_get_IsUnc_m9707 (Uri_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Query()
 String_t* Uri_get_Query_m6202 (Uri_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Scheme()
 String_t* Uri_get_Scheme_m9708 (Uri_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsAbsoluteUri()
 bool Uri_get_IsAbsoluteUri_m9709 (Uri_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_OriginalString()
 String_t* Uri_get_OriginalString_m9710 (Uri_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriHostNameType System.Uri::CheckHostName(System.String)
 int32_t Uri_CheckHostName_m9711 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsIPv4Address(System.String)
 bool Uri_IsIPv4Address_m9712 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsDomainAddress(System.String)
 bool Uri_IsDomainAddress_m9713 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CheckSchemeName(System.String)
 bool Uri_CheckSchemeName_m9714 (Object_t * __this/* static, unused */, String_t* ___schemeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsAlpha(System.Char)
 bool Uri_IsAlpha_m9715 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::Equals(System.Object)
 bool Uri_Equals_m9716 (Uri_t80 * __this, Object_t * ___comparant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::InternalEquals(System.Uri)
 bool Uri_InternalEquals_m9717 (Uri_t80 * __this, Uri_t80 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetHashCode()
 int32_t Uri_GetHashCode_m9718 (Uri_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetLeftPart(System.UriPartial)
 String_t* Uri_GetLeftPart_m9719 (Uri_t80 * __this, int32_t ___part, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::FromHex(System.Char)
 int32_t Uri_FromHex_m9720 (Object_t * __this/* static, unused */, uint16_t ___digit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::HexEscape(System.Char)
 String_t* Uri_HexEscape_m9721 (Object_t * __this/* static, unused */, uint16_t ___character, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexDigit(System.Char)
 bool Uri_IsHexDigit_m9722 (Object_t * __this/* static, unused */, uint16_t ___digit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
 bool Uri_IsHexEncoding_m9723 (Object_t * __this/* static, unused */, String_t* ___pattern, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
 void Uri_AppendQueryAndFragment_m9724 (Uri_t80 * __this, String_t** ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ToString()
 String_t* Uri_ToString_m9725 (Uri_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String)
 String_t* Uri_EscapeString_m9726 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
 String_t* Uri_EscapeString_m9727 (Object_t * __this/* static, unused */, String_t* ___str, bool ___escapeReserved, bool ___escapeHex, bool ___escapeBrackets, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseUri(System.UriKind)
 void Uri_ParseUri_m9728 (Uri_t80 * __this, int32_t ___kind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String)
 String_t* Uri_Unescape_m9729 (Uri_t80 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String,System.Boolean)
 String_t* Uri_Unescape_m9730 (Object_t * __this/* static, unused */, String_t* ___str, bool ___excludeSpecial, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
 void Uri_ParseAsWindowsUNC_m9731 (Uri_t80 * __this, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
 String_t* Uri_ParseAsWindowsAbsoluteFilePath_m9732 (Uri_t80 * __this, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
 void Uri_ParseAsUnixAbsoluteFilePath_m9733 (Uri_t80 * __this, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Parse(System.UriKind,System.String)
 void Uri_Parse_m9734 (Uri_t80 * __this, int32_t ___kind, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
 String_t* Uri_ParseNoExceptions_m9735 (Uri_t80 * __this, int32_t ___kind, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CompactEscaped(System.String)
 bool Uri_CompactEscaped_m9736 (Object_t * __this/* static, unused */, String_t* ___scheme, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Reduce(System.String,System.Boolean)
 String_t* Uri_Reduce_m9737 (Object_t * __this/* static, unused */, String_t* ___path, bool ___compact_escaped, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
 uint16_t Uri_HexUnescapeMultiByte_m9738 (Object_t * __this/* static, unused */, String_t* ___pattern, int32_t* ___index, uint16_t* ___surrogate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetSchemeDelimiter(System.String)
 String_t* Uri_GetSchemeDelimiter_m9739 (Object_t * __this/* static, unused */, String_t* ___scheme, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetDefaultPort(System.String)
 int32_t Uri_GetDefaultPort_m9740 (Object_t * __this/* static, unused */, String_t* ___scheme, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
 String_t* Uri_GetOpaqueWiseSchemeDelimiter_m9741 (Uri_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
 bool Uri_IsPredefinedScheme_m9742 (Object_t * __this/* static, unused */, String_t* ___scheme, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.Uri::get_Parser()
 UriParser_t2827 * Uri_get_Parser_m9743 (Uri_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::NeedToEscapeDataChar(System.Char)
 bool Uri_NeedToEscapeDataChar_m9744 (Object_t * __this/* static, unused */, uint16_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeDataString(System.String)
 String_t* Uri_EscapeDataString_m456 (Object_t * __this/* static, unused */, String_t* ___stringToEscape, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::NeedToEscapeUriChar(System.Char)
 bool Uri_NeedToEscapeUriChar_m9745 (Object_t * __this/* static, unused */, uint16_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeUriString(System.String)
 String_t* Uri_EscapeUriString_m9746 (Object_t * __this/* static, unused */, String_t* ___stringToEscape, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::UnescapeDataString(System.String)
 String_t* Uri_UnescapeDataString_m6492 (Object_t * __this/* static, unused */, String_t* ___stringToUnescape, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetInt(System.Byte)
 int32_t Uri_GetInt_m9747 (Object_t * __this/* static, unused */, uint8_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetChar(System.String,System.Int32,System.Int32)
 int32_t Uri_GetChar_m9748 (Object_t * __this/* static, unused */, String_t* ___str, int32_t ___offset, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.Uri::GetChars(System.IO.MemoryStream,System.Text.Encoding)
 CharU5BU5D_t450* Uri_GetChars_m9749 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___b, Encoding_t1422 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::EnsureAbsoluteUri()
 void Uri_EnsureAbsoluteUri_m9750 (Uri_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
 bool Uri_op_Equality_m9751 (Object_t * __this/* static, unused */, Uri_t80 * ___u1, Uri_t80 * ___u2, MethodInfo* method) IL2CPP_METHOD_ATTR;
