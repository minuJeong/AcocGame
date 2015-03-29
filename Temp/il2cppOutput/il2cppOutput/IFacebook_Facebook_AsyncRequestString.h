#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Facebook.HttpMethod
struct HttpMethod_t152;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t123;
// UnityEngine.WWWForm
struct WWWForm_t153;
// Facebook.FacebookDelegate
struct FacebookDelegate_t115;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Facebook.AsyncRequestString
struct AsyncRequestString_t857  : public MonoBehaviour_t58
{
	// System.String Facebook.AsyncRequestString::url
	String_t* ___url;
	// Facebook.HttpMethod Facebook.AsyncRequestString::method
	HttpMethod_t152 * ___method;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.AsyncRequestString::formData
	Dictionary_2_t123 * ___formData;
	// UnityEngine.WWWForm Facebook.AsyncRequestString::query
	WWWForm_t153 * ___query;
	// Facebook.FacebookDelegate Facebook.AsyncRequestString::callback
	FacebookDelegate_t115 * ___callback;
};
