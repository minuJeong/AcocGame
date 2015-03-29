#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct List_1_t937;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IEnumerable_1_t929;
// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>[]
struct KeyValuePair_2U5BU5D_t5824;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IEnumerator_1_t890;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct ICollection_1_t934;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct ReadOnlyCollection_1_t5832;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct Predicate_1_t5833;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct Comparison_1_t5834;
// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_37.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::.ctor()
 void List_1__ctor_m5152 (List_1_t937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void List_1__ctor_m28151 (List_1_t937 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::.ctor(System.Int32)
 void List_1__ctor_m28152 (List_1_t937 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::.ctor(T[],System.Int32)
 void List_1__ctor_m28153 (List_1_t937 * __this, KeyValuePair_2U5BU5D_t5824* ___data, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::.cctor()
 void List_1__cctor_m28154 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28155 (List_1_t937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void List_1_System_Collections_ICollection_CopyTo_m28156 (List_1_t937 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m28157 (List_1_t937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::System.Collections.IList.Add(System.Object)
 int32_t List_1_System_Collections_IList_Add_m28158 (List_1_t937 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::System.Collections.IList.Contains(System.Object)
 bool List_1_System_Collections_IList_Contains_m28159 (List_1_t937 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::System.Collections.IList.IndexOf(System.Object)
 int32_t List_1_System_Collections_IList_IndexOf_m28160 (List_1_t937 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::System.Collections.IList.Insert(System.Int32,System.Object)
 void List_1_System_Collections_IList_Insert_m28161 (List_1_t937 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::System.Collections.IList.Remove(System.Object)
 void List_1_System_Collections_IList_Remove_m28162 (List_1_t937 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28163 (List_1_t937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::System.Collections.ICollection.get_IsSynchronized()
 bool List_1_System_Collections_ICollection_get_IsSynchronized_m28164 (List_1_t937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m28165 (List_1_t937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::System.Collections.IList.get_IsFixedSize()
 bool List_1_System_Collections_IList_get_IsFixedSize_m28166 (List_1_t937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::System.Collections.IList.get_IsReadOnly()
 bool List_1_System_Collections_IList_get_IsReadOnly_m28167 (List_1_t937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::System.Collections.IList.get_Item(System.Int32)
 Object_t * List_1_System_Collections_IList_get_Item_m28168 (List_1_t937 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void List_1_System_Collections_IList_set_Item_m28169 (List_1_t937 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Add(T)
 void List_1_Add_m28170 (List_1_t937 * __this, KeyValuePair_2_t930  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::GrowIfNeeded(System.Int32)
 void List_1_GrowIfNeeded_m28171 (List_1_t937 * __this, int32_t ___newCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::CheckRange(System.Int32,System.Int32)
 void List_1_CheckRange_m28172 (List_1_t937 * __this, int32_t ___idx, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
 void List_1_AddCollection_m28173 (List_1_t937 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddEnumerable_m28174 (List_1_t937 * __this, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddRange_m28175 (List_1_t937 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::AsReadOnly()
 ReadOnlyCollection_1_t5832 * List_1_AsReadOnly_m28176 (List_1_t937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Clear()
 void List_1_Clear_m28177 (List_1_t937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Contains(T)
 bool List_1_Contains_m28178 (List_1_t937 * __this, KeyValuePair_2_t930  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::CopyTo(T[],System.Int32)
 void List_1_CopyTo_m28179 (List_1_t937 * __this, KeyValuePair_2U5BU5D_t5824* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Find(System.Predicate`1<T>)
 KeyValuePair_2_t930  List_1_Find_m28180 (List_1_t937 * __this, Predicate_1_t5833 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::CheckMatch(System.Predicate`1<T>)
 void List_1_CheckMatch_m28181 (Object_t * __this/* static, unused */, Predicate_1_t5833 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::FindIndex(System.Predicate`1<T>)
 int32_t List_1_FindIndex_m28182 (List_1_t937 * __this, Predicate_1_t5833 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t List_1_GetIndex_m28183 (List_1_t937 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5833 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::GetEnumerator()
 Enumerator_t5835  List_1_GetEnumerator_m28184 (List_1_t937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::GetRange(System.Int32,System.Int32)
 List_1_t937 * List_1_GetRange_m28185 (List_1_t937 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::IndexOf(T)
 int32_t List_1_IndexOf_m28186 (List_1_t937 * __this, KeyValuePair_2_t930  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Shift(System.Int32,System.Int32)
 void List_1_Shift_m28187 (List_1_t937 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::CheckIndex(System.Int32)
 void List_1_CheckIndex_m28188 (List_1_t937 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Insert(System.Int32,T)
 void List_1_Insert_m28189 (List_1_t937 * __this, int32_t ___index, KeyValuePair_2_t930  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_CheckCollection_m28190 (List_1_t937 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertRange_m28191 (List_1_t937 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
 void List_1_InsertCollection_m28192 (List_1_t937 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertEnumeration_m28193 (List_1_t937 * __this, int32_t ___index, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Remove(T)
 bool List_1_Remove_m28194 (List_1_t937 * __this, KeyValuePair_2_t930  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::RemoveAll(System.Predicate`1<T>)
 int32_t List_1_RemoveAll_m28195 (List_1_t937 * __this, Predicate_1_t5833 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::RemoveAt(System.Int32)
 void List_1_RemoveAt_m28196 (List_1_t937 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::RemoveRange(System.Int32,System.Int32)
 void List_1_RemoveRange_m28197 (List_1_t937 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Reverse()
 void List_1_Reverse_m28198 (List_1_t937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Sort()
 void List_1_Sort_m28199 (List_1_t937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Sort(System.Comparison`1<T>)
 void List_1_Sort_m28200 (List_1_t937 * __this, Comparison_1_t5834 * ___comparison, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::ToArray()
 KeyValuePair_2U5BU5D_t5824* List_1_ToArray_m28201 (List_1_t937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::TrimExcess()
 void List_1_TrimExcess_m28202 (List_1_t937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Capacity()
 int32_t List_1_get_Capacity_m28203 (List_1_t937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::set_Capacity(System.Int32)
 void List_1_set_Capacity_m28204 (List_1_t937 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Count()
 int32_t List_1_get_Count_m28205 (List_1_t937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32)
 KeyValuePair_2_t930  List_1_get_Item_m28206 (List_1_t937 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::set_Item(System.Int32,T)
 void List_1_set_Item_m28207 (List_1_t937 * __this, int32_t ___index, KeyValuePair_2_t930  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
