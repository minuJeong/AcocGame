#pragma once
#include <stdint.h>
// System.Func`2<System.Object,System.Object>
struct Func_2_t1092;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t6242;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Linq.SortContext`1<System.Object>
#include "System_Core_System_Linq_SortContext_1_gen.h"
// System.Linq.SortSequenceContext`2<System.Object,System.Object>
struct SortSequenceContext_2_t6245  : public SortContext_1_t6244
{
	// System.Func`2<TElement,TKey> System.Linq.SortSequenceContext`2<System.Object,System.Object>::selector
	Func_2_t1092 * ___selector;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.SortSequenceContext`2<System.Object,System.Object>::comparer
	Object_t* ___comparer;
	// TKey[] System.Linq.SortSequenceContext`2<System.Object,System.Object>::keys
	ObjectU5BU5D_t5* ___keys;
};
