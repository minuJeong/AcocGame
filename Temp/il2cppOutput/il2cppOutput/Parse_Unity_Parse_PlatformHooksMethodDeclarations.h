#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.PlatformHooks
struct PlatformHooks_t1222;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2;
// UnityEngine.WWW
struct WWW_t135;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Collections.Hashtable
struct Hashtable_t48;
// System.Action`1<UnityEngine.WWW>
struct Action_1_t1209;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1006;
// System.Uri
struct Uri_t80;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IList_1_t1098;
// System.IO.Stream
struct Stream_t990;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t1100;
// System.Action
struct Action_t1220;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1144;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.String Parse.PlatformHooks::get_SDKName()
 String_t* PlatformHooks_get_SDKName_m5992 (PlatformHooks_t1222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.PlatformHooks::get_ApplicationSettings()
 Object_t* PlatformHooks_get_ApplicationSettings_m5993 (PlatformHooks_t1222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> Parse.PlatformHooks::CreateWrapperTypes()
 List_1_t2 * PlatformHooks_CreateWrapperTypes_m5994 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW Parse.PlatformHooks::GenerateWWWInstance(System.String,System.Byte[],System.Collections.Hashtable)
 WWW_t135 * PlatformHooks_GenerateWWWInstance_m5995 (Object_t * __this/* static, unused */, String_t* ___uri, ByteU5BU5D_t21* ___bytes, Hashtable_t48 * ___headerTable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::RegisterNetworkRequest(UnityEngine.WWW,System.Action`1<UnityEngine.WWW>)
 void PlatformHooks_RegisterNetworkRequest_m5996 (Object_t * __this/* static, unused */, WWW_t135 * ___www, Action_1_t1209 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.PlatformHooks::RequestAsync(System.Uri,System.String,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.IO.Stream,System.String,System.Threading.CancellationToken)
 Task_1_t1006 * PlatformHooks_RequestAsync_m5997 (PlatformHooks_t1222 * __this, Uri_t80 * ___uri, String_t* ___method, Object_t* ___headers, Stream_t990 * ___data, String_t* ___contentType, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.PlatformHooks::UploadAsync(System.Uri,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.IO.Stream,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
 Task_1_t1006 * PlatformHooks_UploadAsync_m5998 (PlatformHooks_t1222 * __this, Uri_t80 * ___uri, Object_t* ___headers, Stream_t990 * ___data, Object_t* ___progress, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.PlatformHooks::RequestAsync(System.Uri,System.String,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.IO.Stream,System.String,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
 Task_1_t1006 * PlatformHooks_RequestAsync_m5999 (PlatformHooks_t1222 * __this, Uri_t80 * ___uri, String_t* ___method, Object_t* ___headers, Stream_t990 * ___data, String_t* ___contentType, Object_t* ___progress, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::RunOnMainThread(System.Action)
 void PlatformHooks_RunOnMainThread_m6000 (Object_t * __this/* static, unused */, Action_t1220 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.PlatformHooks::RunDispatcher()
 Object_t * PlatformHooks_RunDispatcher_m6001 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::Initialize()
 void PlatformHooks_Initialize_m6002 (PlatformHooks_t1222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::ClearInMemoryInstallation()
 void PlatformHooks_ClearInMemoryInstallation_m6003 (PlatformHooks_t1222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::.ctor()
 void PlatformHooks__ctor_m6004 (PlatformHooks_t1222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__1()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__1_m6005 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__2()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__2_m6006 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__3()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__3_m6007 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__4()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__4_m6008 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__5()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__5_m6009 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__6()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__6_m6010 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__7()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__7_m6011 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__8()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__8_m6012 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__9()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__9_m6013 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__a()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__a_m6014 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__b()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__b_m6015 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__c()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__c_m6016 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__d()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__d_m6017 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__e()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__e_m6018 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__f()
 void PlatformHooks_U3CCreateWrapperTypesU3Eb__f_m6019 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Object> Parse.PlatformHooks::<RequestAsync>b__2c(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>)
 Task_1_t1144 * PlatformHooks_U3CRequestAsyncU3Eb__2c_m6020 (Object_t * __this/* static, unused */, Task_1_t1006 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::.cctor()
 void PlatformHooks__cctor_m6021 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
