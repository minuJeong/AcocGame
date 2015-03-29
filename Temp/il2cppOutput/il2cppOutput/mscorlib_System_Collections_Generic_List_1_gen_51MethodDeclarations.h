#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Linq.Expressions.Expression>
struct List_1_t2945;
// System.Object
struct Object_t;
// System.Linq.Expressions.Expression
struct Expression_t1562;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>
struct IEnumerable_1_t2878;
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_t1561;
// System.Collections.Generic.IEnumerator`1<System.Linq.Expressions.Expression>
struct IEnumerator_1_t11913;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Linq.Expressions.Expression>
struct ICollection_1_t2944;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t2880;
// System.Predicate`1<System.Linq.Expressions.Expression>
struct Predicate_1_t11915;
// System.Comparison`1<System.Linq.Expressions.Expression>
struct Comparison_1_t11916;
// System.Collections.Generic.List`1/Enumerator<System.Linq.Expressions.Expression>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_197.h"

// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m87753(__this, method) (void)List_1__ctor_m360_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m87754(__this, ___collection, method) (void)List_1__ctor_m2582_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::.ctor(System.Int32)
#define List_1__ctor_m87755(__this, ___capacity, method) (void)List_1__ctor_m15447_gshared((List_1_t2 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::.ctor(T[],System.Int32)
#define List_1__ctor_m87756(__this, ___data, ___size, method) (void)List_1__ctor_m15448_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___data, (int32_t)___size, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::.cctor()
#define List_1__cctor_m87757(__this/* static, unused */, method) (void)List_1__cctor_m15449_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m87758(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15450_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m87759(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m15451_gshared((List_1_t2 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m87760(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m15452_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m87761(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m15453_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m87762(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m15454_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m87763(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m15455_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m87764(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m15456_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m87765(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m15457_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m87766(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15458_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m87767(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m15459_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m87768(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m15460_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m87769(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m15461_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m87770(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m15462_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m87771(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m15463_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m87772(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m15464_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::Add(T)
#define List_1_Add_m87773(__this, ___item, method) (void)List_1_Add_m363_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m87774(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m15465_gshared((List_1_t2 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m87775(__this, ___idx, ___count, method) (void)List_1_CheckRange_m15466_gshared((List_1_t2 *)__this, (int32_t)___idx, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m87776(__this, ___collection, method) (void)List_1_AddCollection_m15467_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m87777(__this, ___enumerable, method) (void)List_1_AddEnumerable_m15468_gshared((List_1_t2 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m87778(__this, ___collection, method) (void)List_1_AddRange_m365_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::AsReadOnly()
#define List_1_AsReadOnly_m87779(__this, method) (ReadOnlyCollection_1_t2880 *)List_1_AsReadOnly_m15469_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::Clear()
#define List_1_Clear_m87780(__this, method) (void)List_1_Clear_m367_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::Contains(T)
#define List_1_Contains_m87781(__this, ___item, method) (bool)List_1_Contains_m15470_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m87782(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m15471_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::Find(System.Predicate`1<T>)
#define List_1_Find_m87783(__this, ___match, method) (Expression_t1562 *)List_1_Find_m15472_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m87784(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m15473_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t4051 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m87785(__this, ___match, method) (int32_t)List_1_FindIndex_m15474_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m87786(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m15475_gshared((List_1_t2 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4051 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::GetEnumerator()
 Enumerator_t11917  List_1_GetEnumerator_m87787 (List_1_t2945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m87788(__this, ___index, ___count, method) (List_1_t2945 *)List_1_GetRange_m15476_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::IndexOf(T)
#define List_1_IndexOf_m87789(__this, ___item, method) (int32_t)List_1_IndexOf_m6344_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m87790(__this, ___start, ___delta, method) (void)List_1_Shift_m15477_gshared((List_1_t2 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m87791(__this, ___index, method) (void)List_1_CheckIndex_m15478_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::Insert(System.Int32,T)
#define List_1_Insert_m87792(__this, ___index, ___item, method) (void)List_1_Insert_m15479_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m87793(__this, ___collection, method) (void)List_1_CheckCollection_m15480_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m87794(__this, ___index, ___collection, method) (void)List_1_InsertRange_m15481_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m87795(__this, ___index, ___collection, method) (void)List_1_InsertCollection_m15482_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m87796(__this, ___index, ___enumerable, method) (void)List_1_InsertEnumeration_m15483_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::Remove(T)
#define List_1_Remove_m87797(__this, ___item, method) (bool)List_1_Remove_m15484_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m87798(__this, ___match, method) (int32_t)List_1_RemoveAll_m15485_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m87799(__this, ___index, method) (void)List_1_RemoveAt_m15486_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m87800(__this, ___index, ___count, method) (void)List_1_RemoveRange_m15487_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::Reverse()
#define List_1_Reverse_m87801(__this, method) (void)List_1_Reverse_m15488_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::Sort()
#define List_1_Sort_m87802(__this, method) (void)List_1_Sort_m15489_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m87803(__this, ___comparison, method) (void)List_1_Sort_m15490_gshared((List_1_t2 *)__this, (Comparison_1_t4052 *)___comparison, method)
// T[] System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::ToArray()
#define List_1_ToArray_m87804(__this, method) (ExpressionU5BU5D_t1561*)List_1_ToArray_m2552_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::TrimExcess()
#define List_1_TrimExcess_m87805(__this, method) (void)List_1_TrimExcess_m15491_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::get_Capacity()
#define List_1_get_Capacity_m87806(__this, method) (int32_t)List_1_get_Capacity_m15492_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m87807(__this, ___value, method) (void)List_1_set_Capacity_m15493_gshared((List_1_t2 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::get_Count()
#define List_1_get_Count_m87808(__this, method) (int32_t)List_1_get_Count_m358_gshared((List_1_t2 *)__this, method)
// T System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::get_Item(System.Int32)
#define List_1_get_Item_m87809(__this, ___index, method) (Expression_t1562 *)List_1_get_Item_m1990_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.Expression>::set_Item(System.Int32,T)
#define List_1_set_Item_m87810(__this, ___index, ___value, method) (void)List_1_set_Item_m6345_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
