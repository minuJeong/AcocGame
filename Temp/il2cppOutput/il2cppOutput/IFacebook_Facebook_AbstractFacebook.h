#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<Facebook.FacebookDelegate>
struct List_1_t855;
// System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>
struct Dictionary_2_t856;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Facebook.AbstractFacebook
struct AbstractFacebook_t118  : public MonoBehaviour_t58
{
	// System.Boolean Facebook.AbstractFacebook::isInitialized
	bool ___isInitialized;
	// System.Boolean Facebook.AbstractFacebook::isLoggedIn
	bool ___isLoggedIn;
	// System.String Facebook.AbstractFacebook::userId
	String_t* ___userId;
	// System.String Facebook.AbstractFacebook::accessToken
	String_t* ___accessToken;
	// System.DateTime Facebook.AbstractFacebook::accessTokenExpiresAt
	DateTime_t126  ___accessTokenExpiresAt;
	// System.Boolean Facebook.AbstractFacebook::limitEventUsage
	bool ___limitEventUsage;
	// System.Collections.Generic.List`1<Facebook.FacebookDelegate> Facebook.AbstractFacebook::authDelegates
	List_1_t855 * ___authDelegates;
	// System.Int32 Facebook.AbstractFacebook::nextAsyncId
	int32_t ___nextAsyncId;
	// System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate> Facebook.AbstractFacebook::facebookDelegates
	Dictionary_2_t856 * ___facebookDelegates;
};
