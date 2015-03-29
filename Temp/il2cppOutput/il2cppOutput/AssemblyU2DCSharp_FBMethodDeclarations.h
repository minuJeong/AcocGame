#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FB
struct FB_t150;
// Facebook.IFacebook
struct IFacebook_t129;
// System.String
struct String_t;
// Facebook.InitDelegate
struct InitDelegate_t116;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t119;
// Facebook.FacebookDelegate
struct FacebookDelegate_t115;
// Facebook.OGActionType
struct OGActionType_t120;
// System.String[]
struct StringU5BU5D_t4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t121;
// Facebook.HttpMethod
struct HttpMethod_t152;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t123;
// UnityEngine.WWWForm
struct WWWForm_t153;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void FB::.ctor()
 void FB__ctor_m768 (FB_t150 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::.cctor()
 void FB__cctor_m769 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.IFacebook FB::get_FacebookImpl()
 Object_t * FB_get_FacebookImpl_m770 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FB::get_AppId()
 String_t* FB_get_AppId_m771 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FB::get_UserId()
 String_t* FB_get_UserId_m772 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FB::get_AccessToken()
 String_t* FB_get_AccessToken_m773 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime FB::get_AccessTokenExpiresAt()
 DateTime_t126  FB_get_AccessTokenExpiresAt_m774 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FB::get_IsLoggedIn()
 bool FB_get_IsLoggedIn_m775 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FB::get_IsInitialized()
 bool FB_get_IsInitialized_m776 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::Init(Facebook.InitDelegate,Facebook.HideUnityDelegate,System.String)
 void FB_Init_m777 (Object_t * __this/* static, unused */, InitDelegate_t116 * ___onInitComplete, HideUnityDelegate_t119 * ___onHideUnity, String_t* ___authResponse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,Facebook.HideUnityDelegate,System.String)
 void FB_Init_m778 (Object_t * __this/* static, unused */, InitDelegate_t116 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, bool ___frictionlessRequests, HideUnityDelegate_t119 * ___onHideUnity, String_t* ___authResponse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::OnDllLoaded()
 void FB_OnDllLoaded_m779 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::Login(System.String,Facebook.FacebookDelegate)
 void FB_Login_m780 (Object_t * __this/* static, unused */, String_t* ___scope, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::Logout()
 void FB_Logout_m781 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.String,System.String,Facebook.FacebookDelegate)
 void FB_AppRequest_m782 (Object_t * __this/* static, unused */, String_t* ___message, OGActionType_t120 * ___actionType, String_t* ___objectId, StringU5BU5D_t4* ___to, String_t* ___data, String_t* ___title, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::AppRequest(System.String,Facebook.OGActionType,System.String,System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
 void FB_AppRequest_m783 (Object_t * __this/* static, unused */, String_t* ___message, OGActionType_t120 * ___actionType, String_t* ___objectId, List_1_t2 * ___filters, StringU5BU5D_t4* ___excludeIds, Nullable_1_t124  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::AppRequest(System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
 void FB_AppRequest_m784 (Object_t * __this/* static, unused */, String_t* ___message, StringU5BU5D_t4* ___to, List_1_t2 * ___filters, StringU5BU5D_t4* ___excludeIds, Nullable_1_t124  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::Feed(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
 void FB_Feed_m785 (Object_t * __this/* static, unused */, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t121 * ___properties, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::API(System.String,Facebook.HttpMethod,Facebook.FacebookDelegate,System.Collections.Generic.Dictionary`2<System.String,System.String>)
 void FB_API_m786 (Object_t * __this/* static, unused */, String_t* ___query, HttpMethod_t152 * ___method, FacebookDelegate_t115 * ___callback, Dictionary_2_t123 * ___formData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::API(System.String,Facebook.HttpMethod,Facebook.FacebookDelegate,UnityEngine.WWWForm)
 void FB_API_m787 (Object_t * __this/* static, unused */, String_t* ___query, HttpMethod_t152 * ___method, FacebookDelegate_t115 * ___callback, WWWForm_t153 * ___formData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::PublishInstall(Facebook.FacebookDelegate)
 void FB_PublishInstall_m788 (Object_t * __this/* static, unused */, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::ActivateApp()
 void FB_ActivateApp_m789 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::GetDeepLink(Facebook.FacebookDelegate)
 void FB_GetDeepLink_m790 (Object_t * __this/* static, unused */, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
 void FB_GameGroupCreate_m791 (Object_t * __this/* static, unused */, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::GameGroupJoin(System.String,Facebook.FacebookDelegate)
 void FB_GameGroupJoin_m792 (Object_t * __this/* static, unused */, String_t* ___id, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
