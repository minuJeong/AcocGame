#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>
struct List_1_t7884;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1031;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.IList`1<System.Object>>
struct IEnumerable_1_t7877;
// System.Collections.Generic.IList`1<System.Object>[]
struct IList_1U5BU5D_t7882;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.IList`1<System.Object>>
struct IEnumerator_1_t7878;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IList`1<System.Object>>
struct ICollection_1_t7885;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IList`1<System.Object>>
struct ReadOnlyCollection_1_t7886;
// System.Predicate`1<System.Collections.Generic.IList`1<System.Object>>
struct Predicate_1_t7887;
// System.Comparison`1<System.Collections.Generic.IList`1<System.Object>>
struct Comparison_1_t7888;
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.IList`1<System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_71.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m47426(__this, method) (void)List_1__ctor_m360_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m47427(__this, ___collection, method) (void)List_1__ctor_m2582_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::.ctor(System.Int32)
#define List_1__ctor_m47428(__this, ___capacity, method) (void)List_1__ctor_m15447_gshared((List_1_t2 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::.ctor(T[],System.Int32)
#define List_1__ctor_m47429(__this, ___data, ___size, method) (void)List_1__ctor_m15448_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___data, (int32_t)___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::.cctor()
#define List_1__cctor_m47430(__this/* static, unused */, method) (void)List_1__cctor_m15449_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47431(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15450_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m47432(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m15451_gshared((List_1_t2 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m47433(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m15452_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m47434(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m15453_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m47435(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m15454_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m47436(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m15455_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m47437(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m15456_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m47438(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m15457_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47439(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15458_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m47440(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m15459_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m47441(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m15460_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m47442(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m15461_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m47443(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m15462_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m47444(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m15463_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m47445(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m15464_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::Add(T)
#define List_1_Add_m47446(__this, ___item, method) (void)List_1_Add_m363_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m47447(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m15465_gshared((List_1_t2 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m47448(__this, ___idx, ___count, method) (void)List_1_CheckRange_m15466_gshared((List_1_t2 *)__this, (int32_t)___idx, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m47449(__this, ___collection, method) (void)List_1_AddCollection_m15467_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m47450(__this, ___enumerable, method) (void)List_1_AddEnumerable_m15468_gshared((List_1_t2 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m47451(__this, ___collection, method) (void)List_1_AddRange_m365_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::AsReadOnly()
#define List_1_AsReadOnly_m47452(__this, method) (ReadOnlyCollection_1_t7886 *)List_1_AsReadOnly_m15469_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::Clear()
#define List_1_Clear_m47453(__this, method) (void)List_1_Clear_m367_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::Contains(T)
#define List_1_Contains_m47454(__this, ___item, method) (bool)List_1_Contains_m15470_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m47455(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m15471_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::Find(System.Predicate`1<T>)
#define List_1_Find_m47456(__this, ___match, method) (Object_t*)List_1_Find_m15472_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m47457(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m15473_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t4051 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m47458(__this, ___match, method) (int32_t)List_1_FindIndex_m15474_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m47459(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m15475_gshared((List_1_t2 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4051 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::GetEnumerator()
 Enumerator_t7889  List_1_GetEnumerator_m47460 (List_1_t7884 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m47461(__this, ___index, ___count, method) (List_1_t7884 *)List_1_GetRange_m15476_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::IndexOf(T)
#define List_1_IndexOf_m47462(__this, ___item, method) (int32_t)List_1_IndexOf_m6344_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m47463(__this, ___start, ___delta, method) (void)List_1_Shift_m15477_gshared((List_1_t2 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m47464(__this, ___index, method) (void)List_1_CheckIndex_m15478_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::Insert(System.Int32,T)
#define List_1_Insert_m47465(__this, ___index, ___item, method) (void)List_1_Insert_m15479_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m47466(__this, ___collection, method) (void)List_1_CheckCollection_m15480_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m47467(__this, ___index, ___collection, method) (void)List_1_InsertRange_m15481_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m47468(__this, ___index, ___collection, method) (void)List_1_InsertCollection_m15482_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m47469(__this, ___index, ___enumerable, method) (void)List_1_InsertEnumeration_m15483_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::Remove(T)
#define List_1_Remove_m47470(__this, ___item, method) (bool)List_1_Remove_m15484_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m47471(__this, ___match, method) (int32_t)List_1_RemoveAll_m15485_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m47472(__this, ___index, method) (void)List_1_RemoveAt_m15486_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m47473(__this, ___index, ___count, method) (void)List_1_RemoveRange_m15487_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::Reverse()
#define List_1_Reverse_m47474(__this, method) (void)List_1_Reverse_m15488_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::Sort()
#define List_1_Sort_m47475(__this, method) (void)List_1_Sort_m15489_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m47476(__this, ___comparison, method) (void)List_1_Sort_m15490_gshared((List_1_t2 *)__this, (Comparison_1_t4052 *)___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::ToArray()
#define List_1_ToArray_m47477(__this, method) (IList_1U5BU5D_t7882*)List_1_ToArray_m2552_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::TrimExcess()
#define List_1_TrimExcess_m47478(__this, method) (void)List_1_TrimExcess_m15491_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::get_Capacity()
#define List_1_get_Capacity_m47479(__this, method) (int32_t)List_1_get_Capacity_m15492_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m47480(__this, ___value, method) (void)List_1_set_Capacity_m15493_gshared((List_1_t2 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::get_Count()
#define List_1_get_Count_m47481(__this, method) (int32_t)List_1_get_Count_m358_gshared((List_1_t2 *)__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::get_Item(System.Int32)
#define List_1_get_Item_m47482(__this, ___index, method) (Object_t*)List_1_get_Item_m1990_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.Object>>::set_Item(System.Int32,T)
#define List_1_set_Item_m47483(__this, ___index, ___value, method) (void)List_1_set_Item_m6345_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
