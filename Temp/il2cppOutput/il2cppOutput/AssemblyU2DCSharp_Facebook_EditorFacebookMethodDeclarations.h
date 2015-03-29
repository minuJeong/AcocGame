#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.EditorFacebook
struct EditorFacebook_t132;
// Facebook.InitDelegate
struct InitDelegate_t116;
// System.String
struct String_t;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t119;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// Facebook.IFacebook
struct IFacebook_t129;
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
// FBResult
struct FBResult_t134;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen_0.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_1.h"

// System.Void Facebook.EditorFacebook::.ctor()
 void EditorFacebook__ctor_m697 (EditorFacebook_t132 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Facebook.EditorFacebook::get_DialogMode()
 int32_t EditorFacebook_get_DialogMode_m698 (EditorFacebook_t132 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::set_DialogMode(System.Int32)
 void EditorFacebook_set_DialogMode_m699 (EditorFacebook_t132 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.EditorFacebook::get_LimitEventUsage()
 bool EditorFacebook_get_LimitEventUsage_m700 (EditorFacebook_t132 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::set_LimitEventUsage(System.Boolean)
 void EditorFacebook_set_LimitEventUsage_m701 (EditorFacebook_t132 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::OnAwake()
 void EditorFacebook_OnAwake_m702 (EditorFacebook_t132 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
 void EditorFacebook_Init_m703 (EditorFacebook_t132 * __this, InitDelegate_t116 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t119 * ___hideUnityDelegate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Facebook.EditorFacebook::OnInit(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
 Object_t * EditorFacebook_OnInit_m704 (EditorFacebook_t132 * __this, InitDelegate_t116 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t119 * ___hideUnityDelegate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::OnDllLoaded(Facebook.IFacebook)
 void EditorFacebook_OnDllLoaded_m705 (EditorFacebook_t132 * __this, Object_t * ___fb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::Login(System.String,Facebook.FacebookDelegate)
 void EditorFacebook_Login_m706 (EditorFacebook_t132 * __this, String_t* ___scope, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::Logout()
 void EditorFacebook_Logout_m707 (EditorFacebook_t132 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
 void EditorFacebook_AppRequest_m708 (EditorFacebook_t132 * __this, String_t* ___message, OGActionType_t120 * ___actionType, String_t* ___objectId, StringU5BU5D_t4* ___to, List_1_t2 * ___filters, StringU5BU5D_t4* ___excludeIds, Nullable_1_t124  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
 void EditorFacebook_FeedRequest_m709 (EditorFacebook_t132 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t121 * ___properties, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
 void EditorFacebook_Pay_m710 (EditorFacebook_t132 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t124  ___quantityMin, Nullable_1_t124  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
 void EditorFacebook_GameGroupCreate_m711 (EditorFacebook_t132 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
 void EditorFacebook_GameGroupJoin_m712 (EditorFacebook_t132 * __this, String_t* ___id, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::GetAuthResponse(Facebook.FacebookDelegate)
 void EditorFacebook_GetAuthResponse_m713 (EditorFacebook_t132 * __this, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
 void EditorFacebook_PublishInstall_m714 (EditorFacebook_t132 * __this, String_t* ___appId, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::ActivateApp(System.String)
 void EditorFacebook_ActivateApp_m715 (EditorFacebook_t132 * __this, String_t* ___appId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::GetDeepLink(Facebook.FacebookDelegate)
 void EditorFacebook_GetDeepLink_m716 (EditorFacebook_t132 * __this, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
 void EditorFacebook_AppEventsLogEvent_m717 (EditorFacebook_t132 * __this, String_t* ___logEvent, Nullable_1_t125  ___valueToSum, Dictionary_2_t122 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
 void EditorFacebook_AppEventsLogPurchase_m718 (EditorFacebook_t132 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t122 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::MockLoginCallback(FBResult)
 void EditorFacebook_MockLoginCallback_m719 (EditorFacebook_t132 * __this, FBResult_t134 * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::MockCancelledLoginCallback()
 void EditorFacebook_MockCancelledLoginCallback_m720 (EditorFacebook_t132 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::BadAccessToken(System.String)
 void EditorFacebook_BadAccessToken_m721 (EditorFacebook_t132 * __this, String_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
