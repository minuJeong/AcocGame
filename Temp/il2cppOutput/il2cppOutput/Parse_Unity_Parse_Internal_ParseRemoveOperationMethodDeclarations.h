#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.ParseRemoveOperation
struct ParseRemoveOperation_t1057;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1034;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1040;
// Parse.ParseObject
struct ParseObject_t534;
// System.String
struct String_t;

// System.Void Parse.Internal.ParseRemoveOperation::.ctor(System.Collections.Generic.IEnumerable`1<System.Object>)
 void ParseRemoveOperation__ctor_m5499 (ParseRemoveOperation_t1057 * __this, Object_t* ___objects, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRemoveOperation::Encode()
 Object_t * ParseRemoveOperation_Encode_m5500 (ParseRemoveOperation_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.Internal.ParseRemoveOperation::MergeWithPrevious(Parse.Internal.IParseFieldOperation)
 Object_t * ParseRemoveOperation_MergeWithPrevious_m5501 (ParseRemoveOperation_t1057 * __this, Object_t * ___previous, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRemoveOperation::Apply(System.Object,Parse.ParseObject,System.String)
 Object_t * ParseRemoveOperation_Apply_m5502 (ParseRemoveOperation_t1057 * __this, Object_t * ___oldValue, ParseObject_t534 * ___obj, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Parse.Internal.ParseRemoveOperation::get_Objects()
 Object_t* ParseRemoveOperation_get_Objects_m5503 (ParseRemoveOperation_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
