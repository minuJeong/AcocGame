#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.UnitySerializationHolder/UnityType
#include "mscorlib_System_UnitySerializationHolder_UnityType.h"
// System.UnitySerializationHolder
struct UnitySerializationHolder_t3744  : public Object_t
{
	// System.String System.UnitySerializationHolder::_data
	String_t* ____data;
	// System.UnitySerializationHolder/UnityType System.UnitySerializationHolder::_unityType
	uint8_t ____unityType;
	// System.String System.UnitySerializationHolder::_assemblyName
	String_t* ____assemblyName;
};
