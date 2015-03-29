#pragma once
#include <stdint.h>
// System.Linq.OrderedEnumerable`1<System.Object>
struct OrderedEnumerable_1_t6240;
// System.Func`2<System.Object,System.Object>
struct Func_2_t1092;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t6241;
// System.Linq.OrderedEnumerable`1<System.Object>
#include "System_Core_System_Linq_OrderedEnumerable_1_gen.h"
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"
// System.Linq.OrderedSequence`2<System.Object,System.Object>
struct OrderedSequence_2_t6242  : public OrderedEnumerable_1_t6240
{
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::parent
	OrderedEnumerable_1_t6240 * ___parent;
	// System.Func`2<TElement,TKey> System.Linq.OrderedSequence`2<System.Object,System.Object>::selector
	Func_2_t1092 * ___selector;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.OrderedSequence`2<System.Object,System.Object>::comparer
	Object_t* ___comparer;
	// System.Linq.SortDirection System.Linq.OrderedSequence`2<System.Object,System.Object>::direction
	int32_t ___direction;
};
