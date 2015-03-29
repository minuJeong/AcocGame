#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseClient
struct ParseClient_t1095;
// System.Uri
struct Uri_t80;
// System.String
struct String_t;
// System.Version
struct Version_t1097;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1031;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1006;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IList_1_t1098;
// System.IO.Stream
struct Stream_t990;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1099;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t1100;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1003;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1034;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1088;
// <>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>
struct U3CU3Ef__AnonymousType2_2_t1101;
// System.Nullable`1<System.Guid>
#include "mscorlib_System_Nullable_1_gen_2.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Uri Parse.ParseClient::get_HostName()
 Uri_t80 * ParseClient_get_HostName_m5582 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_HostName(System.Uri)
 void ParseClient_set_HostName_m5583 (Object_t * __this/* static, unused */, Uri_t80 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::get_MasterKey()
 String_t* ParseClient_get_MasterKey_m5584 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_MasterKey(System.String)
 void ParseClient_set_MasterKey_m5585 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::get_ApplicationId()
 String_t* ParseClient_get_ApplicationId_m5586 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_ApplicationId(System.String)
 void ParseClient_set_ApplicationId_m5587 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::get_WindowsKey()
 String_t* ParseClient_get_WindowsKey_m5588 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_WindowsKey(System.String)
 void ParseClient_set_WindowsKey_m5589 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::.cctor()
 void ParseClient__cctor_m5590 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.ParseClient::GetParseType(System.String)
 Type_t * ParseClient_GetParseType_m5591 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version Parse.ParseClient::get_Version()
 Version_t1097 * ParseClient_get_Version_m5592 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::Initialize(System.String,System.String)
 void ParseClient_Initialize_m5593 (Object_t * __this/* static, unused */, String_t* ___applicationId, String_t* ___dotnetKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Guid> Parse.ParseClient::get_InstallationId()
 Nullable_1_t1096  ParseClient_get_InstallationId_m5594 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_InstallationId(System.Nullable`1<System.Guid>)
 void ParseClient_set_InstallationId_m5595 (Object_t * __this/* static, unused */, Nullable_1_t1096  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseClient::Decode(System.Object)
 Object_t * ParseClient_Decode_m5596 (Object_t * __this/* static, unused */, Object_t * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Parse.ParseClient::ParseDate(System.String)
 DateTime_t126  ParseClient_ParseDate_m5597 (Object_t * __this/* static, unused */, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseClient::IsContainerObject(System.Object)
 bool ParseClient_IsContainerObject_m5598 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseClient::MaybeEncodeJSONObject(System.Object,System.Boolean)
 Object_t * ParseClient_MaybeEncodeJSONObject_m5599 (Object_t * __this/* static, unused */, Object_t * ___value, bool ___allowParseObjects, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseClient::EncodeJSONObject(System.Object,System.Boolean)
 Object_t* ParseClient_EncodeJSONObject_m5600 (Object_t * __this/* static, unused */, Object_t * ___value, bool ___allowParseObjects, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseClient::EncodeJSONArray(System.Collections.Generic.IList`1<System.Object>,System.Boolean)
 Object_t * ParseClient_EncodeJSONArray_m5601 (Object_t * __this/* static, unused */, Object_t* ___list, bool ___allowParseObjects, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.ParseClient::RequestAsync(System.Uri,System.String,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.IO.Stream,System.String,System.Threading.CancellationToken)
 Task_1_t1006 * ParseClient_RequestAsync_m5602 (Object_t * __this/* static, unused */, Uri_t80 * ___uri, String_t* ___method, Object_t* ___headers, Stream_t990 * ___data, String_t* ___contentType, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>> Parse.ParseClient::RequestAsync(System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
 Task_1_t1099 * ParseClient_RequestAsync_m5603 (Object_t * __this/* static, unused */, String_t* ___method, String_t* ___relativeUri, String_t* ___sessionToken, Object_t* ___data, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>> Parse.ParseClient::RequestAsync(System.String,System.Uri,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
 Task_1_t1099 * ParseClient_RequestAsync_m5604 (Object_t * __this/* static, unused */, String_t* ___method, Uri_t80 * ___relativeUri, String_t* ___sessionToken, Object_t* ___data, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>> Parse.ParseClient::UploadAsync(System.Uri,System.String,System.String,System.IO.Stream,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
 Task_1_t1099 * ParseClient_UploadAsync_m5605 (Object_t * __this/* static, unused */, Uri_t80 * ___relativeUri, String_t* ___sessionToken, String_t* ___contentType, Stream_t990 * ___data, Object_t* ___progress, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.ParseClient::GetInterfaceType(System.Type,System.Type)
 Type_t * ParseClient_GetInterfaceType_m5606 (Object_t * __this/* static, unused */, Type_t * ___objType, Type_t * ___genericInterfaceType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::BuildQueryString(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 String_t* ParseClient_BuildQueryString_m5607 (Object_t * __this/* static, unused */, Object_t* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Parse.ParseClient::DecodeQueryString(System.String)
 Object_t* ParseClient_DecodeQueryString_m5608 (Object_t * __this/* static, unused */, String_t* ___queryString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseClient::IsValidType(System.Object)
 bool ParseClient_IsValidType_m5609 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseClient::DeserializeJsonString(System.String)
 Object_t* ParseClient_DeserializeJsonString_m5610 (Object_t * __this/* static, unused */, String_t* ___jsonData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::SerializeJsonString(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 String_t* ParseClient_SerializeJsonString_m5611 (Object_t * __this/* static, unused */, Object_t* ___jsonData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseClient::get_ApplicationSettings()
 Object_t* ParseClient_get_ApplicationSettings_m5612 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::ClearInMemoryInstallation()
 void ParseClient_ClearInMemoryInstallation_m5613 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Parse.ParseClient::DeepTraversal(System.Object,System.Boolean,System.Boolean)
 Object_t* ParseClient_DeepTraversal_m5614 (Object_t * __this/* static, unused */, Object_t * ___root, bool ___traverseParseObjects, bool ___yieldRoot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Parse.ParseClient::DeepTraversalInternal(System.Object,System.Boolean,System.Collections.Generic.ICollection`1<System.Object>)
 Object_t* ParseClient_DeepTraversalInternal_m5615 (Object_t * __this/* static, unused */, Object_t * ___root, bool ___traverseParseObjects, Object_t* ___seen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseClient::<Decode>b__0(System.Object)
 Object_t * ParseClient_U3CDecodeU3Eb__0_m5616 (Object_t * __this/* static, unused */, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// <>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String> Parse.ParseClient::<BuildQueryString>b__f(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
 U3CU3Ef__AnonymousType2_2_t1101 * ParseClient_U3CBuildQueryStringU3Eb__f_m5617 (Object_t * __this/* static, unused */, KeyValuePair_2_t410  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::<BuildQueryString>b__10(<>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>)
 String_t* ParseClient_U3CBuildQueryStringU3Eb__10_m5618 (Object_t * __this/* static, unused */, U3CU3Ef__AnonymousType2_2_t1101 * ___U3CU3Eh__TransparentIdentifiere, MethodInfo* method) IL2CPP_METHOD_ATTR;
