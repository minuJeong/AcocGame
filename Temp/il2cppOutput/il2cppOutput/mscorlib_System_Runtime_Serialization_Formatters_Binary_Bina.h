#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Type[]
struct TypeU5BU5D_t291;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
struct BinaryCommon_t3521  : public Object_t
{
};
struct BinaryCommon_t3521_StaticFields{
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::BinaryHeader
	ByteU5BU5D_t21* ___BinaryHeader;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodesToType
	TypeU5BU5D_t291* ____typeCodesToType;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodeMap
	ByteU5BU5D_t21* ____typeCodeMap;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::UseReflectionSerialization
	bool ___UseReflectionSerialization;
};
