#pragma once
#include <stdint.h>
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct IDictionary_2_t914;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t915;
// LitJson.Lexer
struct Lexer_t916;
// System.IO.TextReader
struct TextReader_t877;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// LitJson.JsonToken
#include "LitJson_LitJson_JsonToken.h"
// LitJson.JsonReader
struct JsonReader_t912  : public Object_t
{
	// System.Collections.Generic.Stack`1<System.Int32> LitJson.JsonReader::automaton_stack
	Stack_1_t915 * ___automaton_stack;
	// System.Int32 LitJson.JsonReader::current_input
	int32_t ___current_input;
	// System.Int32 LitJson.JsonReader::current_symbol
	int32_t ___current_symbol;
	// System.Boolean LitJson.JsonReader::end_of_json
	bool ___end_of_json;
	// System.Boolean LitJson.JsonReader::end_of_input
	bool ___end_of_input;
	// LitJson.Lexer LitJson.JsonReader::lexer
	Lexer_t916 * ___lexer;
	// System.Boolean LitJson.JsonReader::parser_in_string
	bool ___parser_in_string;
	// System.Boolean LitJson.JsonReader::parser_return
	bool ___parser_return;
	// System.Boolean LitJson.JsonReader::read_started
	bool ___read_started;
	// System.IO.TextReader LitJson.JsonReader::reader
	TextReader_t877 * ___reader;
	// System.Boolean LitJson.JsonReader::reader_is_owned
	bool ___reader_is_owned;
	// System.Boolean LitJson.JsonReader::skip_non_members
	bool ___skip_non_members;
	// System.Object LitJson.JsonReader::token_value
	Object_t * ___token_value;
	// LitJson.JsonToken LitJson.JsonReader::token
	int32_t ___token;
};
struct JsonReader_t912_StaticFields{
	// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>> LitJson.JsonReader::parse_table
	Object_t* ___parse_table;
};
