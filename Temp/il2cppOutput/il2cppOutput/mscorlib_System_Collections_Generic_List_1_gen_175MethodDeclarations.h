#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>
struct List_1_t10527;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>
struct IEnumerable_1_t10520;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>[]
struct KeyValuePair_2U5BU5D_t10525;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>
struct IEnumerator_1_t10521;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>
struct ICollection_1_t10528;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>
struct ReadOnlyCollection_1_t10529;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>
struct Predicate_1_t10530;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>
struct Comparison_1_t10531;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_95.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_165.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::.ctor()
 void List_1__ctor_m76327 (List_1_t10527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void List_1__ctor_m76328 (List_1_t10527 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::.ctor(System.Int32)
 void List_1__ctor_m76329 (List_1_t10527 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::.ctor(T[],System.Int32)
 void List_1__ctor_m76330 (List_1_t10527 * __this, KeyValuePair_2U5BU5D_t10525* ___data, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::.cctor()
 void List_1__cctor_m76331 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m76332 (List_1_t10527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void List_1_System_Collections_ICollection_CopyTo_m76333 (List_1_t10527 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m76334 (List_1_t10527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::System.Collections.IList.Add(System.Object)
 int32_t List_1_System_Collections_IList_Add_m76335 (List_1_t10527 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::System.Collections.IList.Contains(System.Object)
 bool List_1_System_Collections_IList_Contains_m76336 (List_1_t10527 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::System.Collections.IList.IndexOf(System.Object)
 int32_t List_1_System_Collections_IList_IndexOf_m76337 (List_1_t10527 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::System.Collections.IList.Insert(System.Int32,System.Object)
 void List_1_System_Collections_IList_Insert_m76338 (List_1_t10527 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::System.Collections.IList.Remove(System.Object)
 void List_1_System_Collections_IList_Remove_m76339 (List_1_t10527 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m76340 (List_1_t10527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::System.Collections.ICollection.get_IsSynchronized()
 bool List_1_System_Collections_ICollection_get_IsSynchronized_m76341 (List_1_t10527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m76342 (List_1_t10527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::System.Collections.IList.get_IsFixedSize()
 bool List_1_System_Collections_IList_get_IsFixedSize_m76343 (List_1_t10527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::System.Collections.IList.get_IsReadOnly()
 bool List_1_System_Collections_IList_get_IsReadOnly_m76344 (List_1_t10527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::System.Collections.IList.get_Item(System.Int32)
 Object_t * List_1_System_Collections_IList_get_Item_m76345 (List_1_t10527 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void List_1_System_Collections_IList_set_Item_m76346 (List_1_t10527 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::Add(T)
 void List_1_Add_m76347 (List_1_t10527 * __this, KeyValuePair_2_t10518  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::GrowIfNeeded(System.Int32)
 void List_1_GrowIfNeeded_m76348 (List_1_t10527 * __this, int32_t ___newCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::CheckRange(System.Int32,System.Int32)
 void List_1_CheckRange_m76349 (List_1_t10527 * __this, int32_t ___idx, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
 void List_1_AddCollection_m76350 (List_1_t10527 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddEnumerable_m76351 (List_1_t10527 * __this, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddRange_m76352 (List_1_t10527 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::AsReadOnly()
 ReadOnlyCollection_1_t10529 * List_1_AsReadOnly_m76353 (List_1_t10527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::Clear()
 void List_1_Clear_m76354 (List_1_t10527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::Contains(T)
 bool List_1_Contains_m76355 (List_1_t10527 * __this, KeyValuePair_2_t10518  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::CopyTo(T[],System.Int32)
 void List_1_CopyTo_m76356 (List_1_t10527 * __this, KeyValuePair_2U5BU5D_t10525* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::Find(System.Predicate`1<T>)
 KeyValuePair_2_t10518  List_1_Find_m76357 (List_1_t10527 * __this, Predicate_1_t10530 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::CheckMatch(System.Predicate`1<T>)
 void List_1_CheckMatch_m76358 (Object_t * __this/* static, unused */, Predicate_1_t10530 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::FindIndex(System.Predicate`1<T>)
 int32_t List_1_FindIndex_m76359 (List_1_t10527 * __this, Predicate_1_t10530 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t List_1_GetIndex_m76360 (List_1_t10527 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t10530 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::GetEnumerator()
 Enumerator_t10532  List_1_GetEnumerator_m76361 (List_1_t10527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::GetRange(System.Int32,System.Int32)
 List_1_t10527 * List_1_GetRange_m76362 (List_1_t10527 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::IndexOf(T)
 int32_t List_1_IndexOf_m76363 (List_1_t10527 * __this, KeyValuePair_2_t10518  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::Shift(System.Int32,System.Int32)
 void List_1_Shift_m76364 (List_1_t10527 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::CheckIndex(System.Int32)
 void List_1_CheckIndex_m76365 (List_1_t10527 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::Insert(System.Int32,T)
 void List_1_Insert_m76366 (List_1_t10527 * __this, int32_t ___index, KeyValuePair_2_t10518  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_CheckCollection_m76367 (List_1_t10527 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertRange_m76368 (List_1_t10527 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
 void List_1_InsertCollection_m76369 (List_1_t10527 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertEnumeration_m76370 (List_1_t10527 * __this, int32_t ___index, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::Remove(T)
 bool List_1_Remove_m76371 (List_1_t10527 * __this, KeyValuePair_2_t10518  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::RemoveAll(System.Predicate`1<T>)
 int32_t List_1_RemoveAll_m76372 (List_1_t10527 * __this, Predicate_1_t10530 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::RemoveAt(System.Int32)
 void List_1_RemoveAt_m76373 (List_1_t10527 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::RemoveRange(System.Int32,System.Int32)
 void List_1_RemoveRange_m76374 (List_1_t10527 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::Reverse()
 void List_1_Reverse_m76375 (List_1_t10527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::Sort()
 void List_1_Sort_m76376 (List_1_t10527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::Sort(System.Comparison`1<T>)
 void List_1_Sort_m76377 (List_1_t10527 * __this, Comparison_1_t10531 * ___comparison, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::ToArray()
 KeyValuePair_2U5BU5D_t10525* List_1_ToArray_m76378 (List_1_t10527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::TrimExcess()
 void List_1_TrimExcess_m76379 (List_1_t10527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::get_Capacity()
 int32_t List_1_get_Capacity_m76380 (List_1_t10527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::set_Capacity(System.Int32)
 void List_1_set_Capacity_m76381 (List_1_t10527 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::get_Count()
 int32_t List_1_get_Count_m76382 (List_1_t10527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::get_Item(System.Int32)
 KeyValuePair_2_t10518  List_1_get_Item_m76383 (List_1_t10527 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>::set_Item(System.Int32,T)
 void List_1_set_Item_m76384 (List_1_t10527 * __this, int32_t ___index, KeyValuePair_2_t10518  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
