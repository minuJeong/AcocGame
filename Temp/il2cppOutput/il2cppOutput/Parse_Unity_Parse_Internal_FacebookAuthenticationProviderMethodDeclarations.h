#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FacebookAuthenticationProvider
struct FacebookAuthenticationProvider_t1004;
// System.Uri
struct Uri_t80;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t1010;
// System.String
struct String_t;
// System.Action`1<System.Uri>
struct Action_1_t1009;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1003;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Task_1_t1011;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.Internal.FacebookAuthenticationProvider::.ctor()
 void FacebookAuthenticationProvider__ctor_m5336 (FacebookAuthenticationProvider_t1004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Parse.Internal.FacebookAuthenticationProvider::get_LoginDialogUrlOverride()
 Uri_t80 * FacebookAuthenticationProvider_get_LoginDialogUrlOverride_m5337 (FacebookAuthenticationProvider_t1004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_LoginDialogUrlOverride(System.Uri)
 void FacebookAuthenticationProvider_set_LoginDialogUrlOverride_m5338 (FacebookAuthenticationProvider_t1004 * __this, Uri_t80 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Parse.Internal.FacebookAuthenticationProvider::get_ResponseUrlOverride()
 Uri_t80 * FacebookAuthenticationProvider_get_ResponseUrlOverride_m5339 (FacebookAuthenticationProvider_t1004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_ResponseUrlOverride(System.Uri)
 void FacebookAuthenticationProvider_set_ResponseUrlOverride_m5340 (FacebookAuthenticationProvider_t1004 * __this, Uri_t80 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Parse.Internal.FacebookAuthenticationProvider::get_Permissions()
 Object_t* FacebookAuthenticationProvider_get_Permissions_m5341 (FacebookAuthenticationProvider_t1004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_Permissions(System.Collections.Generic.IEnumerable`1<System.String>)
 void FacebookAuthenticationProvider_set_Permissions_m5342 (FacebookAuthenticationProvider_t1004 * __this, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.FacebookAuthenticationProvider::get_AppId()
 String_t* FacebookAuthenticationProvider_get_AppId_m5343 (FacebookAuthenticationProvider_t1004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_AppId(System.String)
 void FacebookAuthenticationProvider_set_AppId_m5344 (FacebookAuthenticationProvider_t1004 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.FacebookAuthenticationProvider::get_AccessToken()
 String_t* FacebookAuthenticationProvider_get_AccessToken_m5345 (FacebookAuthenticationProvider_t1004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_AccessToken(System.String)
 void FacebookAuthenticationProvider_set_AccessToken_m5346 (FacebookAuthenticationProvider_t1004 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::add_Navigate(System.Action`1<System.Uri>)
 void FacebookAuthenticationProvider_add_Navigate_m5347 (FacebookAuthenticationProvider_t1004 * __this, Action_1_t1009 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::remove_Navigate(System.Action`1<System.Uri>)
 void FacebookAuthenticationProvider_remove_Navigate_m5348 (FacebookAuthenticationProvider_t1004 * __this, Action_1_t1009 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FacebookAuthenticationProvider::TryParseOAuthCallbackUrl(System.Uri,System.Collections.Generic.IDictionary`2<System.String,System.String>&)
 bool FacebookAuthenticationProvider_TryParseOAuthCallbackUrl_m5349 (FacebookAuthenticationProvider_t1004 * __this, Uri_t80 * ___uri, Object_t** ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.Internal.FacebookAuthenticationProvider::GetAuthData(System.String,System.String,System.DateTime)
 Object_t* FacebookAuthenticationProvider_GetAuthData_m5350 (FacebookAuthenticationProvider_t1004 * __this, String_t* ___facebookId, String_t* ___accessToken, DateTime_t126  ___expiration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FacebookAuthenticationProvider::HandleNavigation(System.Uri)
 bool FacebookAuthenticationProvider_HandleNavigation_m5351 (FacebookAuthenticationProvider_t1004 * __this, Uri_t80 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>> Parse.Internal.FacebookAuthenticationProvider::AuthenticateAsync(System.Threading.CancellationToken)
 Task_1_t1011 * FacebookAuthenticationProvider_AuthenticateAsync_m5352 (FacebookAuthenticationProvider_t1004 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::Deauthenticate()
 void FacebookAuthenticationProvider_Deauthenticate_m5353 (FacebookAuthenticationProvider_t1004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FacebookAuthenticationProvider::RestoreAuthentication(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 bool FacebookAuthenticationProvider_RestoreAuthentication_m5354 (FacebookAuthenticationProvider_t1004 * __this, Object_t* ___authData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.FacebookAuthenticationProvider::get_AuthType()
 String_t* FacebookAuthenticationProvider_get_AuthType_m5355 (FacebookAuthenticationProvider_t1004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::.cctor()
 void FacebookAuthenticationProvider__cctor_m5356 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
