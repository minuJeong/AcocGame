#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseRelationBase
struct ParseRelationBase_t1180;
// System.String
struct String_t;
// Parse.ParseObject
struct ParseObject_t534;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;

// System.Void Parse.ParseRelationBase::.ctor(Parse.ParseObject,System.String)
 void ParseRelationBase__ctor_m5834 (ParseRelationBase_t1180 * __this, ParseObject_t534 * ___parent, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::.ctor(Parse.ParseObject,System.String,System.String)
 void ParseRelationBase__ctor_m5835 (ParseRelationBase_t1180 * __this, ParseObject_t534 * ___parent, String_t* ___key, String_t* ___targetClassName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::EnsureParentAndKey(Parse.ParseObject,System.String)
 void ParseRelationBase_EnsureParentAndKey_m5836 (ParseRelationBase_t1180 * __this, ParseObject_t534 * ___parent, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::Add(Parse.ParseObject)
 void ParseRelationBase_Add_m5837 (ParseRelationBase_t1180 * __this, ParseObject_t534 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::Remove(Parse.ParseObject)
 void ParseRelationBase_Remove_m5838 (ParseRelationBase_t1180 * __this, ParseObject_t534 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseRelationBase::ToJSON()
 Object_t* ParseRelationBase_ToJSON_m5839 (ParseRelationBase_t1180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseRelationBase::get_TargetClassName()
 String_t* ParseRelationBase_get_TargetClassName_m5840 (ParseRelationBase_t1180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::set_TargetClassName(System.String)
 void ParseRelationBase_set_TargetClassName_m5841 (ParseRelationBase_t1180 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseRelationBase Parse.ParseRelationBase::CreateRelation(Parse.ParseObject,System.String,System.String)
 ParseRelationBase_t1180 * ParseRelationBase_CreateRelation_m5842 (Object_t * __this/* static, unused */, ParseObject_t534 * ___parent, String_t* ___key, String_t* ___targetClassName, MethodInfo* method) IL2CPP_METHOD_ATTR;
