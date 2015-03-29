#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Region>
struct List_1_t287;
// System.Object
struct Object_t;
// Region
struct Region_t296;
// System.Collections.Generic.IEnumerable`1<Region>
struct IEnumerable_1_t4666;
// Region[]
struct RegionU5BU5D_t4665;
// System.Collections.Generic.IEnumerator`1<Region>
struct IEnumerator_1_t4667;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<Region>
struct ICollection_1_t4668;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Region>
struct ReadOnlyCollection_1_t4669;
// System.Predicate`1<Region>
struct Predicate_1_t4670;
// System.Comparison`1<Region>
struct Comparison_1_t4671;
// System.Collections.Generic.List`1/Enumerator<Region>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.List`1<Region>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m19334(__this, method) (void)List_1__ctor_m360_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<Region>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m19335(__this, ___collection, method) (void)List_1__ctor_m2582_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<Region>::.ctor(System.Int32)
#define List_1__ctor_m2479(__this, ___capacity, method) (void)List_1__ctor_m15447_gshared((List_1_t2 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<Region>::.ctor(T[],System.Int32)
#define List_1__ctor_m19336(__this, ___data, ___size, method) (void)List_1__ctor_m15448_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___data, (int32_t)___size, method)
// System.Void System.Collections.Generic.List`1<Region>::.cctor()
#define List_1__cctor_m19337(__this/* static, unused */, method) (void)List_1__cctor_m15449_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Region>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19338(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15450_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<Region>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m19339(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m15451_gshared((List_1_t2 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Region>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19340(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m15452_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<Region>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m19341(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m15453_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<Region>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m19342(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m15454_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<Region>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m19343(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m15455_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Region>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m19344(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m15456_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Region>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m19345(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m15457_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<Region>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19346(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15458_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<Region>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19347(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m15459_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<Region>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m19348(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m15460_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<Region>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m19349(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m15461_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<Region>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m19350(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m15462_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<Region>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m19351(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m15463_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<Region>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m19352(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m15464_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<Region>::Add(T)
#define List_1_Add_m2480(__this, ___item, method) (void)List_1_Add_m363_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Region>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m19353(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m15465_gshared((List_1_t2 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<Region>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m19354(__this, ___idx, ___count, method) (void)List_1_CheckRange_m15466_gshared((List_1_t2 *)__this, (int32_t)___idx, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<Region>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m19355(__this, ___collection, method) (void)List_1_AddCollection_m15467_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<Region>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m19356(__this, ___enumerable, method) (void)List_1_AddEnumerable_m15468_gshared((List_1_t2 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<Region>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m19357(__this, ___collection, method) (void)List_1_AddRange_m365_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Region>::AsReadOnly()
#define List_1_AsReadOnly_m19358(__this, method) (ReadOnlyCollection_1_t4669 *)List_1_AsReadOnly_m15469_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<Region>::Clear()
#define List_1_Clear_m19359(__this, method) (void)List_1_Clear_m367_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<Region>::Contains(T)
#define List_1_Contains_m19360(__this, ___item, method) (bool)List_1_Contains_m15470_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Region>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m19361(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m15471_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<Region>::Find(System.Predicate`1<T>)
#define List_1_Find_m19362(__this, ___match, method) (Region_t296 *)List_1_Find_m15472_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Void System.Collections.Generic.List`1<Region>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m19363(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m15473_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t4051 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<Region>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m19364(__this, ___match, method) (int32_t)List_1_FindIndex_m15474_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<Region>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m19365(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m15475_gshared((List_1_t2 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4051 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Region>::GetEnumerator()
 Enumerator_t298  List_1_GetEnumerator_m2585 (List_1_t287 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Region>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m19366(__this, ___index, ___count, method) (List_1_t287 *)List_1_GetRange_m15476_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Generic.List`1<Region>::IndexOf(T)
#define List_1_IndexOf_m19367(__this, ___item, method) (int32_t)List_1_IndexOf_m6344_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Region>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m19368(__this, ___start, ___delta, method) (void)List_1_Shift_m15477_gshared((List_1_t2 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<Region>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m19369(__this, ___index, method) (void)List_1_CheckIndex_m15478_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<Region>::Insert(System.Int32,T)
#define List_1_Insert_m19370(__this, ___index, ___item, method) (void)List_1_Insert_m15479_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Region>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m19371(__this, ___collection, method) (void)List_1_CheckCollection_m15480_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<Region>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m19372(__this, ___index, ___collection, method) (void)List_1_InsertRange_m15481_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<Region>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m19373(__this, ___index, ___collection, method) (void)List_1_InsertCollection_m15482_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<Region>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m19374(__this, ___index, ___enumerable, method) (void)List_1_InsertEnumeration_m15483_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Region>::Remove(T)
#define List_1_Remove_m19375(__this, ___item, method) (bool)List_1_Remove_m15484_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<Region>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m19376(__this, ___match, method) (int32_t)List_1_RemoveAll_m15485_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Void System.Collections.Generic.List`1<Region>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m19377(__this, ___index, method) (void)List_1_RemoveAt_m15486_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<Region>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m19378(__this, ___index, ___count, method) (void)List_1_RemoveRange_m15487_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<Region>::Reverse()
#define List_1_Reverse_m19379(__this, method) (void)List_1_Reverse_m15488_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<Region>::Sort()
#define List_1_Sort_m19380(__this, method) (void)List_1_Sort_m15489_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<Region>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m19381(__this, ___comparison, method) (void)List_1_Sort_m15490_gshared((List_1_t2 *)__this, (Comparison_1_t4052 *)___comparison, method)
// T[] System.Collections.Generic.List`1<Region>::ToArray()
#define List_1_ToArray_m19382(__this, method) (RegionU5BU5D_t4665*)List_1_ToArray_m2552_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<Region>::TrimExcess()
#define List_1_TrimExcess_m19383(__this, method) (void)List_1_TrimExcess_m15491_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<Region>::get_Capacity()
#define List_1_get_Capacity_m19384(__this, method) (int32_t)List_1_get_Capacity_m15492_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<Region>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m19385(__this, ___value, method) (void)List_1_set_Capacity_m15493_gshared((List_1_t2 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<Region>::get_Count()
#define List_1_get_Count_m2584(__this, method) (int32_t)List_1_get_Count_m358_gshared((List_1_t2 *)__this, method)
// T System.Collections.Generic.List`1<Region>::get_Item(System.Int32)
#define List_1_get_Item_m2697(__this, ___index, method) (Region_t296 *)List_1_get_Item_m1990_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<Region>::set_Item(System.Int32,T)
#define List_1_set_Item_m19386(__this, ___index, ___value, method) (void)List_1_set_Item_m6345_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
