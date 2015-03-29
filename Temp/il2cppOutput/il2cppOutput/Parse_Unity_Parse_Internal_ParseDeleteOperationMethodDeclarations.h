#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.ParseDeleteOperation
struct ParseDeleteOperation_t1045;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1040;
// Parse.ParseObject
struct ParseObject_t534;
// System.String
struct String_t;

// Parse.Internal.ParseDeleteOperation Parse.Internal.ParseDeleteOperation::get_Instance()
 ParseDeleteOperation_t1045 * ParseDeleteOperation_get_Instance_m5400 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseDeleteOperation::.ctor()
 void ParseDeleteOperation__ctor_m5401 (ParseDeleteOperation_t1045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseDeleteOperation::Encode()
 Object_t * ParseDeleteOperation_Encode_m5402 (ParseDeleteOperation_t1045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.Internal.ParseDeleteOperation::MergeWithPrevious(Parse.Internal.IParseFieldOperation)
 Object_t * ParseDeleteOperation_MergeWithPrevious_m5403 (ParseDeleteOperation_t1045 * __this, Object_t * ___previous, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseDeleteOperation::Apply(System.Object,Parse.ParseObject,System.String)
 Object_t * ParseDeleteOperation_Apply_m5404 (ParseDeleteOperation_t1045 * __this, Object_t * ___oldValue, ParseObject_t534 * ___obj, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseDeleteOperation::.cctor()
 void ParseDeleteOperation__cctor_m5405 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
