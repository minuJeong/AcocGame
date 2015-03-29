#pragma once
#include <stdint.h>
// System.Func`2<System.Object,System.IComparable>
struct Func_2_t1035;
// System.Collections.Generic.IComparer`1<System.IComparable>
struct IComparer_1_t6248;
// System.IComparable[]
struct IComparableU5BU5D_t6211;
// System.Linq.SortContext`1<System.Object>
#include "System_Core_System_Linq_SortContext_1_gen.h"
// System.Linq.SortSequenceContext`2<System.Object,System.IComparable>
struct SortSequenceContext_2_t6252  : public SortContext_1_t6244
{
	// System.Func`2<TElement,TKey> System.Linq.SortSequenceContext`2<System.Object,System.IComparable>::selector
	Func_2_t1035 * ___selector;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.SortSequenceContext`2<System.Object,System.IComparable>::comparer
	Object_t* ___comparer;
	// TKey[] System.Linq.SortSequenceContext`2<System.Object,System.IComparable>::keys
	IComparableU5BU5D_t6211* ___keys;
};
