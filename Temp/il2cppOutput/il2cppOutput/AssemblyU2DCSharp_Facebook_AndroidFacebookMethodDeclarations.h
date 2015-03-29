#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.AndroidFacebook
struct AndroidFacebook_t117;
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
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t122;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t123;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen_0.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_1.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Facebook.AndroidFacebook::.ctor()
 void AndroidFacebook__ctor_m654 (AndroidFacebook_t117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AndroidFacebook::get_KeyHash()
 String_t* AndroidFacebook_get_KeyHash_m655 (AndroidFacebook_t117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Facebook.AndroidFacebook::get_DialogMode()
 int32_t AndroidFacebook_get_DialogMode_m656 (AndroidFacebook_t117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::set_DialogMode(System.Int32)
 void AndroidFacebook_set_DialogMode_m657 (AndroidFacebook_t117 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.AndroidFacebook::get_LimitEventUsage()
 bool AndroidFacebook_get_LimitEventUsage_m658 (AndroidFacebook_t117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::set_LimitEventUsage(System.Boolean)
 void AndroidFacebook_set_LimitEventUsage_m659 (AndroidFacebook_t117 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::CallFB(System.String,System.String)
 void AndroidFacebook_CallFB_m660 (AndroidFacebook_t117 * __this, String_t* ___method, String_t* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnAwake()
 void AndroidFacebook_OnAwake_m661 (AndroidFacebook_t117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.AndroidFacebook::IsErrorResponse(System.String)
 bool AndroidFacebook_IsErrorResponse_m662 (AndroidFacebook_t117 * __this, String_t* ___response, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
 void AndroidFacebook_Init_m663 (AndroidFacebook_t117 * __this, InitDelegate_t116 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t119 * ___hideUnityDelegate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnInitComplete(System.String)
 void AndroidFacebook_OnInitComplete_m664 (AndroidFacebook_t117 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::Login(System.String,Facebook.FacebookDelegate)
 void AndroidFacebook_Login_m665 (AndroidFacebook_t117 * __this, String_t* ___scope, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnLoginComplete(System.String)
 void AndroidFacebook_OnLoginComplete_m666 (AndroidFacebook_t117 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnGroupCreateComplete(System.String)
 void AndroidFacebook_OnGroupCreateComplete_m667 (AndroidFacebook_t117 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnAccessTokenRefresh(System.String)
 void AndroidFacebook_OnAccessTokenRefresh_m668 (AndroidFacebook_t117 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::Logout()
 void AndroidFacebook_Logout_m669 (AndroidFacebook_t117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnLogoutComplete(System.String)
 void AndroidFacebook_OnLogoutComplete_m670 (AndroidFacebook_t117 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
 void AndroidFacebook_AppRequest_m671 (AndroidFacebook_t117 * __this, String_t* ___message, OGActionType_t120 * ___actionType, String_t* ___objectId, StringU5BU5D_t4* ___to, List_1_t2 * ___filters, StringU5BU5D_t4* ___excludeIds, Nullable_1_t124  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnAppRequestsComplete(System.String)
 void AndroidFacebook_OnAppRequestsComplete_m672 (AndroidFacebook_t117 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
 void AndroidFacebook_FeedRequest_m673 (AndroidFacebook_t117 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t121 * ___properties, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnFeedRequestComplete(System.String)
 void AndroidFacebook_OnFeedRequestComplete_m674 (AndroidFacebook_t117 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
 void AndroidFacebook_Pay_m675 (AndroidFacebook_t117 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t124  ___quantityMin, Nullable_1_t124  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
 void AndroidFacebook_GameGroupCreate_m676 (AndroidFacebook_t117 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
 void AndroidFacebook_GameGroupJoin_m677 (AndroidFacebook_t117 * __this, String_t* ___id, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::GetDeepLink(Facebook.FacebookDelegate)
 void AndroidFacebook_GetDeepLink_m678 (AndroidFacebook_t117 * __this, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnGetDeepLinkComplete(System.String)
 void AndroidFacebook_OnGetDeepLinkComplete_m679 (AndroidFacebook_t117 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
 void AndroidFacebook_AppEventsLogEvent_m680 (AndroidFacebook_t117 * __this, String_t* ___logEvent, Nullable_1_t125  ___valueToSum, Dictionary_2_t122 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
 void AndroidFacebook_AppEventsLogPurchase_m681 (AndroidFacebook_t117 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t122 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
 void AndroidFacebook_PublishInstall_m682 (AndroidFacebook_t117 * __this, String_t* ___appId, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnPublishInstallComplete(System.String)
 void AndroidFacebook_OnPublishInstallComplete_m683 (AndroidFacebook_t117 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::ActivateApp(System.String)
 void AndroidFacebook_ActivateApp_m684 (AndroidFacebook_t117 * __this, String_t* ___appId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.AndroidFacebook::ToStringDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
 Dictionary_2_t123 * AndroidFacebook_ToStringDict_m685 (AndroidFacebook_t117 * __this, Dictionary_2_t122 * ___dict, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.AndroidFacebook::FromTimestamp(System.Int32)
 DateTime_t126  AndroidFacebook_FromTimestamp_m686 (AndroidFacebook_t117 * __this, int32_t ___timestamp, MethodInfo* method) IL2CPP_METHOD_ATTR;
