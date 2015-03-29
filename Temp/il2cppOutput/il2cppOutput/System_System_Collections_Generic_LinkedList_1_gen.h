#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct LinkedListNode_1_t1524;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.LinkedList`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct LinkedList_1_t1159  : public Object_t
{
	// System.UInt32 System.Collections.Generic.LinkedList`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::count
	uint32_t ___count;
	// System.UInt32 System.Collections.Generic.LinkedList`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::version
	uint32_t ___version;
	// System.Object System.Collections.Generic.LinkedList`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::syncRoot
	Object_t * ___syncRoot;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::first
	LinkedListNode_1_t1524 * ___first;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::si
	SerializationInfo_t2614 * ___si;
};
