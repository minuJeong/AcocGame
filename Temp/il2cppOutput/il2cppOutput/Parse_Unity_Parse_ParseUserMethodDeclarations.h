#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseUser
struct ParseUser_t391;
// System.String
struct String_t;
// Parse.ParseQuery`1<Parse.ParseUser>
struct ParseQuery_1_t1205;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IDictionary_2_t1206;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t535;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1125;
// Parse.Internal.IParseAuthenticationProvider
struct IParseAuthenticationProvider_t1207;
// Parse.ParseObject
struct ParseObject_t534;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1099;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseUser::.ctor()
 void ParseUser__ctor_m2771 (ParseUser_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::get_IsAuthenticated()
 bool ParseUser_get_IsAuthenticated_m5887 (ParseUser_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::Remove(System.String)
 void ParseUser_Remove_m5888 (ParseUser_t391 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::IsKeyMutable(System.String)
 bool ParseUser_IsKeyMutable_m5889 (ParseUser_t391 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::MergeMagicFields(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParseUser_MergeMagicFields_m5890 (ParseUser_t391 * __this, Object_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::MergeAfterSave(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParseUser_MergeAfterSave_m5891 (ParseUser_t391 * __this, Object_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::MergeAfterFetch(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParseUser_MergeAfterFetch_m5892 (ParseUser_t391 * __this, Object_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_SessionToken()
 String_t* ParseUser_get_SessionToken_m5893 (ParseUser_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SetSessionTokenAsync(System.String)
 Task_t390 * ParseUser_SetSessionTokenAsync_m5894 (ParseUser_t391 * __this, String_t* ___newSessionToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SetSessionTokenAsync(System.String,System.Threading.CancellationToken)
 Task_t390 * ParseUser_SetSessionTokenAsync_m5895 (ParseUser_t391 * __this, String_t* ___newSessionToken, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Username()
 String_t* ParseUser_get_Username_m5896 (ParseUser_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Username(System.String)
 void ParseUser_set_Username_m2772 (ParseUser_t391 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Password()
 String_t* ParseUser_get_Password_m5897 (ParseUser_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Password(System.String)
 void ParseUser_set_Password_m2773 (ParseUser_t391 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Email()
 String_t* ParseUser_get_Email_m5898 (ParseUser_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Email(System.String)
 void ParseUser_set_Email_m5899 (ParseUser_t391 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
 Task_t390 * ParseUser_SignUpAsync_m5900 (ParseUser_t391 * __this, Task_t390 * ___toAwait, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync()
 Task_t390 * ParseUser_SignUpAsync_m2774 (ParseUser_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync(System.Threading.CancellationToken)
 Task_t390 * ParseUser_SignUpAsync_m5901 (ParseUser_t391 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInAsync(System.String,System.String)
 Task_1_t535 * ParseUser_LogInAsync_m2767 (Object_t * __this/* static, unused */, String_t* ___username, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInAsync(System.String,System.String,System.Threading.CancellationToken)
 Task_1_t535 * ParseUser_LogInAsync_m5902 (Object_t * __this/* static, unused */, String_t* ___username, String_t* ___password, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::BecomeAsync(System.String)
 Task_1_t535 * ParseUser_BecomeAsync_m5903 (Object_t * __this/* static, unused */, String_t* ___sessionToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::BecomeAsync(System.String,System.Threading.CancellationToken)
 Task_1_t535 * ParseUser_BecomeAsync_m5904 (Object_t * __this/* static, unused */, String_t* ___sessionToken, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
 Task_t390 * ParseUser_SaveAsync_m5905 (ParseUser_t391 * __this, Task_t390 * ___toAwait, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseUser::FetchAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
 Task_1_t1125 * ParseUser_FetchAsyncInternal_m5906 (ParseUser_t391 * __this, Task_t390 * ___toAwait, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::LogOut()
 void ParseUser_LogOut_m5907 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LogOutAsync()
 Task_t390 * ParseUser_LogOutAsync_m5908 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LogOutAsync(System.Threading.CancellationToken)
 Task_t390 * ParseUser_LogOutAsync_m5909 (Object_t * __this/* static, unused */, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_CurrentSessionToken()
 String_t* ParseUser_get_CurrentSessionToken_m5910 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseUser Parse.ParseUser::get_CurrentUser()
 ParseUser_t391 * ParseUser_get_CurrentUser_m5911 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::GetCurrentUserAsync()
 Task_1_t535 * ParseUser_GetCurrentUserAsync_m5912 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::GetCurrentUserAsync(System.Threading.CancellationToken)
 Task_1_t535 * ParseUser_GetCurrentUserAsync_m5913 (Object_t * __this/* static, unused */, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::SaveCurrentUser(Parse.ParseUser)
 void ParseUser_SaveCurrentUser_m5914 (Object_t * __this/* static, unused */, ParseUser_t391 * ___user, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveCurrentUserAsync(Parse.ParseUser)
 Task_t390 * ParseUser_SaveCurrentUserAsync_m5915 (Object_t * __this/* static, unused */, ParseUser_t391 * ___user, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveCurrentUserAsync(Parse.ParseUser,System.Threading.CancellationToken)
 Task_t390 * ParseUser_SaveCurrentUserAsync_m5916 (Object_t * __this/* static, unused */, ParseUser_t391 * ___user, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::ClearInMemoryUser()
 void ParseUser_ClearInMemoryUser_m5917 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::get_IsCurrentUser()
 bool ParseUser_get_IsCurrentUser_m5918 (ParseUser_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseUser> Parse.ParseUser::get_Query()
 ParseQuery_1_t1205 * ParseUser_get_Query_m5919 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::EnableRevocableSessionAsync()
 Task_t390 * ParseUser_EnableRevocableSessionAsync_m5920 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::EnableRevocableSessionAsync(System.Threading.CancellationToken)
 Task_t390 * ParseUser_EnableRevocableSessionAsync_m5921 (Object_t * __this/* static, unused */, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::DisableRevocableSession()
 void ParseUser_DisableRevocableSession_m5922 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::get_IsRevocableSessionEnabled()
 bool ParseUser_get_IsRevocableSessionEnabled_m5923 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::IsRevocableSessionToken(System.String)
 bool ParseUser_IsRevocableSessionToken_m5924 (Object_t * __this/* static, unused */, String_t* ___sessionToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync()
 Task_t390 * ParseUser_UpgradeToRevocableSessionAsync_m5925 (ParseUser_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync(System.Threading.CancellationToken)
 Task_t390 * ParseUser_UpgradeToRevocableSessionAsync_m5926 (ParseUser_t391 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
 Task_t390 * ParseUser_UpgradeToRevocableSessionAsync_m5927 (ParseUser_t391 * __this, Task_t390 * ___toAwait, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::RequestPasswordResetAsync(System.String)
 Task_t390 * ParseUser_RequestPasswordResetAsync_m5928 (Object_t * __this/* static, unused */, String_t* ___email, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::RequestPasswordResetAsync(System.String,System.Threading.CancellationToken)
 Task_t390 * ParseUser_RequestPasswordResetAsync_m5929 (Object_t * __this/* static, unused */, String_t* ___email, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>> Parse.ParseUser::get_AuthData()
 Object_t* ParseUser_get_AuthData_m5930 (ParseUser_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_AuthData(System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>)
 void ParseUser_set_AuthData_m5931 (ParseUser_t391 * __this, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseAuthenticationProvider Parse.ParseUser::GetProvider(System.String)
 Object_t * ParseUser_GetProvider_m5932 (Object_t * __this/* static, unused */, String_t* ___providerName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::CleanupAuthData()
 void ParseUser_CleanupAuthData_m5933 (ParseUser_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::SynchronizeAllAuthData()
 void ParseUser_SynchronizeAllAuthData_m5934 (ParseUser_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::SynchronizeAuthData(Parse.Internal.IParseAuthenticationProvider)
 void ParseUser_SynchronizeAuthData_m5935 (ParseUser_t391 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LinkWithAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
 Task_t390 * ParseUser_LinkWithAsync_m5936 (ParseUser_t391 * __this, String_t* ___authType, Object_t* ___data, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LinkWithAsync(System.String,System.Threading.CancellationToken)
 Task_t390 * ParseUser_LinkWithAsync_m5937 (ParseUser_t391 * __this, String_t* ___authType, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UnlinkFromAsync(System.String,System.Threading.CancellationToken)
 Task_t390 * ParseUser_UnlinkFromAsync_m5938 (ParseUser_t391 * __this, String_t* ___authType, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::IsLinked(System.String)
 bool ParseUser_IsLinked_m5939 (ParseUser_t391 * __this, String_t* ___authType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::LogOutWithProviders()
 void ParseUser_LogOutWithProviders_m5940 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInWithAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
 Task_1_t535 * ParseUser_LogInWithAsync_m5941 (Object_t * __this/* static, unused */, String_t* ___authType, Object_t* ___data, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInWithAsync(System.String,System.Threading.CancellationToken)
 Task_1_t535 * ParseUser_LogInWithAsync_m5942 (Object_t * __this/* static, unused */, String_t* ___authType, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::RegisterProvider(Parse.Internal.IParseAuthenticationProvider)
 void ParseUser_RegisterProvider_m5943 (Object_t * __this/* static, unused */, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::<SignUpAsync>b__0(System.Threading.Tasks.Task)
 void ParseUser_U3CSignUpAsyncU3Eb__0_m5944 (ParseUser_t391 * __this, Task_t390 * ____, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::<SaveAsync>b__c(System.Threading.Tasks.Task)
 void ParseUser_U3CSaveAsyncU3Eb__c_m5945 (ParseUser_t391 * __this, Task_t390 * ____, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseUser::<FetchAsyncInternal>b__e(System.Threading.Tasks.Task`1<Parse.ParseObject>)
 ParseObject_t534 * ParseUser_U3CFetchAsyncInternalU3Eb__e_m5946 (ParseUser_t391 * __this, Task_1_t1125 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseUser Parse.ParseUser::<GetCurrentUserAsync>b__12()
 ParseUser_t391 * ParseUser_U3CGetCurrentUserAsyncU3Eb__12_m5947 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::<UpgradeToRevocableSessionAsync>b__1e(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 Task_t390 * ParseUser_U3CUpgradeToRevocableSessionAsyncU3Eb__1e_m5948 (ParseUser_t391 * __this, Task_1_t1099 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::.cctor()
 void ParseUser__cctor_m5949 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
