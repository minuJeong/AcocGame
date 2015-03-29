#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t6336;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t6337;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t6337  : public Object_t
{
	// T System.Collections.Generic.LinkedListNode`1<System.Object>::item
	Object_t * ___item;
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::container
	LinkedList_1_t6336 * ___container;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::forward
	LinkedListNode_1_t6337 * ___forward;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::back
	LinkedListNode_1_t6337 * ___back;
};
