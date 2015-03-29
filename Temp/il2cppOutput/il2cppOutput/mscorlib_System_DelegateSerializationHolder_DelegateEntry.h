#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t3695;
// System.Object
#include "mscorlib_System_Object.h"
// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t3695  : public Object_t
{
	// System.String System.DelegateSerializationHolder/DelegateEntry::type
	String_t* ___type;
	// System.String System.DelegateSerializationHolder/DelegateEntry::assembly
	String_t* ___assembly;
	// System.Object System.DelegateSerializationHolder/DelegateEntry::target
	Object_t * ___target;
	// System.String System.DelegateSerializationHolder/DelegateEntry::targetTypeAssembly
	String_t* ___targetTypeAssembly;
	// System.String System.DelegateSerializationHolder/DelegateEntry::targetTypeName
	String_t* ___targetTypeName;
	// System.String System.DelegateSerializationHolder/DelegateEntry::methodName
	String_t* ___methodName;
	// System.DelegateSerializationHolder/DelegateEntry System.DelegateSerializationHolder/DelegateEntry::delegateEntry
	DelegateEntry_t3695 * ___delegateEntry;
};
