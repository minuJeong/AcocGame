#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>
struct List_1_t7840;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Double>
struct IList_1_t2199;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.IList`1<System.Double>>
struct IEnumerable_1_t7833;
// System.Collections.Generic.IList`1<System.Double>[]
struct IList_1U5BU5D_t7838;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.IList`1<System.Double>>
struct IEnumerator_1_t7834;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IList`1<System.Double>>
struct ICollection_1_t7841;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IList`1<System.Double>>
struct ReadOnlyCollection_1_t7842;
// System.Predicate`1<System.Collections.Generic.IList`1<System.Double>>
struct Predicate_1_t7843;
// System.Comparison`1<System.Collections.Generic.IList`1<System.Double>>
struct Comparison_1_t7844;
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.IList`1<System.Double>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_69.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m46968(__this, method) (void)List_1__ctor_m360_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m46969(__this, ___collection, method) (void)List_1__ctor_m2582_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::.ctor(System.Int32)
#define List_1__ctor_m46970(__this, ___capacity, method) (void)List_1__ctor_m15447_gshared((List_1_t2 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::.ctor(T[],System.Int32)
#define List_1__ctor_m46971(__this, ___data, ___size, method) (void)List_1__ctor_m15448_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___data, (int32_t)___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::.cctor()
#define List_1__cctor_m46972(__this/* static, unused */, method) (void)List_1__cctor_m15449_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46973(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15450_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m46974(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m15451_gshared((List_1_t2 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m46975(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m15452_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m46976(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m15453_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m46977(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m15454_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m46978(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m15455_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m46979(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m15456_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m46980(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m15457_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46981(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15458_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m46982(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m15459_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m46983(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m15460_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m46984(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m15461_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m46985(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m15462_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m46986(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m15463_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m46987(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m15464_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::Add(T)
#define List_1_Add_m46988(__this, ___item, method) (void)List_1_Add_m363_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m46989(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m15465_gshared((List_1_t2 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m46990(__this, ___idx, ___count, method) (void)List_1_CheckRange_m15466_gshared((List_1_t2 *)__this, (int32_t)___idx, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m46991(__this, ___collection, method) (void)List_1_AddCollection_m15467_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m46992(__this, ___enumerable, method) (void)List_1_AddEnumerable_m15468_gshared((List_1_t2 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m46993(__this, ___collection, method) (void)List_1_AddRange_m365_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::AsReadOnly()
#define List_1_AsReadOnly_m46994(__this, method) (ReadOnlyCollection_1_t7842 *)List_1_AsReadOnly_m15469_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::Clear()
#define List_1_Clear_m46995(__this, method) (void)List_1_Clear_m367_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::Contains(T)
#define List_1_Contains_m46996(__this, ___item, method) (bool)List_1_Contains_m15470_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m46997(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m15471_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::Find(System.Predicate`1<T>)
#define List_1_Find_m46998(__this, ___match, method) (Object_t*)List_1_Find_m15472_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m46999(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m15473_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t4051 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m47000(__this, ___match, method) (int32_t)List_1_FindIndex_m15474_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m47001(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m15475_gshared((List_1_t2 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4051 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::GetEnumerator()
 Enumerator_t7845  List_1_GetEnumerator_m47002 (List_1_t7840 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m47003(__this, ___index, ___count, method) (List_1_t7840 *)List_1_GetRange_m15476_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::IndexOf(T)
#define List_1_IndexOf_m47004(__this, ___item, method) (int32_t)List_1_IndexOf_m6344_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m47005(__this, ___start, ___delta, method) (void)List_1_Shift_m15477_gshared((List_1_t2 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m47006(__this, ___index, method) (void)List_1_CheckIndex_m15478_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::Insert(System.Int32,T)
#define List_1_Insert_m47007(__this, ___index, ___item, method) (void)List_1_Insert_m15479_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m47008(__this, ___collection, method) (void)List_1_CheckCollection_m15480_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m47009(__this, ___index, ___collection, method) (void)List_1_InsertRange_m15481_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m47010(__this, ___index, ___collection, method) (void)List_1_InsertCollection_m15482_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m47011(__this, ___index, ___enumerable, method) (void)List_1_InsertEnumeration_m15483_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::Remove(T)
#define List_1_Remove_m47012(__this, ___item, method) (bool)List_1_Remove_m15484_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m47013(__this, ___match, method) (int32_t)List_1_RemoveAll_m15485_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m47014(__this, ___index, method) (void)List_1_RemoveAt_m15486_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m47015(__this, ___index, ___count, method) (void)List_1_RemoveRange_m15487_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::Reverse()
#define List_1_Reverse_m47016(__this, method) (void)List_1_Reverse_m15488_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::Sort()
#define List_1_Sort_m47017(__this, method) (void)List_1_Sort_m15489_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m47018(__this, ___comparison, method) (void)List_1_Sort_m15490_gshared((List_1_t2 *)__this, (Comparison_1_t4052 *)___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::ToArray()
#define List_1_ToArray_m47019(__this, method) (IList_1U5BU5D_t7838*)List_1_ToArray_m2552_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::TrimExcess()
#define List_1_TrimExcess_m47020(__this, method) (void)List_1_TrimExcess_m15491_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::get_Capacity()
#define List_1_get_Capacity_m47021(__this, method) (int32_t)List_1_get_Capacity_m15492_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m47022(__this, ___value, method) (void)List_1_set_Capacity_m15493_gshared((List_1_t2 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::get_Count()
#define List_1_get_Count_m47023(__this, method) (int32_t)List_1_get_Count_m358_gshared((List_1_t2 *)__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::get_Item(System.Int32)
#define List_1_get_Item_m47024(__this, ___index, method) (Object_t*)List_1_get_Item_m1990_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Double>>::set_Item(System.Int32,T)
#define List_1_set_Item_m47025(__this, ___index, ___value, method) (void)List_1_set_Item_m6345_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
