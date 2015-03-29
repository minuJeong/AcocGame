#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t487;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t4838;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t4157;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t4147;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct ReadOnlyCollection_1_t4839;
// System.Predicate`1<System.Byte>
struct Predicate_1_t4840;
// System.Comparison`1<System.Byte>
struct Comparison_1_t4841;
// System.Collections.Generic.List`1/Enumerator<System.Byte>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_14.h"

// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
 void List_1__ctor_m2536 (List_1_t487 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void List_1__ctor_m20800 (List_1_t487 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
 void List_1__ctor_m20801 (List_1_t487 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(T[],System.Int32)
 void List_1__ctor_m20802 (List_1_t487 * __this, ByteU5BU5D_t21* ___data, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::.cctor()
 void List_1__cctor_m20803 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20804 (List_1_t487 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void List_1_System_Collections_ICollection_CopyTo_m20805 (List_1_t487 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m20806 (List_1_t487 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Add(System.Object)
 int32_t List_1_System_Collections_IList_Add_m20807 (List_1_t487 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Contains(System.Object)
 bool List_1_System_Collections_IList_Contains_m20808 (List_1_t487 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
 int32_t List_1_System_Collections_IList_IndexOf_m20809 (List_1_t487 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
 void List_1_System_Collections_IList_Insert_m20810 (List_1_t487 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Remove(System.Object)
 void List_1_System_Collections_IList_Remove_m20811 (List_1_t487 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20812 (List_1_t487 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
 bool List_1_System_Collections_ICollection_get_IsSynchronized_m20813 (List_1_t487 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
 Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m20814 (List_1_t487 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
 bool List_1_System_Collections_IList_get_IsFixedSize_m20815 (List_1_t487 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
 bool List_1_System_Collections_IList_get_IsReadOnly_m20816 (List_1_t487 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
 Object_t * List_1_System_Collections_IList_get_Item_m20817 (List_1_t487 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void List_1_System_Collections_IList_set_Item_m20818 (List_1_t487 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
 void List_1_Add_m2537 (List_1_t487 * __this, uint8_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::GrowIfNeeded(System.Int32)
 void List_1_GrowIfNeeded_m20819 (List_1_t487 * __this, int32_t ___newCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckRange(System.Int32,System.Int32)
 void List_1_CheckRange_m20820 (List_1_t487 * __this, int32_t ___idx, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
 void List_1_AddCollection_m20821 (List_1_t487 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddEnumerable_m20822 (List_1_t487 * __this, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddRange_m20823 (List_1_t487 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
 ReadOnlyCollection_1_t4839 * List_1_AsReadOnly_m20824 (List_1_t487 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::Clear()
 void List_1_Clear_m20825 (List_1_t487 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Contains(T)
 bool List_1_Contains_m2538 (List_1_t487 * __this, uint8_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::CopyTo(T[],System.Int32)
 void List_1_CopyTo_m20826 (List_1_t487 * __this, ByteU5BU5D_t21* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Byte>::Find(System.Predicate`1<T>)
 uint8_t List_1_Find_m20827 (List_1_t487 * __this, Predicate_1_t4840 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckMatch(System.Predicate`1<T>)
 void List_1_CheckMatch_m20828 (Object_t * __this/* static, unused */, Predicate_1_t4840 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Byte>::FindIndex(System.Predicate`1<T>)
 int32_t List_1_FindIndex_m20829 (List_1_t487 * __this, Predicate_1_t4840 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Byte>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t List_1_GetIndex_m20830 (List_1_t487 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4840 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte>::GetEnumerator()
 Enumerator_t4842  List_1_GetEnumerator_m20831 (List_1_t487 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::GetRange(System.Int32,System.Int32)
 List_1_t487 * List_1_GetRange_m20832 (List_1_t487 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Byte>::IndexOf(T)
 int32_t List_1_IndexOf_m20833 (List_1_t487 * __this, uint8_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::Shift(System.Int32,System.Int32)
 void List_1_Shift_m20834 (List_1_t487 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckIndex(System.Int32)
 void List_1_CheckIndex_m20835 (List_1_t487 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,T)
 void List_1_Insert_m20836 (List_1_t487 * __this, int32_t ___index, uint8_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_CheckCollection_m20837 (List_1_t487 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertRange_m20838 (List_1_t487 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
 void List_1_InsertCollection_m20839 (List_1_t487 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertEnumeration_m20840 (List_1_t487 * __this, int32_t ___index, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Remove(T)
 bool List_1_Remove_m20841 (List_1_t487 * __this, uint8_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Byte>::RemoveAll(System.Predicate`1<T>)
 int32_t List_1_RemoveAll_m20842 (List_1_t487 * __this, Predicate_1_t4840 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveAt(System.Int32)
 void List_1_RemoveAt_m20843 (List_1_t487 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveRange(System.Int32,System.Int32)
 void List_1_RemoveRange_m20844 (List_1_t487 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::Reverse()
 void List_1_Reverse_m20845 (List_1_t487 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort()
 void List_1_Sort_m20846 (List_1_t487 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Comparison`1<T>)
 void List_1_Sort_m20847 (List_1_t487 * __this, Comparison_1_t4841 * ___comparison, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
 ByteU5BU5D_t21* List_1_ToArray_m2540 (List_1_t487 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::TrimExcess()
 void List_1_TrimExcess_m20848 (List_1_t487 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Capacity()
 int32_t List_1_get_Capacity_m20849 (List_1_t487 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Capacity(System.Int32)
 void List_1_set_Capacity_m20850 (List_1_t487 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
 int32_t List_1_get_Count_m2539 (List_1_t487 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Byte>::get_Item(System.Int32)
 uint8_t List_1_get_Item_m20851 (List_1_t487 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Item(System.Int32,T)
 void List_1_set_Item_m20852 (List_1_t487 * __this, int32_t ___index, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
