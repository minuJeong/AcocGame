#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t80;
// System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct TaskCompletionSource_1_t1007;
// System.Action`1<System.Uri>
struct Action_1_t1009;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t1010;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// Parse.Internal.FacebookAuthenticationProvider
struct FacebookAuthenticationProvider_t1004  : public Object_t
{
	// System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>> Parse.Internal.FacebookAuthenticationProvider::pendingTask
	TaskCompletionSource_1_t1007 * ___pendingTask;
	// System.Threading.CancellationToken Parse.Internal.FacebookAuthenticationProvider::pendingCancellationToken
	CancellationToken_t992  ___pendingCancellationToken;
	// System.Action`1<System.Uri> Parse.Internal.FacebookAuthenticationProvider::Navigate
	Action_1_t1009 * ___Navigate;
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::<LoginDialogUrlOverride>k__BackingField
	Uri_t80 * ___U3CLoginDialogUrlOverrideU3Ek__BackingField;
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::<ResponseUrlOverride>k__BackingField
	Uri_t80 * ___U3CResponseUrlOverrideU3Ek__BackingField;
	// System.Collections.Generic.IEnumerable`1<System.String> Parse.Internal.FacebookAuthenticationProvider::<Permissions>k__BackingField
	Object_t* ___U3CPermissionsU3Ek__BackingField;
	// System.String Parse.Internal.FacebookAuthenticationProvider::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField;
	// System.String Parse.Internal.FacebookAuthenticationProvider::<AccessToken>k__BackingField
	String_t* ___U3CAccessTokenU3Ek__BackingField;
};
struct FacebookAuthenticationProvider_t1004_StaticFields{
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::LoginDialogUrl
	Uri_t80 * ___LoginDialogUrl;
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::TokenExtensionUrl
	Uri_t80 * ___TokenExtensionUrl;
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::ResponseUrl
	Uri_t80 * ___ResponseUrl;
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::MeUrl
	Uri_t80 * ___MeUrl;
};
