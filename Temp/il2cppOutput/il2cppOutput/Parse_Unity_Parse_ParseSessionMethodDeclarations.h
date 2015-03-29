#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseSession
struct ParseSession_t1188;
// System.String
struct String_t;
// Parse.ParseQuery`1<Parse.ParseSession>
struct ParseQuery_1_t1189;
// System.Threading.Tasks.Task`1<Parse.ParseSession>
struct Task_1_t1187;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Boolean Parse.ParseSession::IsKeyMutable(System.String)
 bool ParseSession_IsKeyMutable_m5855 (ParseSession_t1188 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseSession::get_SessionToken()
 String_t* ParseSession_get_SessionToken_m5856 (ParseSession_t1188 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseSession> Parse.ParseSession::get_Query()
 ParseQuery_1_t1189 * ParseSession_get_Query_m5857 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseSession> Parse.ParseSession::GetCurrentSessionAsync()
 Task_1_t1187 * ParseSession_GetCurrentSessionAsync_m5858 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseSession> Parse.ParseSession::GetCurrentSessionAsync(System.Threading.CancellationToken)
 Task_1_t1187 * ParseSession_GetCurrentSessionAsync_m5859 (Object_t * __this/* static, unused */, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseSession::.ctor()
 void ParseSession__ctor_m5860 (ParseSession_t1188 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseSession::.cctor()
 void ParseSession__cctor_m5861 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
