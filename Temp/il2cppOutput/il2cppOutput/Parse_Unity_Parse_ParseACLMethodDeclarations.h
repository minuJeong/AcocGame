#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseACL
struct ParseACL_t1080;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// Parse.ParseUser
struct ParseUser_t391;
// System.String
struct String_t;
// Parse.ParseRole
struct ParseRole_t1081;
// Parse.ParseACL/AccessKind
#include "Parse_Unity_Parse_ParseACL_AccessKind.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void Parse.ParseACL::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParseACL__ctor_m5530 (ParseACL_t1080 * __this, Object_t* ___jsonObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::.ctor()
 void ParseACL__ctor_m5531 (ParseACL_t1080 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::.ctor(Parse.ParseUser)
 void ParseACL__ctor_m5532 (ParseACL_t1080 * __this, ParseUser_t391 * ___owner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseACL::ToJSON()
 Object_t* ParseACL_ToJSON_m5533 (ParseACL_t1080 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetAccess(Parse.ParseACL/AccessKind,System.String,System.Boolean)
 void ParseACL_SetAccess_m5534 (ParseACL_t1080 * __this, int32_t ___kind, String_t* ___userId, bool ___allowed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetAccess(Parse.ParseACL/AccessKind,System.String)
 bool ParseACL_GetAccess_m5535 (ParseACL_t1080 * __this, int32_t ___kind, String_t* ___userId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::get_PublicReadAccess()
 bool ParseACL_get_PublicReadAccess_m5536 (ParseACL_t1080 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::set_PublicReadAccess(System.Boolean)
 void ParseACL_set_PublicReadAccess_m5537 (ParseACL_t1080 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::get_PublicWriteAccess()
 bool ParseACL_get_PublicWriteAccess_m5538 (ParseACL_t1080 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::set_PublicWriteAccess(System.Boolean)
 void ParseACL_set_PublicWriteAccess_m5539 (ParseACL_t1080 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetReadAccess(System.String,System.Boolean)
 void ParseACL_SetReadAccess_m5540 (ParseACL_t1080 * __this, String_t* ___userId, bool ___allowed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetReadAccess(Parse.ParseUser,System.Boolean)
 void ParseACL_SetReadAccess_m5541 (ParseACL_t1080 * __this, ParseUser_t391 * ___user, bool ___allowed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetWriteAccess(System.String,System.Boolean)
 void ParseACL_SetWriteAccess_m5542 (ParseACL_t1080 * __this, String_t* ___userId, bool ___allowed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetWriteAccess(Parse.ParseUser,System.Boolean)
 void ParseACL_SetWriteAccess_m5543 (ParseACL_t1080 * __this, ParseUser_t391 * ___user, bool ___allowed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetReadAccess(System.String)
 bool ParseACL_GetReadAccess_m5544 (ParseACL_t1080 * __this, String_t* ___userId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetReadAccess(Parse.ParseUser)
 bool ParseACL_GetReadAccess_m5545 (ParseACL_t1080 * __this, ParseUser_t391 * ___user, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetWriteAccess(System.String)
 bool ParseACL_GetWriteAccess_m5546 (ParseACL_t1080 * __this, String_t* ___userId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetWriteAccess(Parse.ParseUser)
 bool ParseACL_GetWriteAccess_m5547 (ParseACL_t1080 * __this, ParseUser_t391 * ___user, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetRoleReadAccess(System.String,System.Boolean)
 void ParseACL_SetRoleReadAccess_m5548 (ParseACL_t1080 * __this, String_t* ___roleName, bool ___allowed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetRoleReadAccess(Parse.ParseRole,System.Boolean)
 void ParseACL_SetRoleReadAccess_m5549 (ParseACL_t1080 * __this, ParseRole_t1081 * ___role, bool ___allowed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetRoleReadAccess(System.String)
 bool ParseACL_GetRoleReadAccess_m5550 (ParseACL_t1080 * __this, String_t* ___roleName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetRoleReadAccess(Parse.ParseRole)
 bool ParseACL_GetRoleReadAccess_m5551 (ParseACL_t1080 * __this, ParseRole_t1081 * ___role, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetRoleWriteAccess(System.String,System.Boolean)
 void ParseACL_SetRoleWriteAccess_m5552 (ParseACL_t1080 * __this, String_t* ___roleName, bool ___allowed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetRoleWriteAccess(Parse.ParseRole,System.Boolean)
 void ParseACL_SetRoleWriteAccess_m5553 (ParseACL_t1080 * __this, ParseRole_t1081 * ___role, bool ___allowed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetRoleWriteAccess(System.String)
 bool ParseACL_GetRoleWriteAccess_m5554 (ParseACL_t1080 * __this, String_t* ___roleName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetRoleWriteAccess(Parse.ParseRole)
 bool ParseACL_GetRoleWriteAccess_m5555 (ParseACL_t1080 * __this, ParseRole_t1081 * ___role, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::<.ctor>b__0(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
 bool ParseACL_U3C_ctorU3Eb__0_m5556 (Object_t * __this/* static, unused */, KeyValuePair_2_t410  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseACL::<.ctor>b__1(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
 String_t* ParseACL_U3C_ctorU3Eb__1_m5557 (Object_t * __this/* static, unused */, KeyValuePair_2_t410  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::<.ctor>b__2(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
 bool ParseACL_U3C_ctorU3Eb__2_m5558 (Object_t * __this/* static, unused */, KeyValuePair_2_t410  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseACL::<.ctor>b__3(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
 String_t* ParseACL_U3C_ctorU3Eb__3_m5559 (Object_t * __this/* static, unused */, KeyValuePair_2_t410  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
