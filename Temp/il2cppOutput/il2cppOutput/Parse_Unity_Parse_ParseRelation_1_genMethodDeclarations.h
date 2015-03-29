#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseRelation`1<Parse.ParseObject>
struct ParseRelation_1_t1567;
// Parse.ParseQuery`1<Parse.ParseObject>
struct ParseQuery_1_t1174;
// Parse.ParseObject
struct ParseObject_t534;
// System.String
struct String_t;

// System.Void Parse.ParseRelation`1<Parse.ParseObject>::.ctor(Parse.ParseObject,System.String)
 void ParseRelation_1__ctor_m36168 (ParseRelation_1_t1567 * __this, ParseObject_t534 * ___parent, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelation`1<Parse.ParseObject>::.ctor(Parse.ParseObject,System.String,System.String)
 void ParseRelation_1__ctor_m36169 (ParseRelation_1_t1567 * __this, ParseObject_t534 * ___parent, String_t* ___key, String_t* ___targetClassName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelation`1<Parse.ParseObject>::Add(T)
 void ParseRelation_1_Add_m36170 (ParseRelation_1_t1567 * __this, ParseObject_t534 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelation`1<Parse.ParseObject>::Remove(T)
 void ParseRelation_1_Remove_m36171 (ParseRelation_1_t1567 * __this, ParseObject_t534 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseRelation`1<Parse.ParseObject>::get_Query()
 ParseQuery_1_t1174 * ParseRelation_1_get_Query_m36172 (ParseRelation_1_t1567 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
