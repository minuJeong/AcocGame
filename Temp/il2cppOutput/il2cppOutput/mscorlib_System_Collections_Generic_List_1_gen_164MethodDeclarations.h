#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>
struct List_1_t10263;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>
struct IEnumerable_1_t10256;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>[]
struct KeyValuePair_2U5BU5D_t10261;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>
struct IEnumerator_1_t10257;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>
struct ICollection_1_t10264;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>
struct ReadOnlyCollection_1_t10265;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>
struct Predicate_1_t10266;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>
struct Comparison_1_t10267;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_84.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_154.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::.ctor()
 void List_1__ctor_m73654 (List_1_t10263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void List_1__ctor_m73655 (List_1_t10263 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::.ctor(System.Int32)
 void List_1__ctor_m73656 (List_1_t10263 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::.ctor(T[],System.Int32)
 void List_1__ctor_m73657 (List_1_t10263 * __this, KeyValuePair_2U5BU5D_t10261* ___data, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::.cctor()
 void List_1__cctor_m73658 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m73659 (List_1_t10263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void List_1_System_Collections_ICollection_CopyTo_m73660 (List_1_t10263 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m73661 (List_1_t10263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::System.Collections.IList.Add(System.Object)
 int32_t List_1_System_Collections_IList_Add_m73662 (List_1_t10263 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::System.Collections.IList.Contains(System.Object)
 bool List_1_System_Collections_IList_Contains_m73663 (List_1_t10263 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::System.Collections.IList.IndexOf(System.Object)
 int32_t List_1_System_Collections_IList_IndexOf_m73664 (List_1_t10263 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::System.Collections.IList.Insert(System.Int32,System.Object)
 void List_1_System_Collections_IList_Insert_m73665 (List_1_t10263 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::System.Collections.IList.Remove(System.Object)
 void List_1_System_Collections_IList_Remove_m73666 (List_1_t10263 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m73667 (List_1_t10263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::System.Collections.ICollection.get_IsSynchronized()
 bool List_1_System_Collections_ICollection_get_IsSynchronized_m73668 (List_1_t10263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m73669 (List_1_t10263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::System.Collections.IList.get_IsFixedSize()
 bool List_1_System_Collections_IList_get_IsFixedSize_m73670 (List_1_t10263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::System.Collections.IList.get_IsReadOnly()
 bool List_1_System_Collections_IList_get_IsReadOnly_m73671 (List_1_t10263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::System.Collections.IList.get_Item(System.Int32)
 Object_t * List_1_System_Collections_IList_get_Item_m73672 (List_1_t10263 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void List_1_System_Collections_IList_set_Item_m73673 (List_1_t10263 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::Add(T)
 void List_1_Add_m73674 (List_1_t10263 * __this, KeyValuePair_2_t10254  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::GrowIfNeeded(System.Int32)
 void List_1_GrowIfNeeded_m73675 (List_1_t10263 * __this, int32_t ___newCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::CheckRange(System.Int32,System.Int32)
 void List_1_CheckRange_m73676 (List_1_t10263 * __this, int32_t ___idx, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
 void List_1_AddCollection_m73677 (List_1_t10263 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddEnumerable_m73678 (List_1_t10263 * __this, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddRange_m73679 (List_1_t10263 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::AsReadOnly()
 ReadOnlyCollection_1_t10265 * List_1_AsReadOnly_m73680 (List_1_t10263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::Clear()
 void List_1_Clear_m73681 (List_1_t10263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::Contains(T)
 bool List_1_Contains_m73682 (List_1_t10263 * __this, KeyValuePair_2_t10254  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::CopyTo(T[],System.Int32)
 void List_1_CopyTo_m73683 (List_1_t10263 * __this, KeyValuePair_2U5BU5D_t10261* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::Find(System.Predicate`1<T>)
 KeyValuePair_2_t10254  List_1_Find_m73684 (List_1_t10263 * __this, Predicate_1_t10266 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::CheckMatch(System.Predicate`1<T>)
 void List_1_CheckMatch_m73685 (Object_t * __this/* static, unused */, Predicate_1_t10266 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::FindIndex(System.Predicate`1<T>)
 int32_t List_1_FindIndex_m73686 (List_1_t10263 * __this, Predicate_1_t10266 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t List_1_GetIndex_m73687 (List_1_t10263 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t10266 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::GetEnumerator()
 Enumerator_t10268  List_1_GetEnumerator_m73688 (List_1_t10263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::GetRange(System.Int32,System.Int32)
 List_1_t10263 * List_1_GetRange_m73689 (List_1_t10263 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::IndexOf(T)
 int32_t List_1_IndexOf_m73690 (List_1_t10263 * __this, KeyValuePair_2_t10254  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::Shift(System.Int32,System.Int32)
 void List_1_Shift_m73691 (List_1_t10263 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::CheckIndex(System.Int32)
 void List_1_CheckIndex_m73692 (List_1_t10263 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::Insert(System.Int32,T)
 void List_1_Insert_m73693 (List_1_t10263 * __this, int32_t ___index, KeyValuePair_2_t10254  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_CheckCollection_m73694 (List_1_t10263 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertRange_m73695 (List_1_t10263 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
 void List_1_InsertCollection_m73696 (List_1_t10263 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertEnumeration_m73697 (List_1_t10263 * __this, int32_t ___index, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::Remove(T)
 bool List_1_Remove_m73698 (List_1_t10263 * __this, KeyValuePair_2_t10254  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::RemoveAll(System.Predicate`1<T>)
 int32_t List_1_RemoveAll_m73699 (List_1_t10263 * __this, Predicate_1_t10266 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::RemoveAt(System.Int32)
 void List_1_RemoveAt_m73700 (List_1_t10263 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::RemoveRange(System.Int32,System.Int32)
 void List_1_RemoveRange_m73701 (List_1_t10263 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::Reverse()
 void List_1_Reverse_m73702 (List_1_t10263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::Sort()
 void List_1_Sort_m73703 (List_1_t10263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::Sort(System.Comparison`1<T>)
 void List_1_Sort_m73704 (List_1_t10263 * __this, Comparison_1_t10267 * ___comparison, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::ToArray()
 KeyValuePair_2U5BU5D_t10261* List_1_ToArray_m73705 (List_1_t10263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::TrimExcess()
 void List_1_TrimExcess_m73706 (List_1_t10263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::get_Capacity()
 int32_t List_1_get_Capacity_m73707 (List_1_t10263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::set_Capacity(System.Int32)
 void List_1_set_Capacity_m73708 (List_1_t10263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::get_Count()
 int32_t List_1_get_Count_m73709 (List_1_t10263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::get_Item(System.Int32)
 KeyValuePair_2_t10254  List_1_get_Item_m73710 (List_1_t10263 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>>::set_Item(System.Int32,T)
 void List_1_set_Item_m73711 (List_1_t10263 * __this, int32_t ___index, KeyValuePair_2_t10254  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
