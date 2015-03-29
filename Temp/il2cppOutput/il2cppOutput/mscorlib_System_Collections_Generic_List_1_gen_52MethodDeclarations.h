#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Security.Policy.StrongName>
struct List_1_t4002;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t3622;
// System.Collections.Generic.IEnumerable`1<System.Security.Policy.StrongName>
struct IEnumerable_1_t12138;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t12137;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t12139;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>
struct ICollection_1_t12140;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>
struct ReadOnlyCollection_1_t12141;
// System.Predicate`1<System.Security.Policy.StrongName>
struct Predicate_1_t12142;
// System.Comparison`1<System.Security.Policy.StrongName>
struct Comparison_1_t12143;
// System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_201.h"

// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m89356(__this, method) (void)List_1__ctor_m360_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m89357(__this, ___collection, method) (void)List_1__ctor_m2582_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Int32)
#define List_1__ctor_m15395(__this, ___capacity, method) (void)List_1__ctor_m15447_gshared((List_1_t2 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(T[],System.Int32)
#define List_1__ctor_m89358(__this, ___data, ___size, method) (void)List_1__ctor_m15448_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___data, (int32_t)___size, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.cctor()
#define List_1__cctor_m89359(__this/* static, unused */, method) (void)List_1__cctor_m15449_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m89360(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15450_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m89361(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m15451_gshared((List_1_t2 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m89362(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m15452_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m89363(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m15453_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m89364(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m15454_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m89365(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m15455_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m89366(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m15456_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m89367(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m15457_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m89368(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15458_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m89369(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m15459_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m89370(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m15460_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m89371(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m15461_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m89372(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m15462_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m89373(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m15463_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m89374(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m15464_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Add(T)
#define List_1_Add_m89375(__this, ___item, method) (void)List_1_Add_m363_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m89376(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m15465_gshared((List_1_t2 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m89377(__this, ___idx, ___count, method) (void)List_1_CheckRange_m15466_gshared((List_1_t2 *)__this, (int32_t)___idx, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m89378(__this, ___collection, method) (void)List_1_AddCollection_m15467_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m89379(__this, ___enumerable, method) (void)List_1_AddEnumerable_m15468_gshared((List_1_t2 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m89380(__this, ___collection, method) (void)List_1_AddRange_m365_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AsReadOnly()
#define List_1_AsReadOnly_m89381(__this, method) (ReadOnlyCollection_1_t12141 *)List_1_AsReadOnly_m15469_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Clear()
#define List_1_Clear_m89382(__this, method) (void)List_1_Clear_m367_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Contains(T)
#define List_1_Contains_m89383(__this, ___item, method) (bool)List_1_Contains_m15470_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m89384(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m15471_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Find(System.Predicate`1<T>)
#define List_1_Find_m89385(__this, ___match, method) (StrongName_t3622 *)List_1_Find_m15472_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m89386(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m15473_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t4051 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m89387(__this, ___match, method) (int32_t)List_1_FindIndex_m15474_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m89388(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m15475_gshared((List_1_t2 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4051 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetEnumerator()
 Enumerator_t12144  List_1_GetEnumerator_m89389 (List_1_t4002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m89390(__this, ___index, ___count, method) (List_1_t4002 *)List_1_GetRange_m15476_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::IndexOf(T)
#define List_1_IndexOf_m89391(__this, ___item, method) (int32_t)List_1_IndexOf_m6344_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m89392(__this, ___start, ___delta, method) (void)List_1_Shift_m15477_gshared((List_1_t2 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m89393(__this, ___index, method) (void)List_1_CheckIndex_m15478_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define List_1_Insert_m89394(__this, ___index, ___item, method) (void)List_1_Insert_m15479_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m89395(__this, ___collection, method) (void)List_1_CheckCollection_m15480_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m89396(__this, ___index, ___collection, method) (void)List_1_InsertRange_m15481_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m89397(__this, ___index, ___collection, method) (void)List_1_InsertCollection_m15482_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m89398(__this, ___index, ___enumerable, method) (void)List_1_InsertEnumeration_m15483_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Remove(T)
#define List_1_Remove_m89399(__this, ___item, method) (bool)List_1_Remove_m15484_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m89400(__this, ___match, method) (int32_t)List_1_RemoveAll_m15485_gshared((List_1_t2 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m89401(__this, ___index, method) (void)List_1_RemoveAt_m15486_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m89402(__this, ___index, ___count, method) (void)List_1_RemoveRange_m15487_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Reverse()
#define List_1_Reverse_m89403(__this, method) (void)List_1_Reverse_m15488_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Sort()
#define List_1_Sort_m89404(__this, method) (void)List_1_Sort_m15489_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m89405(__this, ___comparison, method) (void)List_1_Sort_m15490_gshared((List_1_t2 *)__this, (Comparison_1_t4052 *)___comparison, method)
// T[] System.Collections.Generic.List`1<System.Security.Policy.StrongName>::ToArray()
#define List_1_ToArray_m89406(__this, method) (StrongNameU5BU5D_t12137*)List_1_ToArray_m2552_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::TrimExcess()
#define List_1_TrimExcess_m89407(__this, method) (void)List_1_TrimExcess_m15491_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Capacity()
#define List_1_get_Capacity_m89408(__this, method) (int32_t)List_1_get_Capacity_m15492_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m89409(__this, ___value, method) (void)List_1_set_Capacity_m15493_gshared((List_1_t2 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Count()
#define List_1_get_Count_m89410(__this, method) (int32_t)List_1_get_Count_m358_gshared((List_1_t2 *)__this, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define List_1_get_Item_m89411(__this, ___index, method) (StrongName_t3622 *)List_1_get_Item_m1990_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define List_1_set_Item_m89412(__this, ___index, ___value, method) (void)List_1_set_Item_m6345_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
