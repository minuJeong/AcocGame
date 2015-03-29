#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>
struct ReadOnlyCollection_1_t10505;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>
struct IList_1_t10509;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>[]
struct KeyValuePair_2U5BU5D_t10501;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>
struct IEnumerator_1_t10497;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_94.h"

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::.ctor(System.Collections.Generic.IList`1<T>)
 void ReadOnlyCollection_1__ctor_m76149 (ReadOnlyCollection_1_t10505 * __this, Object_t* ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.Generic.ICollection<T>.Add(T)
 void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m76150 (ReadOnlyCollection_1_t10505 * __this, KeyValuePair_2_t10494  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.Generic.ICollection<T>.Clear()
 void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m76151 (ReadOnlyCollection_1_t10505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
 void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m76152 (ReadOnlyCollection_1_t10505 * __this, int32_t ___index, KeyValuePair_2_t10494  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.Generic.ICollection<T>.Remove(T)
 bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m76153 (ReadOnlyCollection_1_t10505 * __this, KeyValuePair_2_t10494  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
 void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m76154 (ReadOnlyCollection_1_t10505 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
 KeyValuePair_2_t10494  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m76155 (ReadOnlyCollection_1_t10505 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
 void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m76156 (ReadOnlyCollection_1_t10505 * __this, int32_t ___index, KeyValuePair_2_t10494  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m76157 (ReadOnlyCollection_1_t10505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m76158 (ReadOnlyCollection_1_t10505 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m76159 (ReadOnlyCollection_1_t10505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.IList.Add(System.Object)
 int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m76160 (ReadOnlyCollection_1_t10505 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.IList.Clear()
 void ReadOnlyCollection_1_System_Collections_IList_Clear_m76161 (ReadOnlyCollection_1_t10505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.IList.Contains(System.Object)
 bool ReadOnlyCollection_1_System_Collections_IList_Contains_m76162 (ReadOnlyCollection_1_t10505 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.IList.IndexOf(System.Object)
 int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m76163 (ReadOnlyCollection_1_t10505 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.IList.Insert(System.Int32,System.Object)
 void ReadOnlyCollection_1_System_Collections_IList_Insert_m76164 (ReadOnlyCollection_1_t10505 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.IList.Remove(System.Object)
 void ReadOnlyCollection_1_System_Collections_IList_Remove_m76165 (ReadOnlyCollection_1_t10505 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.IList.RemoveAt(System.Int32)
 void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m76166 (ReadOnlyCollection_1_t10505 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.ICollection.get_IsSynchronized()
 bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m76167 (ReadOnlyCollection_1_t10505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m76168 (ReadOnlyCollection_1_t10505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.IList.get_IsFixedSize()
 bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m76169 (ReadOnlyCollection_1_t10505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.IList.get_IsReadOnly()
 bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m76170 (ReadOnlyCollection_1_t10505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.IList.get_Item(System.Int32)
 Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m76171 (ReadOnlyCollection_1_t10505 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void ReadOnlyCollection_1_System_Collections_IList_set_Item_m76172 (ReadOnlyCollection_1_t10505 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::Contains(T)
 bool ReadOnlyCollection_1_Contains_m76173 (ReadOnlyCollection_1_t10505 * __this, KeyValuePair_2_t10494  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::CopyTo(T[],System.Int32)
 void ReadOnlyCollection_1_CopyTo_m76174 (ReadOnlyCollection_1_t10505 * __this, KeyValuePair_2U5BU5D_t10501* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::GetEnumerator()
 Object_t* ReadOnlyCollection_1_GetEnumerator_m76175 (ReadOnlyCollection_1_t10505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::IndexOf(T)
 int32_t ReadOnlyCollection_1_IndexOf_m76176 (ReadOnlyCollection_1_t10505 * __this, KeyValuePair_2_t10494  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::get_Count()
 int32_t ReadOnlyCollection_1_get_Count_m76177 (ReadOnlyCollection_1_t10505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Int32>>>::get_Item(System.Int32)
 KeyValuePair_2_t10494  ReadOnlyCollection_1_get_Item_m76178 (ReadOnlyCollection_1_t10505 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
