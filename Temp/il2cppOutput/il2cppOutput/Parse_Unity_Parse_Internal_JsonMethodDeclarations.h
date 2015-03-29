#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.Json
struct Json_t1030;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1031;
// System.Text.RegularExpressions.Regex
struct Regex_t1028;
// System.Text.RegularExpressions.Match
struct Match_t1032;

// System.Object Parse.Internal.Json::Parse(System.String)
 Object_t * Json_Parse_m5368 (Object_t * __this/* static, unused */, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.Json::Encode(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 String_t* Json_Encode_m5369 (Object_t * __this/* static, unused */, Object_t* ___dict, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.Json::Encode(System.Collections.Generic.IList`1<System.Object>)
 String_t* Json_Encode_m5370 (Object_t * __this/* static, unused */, Object_t* ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.Json::Encode(System.Object)
 String_t* Json_Encode_m5371 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json::ParseObject(System.String,System.Int32,System.Int32&,System.Object&)
 bool Json_ParseObject_m5372 (Object_t * __this/* static, unused */, String_t* ___input, int32_t ___start, int32_t* ___consumed, Object_t ** ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json::ParseMember(System.String,System.Int32,System.Int32&,System.Object&)
 bool Json_ParseMember_m5373 (Object_t * __this/* static, unused */, String_t* ___input, int32_t ___start, int32_t* ___consumed, Object_t ** ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json::ParseArray(System.String,System.Int32,System.Int32&,System.Object&)
 bool Json_ParseArray_m5374 (Object_t * __this/* static, unused */, String_t* ___input, int32_t ___start, int32_t* ___consumed, Object_t ** ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json::ParseValue(System.String,System.Int32,System.Int32&,System.Object&)
 bool Json_ParseValue_m5375 (Object_t * __this/* static, unused */, String_t* ___input, int32_t ___start, int32_t* ___consumed, Object_t ** ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json::ParseString(System.String,System.Int32,System.Int32&,System.Object&)
 bool Json_ParseString_m5376 (Object_t * __this/* static, unused */, String_t* ___input, int32_t ___start, int32_t* ___consumed, Object_t ** ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json::ParseNumber(System.String,System.Int32,System.Int32&,System.Object&)
 bool Json_ParseNumber_m5377 (Object_t * __this/* static, unused */, String_t* ___input, int32_t ___start, int32_t* ___consumed, Object_t ** ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json::Accept(System.String,System.Int32,System.Text.RegularExpressions.Regex,System.Int32&,System.Text.RegularExpressions.Match&)
 bool Json_Accept_m5378 (Object_t * __this/* static, unused */, String_t* ___input, int32_t ___start, Regex_t1028 * ___matcher, int32_t* ___consumed, Match_t1032 ** ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json::.ctor()
 void Json__ctor_m5379 (Json_t1030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.Json::<Encode>b__0(System.Text.RegularExpressions.Match)
 String_t* Json_U3CEncodeU3Eb__0_m5380 (Object_t * __this/* static, unused */, Match_t1032 * ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json::.cctor()
 void Json__cctor_m5381 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
