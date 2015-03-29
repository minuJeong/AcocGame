#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct List_1_t9717;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct IEnumerable_1_t9712;
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t8772;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct IEnumerator_1_t8773;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct ICollection_1_t9718;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct ReadOnlyCollection_1_t9719;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct Predicate_1_t9720;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct Comparison_1_t9721;
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_130.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::.ctor()
 void List_1__ctor_m67894 (List_1_t9717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void List_1__ctor_m67895 (List_1_t9717 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::.ctor(System.Int32)
 void List_1__ctor_m67896 (List_1_t9717 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::.ctor(T[],System.Int32)
 void List_1__ctor_m67897 (List_1_t9717 * __this, KeyValuePair_2U5BU5D_t8772* ___data, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::.cctor()
 void List_1__cctor_m67898 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m67899 (List_1_t9717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void List_1_System_Collections_ICollection_CopyTo_m67900 (List_1_t9717 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m67901 (List_1_t9717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::System.Collections.IList.Add(System.Object)
 int32_t List_1_System_Collections_IList_Add_m67902 (List_1_t9717 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::System.Collections.IList.Contains(System.Object)
 bool List_1_System_Collections_IList_Contains_m67903 (List_1_t9717 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::System.Collections.IList.IndexOf(System.Object)
 int32_t List_1_System_Collections_IList_IndexOf_m67904 (List_1_t9717 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::System.Collections.IList.Insert(System.Int32,System.Object)
 void List_1_System_Collections_IList_Insert_m67905 (List_1_t9717 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::System.Collections.IList.Remove(System.Object)
 void List_1_System_Collections_IList_Remove_m67906 (List_1_t9717 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m67907 (List_1_t9717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::System.Collections.ICollection.get_IsSynchronized()
 bool List_1_System_Collections_ICollection_get_IsSynchronized_m67908 (List_1_t9717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m67909 (List_1_t9717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::System.Collections.IList.get_IsFixedSize()
 bool List_1_System_Collections_IList_get_IsFixedSize_m67910 (List_1_t9717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::System.Collections.IList.get_IsReadOnly()
 bool List_1_System_Collections_IList_get_IsReadOnly_m67911 (List_1_t9717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::System.Collections.IList.get_Item(System.Int32)
 Object_t * List_1_System_Collections_IList_get_Item_m67912 (List_1_t9717 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void List_1_System_Collections_IList_set_Item_m67913 (List_1_t9717 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::Add(T)
 void List_1_Add_m67914 (List_1_t9717 * __this, KeyValuePair_2_t8452  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::GrowIfNeeded(System.Int32)
 void List_1_GrowIfNeeded_m67915 (List_1_t9717 * __this, int32_t ___newCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::CheckRange(System.Int32,System.Int32)
 void List_1_CheckRange_m67916 (List_1_t9717 * __this, int32_t ___idx, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
 void List_1_AddCollection_m67917 (List_1_t9717 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddEnumerable_m67918 (List_1_t9717 * __this, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddRange_m67919 (List_1_t9717 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::AsReadOnly()
 ReadOnlyCollection_1_t9719 * List_1_AsReadOnly_m67920 (List_1_t9717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::Clear()
 void List_1_Clear_m67921 (List_1_t9717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::Contains(T)
 bool List_1_Contains_m67922 (List_1_t9717 * __this, KeyValuePair_2_t8452  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::CopyTo(T[],System.Int32)
 void List_1_CopyTo_m67923 (List_1_t9717 * __this, KeyValuePair_2U5BU5D_t8772* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::Find(System.Predicate`1<T>)
 KeyValuePair_2_t8452  List_1_Find_m67924 (List_1_t9717 * __this, Predicate_1_t9720 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::CheckMatch(System.Predicate`1<T>)
 void List_1_CheckMatch_m67925 (Object_t * __this/* static, unused */, Predicate_1_t9720 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::FindIndex(System.Predicate`1<T>)
 int32_t List_1_FindIndex_m67926 (List_1_t9717 * __this, Predicate_1_t9720 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t List_1_GetIndex_m67927 (List_1_t9717 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t9720 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::GetEnumerator()
 Enumerator_t9722  List_1_GetEnumerator_m67928 (List_1_t9717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::GetRange(System.Int32,System.Int32)
 List_1_t9717 * List_1_GetRange_m67929 (List_1_t9717 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::IndexOf(T)
 int32_t List_1_IndexOf_m67930 (List_1_t9717 * __this, KeyValuePair_2_t8452  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::Shift(System.Int32,System.Int32)
 void List_1_Shift_m67931 (List_1_t9717 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::CheckIndex(System.Int32)
 void List_1_CheckIndex_m67932 (List_1_t9717 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::Insert(System.Int32,T)
 void List_1_Insert_m67933 (List_1_t9717 * __this, int32_t ___index, KeyValuePair_2_t8452  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_CheckCollection_m67934 (List_1_t9717 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertRange_m67935 (List_1_t9717 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
 void List_1_InsertCollection_m67936 (List_1_t9717 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertEnumeration_m67937 (List_1_t9717 * __this, int32_t ___index, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::Remove(T)
 bool List_1_Remove_m67938 (List_1_t9717 * __this, KeyValuePair_2_t8452  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::RemoveAll(System.Predicate`1<T>)
 int32_t List_1_RemoveAll_m67939 (List_1_t9717 * __this, Predicate_1_t9720 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::RemoveAt(System.Int32)
 void List_1_RemoveAt_m67940 (List_1_t9717 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::RemoveRange(System.Int32,System.Int32)
 void List_1_RemoveRange_m67941 (List_1_t9717 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::Reverse()
 void List_1_Reverse_m67942 (List_1_t9717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::Sort()
 void List_1_Sort_m67943 (List_1_t9717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::Sort(System.Comparison`1<T>)
 void List_1_Sort_m67944 (List_1_t9717 * __this, Comparison_1_t9721 * ___comparison, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::ToArray()
 KeyValuePair_2U5BU5D_t8772* List_1_ToArray_m67945 (List_1_t9717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::TrimExcess()
 void List_1_TrimExcess_m67946 (List_1_t9717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::get_Capacity()
 int32_t List_1_get_Capacity_m67947 (List_1_t9717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::set_Capacity(System.Int32)
 void List_1_set_Capacity_m67948 (List_1_t9717 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::get_Count()
 int32_t List_1_get_Count_m67949 (List_1_t9717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::get_Item(System.Int32)
 KeyValuePair_2_t8452  List_1_get_Item_m67950 (List_1_t9717 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::set_Item(System.Int32,T)
 void List_1_set_Item_m67951 (List_1_t9717 * __this, int32_t ___index, KeyValuePair_2_t8452  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
