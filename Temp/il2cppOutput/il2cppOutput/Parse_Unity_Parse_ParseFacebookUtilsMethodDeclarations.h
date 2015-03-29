#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseFacebookUtils
struct ParseFacebookUtils_t1111;
// System.String
struct String_t;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t535;
// System.Threading.Tasks.Task
struct Task_t390;
// Parse.ParseUser
struct ParseUser_t391;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.String Parse.ParseFacebookUtils::get_AccessToken()
 String_t* ParseFacebookUtils_get_AccessToken_m5642 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFacebookUtils::Initialize()
 void ParseFacebookUtils_Initialize_m5643 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseFacebookUtils::LogInAsync(System.String,System.String,System.DateTime,System.Threading.CancellationToken)
 Task_1_t535 * ParseFacebookUtils_LogInAsync_m5644 (Object_t * __this/* static, unused */, String_t* ___facebookId, String_t* ___accessToken, DateTime_t126  ___expiration, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseFacebookUtils::LogInAsync(System.String,System.String,System.DateTime)
 Task_1_t535 * ParseFacebookUtils_LogInAsync_m5645 (Object_t * __this/* static, unused */, String_t* ___facebookId, String_t* ___accessToken, DateTime_t126  ___expiration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFacebookUtils::LinkAsync(Parse.ParseUser,System.String,System.String,System.DateTime,System.Threading.CancellationToken)
 Task_t390 * ParseFacebookUtils_LinkAsync_m5646 (Object_t * __this/* static, unused */, ParseUser_t391 * ___user, String_t* ___facebookId, String_t* ___accessToken, DateTime_t126  ___expiration, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFacebookUtils::LinkAsync(Parse.ParseUser,System.String,System.String,System.DateTime)
 Task_t390 * ParseFacebookUtils_LinkAsync_m5647 (Object_t * __this/* static, unused */, ParseUser_t391 * ___user, String_t* ___facebookId, String_t* ___accessToken, DateTime_t126  ___expiration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseFacebookUtils::IsLinked(Parse.ParseUser)
 bool ParseFacebookUtils_IsLinked_m5648 (Object_t * __this/* static, unused */, ParseUser_t391 * ___user, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFacebookUtils::UnlinkAsync(Parse.ParseUser,System.Threading.CancellationToken)
 Task_t390 * ParseFacebookUtils_UnlinkAsync_m5649 (Object_t * __this/* static, unused */, ParseUser_t391 * ___user, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFacebookUtils::UnlinkAsync(Parse.ParseUser)
 Task_t390 * ParseFacebookUtils_UnlinkAsync_m5650 (Object_t * __this/* static, unused */, ParseUser_t391 * ___user, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFacebookUtils::.cctor()
 void ParseFacebookUtils__cctor_m5651 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
