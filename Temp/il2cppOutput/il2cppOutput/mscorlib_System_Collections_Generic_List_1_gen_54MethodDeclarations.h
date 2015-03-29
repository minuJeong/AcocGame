#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.WeakReference>
struct List_1_t6130;
// System.Object
struct Object_t;
// System.WeakReference
struct WeakReference_t983;
// System.Collections.Generic.IEnumerable`1<System.WeakReference>
struct IEnumerable_1_t6131;
// System.WeakReference[]
struct WeakReferenceU5BU5D_t6129;
// System.Collections.Generic.IEnumerator`1<System.WeakReference>
struct IEnumerator_1_t6132;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.WeakReference>
struct ICollection_1_t6133;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>
struct ReadOnlyCollection_1_t6134;
// System.Predicate`1<System.WeakReference>
struct Predicate_1_t6135;
// System.Comparison`1<System.WeakReference>
struct Comparison_1_t6136;
// System.Collections.Generic.List`1/Enumerator<System.WeakReference>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_40.h"

// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m30664(__this, method) (void)List_1__ctor_m360_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30665(__this, ___collection, method) (void)List_1__ctor_m2582_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(System.Int32)
#define List_1__ctor_m30666(__this, ___capacity, method) (void)List_1__ctor_m15447_gshared((List_1_t2 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(T[],System.Int32)
#define List_1__ctor_m30667(__this, ___data, ___size, method) (void)List_1__ctor_m15448_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___data, (int32_t)___size, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.cctor()
#define List_1__cctor_m30668(__this/* static, unused */, method) (void)List_1__cctor_m15449_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.WeakReference>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30669(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15450_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30670(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m15451_gshared((List_1_t2 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30671(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m15452_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30672(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m15453_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30673(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m15454_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30674(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m15455_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30675(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m15456_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30676(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m15457_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30677(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15458_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30678(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m15459_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30679(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m15460_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30680(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m15461_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30681(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m15462_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30682(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m15463_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30683(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m15464_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Add(T)
#define List_1_Add_m30684(__this, ___item, method) (void)List_1_Add_m363_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30685(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m15465_gshared((List_1_t2 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30686(__this, ___idx, ___count, method) (void)List_1_CheckRange_m15466_gshared((List_1_t2 *)__this, (int32_t)___idx, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30687(__this, ___collection, method) (void)List_1_AddCollection_m15467_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30688(__this, ___enumerable, method) (void)List_1_AddEnumerable_m15468_gshared((List_1_t2 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30689(__this, ___collection, method) (void)List_1_AddRange_m365_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.WeakReference>::AsReadOnly()
#define List_1_AsReadOnly_m30690(__this, method) (ReadOnlyCollection_1_t6134 *)List_1_AsReadOnly_m15469_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Clear()
#define List_1_Clear_m30691(__this, method) (void)List_1_Clear_m367_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::Contains(T)
#define List_1_Contains_m30692(__this, ___item, method) (bool)List_1_Contains_m15470_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30693(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m15471_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<System.WeakReference>::Find(System.Predicate`1<T>)
#define List_1_Find_m30694(__this, ___match, method) (WeakReference_t983 *)List_1_Find_m15472_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30695(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m15473_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t4051 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m30696(__this, ___match, method) (int32_t)List_1_FindIndex_m15474_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30697(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m15475_gshared((List_1_t2 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4051 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.WeakReference>::GetEnumerator()
 Enumerator_t6137  List_1_GetEnumerator_m30698 (List_1_t6130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.WeakReference>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30699(__this, ___index, ___count, method) (List_1_t6130 *)List_1_GetRange_m15476_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::IndexOf(T)
#define List_1_IndexOf_m30700(__this, ___item, method) (int32_t)List_1_IndexOf_m6344_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30701(__this, ___start, ___delta, method) (void)List_1_Shift_m15477_gshared((List_1_t2 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30702(__this, ___index, method) (void)List_1_CheckIndex_m15478_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Insert(System.Int32,T)
#define List_1_Insert_m30703(__this, ___index, ___item, method) (void)List_1_Insert_m15479_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30704(__this, ___collection, method) (void)List_1_CheckCollection_m15480_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30705(__this, ___index, ___collection, method) (void)List_1_InsertRange_m15481_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m30706(__this, ___index, ___collection, method) (void)List_1_InsertCollection_m15482_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m30707(__this, ___index, ___enumerable, method) (void)List_1_InsertEnumeration_m15483_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::Remove(T)
#define List_1_Remove_m30708(__this, ___item, method) (bool)List_1_Remove_m15484_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m30709(__this, ___match, method) (int32_t)List_1_RemoveAll_m15485_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m30710(__this, ___index, method) (void)List_1_RemoveAt_m15486_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m30711(__this, ___index, ___count, method) (void)List_1_RemoveRange_m15487_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Reverse()
#define List_1_Reverse_m30712(__this, method) (void)List_1_Reverse_m15488_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort()
#define List_1_Sort_m30713(__this, method) (void)List_1_Sort_m15489_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m30714(__this, ___comparison, method) (void)List_1_Sort_m15490_gshared((List_1_t2 *)__this, (Comparison_1_t4052 *)___comparison, method)
// T[] System.Collections.Generic.List`1<System.WeakReference>::ToArray()
#define List_1_ToArray_m30715(__this, method) (WeakReferenceU5BU5D_t6129*)List_1_ToArray_m2552_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::TrimExcess()
#define List_1_TrimExcess_m30716(__this, method) (void)List_1_TrimExcess_m15491_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::get_Capacity()
#define List_1_get_Capacity_m30717(__this, method) (int32_t)List_1_get_Capacity_m15492_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m30718(__this, ___value, method) (void)List_1_set_Capacity_m15493_gshared((List_1_t2 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::get_Count()
#define List_1_get_Count_m30719(__this, method) (int32_t)List_1_get_Count_m358_gshared((List_1_t2 *)__this, method)
// T System.Collections.Generic.List`1<System.WeakReference>::get_Item(System.Int32)
#define List_1_get_Item_m30720(__this, ___index, method) (WeakReference_t983 *)List_1_get_Item_m1990_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::set_Item(System.Int32,T)
#define List_1_set_Item_m30721(__this, ___index, ___value, method) (void)List_1_set_Item_m6345_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
