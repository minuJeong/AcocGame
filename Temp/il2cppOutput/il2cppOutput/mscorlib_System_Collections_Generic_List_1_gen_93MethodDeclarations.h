#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
struct List_1_t8149;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<System.String>>
struct IEnumerable_1_t8142;
// System.Collections.Generic.List`1<System.String>[]
struct List_1U5BU5D_t8147;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<System.String>>
struct IEnumerator_1_t8143;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<System.String>>
struct ICollection_1_t8150;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>
struct ReadOnlyCollection_1_t8151;
// System.Predicate`1<System.Collections.Generic.List`1<System.String>>
struct Predicate_1_t8152;
// System.Comparison`1<System.Collections.Generic.List`1<System.String>>
struct Comparison_1_t8153;
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_83.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m50177(__this, method) (void)List_1__ctor_m360_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m50178(__this, ___collection, method) (void)List_1__ctor_m2582_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::.ctor(System.Int32)
#define List_1__ctor_m50179(__this, ___capacity, method) (void)List_1__ctor_m15450_gshared((List_1_t2 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::.ctor(T[],System.Int32)
#define List_1__ctor_m50180(__this, ___data, ___size, method) (void)List_1__ctor_m15451_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___data, (int32_t)___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::.cctor()
#define List_1__cctor_m50181(__this/* static, unused */, method) (void)List_1__cctor_m15452_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50182(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15453_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m50183(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m15454_gshared((List_1_t2 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m50184(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m15455_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m50185(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m15456_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m50186(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m15457_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m50187(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m15458_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m50188(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m15459_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m50189(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m15460_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50190(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15461_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m50191(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m15462_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m50192(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m15463_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m50193(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m15464_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m50194(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m15465_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m50195(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m15466_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m50196(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m15467_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Add(T)
#define List_1_Add_m50197(__this, ___item, method) (void)List_1_Add_m363_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m50198(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m15468_gshared((List_1_t2 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m50199(__this, ___idx, ___count, method) (void)List_1_CheckRange_m15469_gshared((List_1_t2 *)__this, (int32_t)___idx, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m50200(__this, ___collection, method) (void)List_1_AddCollection_m15470_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m50201(__this, ___enumerable, method) (void)List_1_AddEnumerable_m15471_gshared((List_1_t2 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m50202(__this, ___collection, method) (void)List_1_AddRange_m365_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::AsReadOnly()
#define List_1_AsReadOnly_m50203(__this, method) (ReadOnlyCollection_1_t8151 *)List_1_AsReadOnly_m15472_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Clear()
#define List_1_Clear_m50204(__this, method) (void)List_1_Clear_m367_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Contains(T)
#define List_1_Contains_m50205(__this, ___item, method) (bool)List_1_Contains_m15473_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m50206(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m15474_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Find(System.Predicate`1<T>)
#define List_1_Find_m50207(__this, ___match, method) (List_1_t1 *)List_1_Find_m15475_gshared((List_1_t2 *)__this, (Predicate_1_t4052 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m50208(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m15476_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t4052 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m50209(__this, ___match, method) (int32_t)List_1_FindIndex_m15477_gshared((List_1_t2 *)__this, (Predicate_1_t4052 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m50210(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m15478_gshared((List_1_t2 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4052 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::GetEnumerator()
 Enumerator_t8154  List_1_GetEnumerator_m50211 (List_1_t8149 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m50212(__this, ___index, ___count, method) (List_1_t8149 *)List_1_GetRange_m15479_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::IndexOf(T)
#define List_1_IndexOf_m50213(__this, ___item, method) (int32_t)List_1_IndexOf_m6346_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m50214(__this, ___start, ___delta, method) (void)List_1_Shift_m15480_gshared((List_1_t2 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m50215(__this, ___index, method) (void)List_1_CheckIndex_m15481_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Insert(System.Int32,T)
#define List_1_Insert_m50216(__this, ___index, ___item, method) (void)List_1_Insert_m15482_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m50217(__this, ___collection, method) (void)List_1_CheckCollection_m15483_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m50218(__this, ___index, ___collection, method) (void)List_1_InsertRange_m15484_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m50219(__this, ___index, ___collection, method) (void)List_1_InsertCollection_m15485_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m50220(__this, ___index, ___enumerable, method) (void)List_1_InsertEnumeration_m15486_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Remove(T)
#define List_1_Remove_m50221(__this, ___item, method) (bool)List_1_Remove_m15487_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m50222(__this, ___match, method) (int32_t)List_1_RemoveAll_m15488_gshared((List_1_t2 *)__this, (Predicate_1_t4052 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m50223(__this, ___index, method) (void)List_1_RemoveAt_m15489_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m50224(__this, ___index, ___count, method) (void)List_1_RemoveRange_m15490_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Reverse()
#define List_1_Reverse_m50225(__this, method) (void)List_1_Reverse_m15491_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Sort()
#define List_1_Sort_m50226(__this, method) (void)List_1_Sort_m15492_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m50227(__this, ___comparison, method) (void)List_1_Sort_m15493_gshared((List_1_t2 *)__this, (Comparison_1_t4053 *)___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::ToArray()
#define List_1_ToArray_m50228(__this, method) (List_1U5BU5D_t8147*)List_1_ToArray_m2552_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::TrimExcess()
#define List_1_TrimExcess_m50229(__this, method) (void)List_1_TrimExcess_m15494_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::get_Capacity()
#define List_1_get_Capacity_m50230(__this, method) (int32_t)List_1_get_Capacity_m15495_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m50231(__this, ___value, method) (void)List_1_set_Capacity_m15496_gshared((List_1_t2 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::get_Count()
#define List_1_get_Count_m50232(__this, method) (int32_t)List_1_get_Count_m358_gshared((List_1_t2 *)__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::get_Item(System.Int32)
#define List_1_get_Item_m50233(__this, ___index, method) (List_1_t1 *)List_1_get_Item_m1990_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::set_Item(System.Int32,T)
#define List_1_set_Item_m50234(__this, ___index, ___value, method) (void)List_1_set_Item_m6347_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
