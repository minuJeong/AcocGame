#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>
struct List_1_t10215;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>
struct IEnumerable_1_t10208;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>[]
struct KeyValuePair_2U5BU5D_t10213;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>
struct IEnumerator_1_t10209;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>
struct ICollection_1_t10216;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>
struct ReadOnlyCollection_1_t10217;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>
struct Predicate_1_t10218;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>
struct Comparison_1_t10219;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_82.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_152.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::.ctor()
 void List_1__ctor_m73168 (List_1_t10215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void List_1__ctor_m73169 (List_1_t10215 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::.ctor(System.Int32)
 void List_1__ctor_m73170 (List_1_t10215 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::.ctor(T[],System.Int32)
 void List_1__ctor_m73171 (List_1_t10215 * __this, KeyValuePair_2U5BU5D_t10213* ___data, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::.cctor()
 void List_1__cctor_m73172 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m73173 (List_1_t10215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void List_1_System_Collections_ICollection_CopyTo_m73174 (List_1_t10215 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m73175 (List_1_t10215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::System.Collections.IList.Add(System.Object)
 int32_t List_1_System_Collections_IList_Add_m73176 (List_1_t10215 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::System.Collections.IList.Contains(System.Object)
 bool List_1_System_Collections_IList_Contains_m73177 (List_1_t10215 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::System.Collections.IList.IndexOf(System.Object)
 int32_t List_1_System_Collections_IList_IndexOf_m73178 (List_1_t10215 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::System.Collections.IList.Insert(System.Int32,System.Object)
 void List_1_System_Collections_IList_Insert_m73179 (List_1_t10215 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::System.Collections.IList.Remove(System.Object)
 void List_1_System_Collections_IList_Remove_m73180 (List_1_t10215 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m73181 (List_1_t10215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::System.Collections.ICollection.get_IsSynchronized()
 bool List_1_System_Collections_ICollection_get_IsSynchronized_m73182 (List_1_t10215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m73183 (List_1_t10215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::System.Collections.IList.get_IsFixedSize()
 bool List_1_System_Collections_IList_get_IsFixedSize_m73184 (List_1_t10215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::System.Collections.IList.get_IsReadOnly()
 bool List_1_System_Collections_IList_get_IsReadOnly_m73185 (List_1_t10215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::System.Collections.IList.get_Item(System.Int32)
 Object_t * List_1_System_Collections_IList_get_Item_m73186 (List_1_t10215 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void List_1_System_Collections_IList_set_Item_m73187 (List_1_t10215 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::Add(T)
 void List_1_Add_m73188 (List_1_t10215 * __this, KeyValuePair_2_t10206  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::GrowIfNeeded(System.Int32)
 void List_1_GrowIfNeeded_m73189 (List_1_t10215 * __this, int32_t ___newCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::CheckRange(System.Int32,System.Int32)
 void List_1_CheckRange_m73190 (List_1_t10215 * __this, int32_t ___idx, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
 void List_1_AddCollection_m73191 (List_1_t10215 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddEnumerable_m73192 (List_1_t10215 * __this, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddRange_m73193 (List_1_t10215 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::AsReadOnly()
 ReadOnlyCollection_1_t10217 * List_1_AsReadOnly_m73194 (List_1_t10215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::Clear()
 void List_1_Clear_m73195 (List_1_t10215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::Contains(T)
 bool List_1_Contains_m73196 (List_1_t10215 * __this, KeyValuePair_2_t10206  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::CopyTo(T[],System.Int32)
 void List_1_CopyTo_m73197 (List_1_t10215 * __this, KeyValuePair_2U5BU5D_t10213* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::Find(System.Predicate`1<T>)
 KeyValuePair_2_t10206  List_1_Find_m73198 (List_1_t10215 * __this, Predicate_1_t10218 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::CheckMatch(System.Predicate`1<T>)
 void List_1_CheckMatch_m73199 (Object_t * __this/* static, unused */, Predicate_1_t10218 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::FindIndex(System.Predicate`1<T>)
 int32_t List_1_FindIndex_m73200 (List_1_t10215 * __this, Predicate_1_t10218 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t List_1_GetIndex_m73201 (List_1_t10215 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t10218 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::GetEnumerator()
 Enumerator_t10220  List_1_GetEnumerator_m73202 (List_1_t10215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::GetRange(System.Int32,System.Int32)
 List_1_t10215 * List_1_GetRange_m73203 (List_1_t10215 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::IndexOf(T)
 int32_t List_1_IndexOf_m73204 (List_1_t10215 * __this, KeyValuePair_2_t10206  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::Shift(System.Int32,System.Int32)
 void List_1_Shift_m73205 (List_1_t10215 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::CheckIndex(System.Int32)
 void List_1_CheckIndex_m73206 (List_1_t10215 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::Insert(System.Int32,T)
 void List_1_Insert_m73207 (List_1_t10215 * __this, int32_t ___index, KeyValuePair_2_t10206  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_CheckCollection_m73208 (List_1_t10215 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertRange_m73209 (List_1_t10215 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
 void List_1_InsertCollection_m73210 (List_1_t10215 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertEnumeration_m73211 (List_1_t10215 * __this, int32_t ___index, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::Remove(T)
 bool List_1_Remove_m73212 (List_1_t10215 * __this, KeyValuePair_2_t10206  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::RemoveAll(System.Predicate`1<T>)
 int32_t List_1_RemoveAll_m73213 (List_1_t10215 * __this, Predicate_1_t10218 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::RemoveAt(System.Int32)
 void List_1_RemoveAt_m73214 (List_1_t10215 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::RemoveRange(System.Int32,System.Int32)
 void List_1_RemoveRange_m73215 (List_1_t10215 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::Reverse()
 void List_1_Reverse_m73216 (List_1_t10215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::Sort()
 void List_1_Sort_m73217 (List_1_t10215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::Sort(System.Comparison`1<T>)
 void List_1_Sort_m73218 (List_1_t10215 * __this, Comparison_1_t10219 * ___comparison, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::ToArray()
 KeyValuePair_2U5BU5D_t10213* List_1_ToArray_m73219 (List_1_t10215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::TrimExcess()
 void List_1_TrimExcess_m73220 (List_1_t10215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::get_Capacity()
 int32_t List_1_get_Capacity_m73221 (List_1_t10215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::set_Capacity(System.Int32)
 void List_1_set_Capacity_m73222 (List_1_t10215 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::get_Count()
 int32_t List_1_get_Count_m73223 (List_1_t10215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::get_Item(System.Int32)
 KeyValuePair_2_t10206  List_1_get_Item_m73224 (List_1_t10215 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Single>>>::set_Item(System.Int32,T)
 void List_1_set_Item_m73225 (List_1_t10215 * __this, int32_t ___index, KeyValuePair_2_t10206  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
