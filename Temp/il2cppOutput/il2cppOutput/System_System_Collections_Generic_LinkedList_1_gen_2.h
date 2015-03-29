#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t6338;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t6337  : public Object_t
{
	// System.UInt32 System.Collections.Generic.LinkedList`1<System.Object>::count
	uint32_t ___count;
	// System.UInt32 System.Collections.Generic.LinkedList`1<System.Object>::version
	uint32_t ___version;
	// System.Object System.Collections.Generic.LinkedList`1<System.Object>::syncRoot
	Object_t * ___syncRoot;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::first
	LinkedListNode_1_t6338 * ___first;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1<System.Object>::si
	SerializationInfo_t2615 * ___si;
};
