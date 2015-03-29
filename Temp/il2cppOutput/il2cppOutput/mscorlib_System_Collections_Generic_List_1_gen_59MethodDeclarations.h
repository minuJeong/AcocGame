#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t6821;
// System.Object
struct Object_t;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t1564;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_t6822;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_t1563;
// System.Collections.Generic.IEnumerator`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerator_1_t6817;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Linq.Expressions.ParameterExpression>
struct ICollection_1_t6823;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t2877;
// System.Predicate`1<System.Linq.Expressions.ParameterExpression>
struct Predicate_1_t6824;
// System.Comparison`1<System.Linq.Expressions.ParameterExpression>
struct Comparison_1_t6825;
// System.Collections.Generic.List`1/Enumerator<System.Linq.Expressions.ParameterExpression>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_49.h"

// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m36080(__this, method) (void)List_1__ctor_m360_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m36081(__this, ___collection, method) (void)List_1__ctor_m2582_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Int32)
#define List_1__ctor_m36082(__this, ___capacity, method) (void)List_1__ctor_m15450_gshared((List_1_t2 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.ctor(T[],System.Int32)
#define List_1__ctor_m36083(__this, ___data, ___size, method) (void)List_1__ctor_m15451_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___data, (int32_t)___size, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.cctor()
#define List_1__cctor_m36084(__this/* static, unused */, method) (void)List_1__cctor_m15452_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36085(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15453_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m36086(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m15454_gshared((List_1_t2 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m36087(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m15455_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m36088(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m15456_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m36089(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m15457_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m36090(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m15458_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m36091(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m15459_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m36092(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m15460_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36093(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15461_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m36094(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m15462_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m36095(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m15463_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m36096(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m15464_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m36097(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m15465_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m36098(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m15466_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m36099(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m15467_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Add(T)
#define List_1_Add_m36100(__this, ___item, method) (void)List_1_Add_m363_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m36101(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m15468_gshared((List_1_t2 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m36102(__this, ___idx, ___count, method) (void)List_1_CheckRange_m15469_gshared((List_1_t2 *)__this, (int32_t)___idx, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m36103(__this, ___collection, method) (void)List_1_AddCollection_m15470_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m36104(__this, ___enumerable, method) (void)List_1_AddEnumerable_m15471_gshared((List_1_t2 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m36105(__this, ___collection, method) (void)List_1_AddRange_m365_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::AsReadOnly()
#define List_1_AsReadOnly_m36106(__this, method) (ReadOnlyCollection_1_t2877 *)List_1_AsReadOnly_m15472_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Clear()
#define List_1_Clear_m36107(__this, method) (void)List_1_Clear_m367_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Contains(T)
#define List_1_Contains_m36108(__this, ___item, method) (bool)List_1_Contains_m15473_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m36109(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m15474_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Find(System.Predicate`1<T>)
#define List_1_Find_m36110(__this, ___match, method) (ParameterExpression_t1564 *)List_1_Find_m15475_gshared((List_1_t2 *)__this, (Predicate_1_t4052 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m36111(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m15476_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t4052 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m36112(__this, ___match, method) (int32_t)List_1_FindIndex_m15477_gshared((List_1_t2 *)__this, (Predicate_1_t4052 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m36113(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m15478_gshared((List_1_t2 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4052 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::GetEnumerator()
 Enumerator_t6826  List_1_GetEnumerator_m36114 (List_1_t6821 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m36115(__this, ___index, ___count, method) (List_1_t6821 *)List_1_GetRange_m15479_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::IndexOf(T)
#define List_1_IndexOf_m36116(__this, ___item, method) (int32_t)List_1_IndexOf_m6346_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m36117(__this, ___start, ___delta, method) (void)List_1_Shift_m15480_gshared((List_1_t2 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m36118(__this, ___index, method) (void)List_1_CheckIndex_m15481_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Insert(System.Int32,T)
#define List_1_Insert_m36119(__this, ___index, ___item, method) (void)List_1_Insert_m15482_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m36120(__this, ___collection, method) (void)List_1_CheckCollection_m15483_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m36121(__this, ___index, ___collection, method) (void)List_1_InsertRange_m15484_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m36122(__this, ___index, ___collection, method) (void)List_1_InsertCollection_m15485_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m36123(__this, ___index, ___enumerable, method) (void)List_1_InsertEnumeration_m15486_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Remove(T)
#define List_1_Remove_m36124(__this, ___item, method) (bool)List_1_Remove_m15487_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m36125(__this, ___match, method) (int32_t)List_1_RemoveAll_m15488_gshared((List_1_t2 *)__this, (Predicate_1_t4052 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m36126(__this, ___index, method) (void)List_1_RemoveAt_m15489_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m36127(__this, ___index, ___count, method) (void)List_1_RemoveRange_m15490_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Reverse()
#define List_1_Reverse_m36128(__this, method) (void)List_1_Reverse_m15491_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Sort()
#define List_1_Sort_m36129(__this, method) (void)List_1_Sort_m15492_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m36130(__this, ___comparison, method) (void)List_1_Sort_m15493_gshared((List_1_t2 *)__this, (Comparison_1_t4053 *)___comparison, method)
// T[] System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::ToArray()
#define List_1_ToArray_m36131(__this, method) (ParameterExpressionU5BU5D_t1563*)List_1_ToArray_m2552_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::TrimExcess()
#define List_1_TrimExcess_m36132(__this, method) (void)List_1_TrimExcess_m15494_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::get_Capacity()
#define List_1_get_Capacity_m36133(__this, method) (int32_t)List_1_get_Capacity_m15495_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m36134(__this, ___value, method) (void)List_1_set_Capacity_m15496_gshared((List_1_t2 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::get_Count()
#define List_1_get_Count_m36135(__this, method) (int32_t)List_1_get_Count_m358_gshared((List_1_t2 *)__this, method)
// T System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::get_Item(System.Int32)
#define List_1_get_Item_m36136(__this, ___index, method) (ParameterExpression_t1564 *)List_1_get_Item_m1990_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::set_Item(System.Int32,T)
#define List_1_set_Item_m36137(__this, ___index, ___value, method) (void)List_1_set_Item_m6347_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
