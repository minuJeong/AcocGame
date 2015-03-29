#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<FriendInfo>
struct List_1_t305;
// System.Object
struct Object_t;
// FriendInfo
struct FriendInfo_t259;
// System.Collections.Generic.IEnumerable`1<FriendInfo>
struct IEnumerable_1_t4405;
// FriendInfo[]
struct FriendInfoU5BU5D_t4404;
// System.Collections.Generic.IEnumerator`1<FriendInfo>
struct IEnumerator_1_t4406;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<FriendInfo>
struct ICollection_1_t4407;
// System.Collections.ObjectModel.ReadOnlyCollection`1<FriendInfo>
struct ReadOnlyCollection_1_t4408;
// System.Predicate`1<FriendInfo>
struct Predicate_1_t4409;
// System.Comparison`1<FriendInfo>
struct Comparison_1_t4410;
// System.Collections.Generic.List`1/Enumerator<FriendInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<FriendInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m17829(__this, method) (void)List_1__ctor_m360_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m17830(__this, ___collection, method) (void)List_1__ctor_m2582_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::.ctor(System.Int32)
#define List_1__ctor_m2481(__this, ___capacity, method) (void)List_1__ctor_m15450_gshared((List_1_t2 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::.ctor(T[],System.Int32)
#define List_1__ctor_m17831(__this, ___data, ___size, method) (void)List_1__ctor_m15451_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___data, (int32_t)___size, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::.cctor()
#define List_1__cctor_m17832(__this/* static, unused */, method) (void)List_1__cctor_m15452_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<FriendInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17833(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15453_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m17834(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m15454_gshared((List_1_t2 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<FriendInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17835(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m15455_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m17836(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m15456_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m17837(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m15457_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m17838(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m15458_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m17839(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m15459_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m17840(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m15460_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17841(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15461_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17842(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m15462_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<FriendInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m17843(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m15463_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m17844(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m15464_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m17845(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m15465_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m17846(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m15466_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m17847(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m15467_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Add(T)
#define List_1_Add_m17848(__this, ___item, method) (void)List_1_Add_m363_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m17849(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m15468_gshared((List_1_t2 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m17850(__this, ___idx, ___count, method) (void)List_1_CheckRange_m15469_gshared((List_1_t2 *)__this, (int32_t)___idx, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m17851(__this, ___collection, method) (void)List_1_AddCollection_m15470_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m17852(__this, ___enumerable, method) (void)List_1_AddEnumerable_m15471_gshared((List_1_t2 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m17853(__this, ___collection, method) (void)List_1_AddRange_m365_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<FriendInfo>::AsReadOnly()
#define List_1_AsReadOnly_m17854(__this, method) (ReadOnlyCollection_1_t4408 *)List_1_AsReadOnly_m15472_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Clear()
#define List_1_Clear_m17855(__this, method) (void)List_1_Clear_m367_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::Contains(T)
#define List_1_Contains_m17856(__this, ___item, method) (bool)List_1_Contains_m15473_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m17857(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m15474_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<FriendInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m17858(__this, ___match, method) (FriendInfo_t259 *)List_1_Find_m15475_gshared((List_1_t2 *)__this, (Predicate_1_t4052 *)___match, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m17859(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m15476_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t4052 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m17860(__this, ___match, method) (int32_t)List_1_FindIndex_m15477_gshared((List_1_t2 *)__this, (Predicate_1_t4052 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m17861(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m15478_gshared((List_1_t2 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4052 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FriendInfo>::GetEnumerator()
 Enumerator_t453  List_1_GetEnumerator_m2258 (List_1_t305 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FriendInfo>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m17862(__this, ___index, ___count, method) (List_1_t305 *)List_1_GetRange_m15479_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::IndexOf(T)
#define List_1_IndexOf_m17863(__this, ___item, method) (int32_t)List_1_IndexOf_m6346_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m17864(__this, ___start, ___delta, method) (void)List_1_Shift_m15480_gshared((List_1_t2 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m17865(__this, ___index, method) (void)List_1_CheckIndex_m15481_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Insert(System.Int32,T)
#define List_1_Insert_m2482(__this, ___index, ___item, method) (void)List_1_Insert_m15482_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m17866(__this, ___collection, method) (void)List_1_CheckCollection_m15483_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m17867(__this, ___index, ___collection, method) (void)List_1_InsertRange_m15484_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m17868(__this, ___index, ___collection, method) (void)List_1_InsertCollection_m15485_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m17869(__this, ___index, ___enumerable, method) (void)List_1_InsertEnumeration_m15486_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::Remove(T)
#define List_1_Remove_m17870(__this, ___item, method) (bool)List_1_Remove_m15487_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m17871(__this, ___match, method) (int32_t)List_1_RemoveAll_m15488_gshared((List_1_t2 *)__this, (Predicate_1_t4052 *)___match, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m17872(__this, ___index, method) (void)List_1_RemoveAt_m15489_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m17873(__this, ___index, ___count, method) (void)List_1_RemoveRange_m15490_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Reverse()
#define List_1_Reverse_m17874(__this, method) (void)List_1_Reverse_m15491_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Sort()
#define List_1_Sort_m17875(__this, method) (void)List_1_Sort_m15492_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m17876(__this, ___comparison, method) (void)List_1_Sort_m15493_gshared((List_1_t2 *)__this, (Comparison_1_t4053 *)___comparison, method)
// T[] System.Collections.Generic.List`1<FriendInfo>::ToArray()
#define List_1_ToArray_m17877(__this, method) (FriendInfoU5BU5D_t4404*)List_1_ToArray_m2552_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::TrimExcess()
#define List_1_TrimExcess_m17878(__this, method) (void)List_1_TrimExcess_m15494_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::get_Capacity()
#define List_1_get_Capacity_m17879(__this, method) (int32_t)List_1_get_Capacity_m15495_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m17880(__this, ___value, method) (void)List_1_set_Capacity_m15496_gshared((List_1_t2 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::get_Count()
#define List_1_get_Count_m17881(__this, method) (int32_t)List_1_get_Count_m358_gshared((List_1_t2 *)__this, method)
// T System.Collections.Generic.List`1<FriendInfo>::get_Item(System.Int32)
#define List_1_get_Item_m17882(__this, ___index, method) (FriendInfo_t259 *)List_1_get_Item_m1990_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m17883(__this, ___index, ___value, method) (void)List_1_set_Item_m6347_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
