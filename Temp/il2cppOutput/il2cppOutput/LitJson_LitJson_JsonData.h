#pragma once
#include <stdint.h>
// System.Collections.Generic.IList`1<LitJson.JsonData>
struct IList_1_t886;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>
struct IDictionary_2_t887;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IList_1_t888;
// System.Object
#include "mscorlib_System_Object.h"
// LitJson.JsonType
#include "LitJson_LitJson_JsonType.h"
// LitJson.JsonData
struct JsonData_t537  : public Object_t
{
	// System.Collections.Generic.IList`1<LitJson.JsonData> LitJson.JsonData::inst_array
	Object_t* ___inst_array;
	// System.Boolean LitJson.JsonData::inst_boolean
	bool ___inst_boolean;
	// System.Double LitJson.JsonData::inst_double
	double ___inst_double;
	// System.Int32 LitJson.JsonData::inst_int
	int32_t ___inst_int;
	// System.Int64 LitJson.JsonData::inst_long
	int64_t ___inst_long;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData> LitJson.JsonData::inst_object
	Object_t* ___inst_object;
	// System.String LitJson.JsonData::inst_string
	String_t* ___inst_string;
	// System.String LitJson.JsonData::json
	String_t* ___json;
	// LitJson.JsonType LitJson.JsonData::type
	int32_t ___type;
	// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>> LitJson.JsonData::object_list
	Object_t* ___object_list;
};
