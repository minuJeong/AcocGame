#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t701;
// System.Object
struct Object_t;
// UnityEngine.UI.Selectable
struct Selectable_t630;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Selectable>
struct IEnumerable_1_t5581;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t5580;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Selectable>
struct IEnumerator_1_t5582;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable>
struct ICollection_1_t5583;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Selectable>
struct ReadOnlyCollection_1_t5584;
// System.Predicate`1<UnityEngine.UI.Selectable>
struct Predicate_1_t5585;
// System.Comparison`1<UnityEngine.UI.Selectable>
struct Comparison_1_t5586;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Selectable>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_31.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m4443(__this, method) (void)List_1__ctor_m360_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26211(__this, ___collection, method) (void)List_1__ctor_m2582_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Int32)
#define List_1__ctor_m26212(__this, ___capacity, method) (void)List_1__ctor_m15447_gshared((List_1_t2 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(T[],System.Int32)
#define List_1__ctor_m26213(__this, ___data, ___size, method) (void)List_1__ctor_m15448_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___data, (int32_t)___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.cctor()
#define List_1__cctor_m26214(__this/* static, unused */, method) (void)List_1__cctor_m15449_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26215(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15450_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26216(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m15451_gshared((List_1_t2 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26217(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m15452_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26218(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m15453_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26219(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m15454_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26220(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m15455_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26221(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m15456_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26222(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m15457_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26223(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15458_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26224(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m15459_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26225(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m15460_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26226(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m15461_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26227(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m15462_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26228(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m15463_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26229(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m15464_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Add(T)
#define List_1_Add_m4449(__this, ___item, method) (void)List_1_Add_m363_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26230(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m15465_gshared((List_1_t2 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m26231(__this, ___idx, ___count, method) (void)List_1_CheckRange_m15466_gshared((List_1_t2 *)__this, (int32_t)___idx, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26232(__this, ___collection, method) (void)List_1_AddCollection_m15467_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26233(__this, ___enumerable, method) (void)List_1_AddEnumerable_m15468_gshared((List_1_t2 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26234(__this, ___collection, method) (void)List_1_AddRange_m365_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AsReadOnly()
#define List_1_AsReadOnly_m26235(__this, method) (ReadOnlyCollection_1_t5584 *)List_1_AsReadOnly_m15469_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Clear()
#define List_1_Clear_m26236(__this, method) (void)List_1_Clear_m367_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Contains(T)
#define List_1_Contains_m26237(__this, ___item, method) (bool)List_1_Contains_m15470_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26238(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m15471_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Find(System.Predicate`1<T>)
#define List_1_Find_m26239(__this, ___match, method) (Selectable_t630 *)List_1_Find_m15472_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26240(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m15473_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t4051 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m26241(__this, ___match, method) (int32_t)List_1_FindIndex_m15474_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26242(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m15475_gshared((List_1_t2 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4051 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetEnumerator()
 Enumerator_t5587  List_1_GetEnumerator_m26243 (List_1_t701 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m26244(__this, ___index, ___count, method) (List_1_t701 *)List_1_GetRange_m15476_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::IndexOf(T)
#define List_1_IndexOf_m26245(__this, ___item, method) (int32_t)List_1_IndexOf_m6344_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26246(__this, ___start, ___delta, method) (void)List_1_Shift_m15477_gshared((List_1_t2 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26247(__this, ___index, method) (void)List_1_CheckIndex_m15478_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Insert(System.Int32,T)
#define List_1_Insert_m26248(__this, ___index, ___item, method) (void)List_1_Insert_m15479_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26249(__this, ___collection, method) (void)List_1_CheckCollection_m15480_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m26250(__this, ___index, ___collection, method) (void)List_1_InsertRange_m15481_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m26251(__this, ___index, ___collection, method) (void)List_1_InsertCollection_m15482_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m26252(__this, ___index, ___enumerable, method) (void)List_1_InsertEnumeration_m15483_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Remove(T)
#define List_1_Remove_m4450(__this, ___item, method) (bool)List_1_Remove_m15484_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26253(__this, ___match, method) (int32_t)List_1_RemoveAll_m15485_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26254(__this, ___index, method) (void)List_1_RemoveAt_m15486_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m26255(__this, ___index, ___count, method) (void)List_1_RemoveRange_m15487_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Reverse()
#define List_1_Reverse_m26256(__this, method) (void)List_1_Reverse_m15488_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort()
#define List_1_Sort_m26257(__this, method) (void)List_1_Sort_m15489_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26258(__this, ___comparison, method) (void)List_1_Sort_m15490_gshared((List_1_t2 *)__this, (Comparison_1_t4052 *)___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::ToArray()
#define List_1_ToArray_m26259(__this, method) (SelectableU5BU5D_t5580*)List_1_ToArray_m2552_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::TrimExcess()
#define List_1_TrimExcess_m26260(__this, method) (void)List_1_TrimExcess_m15491_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Capacity()
#define List_1_get_Capacity_m26261(__this, method) (int32_t)List_1_get_Capacity_m15492_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26262(__this, ___value, method) (void)List_1_set_Capacity_m15493_gshared((List_1_t2 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Count()
#define List_1_get_Count_m4455(__this, method) (int32_t)List_1_get_Count_m358_gshared((List_1_t2 *)__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Item(System.Int32)
#define List_1_get_Item_m4454(__this, ___index, method) (Selectable_t630 *)List_1_get_Item_m1990_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Item(System.Int32,T)
#define List_1_set_Item_m26263(__this, ___index, ___value, method) (void)List_1_set_Item_m6345_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
