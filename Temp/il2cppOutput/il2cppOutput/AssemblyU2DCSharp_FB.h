#pragma once
#include <stdint.h>
// Facebook.InitDelegate
struct InitDelegate_t116;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t119;
// Facebook.IFacebook
struct IFacebook_t129;
// System.String
struct String_t;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
// FB
struct FB_t150  : public ScriptableObject_t151
{
};
struct FB_t150_StaticFields{
	// Facebook.InitDelegate FB::OnInitComplete
	InitDelegate_t116 * ___OnInitComplete;
	// Facebook.HideUnityDelegate FB::OnHideUnity
	HideUnityDelegate_t119 * ___OnHideUnity;
	// Facebook.IFacebook FB::facebook
	Object_t * ___facebook;
	// System.String FB::authResponse
	String_t* ___authResponse;
	// System.Boolean FB::isInitCalled
	bool ___isInitCalled;
	// System.String FB::appId
	String_t* ___appId;
	// System.Boolean FB::cookie
	bool ___cookie;
	// System.Boolean FB::logging
	bool ___logging;
	// System.Boolean FB::status
	bool ___status;
	// System.Boolean FB::xfbml
	bool ___xfbml;
	// System.Boolean FB::frictionlessRequests
	bool ___frictionlessRequests;
};
