#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.ParseRelationOperation
struct ParseRelationOperation_t1055;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t1010;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>
struct IEnumerable_1_t1056;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1040;
// Parse.ParseObject
struct ParseObject_t534;

// System.Void Parse.Internal.ParseRelationOperation::.ctor(System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.String)
 void ParseRelationOperation__ctor_m5486 (ParseRelationOperation_t1055 * __this, Object_t* ___adds, Object_t* ___removes, String_t* ___targetClassName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseRelationOperation::.ctor(System.Collections.Generic.IEnumerable`1<Parse.ParseObject>,System.Collections.Generic.IEnumerable`1<Parse.ParseObject>)
 void ParseRelationOperation__ctor_m5487 (ParseRelationOperation_t1055 * __this, Object_t* ___adds, Object_t* ___removes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRelationOperation::Encode()
 Object_t * ParseRelationOperation_Encode_m5488 (ParseRelationOperation_t1055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.Internal.ParseRelationOperation::MergeWithPrevious(Parse.Internal.IParseFieldOperation)
 Object_t * ParseRelationOperation_MergeWithPrevious_m5489 (ParseRelationOperation_t1055 * __this, Object_t * ___previous, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRelationOperation::Apply(System.Object,Parse.ParseObject,System.String)
 Object_t * ParseRelationOperation_Apply_m5490 (ParseRelationOperation_t1055 * __this, Object_t * ___oldValue, ParseObject_t534 * ___obj, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.ParseRelationOperation::get_TargetClassName()
 String_t* ParseRelationOperation_get_TargetClassName_m5491 (ParseRelationOperation_t1055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Parse.Internal.ParseRelationOperation::IdsFromObjects(System.Collections.Generic.IEnumerable`1<Parse.ParseObject>)
 Object_t* ParseRelationOperation_IdsFromObjects_m5492 (ParseRelationOperation_t1055 * __this, Object_t* ___objects, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.ParseRelationOperation::<.ctor>b__0(Parse.ParseObject)
 String_t* ParseRelationOperation_U3C_ctorU3Eb__0_m5493 (Object_t * __this/* static, unused */, ParseObject_t534 * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRelationOperation::<Encode>b__5(System.String)
 Object_t * ParseRelationOperation_U3CEncodeU3Eb__5_m5494 (ParseRelationOperation_t1055 * __this, String_t* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRelationOperation::<Encode>b__6(System.String)
 Object_t * ParseRelationOperation_U3CEncodeU3Eb__6_m5495 (ParseRelationOperation_t1055 * __this, String_t* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.ParseRelationOperation::<IdsFromObjects>b__7(Parse.ParseObject)
 String_t* ParseRelationOperation_U3CIdsFromObjectsU3Eb__7_m5496 (Object_t * __this/* static, unused */, ParseObject_t534 * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
