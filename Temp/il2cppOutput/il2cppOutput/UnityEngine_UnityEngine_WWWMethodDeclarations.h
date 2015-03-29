#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWW
struct WWW_t135;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t123;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t1422;
// System.Byte[]
struct ByteU5BU5D_t21;
// UnityEngine.Texture2D
struct Texture2D_t62;
// UnityEngine.AssetBundle
struct AssetBundle_t414;
// UnityEngine.WWWForm
struct WWWForm_t153;
// System.String[]
struct StringU5BU5D_t4;

// System.Void UnityEngine.WWW::.ctor(System.String)
 void WWW__ctor_m2048 (WWW_t135 * __this, String_t* ___url, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
 void WWW__ctor_m4717 (WWW_t135 * __this, String_t* ___url, WWWForm_t153 * ___form, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String,System.Byte[],System.Collections.Generic.Dictionary`2<System.String,System.String>)
 void WWW__ctor_m6933 (WWW_t135 * __this, String_t* ___url, ByteU5BU5D_t21* ___postData, Dictionary_2_t123 * ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
 void WWW_Dispose_m2091 (WWW_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
 void WWW_Finalize_m8493 (WWW_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
 void WWW_DestroyWWW_m8494 (WWW_t135 * __this, bool ___cancel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
 void WWW_InitWWW_m8495 (WWW_t135 * __this, String_t* ___url, ByteU5BU5D_t21* ___postData, StringU5BU5D_t4* ___iHeaders, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
 Dictionary_2_t123 * WWW_get_responseHeaders_m8496 (WWW_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_responseHeadersString()
 String_t* WWW_get_responseHeadersString_m8497 (WWW_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_text()
 String_t* WWW_get_text_m2094 (WWW_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
 Encoding_t1422 * WWW_get_DefaultEncoding_m8498 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
 Encoding_t1422 * WWW_GetTextEncoder_m8499 (WWW_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWW::get_bytes()
 ByteU5BU5D_t21* WWW_get_bytes_m2093 (WWW_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
 String_t* WWW_get_error_m2049 (WWW_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::GetTexture(System.Boolean)
 Texture2D_t62 * WWW_GetTexture_m8500 (WWW_t135 * __this, bool ___markNonReadable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::get_texture()
 Texture2D_t62 * WWW_get_texture_m4733 (WWW_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWW::get_isDone()
 bool WWW_get_isDone_m6918 (WWW_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.WWW::get_progress()
 float WWW_get_progress_m6925 (WWW_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AssetBundle UnityEngine.WWW::get_assetBundle()
 AssetBundle_t414 * WWW_get_assetBundle_m2050 (WWW_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
 StringU5BU5D_t4* WWW_FlattenedHeadersFrom_m8501 (Object_t * __this/* static, unused */, Dictionary_2_t123 * ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
 Dictionary_2_t123 * WWW_ParseHTTPHeaderString_m8502 (Object_t * __this/* static, unused */, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
