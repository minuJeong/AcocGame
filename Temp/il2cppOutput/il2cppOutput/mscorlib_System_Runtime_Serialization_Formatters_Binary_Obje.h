#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t291;
// System.String[]
struct StringU5BU5D_t4;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t3529;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
struct TypeMetadata_t3530  : public Object_t
{
	// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::Type
	Type_t * ___Type;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberTypes
	TypeU5BU5D_t291* ___MemberTypes;
	// System.String[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberNames
	StringU5BU5D_t4* ___MemberNames;
	// System.Reflection.MemberInfo[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberInfos
	MemberInfoU5BU5D_t3529* ___MemberInfos;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::FieldCount
	int32_t ___FieldCount;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::NeedsSerializationInfo
	bool ___NeedsSerializationInfo;
};
