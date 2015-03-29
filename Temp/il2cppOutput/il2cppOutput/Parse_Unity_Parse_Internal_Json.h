#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1028;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t1029;
// System.Object
#include "mscorlib_System_Object.h"
// Parse.Internal.Json
struct Json_t1030  : public Object_t
{
};
struct Json_t1030_StaticFields{
	// System.String Parse.Internal.Json::startOfString
	String_t* ___startOfString;
	// System.String Parse.Internal.Json::whitespace
	String_t* ___whitespace;
	// System.Text.RegularExpressions.Regex Parse.Internal.Json::beginArray
	Regex_t1028 * ___beginArray;
	// System.Text.RegularExpressions.Regex Parse.Internal.Json::beginObject
	Regex_t1028 * ___beginObject;
	// System.Text.RegularExpressions.Regex Parse.Internal.Json::endArray
	Regex_t1028 * ___endArray;
	// System.Text.RegularExpressions.Regex Parse.Internal.Json::endObject
	Regex_t1028 * ___endObject;
	// System.Text.RegularExpressions.Regex Parse.Internal.Json::nameSeparator
	Regex_t1028 * ___nameSeparator;
	// System.Text.RegularExpressions.Regex Parse.Internal.Json::valueSeparator
	Regex_t1028 * ___valueSeparator;
	// System.Text.RegularExpressions.Regex Parse.Internal.Json::falseValue
	Regex_t1028 * ___falseValue;
	// System.Text.RegularExpressions.Regex Parse.Internal.Json::trueValue
	Regex_t1028 * ___trueValue;
	// System.Text.RegularExpressions.Regex Parse.Internal.Json::nullValue
	Regex_t1028 * ___nullValue;
	// System.Text.RegularExpressions.Regex Parse.Internal.Json::numberValue
	Regex_t1028 * ___numberValue;
	// System.Text.RegularExpressions.Regex Parse.Internal.Json::stringValue
	Regex_t1028 * ___stringValue;
	// System.Text.RegularExpressions.Regex Parse.Internal.Json::escapePattern
	Regex_t1028 * ___escapePattern;
	// System.Text.RegularExpressions.MatchEvaluator Parse.Internal.Json::CS$<>9__CachedAnonymousMethodDelegate1
	MatchEvaluator_t1029 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate1;
};
