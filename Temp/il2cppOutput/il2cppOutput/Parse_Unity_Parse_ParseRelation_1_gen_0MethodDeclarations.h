#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseRelation`1<Parse.ParseUser>
struct ParseRelation_1_t1182;
// Parse.ParseQuery`1<Parse.ParseUser>
struct ParseQuery_1_t1205;
// Parse.ParseObject
struct ParseObject_t534;
// System.String
struct String_t;
// Parse.ParseUser
struct ParseUser_t391;

// System.Void Parse.ParseRelation`1<Parse.ParseUser>::.ctor(Parse.ParseObject,System.String)
 void ParseRelation_1__ctor_m36178 (ParseRelation_1_t1182 * __this, ParseObject_t534 * ___parent, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelation`1<Parse.ParseUser>::.ctor(Parse.ParseObject,System.String,System.String)
 void ParseRelation_1__ctor_m36179 (ParseRelation_1_t1182 * __this, ParseObject_t534 * ___parent, String_t* ___key, String_t* ___targetClassName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelation`1<Parse.ParseUser>::Add(T)
 void ParseRelation_1_Add_m36180 (ParseRelation_1_t1182 * __this, ParseUser_t391 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelation`1<Parse.ParseUser>::Remove(T)
 void ParseRelation_1_Remove_m36181 (ParseRelation_1_t1182 * __this, ParseUser_t391 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseRelation`1<Parse.ParseUser>::get_Query()
 ParseQuery_1_t1205 * ParseRelation_1_get_Query_m36182 (ParseRelation_1_t1182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
