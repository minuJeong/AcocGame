#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Collections.Hashtable
struct Hashtable_t48;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1028;
// System.Object
#include "mscorlib_System_Object.h"
// System.UriParser
struct UriParser_t2825  : public Object_t
{
	// System.String System.UriParser::scheme_name
	String_t* ___scheme_name;
	// System.Int32 System.UriParser::default_port
	int32_t ___default_port;
};
struct UriParser_t2825_StaticFields{
	// System.Object System.UriParser::lock_object
	Object_t * ___lock_object;
	// System.Collections.Hashtable System.UriParser::table
	Hashtable_t48 * ___table;
	// System.Text.RegularExpressions.Regex System.UriParser::uri_regex
	Regex_t1028 * ___uri_regex;
	// System.Text.RegularExpressions.Regex System.UriParser::auth_regex
	Regex_t1028 * ___auth_regex;
};
