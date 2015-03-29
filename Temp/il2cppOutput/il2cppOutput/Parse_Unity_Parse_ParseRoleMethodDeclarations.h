#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseRole
struct ParseRole_t1081;
// System.String
struct String_t;
// Parse.ParseRelation`1<Parse.ParseUser>
struct ParseRelation_1_t1182;
// Parse.ParseRelation`1<Parse.ParseRole>
struct ParseRelation_1_t1183;
// Parse.ParseQuery`1<Parse.ParseRole>
struct ParseQuery_1_t1184;
// Parse.ParseACL
struct ParseACL_t1080;
// System.Object
struct Object_t;

// System.Void Parse.ParseRole::.ctor()
 void ParseRole__ctor_m5841 (ParseRole_t1081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::.ctor(System.String,Parse.ParseACL)
 void ParseRole__ctor_m5842 (ParseRole_t1081 * __this, String_t* ___name, ParseACL_t1080 * ___acl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseRole::get_Name()
 String_t* ParseRole_get_Name_m5843 (ParseRole_t1081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::set_Name(System.String)
 void ParseRole_set_Name_m5844 (ParseRole_t1081 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseRelation`1<Parse.ParseUser> Parse.ParseRole::get_Users()
 ParseRelation_1_t1182 * ParseRole_get_Users_m5845 (ParseRole_t1081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseRelation`1<Parse.ParseRole> Parse.ParseRole::get_Roles()
 ParseRelation_1_t1183 * ParseRole_get_Roles_m5846 (ParseRole_t1081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::OnSettingValue(System.String&,System.Object&)
 void ParseRole_OnSettingValue_m5847 (ParseRole_t1081 * __this, String_t** ___key, Object_t ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseRole> Parse.ParseRole::get_Query()
 ParseQuery_1_t1184 * ParseRole_get_Query_m5848 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::.cctor()
 void ParseRole__cctor_m5849 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
