#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>
struct List_1_t8170;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<System.Object>>
struct IEnumerable_1_t8163;
// System.Collections.Generic.List`1<System.Object>[]
struct List_1U5BU5D_t8168;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<System.Object>>
struct IEnumerator_1_t8164;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<System.Object>>
struct ICollection_1_t8171;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.Object>>
struct ReadOnlyCollection_1_t8172;
// System.Predicate`1<System.Collections.Generic.List`1<System.Object>>
struct Predicate_1_t8173;
// System.Comparison`1<System.Collections.Generic.List`1<System.Object>>
struct Comparison_1_t8174;
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_84.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m50403(__this, method) (void)List_1__ctor_m360_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m50404(__this, ___collection, method) (void)List_1__ctor_m2582_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::.ctor(System.Int32)
#define List_1__ctor_m50405(__this, ___capacity, method) (void)List_1__ctor_m15447_gshared((List_1_t2 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::.ctor(T[],System.Int32)
#define List_1__ctor_m50406(__this, ___data, ___size, method) (void)List_1__ctor_m15448_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___data, (int32_t)___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::.cctor()
#define List_1__cctor_m50407(__this/* static, unused */, method) (void)List_1__cctor_m15449_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50408(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15450_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m50409(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m15451_gshared((List_1_t2 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m50410(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m15452_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m50411(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m15453_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m50412(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m15454_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m50413(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m15455_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m50414(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m15456_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m50415(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m15457_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50416(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15458_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m50417(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m15459_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m50418(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m15460_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m50419(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m15461_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m50420(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m15462_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m50421(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m15463_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m50422(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m15464_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::Add(T)
#define List_1_Add_m50423(__this, ___item, method) (void)List_1_Add_m363_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m50424(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m15465_gshared((List_1_t2 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m50425(__this, ___idx, ___count, method) (void)List_1_CheckRange_m15466_gshared((List_1_t2 *)__this, (int32_t)___idx, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m50426(__this, ___collection, method) (void)List_1_AddCollection_m15467_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m50427(__this, ___enumerable, method) (void)List_1_AddEnumerable_m15468_gshared((List_1_t2 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m50428(__this, ___collection, method) (void)List_1_AddRange_m365_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::AsReadOnly()
#define List_1_AsReadOnly_m50429(__this, method) (ReadOnlyCollection_1_t8172 *)List_1_AsReadOnly_m15469_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::Clear()
#define List_1_Clear_m50430(__this, method) (void)List_1_Clear_m367_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::Contains(T)
#define List_1_Contains_m50431(__this, ___item, method) (bool)List_1_Contains_m15470_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m50432(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m15471_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::Find(System.Predicate`1<T>)
#define List_1_Find_m50433(__this, ___match, method) (List_1_t2 *)List_1_Find_m15472_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m50434(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m15473_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t4051 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m50435(__this, ___match, method) (int32_t)List_1_FindIndex_m15474_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m50436(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m15475_gshared((List_1_t2 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4051 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::GetEnumerator()
 Enumerator_t8175  List_1_GetEnumerator_m50437 (List_1_t8170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m50438(__this, ___index, ___count, method) (List_1_t8170 *)List_1_GetRange_m15476_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::IndexOf(T)
#define List_1_IndexOf_m50439(__this, ___item, method) (int32_t)List_1_IndexOf_m6344_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m50440(__this, ___start, ___delta, method) (void)List_1_Shift_m15477_gshared((List_1_t2 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m50441(__this, ___index, method) (void)List_1_CheckIndex_m15478_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::Insert(System.Int32,T)
#define List_1_Insert_m50442(__this, ___index, ___item, method) (void)List_1_Insert_m15479_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m50443(__this, ___collection, method) (void)List_1_CheckCollection_m15480_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m50444(__this, ___index, ___collection, method) (void)List_1_InsertRange_m15481_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m50445(__this, ___index, ___collection, method) (void)List_1_InsertCollection_m15482_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m50446(__this, ___index, ___enumerable, method) (void)List_1_InsertEnumeration_m15483_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::Remove(T)
#define List_1_Remove_m50447(__this, ___item, method) (bool)List_1_Remove_m15484_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m50448(__this, ___match, method) (int32_t)List_1_RemoveAll_m15485_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m50449(__this, ___index, method) (void)List_1_RemoveAt_m15486_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m50450(__this, ___index, ___count, method) (void)List_1_RemoveRange_m15487_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::Reverse()
#define List_1_Reverse_m50451(__this, method) (void)List_1_Reverse_m15488_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::Sort()
#define List_1_Sort_m50452(__this, method) (void)List_1_Sort_m15489_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m50453(__this, ___comparison, method) (void)List_1_Sort_m15490_gshared((List_1_t2 *)__this, (Comparison_1_t4052 *)___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::ToArray()
#define List_1_ToArray_m50454(__this, method) (List_1U5BU5D_t8168*)List_1_ToArray_m2552_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::TrimExcess()
#define List_1_TrimExcess_m50455(__this, method) (void)List_1_TrimExcess_m15491_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::get_Capacity()
#define List_1_get_Capacity_m50456(__this, method) (int32_t)List_1_get_Capacity_m15492_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m50457(__this, ___value, method) (void)List_1_set_Capacity_m15493_gshared((List_1_t2 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::get_Count()
#define List_1_get_Count_m50458(__this, method) (int32_t)List_1_get_Count_m358_gshared((List_1_t2 *)__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::get_Item(System.Int32)
#define List_1_get_Item_m50459(__this, ___index, method) (List_1_t2 *)List_1_get_Item_m1990_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::set_Item(System.Int32,T)
#define List_1_set_Item_m50460(__this, ___index, ___value, method) (void)List_1_set_Item_m6345_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
