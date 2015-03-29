#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>
struct List_1_t8649;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t57;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>
struct IEnumerable_1_t8642;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>[]
struct Dictionary_2U5BU5D_t8647;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>
struct IEnumerator_1_t8643;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>
struct ICollection_1_t8650;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>
struct ReadOnlyCollection_1_t8651;
// System.Predicate`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>
struct Predicate_1_t8652;
// System.Comparison`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>
struct Comparison_1_t8653;
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_105.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m55367(__this, method) (void)List_1__ctor_m360_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m55368(__this, ___collection, method) (void)List_1__ctor_m2582_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::.ctor(System.Int32)
#define List_1__ctor_m55369(__this, ___capacity, method) (void)List_1__ctor_m15450_gshared((List_1_t2 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::.ctor(T[],System.Int32)
#define List_1__ctor_m55370(__this, ___data, ___size, method) (void)List_1__ctor_m15451_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___data, (int32_t)___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::.cctor()
#define List_1__cctor_m55371(__this/* static, unused */, method) (void)List_1__cctor_m15452_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55372(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15453_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m55373(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m15454_gshared((List_1_t2 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m55374(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m15455_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m55375(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m15456_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m55376(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m15457_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m55377(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m15458_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m55378(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m15459_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m55379(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m15460_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55380(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15461_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m55381(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m15462_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m55382(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m15463_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m55383(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m15464_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m55384(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m15465_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m55385(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m15466_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m55386(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m15467_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::Add(T)
#define List_1_Add_m55387(__this, ___item, method) (void)List_1_Add_m363_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m55388(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m15468_gshared((List_1_t2 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m55389(__this, ___idx, ___count, method) (void)List_1_CheckRange_m15469_gshared((List_1_t2 *)__this, (int32_t)___idx, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m55390(__this, ___collection, method) (void)List_1_AddCollection_m15470_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m55391(__this, ___enumerable, method) (void)List_1_AddEnumerable_m15471_gshared((List_1_t2 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m55392(__this, ___collection, method) (void)List_1_AddRange_m365_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::AsReadOnly()
#define List_1_AsReadOnly_m55393(__this, method) (ReadOnlyCollection_1_t8651 *)List_1_AsReadOnly_m15472_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::Clear()
#define List_1_Clear_m55394(__this, method) (void)List_1_Clear_m367_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::Contains(T)
#define List_1_Contains_m55395(__this, ___item, method) (bool)List_1_Contains_m15473_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m55396(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m15474_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::Find(System.Predicate`1<T>)
#define List_1_Find_m55397(__this, ___match, method) (Dictionary_2_t57 *)List_1_Find_m15475_gshared((List_1_t2 *)__this, (Predicate_1_t4052 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m55398(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m15476_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t4052 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m55399(__this, ___match, method) (int32_t)List_1_FindIndex_m15477_gshared((List_1_t2 *)__this, (Predicate_1_t4052 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m55400(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m15478_gshared((List_1_t2 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4052 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::GetEnumerator()
 Enumerator_t8654  List_1_GetEnumerator_m55401 (List_1_t8649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m55402(__this, ___index, ___count, method) (List_1_t8649 *)List_1_GetRange_m15479_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::IndexOf(T)
#define List_1_IndexOf_m55403(__this, ___item, method) (int32_t)List_1_IndexOf_m6346_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m55404(__this, ___start, ___delta, method) (void)List_1_Shift_m15480_gshared((List_1_t2 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m55405(__this, ___index, method) (void)List_1_CheckIndex_m15481_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::Insert(System.Int32,T)
#define List_1_Insert_m55406(__this, ___index, ___item, method) (void)List_1_Insert_m15482_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m55407(__this, ___collection, method) (void)List_1_CheckCollection_m15483_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m55408(__this, ___index, ___collection, method) (void)List_1_InsertRange_m15484_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m55409(__this, ___index, ___collection, method) (void)List_1_InsertCollection_m15485_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m55410(__this, ___index, ___enumerable, method) (void)List_1_InsertEnumeration_m15486_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::Remove(T)
#define List_1_Remove_m55411(__this, ___item, method) (bool)List_1_Remove_m15487_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m55412(__this, ___match, method) (int32_t)List_1_RemoveAll_m15488_gshared((List_1_t2 *)__this, (Predicate_1_t4052 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m55413(__this, ___index, method) (void)List_1_RemoveAt_m15489_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m55414(__this, ___index, ___count, method) (void)List_1_RemoveRange_m15490_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::Reverse()
#define List_1_Reverse_m55415(__this, method) (void)List_1_Reverse_m15491_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::Sort()
#define List_1_Sort_m55416(__this, method) (void)List_1_Sort_m15492_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m55417(__this, ___comparison, method) (void)List_1_Sort_m15493_gshared((List_1_t2 *)__this, (Comparison_1_t4053 *)___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::ToArray()
#define List_1_ToArray_m55418(__this, method) (Dictionary_2U5BU5D_t8647*)List_1_ToArray_m2552_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::TrimExcess()
#define List_1_TrimExcess_m55419(__this, method) (void)List_1_TrimExcess_m15494_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::get_Capacity()
#define List_1_get_Capacity_m55420(__this, method) (int32_t)List_1_get_Capacity_m15495_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m55421(__this, ___value, method) (void)List_1_set_Capacity_m15496_gshared((List_1_t2 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::get_Count()
#define List_1_get_Count_m55422(__this, method) (int32_t)List_1_get_Count_m358_gshared((List_1_t2 *)__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::get_Item(System.Int32)
#define List_1_get_Item_m55423(__this, ___index, method) (Dictionary_2_t57 *)List_1_get_Item_m1990_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>::set_Item(System.Int32,T)
#define List_1_set_Item_m55424(__this, ___index, ___value, method) (void)List_1_set_Item_m6347_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
