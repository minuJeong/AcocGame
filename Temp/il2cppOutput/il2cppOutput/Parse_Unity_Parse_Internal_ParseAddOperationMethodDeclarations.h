#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.ParseAddOperation
struct ParseAddOperation_t1039;
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

// System.Void Parse.Internal.ParseAddOperation::.ctor(System.Collections.Generic.IEnumerable`1<System.Object>)
 void ParseAddOperation__ctor_m5387 (ParseAddOperation_t1039 * __this, Object_t* ___objects, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseAddOperation::Encode()
 Object_t * ParseAddOperation_Encode_m5388 (ParseAddOperation_t1039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.Internal.ParseAddOperation::MergeWithPrevious(Parse.Internal.IParseFieldOperation)
 Object_t * ParseAddOperation_MergeWithPrevious_m5389 (ParseAddOperation_t1039 * __this, Object_t * ___previous, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseAddOperation::Apply(System.Object,Parse.ParseObject,System.String)
 Object_t * ParseAddOperation_Apply_m5390 (ParseAddOperation_t1039 * __this, Object_t * ___oldValue, ParseObject_t534 * ___obj, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Parse.Internal.ParseAddOperation::get_Objects()
 Object_t* ParseAddOperation_get_Objects_m5391 (ParseAddOperation_t1039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
