#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>
struct List_1_t10809;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>
struct IEnumerable_1_t10802;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>[]
struct KeyValuePair_2U5BU5D_t10807;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>
struct IEnumerator_1_t10803;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>
struct ICollection_1_t10810;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>
struct ReadOnlyCollection_1_t10811;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>
struct Predicate_1_t10812;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>
struct Comparison_1_t10813;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_106.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_177.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::.ctor()
 void List_1__ctor_m79231 (List_1_t10809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void List_1__ctor_m79232 (List_1_t10809 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::.ctor(System.Int32)
 void List_1__ctor_m79233 (List_1_t10809 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::.ctor(T[],System.Int32)
 void List_1__ctor_m79234 (List_1_t10809 * __this, KeyValuePair_2U5BU5D_t10807* ___data, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::.cctor()
 void List_1__cctor_m79235 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m79236 (List_1_t10809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void List_1_System_Collections_ICollection_CopyTo_m79237 (List_1_t10809 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m79238 (List_1_t10809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::System.Collections.IList.Add(System.Object)
 int32_t List_1_System_Collections_IList_Add_m79239 (List_1_t10809 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::System.Collections.IList.Contains(System.Object)
 bool List_1_System_Collections_IList_Contains_m79240 (List_1_t10809 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::System.Collections.IList.IndexOf(System.Object)
 int32_t List_1_System_Collections_IList_IndexOf_m79241 (List_1_t10809 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::System.Collections.IList.Insert(System.Int32,System.Object)
 void List_1_System_Collections_IList_Insert_m79242 (List_1_t10809 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::System.Collections.IList.Remove(System.Object)
 void List_1_System_Collections_IList_Remove_m79243 (List_1_t10809 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m79244 (List_1_t10809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::System.Collections.ICollection.get_IsSynchronized()
 bool List_1_System_Collections_ICollection_get_IsSynchronized_m79245 (List_1_t10809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m79246 (List_1_t10809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::System.Collections.IList.get_IsFixedSize()
 bool List_1_System_Collections_IList_get_IsFixedSize_m79247 (List_1_t10809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::System.Collections.IList.get_IsReadOnly()
 bool List_1_System_Collections_IList_get_IsReadOnly_m79248 (List_1_t10809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::System.Collections.IList.get_Item(System.Int32)
 Object_t * List_1_System_Collections_IList_get_Item_m79249 (List_1_t10809 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void List_1_System_Collections_IList_set_Item_m79250 (List_1_t10809 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::Add(T)
 void List_1_Add_m79251 (List_1_t10809 * __this, KeyValuePair_2_t10800  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::GrowIfNeeded(System.Int32)
 void List_1_GrowIfNeeded_m79252 (List_1_t10809 * __this, int32_t ___newCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::CheckRange(System.Int32,System.Int32)
 void List_1_CheckRange_m79253 (List_1_t10809 * __this, int32_t ___idx, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
 void List_1_AddCollection_m79254 (List_1_t10809 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddEnumerable_m79255 (List_1_t10809 * __this, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddRange_m79256 (List_1_t10809 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::AsReadOnly()
 ReadOnlyCollection_1_t10811 * List_1_AsReadOnly_m79257 (List_1_t10809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::Clear()
 void List_1_Clear_m79258 (List_1_t10809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::Contains(T)
 bool List_1_Contains_m79259 (List_1_t10809 * __this, KeyValuePair_2_t10800  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::CopyTo(T[],System.Int32)
 void List_1_CopyTo_m79260 (List_1_t10809 * __this, KeyValuePair_2U5BU5D_t10807* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::Find(System.Predicate`1<T>)
 KeyValuePair_2_t10800  List_1_Find_m79261 (List_1_t10809 * __this, Predicate_1_t10812 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::CheckMatch(System.Predicate`1<T>)
 void List_1_CheckMatch_m79262 (Object_t * __this/* static, unused */, Predicate_1_t10812 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::FindIndex(System.Predicate`1<T>)
 int32_t List_1_FindIndex_m79263 (List_1_t10809 * __this, Predicate_1_t10812 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t List_1_GetIndex_m79264 (List_1_t10809 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t10812 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::GetEnumerator()
 Enumerator_t10814  List_1_GetEnumerator_m79265 (List_1_t10809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::GetRange(System.Int32,System.Int32)
 List_1_t10809 * List_1_GetRange_m79266 (List_1_t10809 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::IndexOf(T)
 int32_t List_1_IndexOf_m79267 (List_1_t10809 * __this, KeyValuePair_2_t10800  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::Shift(System.Int32,System.Int32)
 void List_1_Shift_m79268 (List_1_t10809 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::CheckIndex(System.Int32)
 void List_1_CheckIndex_m79269 (List_1_t10809 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::Insert(System.Int32,T)
 void List_1_Insert_m79270 (List_1_t10809 * __this, int32_t ___index, KeyValuePair_2_t10800  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_CheckCollection_m79271 (List_1_t10809 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertRange_m79272 (List_1_t10809 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
 void List_1_InsertCollection_m79273 (List_1_t10809 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertEnumeration_m79274 (List_1_t10809 * __this, int32_t ___index, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::Remove(T)
 bool List_1_Remove_m79275 (List_1_t10809 * __this, KeyValuePair_2_t10800  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::RemoveAll(System.Predicate`1<T>)
 int32_t List_1_RemoveAll_m79276 (List_1_t10809 * __this, Predicate_1_t10812 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::RemoveAt(System.Int32)
 void List_1_RemoveAt_m79277 (List_1_t10809 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::RemoveRange(System.Int32,System.Int32)
 void List_1_RemoveRange_m79278 (List_1_t10809 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::Reverse()
 void List_1_Reverse_m79279 (List_1_t10809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::Sort()
 void List_1_Sort_m79280 (List_1_t10809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::Sort(System.Comparison`1<T>)
 void List_1_Sort_m79281 (List_1_t10809 * __this, Comparison_1_t10813 * ___comparison, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::ToArray()
 KeyValuePair_2U5BU5D_t10807* List_1_ToArray_m79282 (List_1_t10809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::TrimExcess()
 void List_1_TrimExcess_m79283 (List_1_t10809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::get_Capacity()
 int32_t List_1_get_Capacity_m79284 (List_1_t10809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::set_Capacity(System.Int32)
 void List_1_set_Capacity_m79285 (List_1_t10809 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::get_Count()
 int32_t List_1_get_Count_m79286 (List_1_t10809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::get_Item(System.Int32)
 KeyValuePair_2_t10800  List_1_get_Item_m79287 (List_1_t10809 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>::set_Item(System.Int32,T)
 void List_1_set_Item_m79288 (List_1_t10809 * __this, int32_t ___index, KeyValuePair_2_t10800  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
