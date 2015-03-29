#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>
struct ReadOnlyCollection_1_t10763;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>
struct IList_1_t10767;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>[]
struct KeyValuePair_2U5BU5D_t10759;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>
struct IEnumerator_1_t10755;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_104.h"

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::.ctor(System.Collections.Generic.IList`1<T>)
 void ReadOnlyCollection_1__ctor_m78810 (ReadOnlyCollection_1_t10763 * __this, Object_t* ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.Generic.ICollection<T>.Add(T)
 void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m78811 (ReadOnlyCollection_1_t10763 * __this, KeyValuePair_2_t10752  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.Generic.ICollection<T>.Clear()
 void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m78812 (ReadOnlyCollection_1_t10763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
 void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m78813 (ReadOnlyCollection_1_t10763 * __this, int32_t ___index, KeyValuePair_2_t10752  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.Generic.ICollection<T>.Remove(T)
 bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m78814 (ReadOnlyCollection_1_t10763 * __this, KeyValuePair_2_t10752  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
 void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m78815 (ReadOnlyCollection_1_t10763 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
 KeyValuePair_2_t10752  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m78816 (ReadOnlyCollection_1_t10763 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
 void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m78817 (ReadOnlyCollection_1_t10763 * __this, int32_t ___index, KeyValuePair_2_t10752  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m78818 (ReadOnlyCollection_1_t10763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m78819 (ReadOnlyCollection_1_t10763 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m78820 (ReadOnlyCollection_1_t10763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.IList.Add(System.Object)
 int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m78821 (ReadOnlyCollection_1_t10763 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.IList.Clear()
 void ReadOnlyCollection_1_System_Collections_IList_Clear_m78822 (ReadOnlyCollection_1_t10763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.IList.Contains(System.Object)
 bool ReadOnlyCollection_1_System_Collections_IList_Contains_m78823 (ReadOnlyCollection_1_t10763 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.IList.IndexOf(System.Object)
 int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m78824 (ReadOnlyCollection_1_t10763 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.IList.Insert(System.Int32,System.Object)
 void ReadOnlyCollection_1_System_Collections_IList_Insert_m78825 (ReadOnlyCollection_1_t10763 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.IList.Remove(System.Object)
 void ReadOnlyCollection_1_System_Collections_IList_Remove_m78826 (ReadOnlyCollection_1_t10763 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.IList.RemoveAt(System.Int32)
 void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m78827 (ReadOnlyCollection_1_t10763 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.ICollection.get_IsSynchronized()
 bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m78828 (ReadOnlyCollection_1_t10763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m78829 (ReadOnlyCollection_1_t10763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.IList.get_IsFixedSize()
 bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m78830 (ReadOnlyCollection_1_t10763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.IList.get_IsReadOnly()
 bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m78831 (ReadOnlyCollection_1_t10763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.IList.get_Item(System.Int32)
 Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m78832 (ReadOnlyCollection_1_t10763 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void ReadOnlyCollection_1_System_Collections_IList_set_Item_m78833 (ReadOnlyCollection_1_t10763 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::Contains(T)
 bool ReadOnlyCollection_1_Contains_m78834 (ReadOnlyCollection_1_t10763 * __this, KeyValuePair_2_t10752  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::CopyTo(T[],System.Int32)
 void ReadOnlyCollection_1_CopyTo_m78835 (ReadOnlyCollection_1_t10763 * __this, KeyValuePair_2U5BU5D_t10759* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::GetEnumerator()
 Object_t* ReadOnlyCollection_1_GetEnumerator_m78836 (ReadOnlyCollection_1_t10763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::IndexOf(T)
 int32_t ReadOnlyCollection_1_IndexOf_m78837 (ReadOnlyCollection_1_t10763 * __this, KeyValuePair_2_t10752  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::get_Count()
 int32_t ReadOnlyCollection_1_get_Count_m78838 (ReadOnlyCollection_1_t10763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>>::get_Item(System.Int32)
 KeyValuePair_2_t10752  ReadOnlyCollection_1_get_Item_m78839 (ReadOnlyCollection_1_t10763 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
