#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t3552 
{
	// System.String System.Runtime.Serialization.SerializationEntry::name
	String_t* ___name;
	// System.Type System.Runtime.Serialization.SerializationEntry::objectType
	Type_t * ___objectType;
	// System.Object System.Runtime.Serialization.SerializationEntry::value
	Object_t * ___value;
};
