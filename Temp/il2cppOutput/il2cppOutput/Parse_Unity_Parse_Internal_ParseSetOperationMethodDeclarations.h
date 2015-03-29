#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.ParseSetOperation
struct ParseSetOperation_t1058;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1040;
// Parse.ParseObject
struct ParseObject_t534;
// System.String
struct String_t;

// System.Void Parse.Internal.ParseSetOperation::.ctor(System.Object)
 void ParseSetOperation__ctor_m5504 (ParseSetOperation_t1058 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseSetOperation::Encode()
 Object_t * ParseSetOperation_Encode_m5505 (ParseSetOperation_t1058 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.Internal.ParseSetOperation::MergeWithPrevious(Parse.Internal.IParseFieldOperation)
 Object_t * ParseSetOperation_MergeWithPrevious_m5506 (ParseSetOperation_t1058 * __this, Object_t * ___previous, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseSetOperation::Apply(System.Object,Parse.ParseObject,System.String)
 Object_t * ParseSetOperation_Apply_m5507 (ParseSetOperation_t1058 * __this, Object_t * ___oldValue, ParseObject_t534 * ___obj, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseSetOperation::get_Value()
 Object_t * ParseSetOperation_get_Value_m5508 (ParseSetOperation_t1058 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseSetOperation::set_Value(System.Object)
 void ParseSetOperation_set_Value_m5509 (ParseSetOperation_t1058 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
