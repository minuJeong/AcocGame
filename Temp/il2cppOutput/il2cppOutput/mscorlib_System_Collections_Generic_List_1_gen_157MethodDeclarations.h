#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>
struct List_1_t10095;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>
struct IEnumerable_1_t10088;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>[]
struct KeyValuePair_2U5BU5D_t10093;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>
struct IEnumerator_1_t10089;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>
struct ICollection_1_t10096;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>
struct ReadOnlyCollection_1_t10097;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>
struct Predicate_1_t10098;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>
struct Comparison_1_t10099;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_147.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::.ctor()
 void List_1__ctor_m71953 (List_1_t10095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void List_1__ctor_m71954 (List_1_t10095 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::.ctor(System.Int32)
 void List_1__ctor_m71955 (List_1_t10095 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::.ctor(T[],System.Int32)
 void List_1__ctor_m71956 (List_1_t10095 * __this, KeyValuePair_2U5BU5D_t10093* ___data, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::.cctor()
 void List_1__cctor_m71957 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m71958 (List_1_t10095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void List_1_System_Collections_ICollection_CopyTo_m71959 (List_1_t10095 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m71960 (List_1_t10095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::System.Collections.IList.Add(System.Object)
 int32_t List_1_System_Collections_IList_Add_m71961 (List_1_t10095 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::System.Collections.IList.Contains(System.Object)
 bool List_1_System_Collections_IList_Contains_m71962 (List_1_t10095 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::System.Collections.IList.IndexOf(System.Object)
 int32_t List_1_System_Collections_IList_IndexOf_m71963 (List_1_t10095 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::System.Collections.IList.Insert(System.Int32,System.Object)
 void List_1_System_Collections_IList_Insert_m71964 (List_1_t10095 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::System.Collections.IList.Remove(System.Object)
 void List_1_System_Collections_IList_Remove_m71965 (List_1_t10095 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m71966 (List_1_t10095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::System.Collections.ICollection.get_IsSynchronized()
 bool List_1_System_Collections_ICollection_get_IsSynchronized_m71967 (List_1_t10095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m71968 (List_1_t10095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::System.Collections.IList.get_IsFixedSize()
 bool List_1_System_Collections_IList_get_IsFixedSize_m71969 (List_1_t10095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::System.Collections.IList.get_IsReadOnly()
 bool List_1_System_Collections_IList_get_IsReadOnly_m71970 (List_1_t10095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::System.Collections.IList.get_Item(System.Int32)
 Object_t * List_1_System_Collections_IList_get_Item_m71971 (List_1_t10095 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void List_1_System_Collections_IList_set_Item_m71972 (List_1_t10095 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::Add(T)
 void List_1_Add_m71973 (List_1_t10095 * __this, KeyValuePair_2_t10086  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::GrowIfNeeded(System.Int32)
 void List_1_GrowIfNeeded_m71974 (List_1_t10095 * __this, int32_t ___newCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::CheckRange(System.Int32,System.Int32)
 void List_1_CheckRange_m71975 (List_1_t10095 * __this, int32_t ___idx, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
 void List_1_AddCollection_m71976 (List_1_t10095 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddEnumerable_m71977 (List_1_t10095 * __this, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddRange_m71978 (List_1_t10095 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::AsReadOnly()
 ReadOnlyCollection_1_t10097 * List_1_AsReadOnly_m71979 (List_1_t10095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::Clear()
 void List_1_Clear_m71980 (List_1_t10095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::Contains(T)
 bool List_1_Contains_m71981 (List_1_t10095 * __this, KeyValuePair_2_t10086  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::CopyTo(T[],System.Int32)
 void List_1_CopyTo_m71982 (List_1_t10095 * __this, KeyValuePair_2U5BU5D_t10093* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::Find(System.Predicate`1<T>)
 KeyValuePair_2_t10086  List_1_Find_m71983 (List_1_t10095 * __this, Predicate_1_t10098 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::CheckMatch(System.Predicate`1<T>)
 void List_1_CheckMatch_m71984 (Object_t * __this/* static, unused */, Predicate_1_t10098 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::FindIndex(System.Predicate`1<T>)
 int32_t List_1_FindIndex_m71985 (List_1_t10095 * __this, Predicate_1_t10098 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t List_1_GetIndex_m71986 (List_1_t10095 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t10098 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::GetEnumerator()
 Enumerator_t10100  List_1_GetEnumerator_m71987 (List_1_t10095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::GetRange(System.Int32,System.Int32)
 List_1_t10095 * List_1_GetRange_m71988 (List_1_t10095 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::IndexOf(T)
 int32_t List_1_IndexOf_m71989 (List_1_t10095 * __this, KeyValuePair_2_t10086  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::Shift(System.Int32,System.Int32)
 void List_1_Shift_m71990 (List_1_t10095 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::CheckIndex(System.Int32)
 void List_1_CheckIndex_m71991 (List_1_t10095 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::Insert(System.Int32,T)
 void List_1_Insert_m71992 (List_1_t10095 * __this, int32_t ___index, KeyValuePair_2_t10086  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_CheckCollection_m71993 (List_1_t10095 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertRange_m71994 (List_1_t10095 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
 void List_1_InsertCollection_m71995 (List_1_t10095 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertEnumeration_m71996 (List_1_t10095 * __this, int32_t ___index, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::Remove(T)
 bool List_1_Remove_m71997 (List_1_t10095 * __this, KeyValuePair_2_t10086  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::RemoveAll(System.Predicate`1<T>)
 int32_t List_1_RemoveAll_m71998 (List_1_t10095 * __this, Predicate_1_t10098 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::RemoveAt(System.Int32)
 void List_1_RemoveAt_m71999 (List_1_t10095 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::RemoveRange(System.Int32,System.Int32)
 void List_1_RemoveRange_m72000 (List_1_t10095 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::Reverse()
 void List_1_Reverse_m72001 (List_1_t10095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::Sort()
 void List_1_Sort_m72002 (List_1_t10095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::Sort(System.Comparison`1<T>)
 void List_1_Sort_m72003 (List_1_t10095 * __this, Comparison_1_t10099 * ___comparison, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::ToArray()
 KeyValuePair_2U5BU5D_t10093* List_1_ToArray_m72004 (List_1_t10095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::TrimExcess()
 void List_1_TrimExcess_m72005 (List_1_t10095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::get_Capacity()
 int32_t List_1_get_Capacity_m72006 (List_1_t10095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::set_Capacity(System.Int32)
 void List_1_set_Capacity_m72007 (List_1_t10095 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::get_Count()
 int32_t List_1_get_Count_m72008 (List_1_t10095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::get_Item(System.Int32)
 KeyValuePair_2_t10086  List_1_get_Item_m72009 (List_1_t10095 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseACL>>>::set_Item(System.Int32,T)
 void List_1_set_Item_m72010 (List_1_t10095 * __this, int32_t ___index, KeyValuePair_2_t10086  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
