#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.IOSFacebook
struct IOSFacebook_t164;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4;
// Facebook.InitDelegate
struct InitDelegate_t116;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t119;
// Facebook.FacebookDelegate
struct FacebookDelegate_t115;
// Facebook.OGActionType
struct OGActionType_t120;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t121;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t122;
// Facebook.IOSFacebook/NativeDict
struct NativeDict_t162;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t123;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen_0.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_1.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Facebook.IOSFacebook::.ctor()
 void IOSFacebook__ctor_m842 (IOSFacebook_t164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosInit(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
 void IOSFacebook_iosInit_m843 (Object_t * __this/* static, unused */, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___frictionlessRequests, String_t* ___urlSuffix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosLogin(System.String)
 void IOSFacebook_iosLogin_m844 (Object_t * __this/* static, unused */, String_t* ___scope, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosLogout()
 void IOSFacebook_iosLogout_m845 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosSetShareDialogMode(System.Int32)
 void IOSFacebook_iosSetShareDialogMode_m846 (Object_t * __this/* static, unused */, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFeedRequest(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
 void IOSFacebook_iosFeedRequest_m847 (Object_t * __this/* static, unused */, int32_t ___requestId, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosAppRequest(System.Int32,System.String,System.String,System.String,System.String[],System.Int32,System.String,System.String[],System.Int32,System.Boolean,System.Int32,System.String,System.String)
 void IOSFacebook_iosAppRequest_m848 (Object_t * __this/* static, unused */, int32_t ___requestId, String_t* ___message, String_t* ___actionType, String_t* ___objectId, StringU5BU5D_t4* ___to, int32_t ___toLength, String_t* ___filters, StringU5BU5D_t4* ___excludeIds, int32_t ___excludeIdsLength, bool ___hasMaxRecipients, int32_t ___maxRecipients, String_t* ___data, String_t* ___title, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosCreateGameGroup(System.Int32,System.String,System.String,System.String)
 void IOSFacebook_iosCreateGameGroup_m849 (Object_t * __this/* static, unused */, int32_t ___requestId, String_t* ___name, String_t* ___description, String_t* ___privacy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosJoinGameGroup(System.Int32,System.String)
 void IOSFacebook_iosJoinGameGroup_m850 (Object_t * __this/* static, unused */, int32_t ___requestId, String_t* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFBSettingsPublishInstall(System.Int32,System.String)
 void IOSFacebook_iosFBSettingsPublishInstall_m851 (Object_t * __this/* static, unused */, int32_t ___requestId, String_t* ___appId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFBSettingsActivateApp(System.String)
 void IOSFacebook_iosFBSettingsActivateApp_m852 (Object_t * __this/* static, unused */, String_t* ___appId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFBAppEventsLogEvent(System.String,System.Double,System.Int32,System.String[],System.String[])
 void IOSFacebook_iosFBAppEventsLogEvent_m853 (Object_t * __this/* static, unused */, String_t* ___logEvent, double ___valueToSum, int32_t ___numParams, StringU5BU5D_t4* ___paramKeys, StringU5BU5D_t4* ___paramVals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFBAppEventsLogPurchase(System.Double,System.String,System.Int32,System.String[],System.String[])
 void IOSFacebook_iosFBAppEventsLogPurchase_m854 (Object_t * __this/* static, unused */, double ___logPurchase, String_t* ___currency, int32_t ___numParams, StringU5BU5D_t4* ___paramKeys, StringU5BU5D_t4* ___paramVals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFBAppEventsSetLimitEventUsage(System.Boolean)
 void IOSFacebook_iosFBAppEventsSetLimitEventUsage_m855 (Object_t * __this/* static, unused */, bool ___limitEventUsage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosGetDeepLink()
 void IOSFacebook_iosGetDeepLink_m856 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Facebook.IOSFacebook::get_DialogMode()
 int32_t IOSFacebook_get_DialogMode_m857 (IOSFacebook_t164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::set_DialogMode(System.Int32)
 void IOSFacebook_set_DialogMode_m858 (IOSFacebook_t164 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.IOSFacebook::get_LimitEventUsage()
 bool IOSFacebook_get_LimitEventUsage_m859 (IOSFacebook_t164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::set_LimitEventUsage(System.Boolean)
 void IOSFacebook_set_LimitEventUsage_m860 (IOSFacebook_t164 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnAwake()
 void IOSFacebook_OnAwake_m861 (IOSFacebook_t164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
 void IOSFacebook_Init_m862 (IOSFacebook_t164 * __this, InitDelegate_t116 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t119 * ___hideUnityDelegate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::Login(System.String,Facebook.FacebookDelegate)
 void IOSFacebook_Login_m863 (IOSFacebook_t164 * __this, String_t* ___scope, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::Logout()
 void IOSFacebook_Logout_m864 (IOSFacebook_t164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
 void IOSFacebook_AppRequest_m865 (IOSFacebook_t164 * __this, String_t* ___message, OGActionType_t120 * ___actionType, String_t* ___objectId, StringU5BU5D_t4* ___to, List_1_t2 * ___filters, StringU5BU5D_t4* ___excludeIds, Nullable_1_t124  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
 void IOSFacebook_FeedRequest_m866 (IOSFacebook_t164 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t121 * ___properties, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
 void IOSFacebook_Pay_m867 (IOSFacebook_t164 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t124  ___quantityMin, Nullable_1_t124  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
 void IOSFacebook_GameGroupCreate_m868 (IOSFacebook_t164 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
 void IOSFacebook_GameGroupJoin_m869 (IOSFacebook_t164 * __this, String_t* ___id, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::GetDeepLink(Facebook.FacebookDelegate)
 void IOSFacebook_GetDeepLink_m870 (IOSFacebook_t164 * __this, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnGetDeepLinkComplete(System.String)
 void IOSFacebook_OnGetDeepLinkComplete_m871 (IOSFacebook_t164 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
 void IOSFacebook_AppEventsLogEvent_m872 (IOSFacebook_t164 * __this, String_t* ___logEvent, Nullable_1_t125  ___valueToSum, Dictionary_2_t122 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
 void IOSFacebook_AppEventsLogPurchase_m873 (IOSFacebook_t164 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t122 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
 void IOSFacebook_PublishInstall_m874 (IOSFacebook_t164 * __this, String_t* ___appId, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::ActivateApp(System.String)
 void IOSFacebook_ActivateApp_m875 (IOSFacebook_t164 * __this, String_t* ___appId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.IOSFacebook/NativeDict Facebook.IOSFacebook::MarshallDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
 NativeDict_t162 * IOSFacebook_MarshallDict_m876 (IOSFacebook_t164 * __this, Dictionary_2_t122 * ___dict, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.IOSFacebook/NativeDict Facebook.IOSFacebook::MarshallDict(System.Collections.Generic.Dictionary`2<System.String,System.String>)
 NativeDict_t162 * IOSFacebook_MarshallDict_m877 (IOSFacebook_t164 * __this, Dictionary_2_t123 * ___dict, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnInitComplete(System.String)
 void IOSFacebook_OnInitComplete_m878 (IOSFacebook_t164 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnLogin(System.String)
 void IOSFacebook_OnLogin_m879 (IOSFacebook_t164 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::ParseLoginDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
 void IOSFacebook_ParseLoginDict_m880 (IOSFacebook_t164 * __this, Dictionary_2_t122 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnAccessTokenRefresh(System.String)
 void IOSFacebook_OnAccessTokenRefresh_m881 (IOSFacebook_t164 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.IOSFacebook::FromTimestamp(System.Int32)
 DateTime_t126  IOSFacebook_FromTimestamp_m882 (IOSFacebook_t164 * __this, int32_t ___timestamp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnLogout(System.String)
 void IOSFacebook_OnLogout_m883 (IOSFacebook_t164 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnRequestComplete(System.String)
 void IOSFacebook_OnRequestComplete_m884 (IOSFacebook_t164 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
