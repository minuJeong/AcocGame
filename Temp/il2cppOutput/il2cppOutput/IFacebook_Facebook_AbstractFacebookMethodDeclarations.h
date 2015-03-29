#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.AbstractFacebook
struct AbstractFacebook_t118;
// System.String
struct String_t;
// Facebook.InitDelegate
struct InitDelegate_t116;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t119;
// Facebook.FacebookDelegate
struct FacebookDelegate_t115;
// System.String[]
struct StringU5BU5D_t4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2;
// Facebook.OGActionType
struct OGActionType_t120;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t121;
// Facebook.HttpMethod
struct HttpMethod_t152;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t123;
// UnityEngine.WWWForm
struct WWWForm_t153;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t122;
// FBResult
struct FBResult_t134;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen_0.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_1.h"

// System.Void Facebook.AbstractFacebook::.ctor()
 void AbstractFacebook__ctor_m1968 (AbstractFacebook_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::Awake()
 void AbstractFacebook_Awake_m4608 (AbstractFacebook_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::OnAwake()
// System.Boolean Facebook.AbstractFacebook::get_IsInitialized()
 bool AbstractFacebook_get_IsInitialized_m2024 (AbstractFacebook_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.AbstractFacebook::get_IsLoggedIn()
 bool AbstractFacebook_get_IsLoggedIn_m2025 (AbstractFacebook_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AbstractFacebook::get_UserId()
 String_t* AbstractFacebook_get_UserId_m2021 (AbstractFacebook_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::set_UserId(System.String)
 void AbstractFacebook_set_UserId_m2035 (AbstractFacebook_t118 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AbstractFacebook::get_AccessToken()
 String_t* AbstractFacebook_get_AccessToken_m2022 (AbstractFacebook_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::set_AccessToken(System.String)
 void AbstractFacebook_set_AccessToken_m2030 (AbstractFacebook_t118 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.AbstractFacebook::get_AccessTokenExpiresAt()
 DateTime_t126  AbstractFacebook_get_AccessTokenExpiresAt_m2023 (AbstractFacebook_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Facebook.AbstractFacebook::get_DialogMode()
// System.Void Facebook.AbstractFacebook::set_DialogMode(System.Int32)
// System.Boolean Facebook.AbstractFacebook::get_LimitEventUsage()
// System.Void Facebook.AbstractFacebook::set_LimitEventUsage(System.Boolean)
// System.Void Facebook.AbstractFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
// System.Void Facebook.AbstractFacebook::Login(System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::Logout()
// System.Void Facebook.AbstractFacebook::GetAuthResponse(Facebook.FacebookDelegate)
 void AbstractFacebook_GetAuthResponse_m2026 (AbstractFacebook_t118 * __this, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::AppRequest(System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
 void AbstractFacebook_AppRequest_m2027 (AbstractFacebook_t118 * __this, String_t* ___message, StringU5BU5D_t4* ___to, List_1_t2 * ___filters, StringU5BU5D_t4* ___excludeIds, Nullable_1_t124  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::API(System.String,Facebook.HttpMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
 void AbstractFacebook_API_m2028 (AbstractFacebook_t118 * __this, String_t* ___query, HttpMethod_t152 * ___method, Dictionary_2_t123 * ___formData, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::API(System.String,Facebook.HttpMethod,UnityEngine.WWWForm,Facebook.FacebookDelegate)
 void AbstractFacebook_API_m2029 (AbstractFacebook_t118 * __this, String_t* ___query, HttpMethod_t152 * ___method, WWWForm_t153 * ___formData, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::ActivateApp(System.String)
// System.Void Facebook.AbstractFacebook::GetDeepLink(Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// System.Void Facebook.AbstractFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// System.Void Facebook.AbstractFacebook::AddAuthDelegate(Facebook.FacebookDelegate)
 void AbstractFacebook_AddAuthDelegate_m1976 (AbstractFacebook_t118 * __this, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::OnAuthResponse(FBResult)
 void AbstractFacebook_OnAuthResponse_m1982 (AbstractFacebook_t118 * __this, FBResult_t134 * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AbstractFacebook::AddFacebookDelegate(Facebook.FacebookDelegate)
 String_t* AbstractFacebook_AddFacebookDelegate_m1987 (AbstractFacebook_t118 * __this, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::OnFacebookResponse(System.String,FBResult)
 void AbstractFacebook_OnFacebookResponse_m1984 (AbstractFacebook_t118 * __this, String_t* ___uniqueId, FBResult_t134 * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.AbstractFacebook::CopyByValue(System.Collections.Generic.Dictionary`2<System.String,System.String>)
 Dictionary_2_t123 * AbstractFacebook_CopyByValue_m4609 (AbstractFacebook_t118 * __this, Dictionary_2_t123 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AbstractFacebook::GetGraphUrl(System.String)
 String_t* AbstractFacebook_GetGraphUrl_m4610 (AbstractFacebook_t118 * __this, String_t* ___query, MethodInfo* method) IL2CPP_METHOD_ATTR;
