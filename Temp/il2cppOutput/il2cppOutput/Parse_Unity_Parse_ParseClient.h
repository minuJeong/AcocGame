#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4;
// Parse.Internal.IPlatformHooks
struct IPlatformHooks_t1090;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>
struct Dictionary_2_t1091;
// System.Uri
struct Uri_t80;
// System.Func`2<System.Object,System.Object>
struct Func_2_t1092;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,<>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>>
struct Func_2_t1093;
// System.Func`2<<>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>,System.String>
struct Func_2_t1094;
// System.Object
#include "mscorlib_System_Object.h"
// System.Nullable`1<System.Guid>
#include "mscorlib_System_Nullable_1_gen_2.h"
// Parse.ParseClient
struct ParseClient_t1095  : public Object_t
{
};
struct ParseClient_t1095_StaticFields{
	// System.Object Parse.ParseClient::mutex
	Object_t * ___mutex;
	// System.String Parse.ParseClient::versionString
	String_t* ___versionString;
	// System.String Parse.ParseClient::dateFormatString
	String_t* ___dateFormatString;
	// System.String[] Parse.ParseClient::assemblyNames
	StringU5BU5D_t4* ___assemblyNames;
	// Parse.Internal.IPlatformHooks Parse.ParseClient::platformHooks
	Object_t * ___platformHooks;
	// System.String Parse.ParseClient::revocableSessionTokenTrueValue
	String_t* ___revocableSessionTokenTrueValue;
	// System.Nullable`1<System.Guid> Parse.ParseClient::installationId
	Nullable_1_t1096  ___installationId;
	// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type> Parse.ParseClient::interfaceLookupCache
	Dictionary_2_t1091 * ___interfaceLookupCache;
	// System.Uri Parse.ParseClient::<HostName>k__BackingField
	Uri_t80 * ___U3CHostNameU3Ek__BackingField;
	// System.String Parse.ParseClient::<MasterKey>k__BackingField
	String_t* ___U3CMasterKeyU3Ek__BackingField;
	// System.String Parse.ParseClient::<ApplicationId>k__BackingField
	String_t* ___U3CApplicationIdU3Ek__BackingField;
	// System.String Parse.ParseClient::<WindowsKey>k__BackingField
	String_t* ___U3CWindowsKeyU3Ek__BackingField;
	// System.Func`2<System.Object,System.Object> Parse.ParseClient::CS$<>9__CachedAnonymousMethodDelegate1
	Func_2_t1092 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate1;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,<>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>> Parse.ParseClient::CS$<>9__CachedAnonymousMethodDelegate11
	Func_2_t1093 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate11;
	// System.Func`2<<>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>,System.String> Parse.ParseClient::CS$<>9__CachedAnonymousMethodDelegate12
	Func_2_t1094 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate12;
};
