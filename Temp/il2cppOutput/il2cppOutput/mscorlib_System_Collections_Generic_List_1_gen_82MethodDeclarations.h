#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>
struct List_1_t7906;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.DateTime>
struct IList_1_t2200;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.IList`1<System.DateTime>>
struct IEnumerable_1_t7899;
// System.Collections.Generic.IList`1<System.DateTime>[]
struct IList_1U5BU5D_t7904;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.IList`1<System.DateTime>>
struct IEnumerator_1_t7900;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IList`1<System.DateTime>>
struct ICollection_1_t7907;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IList`1<System.DateTime>>
struct ReadOnlyCollection_1_t7908;
// System.Predicate`1<System.Collections.Generic.IList`1<System.DateTime>>
struct Predicate_1_t7909;
// System.Comparison`1<System.Collections.Generic.IList`1<System.DateTime>>
struct Comparison_1_t7910;
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.IList`1<System.DateTime>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_72.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m47655(__this, method) (void)List_1__ctor_m360_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m47656(__this, ___collection, method) (void)List_1__ctor_m2582_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::.ctor(System.Int32)
#define List_1__ctor_m47657(__this, ___capacity, method) (void)List_1__ctor_m15447_gshared((List_1_t2 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::.ctor(T[],System.Int32)
#define List_1__ctor_m47658(__this, ___data, ___size, method) (void)List_1__ctor_m15448_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___data, (int32_t)___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::.cctor()
#define List_1__cctor_m47659(__this/* static, unused */, method) (void)List_1__cctor_m15449_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47660(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15450_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m47661(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m15451_gshared((List_1_t2 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m47662(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m15452_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m47663(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m15453_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m47664(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m15454_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m47665(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m15455_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m47666(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m15456_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m47667(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m15457_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47668(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15458_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m47669(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m15459_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m47670(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m15460_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m47671(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m15461_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m47672(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m15462_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m47673(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m15463_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m47674(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m15464_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::Add(T)
#define List_1_Add_m47675(__this, ___item, method) (void)List_1_Add_m363_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m47676(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m15465_gshared((List_1_t2 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m47677(__this, ___idx, ___count, method) (void)List_1_CheckRange_m15466_gshared((List_1_t2 *)__this, (int32_t)___idx, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m47678(__this, ___collection, method) (void)List_1_AddCollection_m15467_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m47679(__this, ___enumerable, method) (void)List_1_AddEnumerable_m15468_gshared((List_1_t2 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m47680(__this, ___collection, method) (void)List_1_AddRange_m365_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::AsReadOnly()
#define List_1_AsReadOnly_m47681(__this, method) (ReadOnlyCollection_1_t7908 *)List_1_AsReadOnly_m15469_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::Clear()
#define List_1_Clear_m47682(__this, method) (void)List_1_Clear_m367_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::Contains(T)
#define List_1_Contains_m47683(__this, ___item, method) (bool)List_1_Contains_m15470_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m47684(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m15471_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::Find(System.Predicate`1<T>)
#define List_1_Find_m47685(__this, ___match, method) (Object_t*)List_1_Find_m15472_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m47686(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m15473_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t4051 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m47687(__this, ___match, method) (int32_t)List_1_FindIndex_m15474_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m47688(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m15475_gshared((List_1_t2 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4051 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::GetEnumerator()
 Enumerator_t7911  List_1_GetEnumerator_m47689 (List_1_t7906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m47690(__this, ___index, ___count, method) (List_1_t7906 *)List_1_GetRange_m15476_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::IndexOf(T)
#define List_1_IndexOf_m47691(__this, ___item, method) (int32_t)List_1_IndexOf_m6344_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m47692(__this, ___start, ___delta, method) (void)List_1_Shift_m15477_gshared((List_1_t2 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m47693(__this, ___index, method) (void)List_1_CheckIndex_m15478_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::Insert(System.Int32,T)
#define List_1_Insert_m47694(__this, ___index, ___item, method) (void)List_1_Insert_m15479_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m47695(__this, ___collection, method) (void)List_1_CheckCollection_m15480_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m47696(__this, ___index, ___collection, method) (void)List_1_InsertRange_m15481_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m47697(__this, ___index, ___collection, method) (void)List_1_InsertCollection_m15482_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m47698(__this, ___index, ___enumerable, method) (void)List_1_InsertEnumeration_m15483_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::Remove(T)
#define List_1_Remove_m47699(__this, ___item, method) (bool)List_1_Remove_m15484_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m47700(__this, ___match, method) (int32_t)List_1_RemoveAll_m15485_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m47701(__this, ___index, method) (void)List_1_RemoveAt_m15486_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m47702(__this, ___index, ___count, method) (void)List_1_RemoveRange_m15487_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::Reverse()
#define List_1_Reverse_m47703(__this, method) (void)List_1_Reverse_m15488_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::Sort()
#define List_1_Sort_m47704(__this, method) (void)List_1_Sort_m15489_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m47705(__this, ___comparison, method) (void)List_1_Sort_m15490_gshared((List_1_t2 *)__this, (Comparison_1_t4052 *)___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::ToArray()
#define List_1_ToArray_m47706(__this, method) (IList_1U5BU5D_t7904*)List_1_ToArray_m2552_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::TrimExcess()
#define List_1_TrimExcess_m47707(__this, method) (void)List_1_TrimExcess_m15491_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::get_Capacity()
#define List_1_get_Capacity_m47708(__this, method) (int32_t)List_1_get_Capacity_m15492_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m47709(__this, ___value, method) (void)List_1_set_Capacity_m15493_gshared((List_1_t2 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::get_Count()
#define List_1_get_Count_m47710(__this, method) (int32_t)List_1_get_Count_m358_gshared((List_1_t2 *)__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::get_Item(System.Int32)
#define List_1_get_Item_m47711(__this, ___index, method) (Object_t*)List_1_get_Item_m1990_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.DateTime>>::set_Item(System.Int32,T)
#define List_1_set_Item_m47712(__this, ___index, ___value, method) (void)List_1_set_Item_m6345_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
