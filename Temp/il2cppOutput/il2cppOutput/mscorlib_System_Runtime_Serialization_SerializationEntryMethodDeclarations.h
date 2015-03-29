#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t3552;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;

// System.Void System.Runtime.Serialization.SerializationEntry::.ctor(System.String,System.Type,System.Object)
 void SerializationEntry__ctor_m13201 (SerializationEntry_t3552 * __this, String_t* ___name, Type_t * ___type, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationEntry::get_Name()
 String_t* SerializationEntry_get_Name_m13202 (SerializationEntry_t3552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationEntry::get_Value()
 Object_t * SerializationEntry_get_Value_m13203 (SerializationEntry_t3552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
