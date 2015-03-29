#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.ParseAddUniqueOperation
struct ParseAddUniqueOperation_t1044;
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

// System.Void Parse.Internal.ParseAddUniqueOperation::.ctor(System.Collections.Generic.IEnumerable`1<System.Object>)
 void ParseAddUniqueOperation__ctor_m5395 (ParseAddUniqueOperation_t1044 * __this, Object_t* ___objects, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseAddUniqueOperation::Encode()
 Object_t * ParseAddUniqueOperation_Encode_m5396 (ParseAddUniqueOperation_t1044 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.Internal.ParseAddUniqueOperation::MergeWithPrevious(Parse.Internal.IParseFieldOperation)
 Object_t * ParseAddUniqueOperation_MergeWithPrevious_m5397 (ParseAddUniqueOperation_t1044 * __this, Object_t * ___previous, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseAddUniqueOperation::Apply(System.Object,Parse.ParseObject,System.String)
 Object_t * ParseAddUniqueOperation_Apply_m5398 (ParseAddUniqueOperation_t1044 * __this, Object_t * ___oldValue, ParseObject_t534 * ___obj, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Parse.Internal.ParseAddUniqueOperation::get_Objects()
 Object_t* ParseAddUniqueOperation_get_Objects_m5399 (ParseAddUniqueOperation_t1044 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
