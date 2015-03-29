#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>
struct ReadOnlyCollection_1_t10481;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>
struct IList_1_t10485;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>[]
struct KeyValuePair_2U5BU5D_t10477;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>
struct IEnumerator_1_t10473;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_93.h"

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::.ctor(System.Collections.Generic.IList`1<T>)
 void ReadOnlyCollection_1__ctor_m75906 (ReadOnlyCollection_1_t10481 * __this, Object_t* ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.Generic.ICollection<T>.Add(T)
 void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m75907 (ReadOnlyCollection_1_t10481 * __this, KeyValuePair_2_t10470  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.Generic.ICollection<T>.Clear()
 void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m75908 (ReadOnlyCollection_1_t10481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
 void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m75909 (ReadOnlyCollection_1_t10481 * __this, int32_t ___index, KeyValuePair_2_t10470  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.Generic.ICollection<T>.Remove(T)
 bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m75910 (ReadOnlyCollection_1_t10481 * __this, KeyValuePair_2_t10470  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
 void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m75911 (ReadOnlyCollection_1_t10481 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
 KeyValuePair_2_t10470  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m75912 (ReadOnlyCollection_1_t10481 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
 void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m75913 (ReadOnlyCollection_1_t10481 * __this, int32_t ___index, KeyValuePair_2_t10470  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m75914 (ReadOnlyCollection_1_t10481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m75915 (ReadOnlyCollection_1_t10481 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m75916 (ReadOnlyCollection_1_t10481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.IList.Add(System.Object)
 int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m75917 (ReadOnlyCollection_1_t10481 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.IList.Clear()
 void ReadOnlyCollection_1_System_Collections_IList_Clear_m75918 (ReadOnlyCollection_1_t10481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.IList.Contains(System.Object)
 bool ReadOnlyCollection_1_System_Collections_IList_Contains_m75919 (ReadOnlyCollection_1_t10481 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.IList.IndexOf(System.Object)
 int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m75920 (ReadOnlyCollection_1_t10481 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.IList.Insert(System.Int32,System.Object)
 void ReadOnlyCollection_1_System_Collections_IList_Insert_m75921 (ReadOnlyCollection_1_t10481 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.IList.Remove(System.Object)
 void ReadOnlyCollection_1_System_Collections_IList_Remove_m75922 (ReadOnlyCollection_1_t10481 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.IList.RemoveAt(System.Int32)
 void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m75923 (ReadOnlyCollection_1_t10481 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.ICollection.get_IsSynchronized()
 bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m75924 (ReadOnlyCollection_1_t10481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m75925 (ReadOnlyCollection_1_t10481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.IList.get_IsFixedSize()
 bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m75926 (ReadOnlyCollection_1_t10481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.IList.get_IsReadOnly()
 bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m75927 (ReadOnlyCollection_1_t10481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.IList.get_Item(System.Int32)
 Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m75928 (ReadOnlyCollection_1_t10481 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void ReadOnlyCollection_1_System_Collections_IList_set_Item_m75929 (ReadOnlyCollection_1_t10481 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::Contains(T)
 bool ReadOnlyCollection_1_Contains_m75930 (ReadOnlyCollection_1_t10481 * __this, KeyValuePair_2_t10470  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::CopyTo(T[],System.Int32)
 void ReadOnlyCollection_1_CopyTo_m75931 (ReadOnlyCollection_1_t10481 * __this, KeyValuePair_2U5BU5D_t10477* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::GetEnumerator()
 Object_t* ReadOnlyCollection_1_GetEnumerator_m75932 (ReadOnlyCollection_1_t10481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::IndexOf(T)
 int32_t ReadOnlyCollection_1_IndexOf_m75933 (ReadOnlyCollection_1_t10481 * __this, KeyValuePair_2_t10470  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::get_Count()
 int32_t ReadOnlyCollection_1_get_Count_m75934 (ReadOnlyCollection_1_t10481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>::get_Item(System.Int32)
 KeyValuePair_2_t10470  ReadOnlyCollection_1_get_Item_m75935 (ReadOnlyCollection_1_t10481 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
