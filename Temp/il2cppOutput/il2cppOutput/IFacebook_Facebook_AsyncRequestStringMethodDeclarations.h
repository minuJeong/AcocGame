#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.AsyncRequestString
struct AsyncRequestString_t857;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t123;
// Facebook.FacebookDelegate
struct FacebookDelegate_t115;
// Facebook.HttpMethod
struct HttpMethod_t152;
// UnityEngine.WWWForm
struct WWWForm_t153;
// System.Collections.IEnumerator
struct IEnumerator_t60;

// System.Void Facebook.AsyncRequestString::.ctor()
 void AsyncRequestString__ctor_m4617 (AsyncRequestString_t857 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AsyncRequestString::Post(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
 void AsyncRequestString_Post_m4618 (Object_t * __this/* static, unused */, String_t* ___url, Dictionary_2_t123 * ___formData, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AsyncRequestString::Get(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
 void AsyncRequestString_Get_m4619 (Object_t * __this/* static, unused */, String_t* ___url, Dictionary_2_t123 * ___formData, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AsyncRequestString::Request(System.String,Facebook.HttpMethod,UnityEngine.WWWForm,Facebook.FacebookDelegate)
 void AsyncRequestString_Request_m4620 (Object_t * __this/* static, unused */, String_t* ___url, HttpMethod_t152 * ___method, WWWForm_t153 * ___query, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AsyncRequestString::Request(System.String,Facebook.HttpMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
 void AsyncRequestString_Request_m4621 (Object_t * __this/* static, unused */, String_t* ___url, HttpMethod_t152 * ___method, Dictionary_2_t123 * ___formData, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Facebook.AsyncRequestString::Start()
 Object_t * AsyncRequestString_Start_m4622 (AsyncRequestString_t857 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetUrl(System.String)
 AsyncRequestString_t857 * AsyncRequestString_SetUrl_m4623 (AsyncRequestString_t857 * __this, String_t* ___url, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetMethod(Facebook.HttpMethod)
 AsyncRequestString_t857 * AsyncRequestString_SetMethod_m4624 (AsyncRequestString_t857 * __this, HttpMethod_t152 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetFormData(System.Collections.Generic.Dictionary`2<System.String,System.String>)
 AsyncRequestString_t857 * AsyncRequestString_SetFormData_m4625 (AsyncRequestString_t857 * __this, Dictionary_2_t123 * ___formData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetQuery(UnityEngine.WWWForm)
 AsyncRequestString_t857 * AsyncRequestString_SetQuery_m4626 (AsyncRequestString_t857 * __this, WWWForm_t153 * ___query, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetCallback(Facebook.FacebookDelegate)
 AsyncRequestString_t857 * AsyncRequestString_SetCallback_m4627 (AsyncRequestString_t857 * __this, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
