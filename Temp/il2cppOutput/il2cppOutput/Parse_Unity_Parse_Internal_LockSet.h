#pragma once
#include <stdint.h>
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IComparable>
struct ConditionalWeakTable_2_t1033;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1034;
// System.Func`2<System.Object,System.IComparable>
struct Func_2_t1035;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IComparable>
struct CreateValueCallback_t1036;
// System.Object
#include "mscorlib_System_Object.h"
// Parse.Internal.LockSet
struct LockSet_t1037  : public Object_t
{
	// System.Collections.Generic.IEnumerable`1<System.Object> Parse.Internal.LockSet::mutexes
	Object_t* ___mutexes;
};
struct LockSet_t1037_StaticFields{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IComparable> Parse.Internal.LockSet::stableIds
	ConditionalWeakTable_2_t1033 * ___stableIds;
	// System.Int64 Parse.Internal.LockSet::nextStableId
	int64_t ___nextStableId;
	// System.Func`2<System.Object,System.IComparable> Parse.Internal.LockSet::CS$<>9__CachedAnonymousMethodDelegate1
	Func_2_t1035 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IComparable> Parse.Internal.LockSet::CS$<>9__CachedAnonymousMethodDelegate3
	CreateValueCallback_t1036 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate3;
};
