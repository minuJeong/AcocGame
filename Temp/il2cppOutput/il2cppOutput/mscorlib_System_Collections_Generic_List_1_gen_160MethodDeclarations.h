#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>
struct List_1_t10167;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>
struct IEnumerable_1_t10160;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>[]
struct KeyValuePair_2U5BU5D_t10165;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>
struct IEnumerator_1_t10161;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>
struct ICollection_1_t10168;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>
struct ReadOnlyCollection_1_t10169;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>
struct Predicate_1_t10170;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>
struct Comparison_1_t10171;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_80.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_150.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::.ctor()
 void List_1__ctor_m72682 (List_1_t10167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void List_1__ctor_m72683 (List_1_t10167 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::.ctor(System.Int32)
 void List_1__ctor_m72684 (List_1_t10167 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::.ctor(T[],System.Int32)
 void List_1__ctor_m72685 (List_1_t10167 * __this, KeyValuePair_2U5BU5D_t10165* ___data, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::.cctor()
 void List_1__cctor_m72686 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m72687 (List_1_t10167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void List_1_System_Collections_ICollection_CopyTo_m72688 (List_1_t10167 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m72689 (List_1_t10167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::System.Collections.IList.Add(System.Object)
 int32_t List_1_System_Collections_IList_Add_m72690 (List_1_t10167 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::System.Collections.IList.Contains(System.Object)
 bool List_1_System_Collections_IList_Contains_m72691 (List_1_t10167 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::System.Collections.IList.IndexOf(System.Object)
 int32_t List_1_System_Collections_IList_IndexOf_m72692 (List_1_t10167 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::System.Collections.IList.Insert(System.Int32,System.Object)
 void List_1_System_Collections_IList_Insert_m72693 (List_1_t10167 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::System.Collections.IList.Remove(System.Object)
 void List_1_System_Collections_IList_Remove_m72694 (List_1_t10167 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m72695 (List_1_t10167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::System.Collections.ICollection.get_IsSynchronized()
 bool List_1_System_Collections_ICollection_get_IsSynchronized_m72696 (List_1_t10167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m72697 (List_1_t10167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::System.Collections.IList.get_IsFixedSize()
 bool List_1_System_Collections_IList_get_IsFixedSize_m72698 (List_1_t10167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::System.Collections.IList.get_IsReadOnly()
 bool List_1_System_Collections_IList_get_IsReadOnly_m72699 (List_1_t10167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::System.Collections.IList.get_Item(System.Int32)
 Object_t * List_1_System_Collections_IList_get_Item_m72700 (List_1_t10167 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void List_1_System_Collections_IList_set_Item_m72701 (List_1_t10167 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::Add(T)
 void List_1_Add_m72702 (List_1_t10167 * __this, KeyValuePair_2_t10158  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::GrowIfNeeded(System.Int32)
 void List_1_GrowIfNeeded_m72703 (List_1_t10167 * __this, int32_t ___newCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::CheckRange(System.Int32,System.Int32)
 void List_1_CheckRange_m72704 (List_1_t10167 * __this, int32_t ___idx, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
 void List_1_AddCollection_m72705 (List_1_t10167 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddEnumerable_m72706 (List_1_t10167 * __this, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddRange_m72707 (List_1_t10167 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::AsReadOnly()
 ReadOnlyCollection_1_t10169 * List_1_AsReadOnly_m72708 (List_1_t10167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::Clear()
 void List_1_Clear_m72709 (List_1_t10167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::Contains(T)
 bool List_1_Contains_m72710 (List_1_t10167 * __this, KeyValuePair_2_t10158  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::CopyTo(T[],System.Int32)
 void List_1_CopyTo_m72711 (List_1_t10167 * __this, KeyValuePair_2U5BU5D_t10165* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::Find(System.Predicate`1<T>)
 KeyValuePair_2_t10158  List_1_Find_m72712 (List_1_t10167 * __this, Predicate_1_t10170 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::CheckMatch(System.Predicate`1<T>)
 void List_1_CheckMatch_m72713 (Object_t * __this/* static, unused */, Predicate_1_t10170 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::FindIndex(System.Predicate`1<T>)
 int32_t List_1_FindIndex_m72714 (List_1_t10167 * __this, Predicate_1_t10170 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t List_1_GetIndex_m72715 (List_1_t10167 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t10170 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::GetEnumerator()
 Enumerator_t10172  List_1_GetEnumerator_m72716 (List_1_t10167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::GetRange(System.Int32,System.Int32)
 List_1_t10167 * List_1_GetRange_m72717 (List_1_t10167 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::IndexOf(T)
 int32_t List_1_IndexOf_m72718 (List_1_t10167 * __this, KeyValuePair_2_t10158  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::Shift(System.Int32,System.Int32)
 void List_1_Shift_m72719 (List_1_t10167 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::CheckIndex(System.Int32)
 void List_1_CheckIndex_m72720 (List_1_t10167 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::Insert(System.Int32,T)
 void List_1_Insert_m72721 (List_1_t10167 * __this, int32_t ___index, KeyValuePair_2_t10158  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_CheckCollection_m72722 (List_1_t10167 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertRange_m72723 (List_1_t10167 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
 void List_1_InsertCollection_m72724 (List_1_t10167 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertEnumeration_m72725 (List_1_t10167 * __this, int32_t ___index, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::Remove(T)
 bool List_1_Remove_m72726 (List_1_t10167 * __this, KeyValuePair_2_t10158  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::RemoveAll(System.Predicate`1<T>)
 int32_t List_1_RemoveAll_m72727 (List_1_t10167 * __this, Predicate_1_t10170 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::RemoveAt(System.Int32)
 void List_1_RemoveAt_m72728 (List_1_t10167 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::RemoveRange(System.Int32,System.Int32)
 void List_1_RemoveRange_m72729 (List_1_t10167 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::Reverse()
 void List_1_Reverse_m72730 (List_1_t10167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::Sort()
 void List_1_Sort_m72731 (List_1_t10167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::Sort(System.Comparison`1<T>)
 void List_1_Sort_m72732 (List_1_t10167 * __this, Comparison_1_t10171 * ___comparison, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::ToArray()
 KeyValuePair_2U5BU5D_t10165* List_1_ToArray_m72733 (List_1_t10167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::TrimExcess()
 void List_1_TrimExcess_m72734 (List_1_t10167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::get_Capacity()
 int32_t List_1_get_Capacity_m72735 (List_1_t10167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::set_Capacity(System.Int32)
 void List_1_set_Capacity_m72736 (List_1_t10167 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::get_Count()
 int32_t List_1_get_Count_m72737 (List_1_t10167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::get_Item(System.Int32)
 KeyValuePair_2_t10158  List_1_get_Item_m72738 (List_1_t10167 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>>::set_Item(System.Int32,T)
 void List_1_set_Item_m72739 (List_1_t10167 * __this, int32_t ___index, KeyValuePair_2_t10158  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
