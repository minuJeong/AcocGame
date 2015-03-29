#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>
struct List_1_t10617;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>
struct IEnumerable_1_t10610;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>[]
struct KeyValuePair_2U5BU5D_t10615;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>
struct IEnumerator_1_t10611;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>
struct ICollection_1_t10618;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>
struct ReadOnlyCollection_1_t10619;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>
struct Predicate_1_t10620;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>
struct Comparison_1_t10621;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_98.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_169.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::.ctor()
 void List_1__ctor_m77287 (List_1_t10617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void List_1__ctor_m77288 (List_1_t10617 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::.ctor(System.Int32)
 void List_1__ctor_m77289 (List_1_t10617 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::.ctor(T[],System.Int32)
 void List_1__ctor_m77290 (List_1_t10617 * __this, KeyValuePair_2U5BU5D_t10615* ___data, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::.cctor()
 void List_1__cctor_m77291 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m77292 (List_1_t10617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void List_1_System_Collections_ICollection_CopyTo_m77293 (List_1_t10617 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m77294 (List_1_t10617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::System.Collections.IList.Add(System.Object)
 int32_t List_1_System_Collections_IList_Add_m77295 (List_1_t10617 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::System.Collections.IList.Contains(System.Object)
 bool List_1_System_Collections_IList_Contains_m77296 (List_1_t10617 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::System.Collections.IList.IndexOf(System.Object)
 int32_t List_1_System_Collections_IList_IndexOf_m77297 (List_1_t10617 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::System.Collections.IList.Insert(System.Int32,System.Object)
 void List_1_System_Collections_IList_Insert_m77298 (List_1_t10617 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::System.Collections.IList.Remove(System.Object)
 void List_1_System_Collections_IList_Remove_m77299 (List_1_t10617 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m77300 (List_1_t10617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::System.Collections.ICollection.get_IsSynchronized()
 bool List_1_System_Collections_ICollection_get_IsSynchronized_m77301 (List_1_t10617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m77302 (List_1_t10617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::System.Collections.IList.get_IsFixedSize()
 bool List_1_System_Collections_IList_get_IsFixedSize_m77303 (List_1_t10617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::System.Collections.IList.get_IsReadOnly()
 bool List_1_System_Collections_IList_get_IsReadOnly_m77304 (List_1_t10617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::System.Collections.IList.get_Item(System.Int32)
 Object_t * List_1_System_Collections_IList_get_Item_m77305 (List_1_t10617 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void List_1_System_Collections_IList_set_Item_m77306 (List_1_t10617 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::Add(T)
 void List_1_Add_m77307 (List_1_t10617 * __this, KeyValuePair_2_t10608  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::GrowIfNeeded(System.Int32)
 void List_1_GrowIfNeeded_m77308 (List_1_t10617 * __this, int32_t ___newCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::CheckRange(System.Int32,System.Int32)
 void List_1_CheckRange_m77309 (List_1_t10617 * __this, int32_t ___idx, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
 void List_1_AddCollection_m77310 (List_1_t10617 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddEnumerable_m77311 (List_1_t10617 * __this, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddRange_m77312 (List_1_t10617 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::AsReadOnly()
 ReadOnlyCollection_1_t10619 * List_1_AsReadOnly_m77313 (List_1_t10617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::Clear()
 void List_1_Clear_m77314 (List_1_t10617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::Contains(T)
 bool List_1_Contains_m77315 (List_1_t10617 * __this, KeyValuePair_2_t10608  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::CopyTo(T[],System.Int32)
 void List_1_CopyTo_m77316 (List_1_t10617 * __this, KeyValuePair_2U5BU5D_t10615* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::Find(System.Predicate`1<T>)
 KeyValuePair_2_t10608  List_1_Find_m77317 (List_1_t10617 * __this, Predicate_1_t10620 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::CheckMatch(System.Predicate`1<T>)
 void List_1_CheckMatch_m77318 (Object_t * __this/* static, unused */, Predicate_1_t10620 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::FindIndex(System.Predicate`1<T>)
 int32_t List_1_FindIndex_m77319 (List_1_t10617 * __this, Predicate_1_t10620 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t List_1_GetIndex_m77320 (List_1_t10617 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t10620 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::GetEnumerator()
 Enumerator_t10622  List_1_GetEnumerator_m77321 (List_1_t10617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::GetRange(System.Int32,System.Int32)
 List_1_t10617 * List_1_GetRange_m77322 (List_1_t10617 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::IndexOf(T)
 int32_t List_1_IndexOf_m77323 (List_1_t10617 * __this, KeyValuePair_2_t10608  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::Shift(System.Int32,System.Int32)
 void List_1_Shift_m77324 (List_1_t10617 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::CheckIndex(System.Int32)
 void List_1_CheckIndex_m77325 (List_1_t10617 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::Insert(System.Int32,T)
 void List_1_Insert_m77326 (List_1_t10617 * __this, int32_t ___index, KeyValuePair_2_t10608  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_CheckCollection_m77327 (List_1_t10617 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertRange_m77328 (List_1_t10617 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
 void List_1_InsertCollection_m77329 (List_1_t10617 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertEnumeration_m77330 (List_1_t10617 * __this, int32_t ___index, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::Remove(T)
 bool List_1_Remove_m77331 (List_1_t10617 * __this, KeyValuePair_2_t10608  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::RemoveAll(System.Predicate`1<T>)
 int32_t List_1_RemoveAll_m77332 (List_1_t10617 * __this, Predicate_1_t10620 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::RemoveAt(System.Int32)
 void List_1_RemoveAt_m77333 (List_1_t10617 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::RemoveRange(System.Int32,System.Int32)
 void List_1_RemoveRange_m77334 (List_1_t10617 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::Reverse()
 void List_1_Reverse_m77335 (List_1_t10617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::Sort()
 void List_1_Sort_m77336 (List_1_t10617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::Sort(System.Comparison`1<T>)
 void List_1_Sort_m77337 (List_1_t10617 * __this, Comparison_1_t10621 * ___comparison, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::ToArray()
 KeyValuePair_2U5BU5D_t10615* List_1_ToArray_m77338 (List_1_t10617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::TrimExcess()
 void List_1_TrimExcess_m77339 (List_1_t10617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::get_Capacity()
 int32_t List_1_get_Capacity_m77340 (List_1_t10617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::set_Capacity(System.Int32)
 void List_1_set_Capacity_m77341 (List_1_t10617 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::get_Count()
 int32_t List_1_get_Count_m77342 (List_1_t10617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::get_Item(System.Int32)
 KeyValuePair_2_t10608  List_1_get_Item_m77343 (List_1_t10617 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>::set_Item(System.Int32,T)
 void List_1_set_Item_m77344 (List_1_t10617 * __this, int32_t ___index, KeyValuePair_2_t10608  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
