#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseRelation`1<Parse.ParseRole>
struct ParseRelation_1_t1183;
// Parse.ParseQuery`1<Parse.ParseRole>
struct ParseQuery_1_t1184;
// Parse.ParseObject
struct ParseObject_t534;
// System.String
struct String_t;
// Parse.ParseRole
struct ParseRole_t1081;

// System.Void Parse.ParseRelation`1<Parse.ParseRole>::.ctor(Parse.ParseObject,System.String)
 void ParseRelation_1__ctor_m36556 (ParseRelation_1_t1183 * __this, ParseObject_t534 * ___parent, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelation`1<Parse.ParseRole>::.ctor(Parse.ParseObject,System.String,System.String)
 void ParseRelation_1__ctor_m36557 (ParseRelation_1_t1183 * __this, ParseObject_t534 * ___parent, String_t* ___key, String_t* ___targetClassName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelation`1<Parse.ParseRole>::Add(T)
 void ParseRelation_1_Add_m36558 (ParseRelation_1_t1183 * __this, ParseRole_t1081 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelation`1<Parse.ParseRole>::Remove(T)
 void ParseRelation_1_Remove_m36559 (ParseRelation_1_t1183 * __this, ParseRole_t1081 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseRelation`1<Parse.ParseRole>::get_Query()
 ParseQuery_1_t1184 * ParseRelation_1_get_Query_m36560 (ParseRelation_1_t1183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
