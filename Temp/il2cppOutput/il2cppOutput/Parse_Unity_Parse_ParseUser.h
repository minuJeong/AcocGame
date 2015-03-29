#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// Parse.ParseUser
struct ParseUser_t391;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>
struct IDictionary_2_t1203;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1178;
// System.String
struct String_t;
// System.Func`1<Parse.ParseUser>
struct Func_1_t1204;
// Parse.ParseObject
#include "Parse_Unity_Parse_ParseObject.h"
// Parse.ParseUser
struct ParseUser_t391  : public ParseObject_t534
{
	// System.String Parse.ParseUser::sessionToken
	String_t* ___sessionToken;
	// System.Boolean Parse.ParseUser::isCurrentUser
	bool ___isCurrentUser;
};
struct ParseUser_t391_StaticFields{
	// System.Object Parse.ParseUser::currentUserMutex
	Object_t * ___currentUserMutex;
	// Parse.ParseUser Parse.ParseUser::currentUser
	ParseUser_t391 * ___currentUser;
	// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider> Parse.ParseUser::authProviders
	Object_t* ___authProviders;
	// System.Collections.Generic.HashSet`1<System.String> Parse.ParseUser::readOnlyKeys
	HashSet_1_t1178 * ___readOnlyKeys;
	// System.Boolean Parse.ParseUser::currentUserMatchesDisk
	bool ___currentUserMatchesDisk;
	// System.Object Parse.ParseUser::isRevocableSessionEnabledMutex
	Object_t * ___isRevocableSessionEnabledMutex;
	// System.Boolean Parse.ParseUser::isRevocableSessionEnabled
	bool ___isRevocableSessionEnabled;
	// System.Func`1<Parse.ParseUser> Parse.ParseUser::CS$<>9__CachedAnonymousMethodDelegate13
	Func_1_t1204 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate13;
};
