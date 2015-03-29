#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>
struct List_1_t9975;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>
struct IEnumerable_1_t9968;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>[]
struct KeyValuePair_2U5BU5D_t9973;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>
struct IEnumerator_1_t9969;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>
struct ICollection_1_t9976;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>
struct ReadOnlyCollection_1_t9977;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>
struct Predicate_1_t9978;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>
struct Comparison_1_t9979;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_142.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::.ctor()
 void List_1__ctor_m70738 (List_1_t9975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void List_1__ctor_m70739 (List_1_t9975 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::.ctor(System.Int32)
 void List_1__ctor_m70740 (List_1_t9975 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::.ctor(T[],System.Int32)
 void List_1__ctor_m70741 (List_1_t9975 * __this, KeyValuePair_2U5BU5D_t9973* ___data, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::.cctor()
 void List_1__cctor_m70742 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m70743 (List_1_t9975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void List_1_System_Collections_ICollection_CopyTo_m70744 (List_1_t9975 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m70745 (List_1_t9975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::System.Collections.IList.Add(System.Object)
 int32_t List_1_System_Collections_IList_Add_m70746 (List_1_t9975 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::System.Collections.IList.Contains(System.Object)
 bool List_1_System_Collections_IList_Contains_m70747 (List_1_t9975 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::System.Collections.IList.IndexOf(System.Object)
 int32_t List_1_System_Collections_IList_IndexOf_m70748 (List_1_t9975 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::System.Collections.IList.Insert(System.Int32,System.Object)
 void List_1_System_Collections_IList_Insert_m70749 (List_1_t9975 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::System.Collections.IList.Remove(System.Object)
 void List_1_System_Collections_IList_Remove_m70750 (List_1_t9975 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m70751 (List_1_t9975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::System.Collections.ICollection.get_IsSynchronized()
 bool List_1_System_Collections_ICollection_get_IsSynchronized_m70752 (List_1_t9975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m70753 (List_1_t9975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::System.Collections.IList.get_IsFixedSize()
 bool List_1_System_Collections_IList_get_IsFixedSize_m70754 (List_1_t9975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::System.Collections.IList.get_IsReadOnly()
 bool List_1_System_Collections_IList_get_IsReadOnly_m70755 (List_1_t9975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::System.Collections.IList.get_Item(System.Int32)
 Object_t * List_1_System_Collections_IList_get_Item_m70756 (List_1_t9975 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void List_1_System_Collections_IList_set_Item_m70757 (List_1_t9975 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::Add(T)
 void List_1_Add_m70758 (List_1_t9975 * __this, KeyValuePair_2_t9966  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::GrowIfNeeded(System.Int32)
 void List_1_GrowIfNeeded_m70759 (List_1_t9975 * __this, int32_t ___newCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::CheckRange(System.Int32,System.Int32)
 void List_1_CheckRange_m70760 (List_1_t9975 * __this, int32_t ___idx, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
 void List_1_AddCollection_m70761 (List_1_t9975 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddEnumerable_m70762 (List_1_t9975 * __this, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddRange_m70763 (List_1_t9975 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::AsReadOnly()
 ReadOnlyCollection_1_t9977 * List_1_AsReadOnly_m70764 (List_1_t9975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::Clear()
 void List_1_Clear_m70765 (List_1_t9975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::Contains(T)
 bool List_1_Contains_m70766 (List_1_t9975 * __this, KeyValuePair_2_t9966  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::CopyTo(T[],System.Int32)
 void List_1_CopyTo_m70767 (List_1_t9975 * __this, KeyValuePair_2U5BU5D_t9973* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::Find(System.Predicate`1<T>)
 KeyValuePair_2_t9966  List_1_Find_m70768 (List_1_t9975 * __this, Predicate_1_t9978 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::CheckMatch(System.Predicate`1<T>)
 void List_1_CheckMatch_m70769 (Object_t * __this/* static, unused */, Predicate_1_t9978 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::FindIndex(System.Predicate`1<T>)
 int32_t List_1_FindIndex_m70770 (List_1_t9975 * __this, Predicate_1_t9978 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t List_1_GetIndex_m70771 (List_1_t9975 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t9978 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::GetEnumerator()
 Enumerator_t9980  List_1_GetEnumerator_m70772 (List_1_t9975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::GetRange(System.Int32,System.Int32)
 List_1_t9975 * List_1_GetRange_m70773 (List_1_t9975 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::IndexOf(T)
 int32_t List_1_IndexOf_m70774 (List_1_t9975 * __this, KeyValuePair_2_t9966  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::Shift(System.Int32,System.Int32)
 void List_1_Shift_m70775 (List_1_t9975 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::CheckIndex(System.Int32)
 void List_1_CheckIndex_m70776 (List_1_t9975 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::Insert(System.Int32,T)
 void List_1_Insert_m70777 (List_1_t9975 * __this, int32_t ___index, KeyValuePair_2_t9966  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_CheckCollection_m70778 (List_1_t9975 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertRange_m70779 (List_1_t9975 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
 void List_1_InsertCollection_m70780 (List_1_t9975 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertEnumeration_m70781 (List_1_t9975 * __this, int32_t ___index, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::Remove(T)
 bool List_1_Remove_m70782 (List_1_t9975 * __this, KeyValuePair_2_t9966  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::RemoveAll(System.Predicate`1<T>)
 int32_t List_1_RemoveAll_m70783 (List_1_t9975 * __this, Predicate_1_t9978 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::RemoveAt(System.Int32)
 void List_1_RemoveAt_m70784 (List_1_t9975 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::RemoveRange(System.Int32,System.Int32)
 void List_1_RemoveRange_m70785 (List_1_t9975 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::Reverse()
 void List_1_Reverse_m70786 (List_1_t9975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::Sort()
 void List_1_Sort_m70787 (List_1_t9975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::Sort(System.Comparison`1<T>)
 void List_1_Sort_m70788 (List_1_t9975 * __this, Comparison_1_t9979 * ___comparison, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::ToArray()
 KeyValuePair_2U5BU5D_t9973* List_1_ToArray_m70789 (List_1_t9975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::TrimExcess()
 void List_1_TrimExcess_m70790 (List_1_t9975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::get_Capacity()
 int32_t List_1_get_Capacity_m70791 (List_1_t9975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::set_Capacity(System.Int32)
 void List_1_set_Capacity_m70792 (List_1_t9975 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::get_Count()
 int32_t List_1_get_Count_m70793 (List_1_t9975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::get_Item(System.Int32)
 KeyValuePair_2_t9966  List_1_get_Item_m70794 (List_1_t9975 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Object>>>::set_Item(System.Int32,T)
 void List_1_set_Item_m70795 (List_1_t9975 * __this, int32_t ___index, KeyValuePair_2_t9966  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
