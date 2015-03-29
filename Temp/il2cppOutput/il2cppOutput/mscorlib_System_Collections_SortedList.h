#pragma once
#include <stdint.h>
// System.Collections.SortedList/Slot[]
struct SlotU5BU5D_t3303;
// System.Collections.IComparer
struct IComparer_t3176;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.SortedList
struct SortedList_t3299  : public Object_t
{
	// System.Int32 System.Collections.SortedList::inUse
	int32_t ___inUse;
	// System.Int32 System.Collections.SortedList::modificationCount
	int32_t ___modificationCount;
	// System.Collections.SortedList/Slot[] System.Collections.SortedList::table
	SlotU5BU5D_t3303* ___table;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	Object_t * ___comparer;
	// System.Int32 System.Collections.SortedList::defaultCapacity
	int32_t ___defaultCapacity;
};
struct SortedList_t3299_StaticFields{
	// System.Int32 System.Collections.SortedList::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
};
