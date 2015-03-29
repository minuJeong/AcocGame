#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>
struct ReadOnlyCollection_1_t10979;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>
struct IList_1_t10983;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>[]
struct KeyValuePair_2U5BU5D_t10975;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>
struct IEnumerator_1_t10971;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_113.h"

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::.ctor(System.Collections.Generic.IList`1<T>)
 void ReadOnlyCollection_1__ctor_m80997 (ReadOnlyCollection_1_t10979 * __this, Object_t* ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.Generic.ICollection<T>.Add(T)
 void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m80998 (ReadOnlyCollection_1_t10979 * __this, KeyValuePair_2_t10968  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.Generic.ICollection<T>.Clear()
 void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m80999 (ReadOnlyCollection_1_t10979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
 void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m81000 (ReadOnlyCollection_1_t10979 * __this, int32_t ___index, KeyValuePair_2_t10968  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.Generic.ICollection<T>.Remove(T)
 bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m81001 (ReadOnlyCollection_1_t10979 * __this, KeyValuePair_2_t10968  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
 void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m81002 (ReadOnlyCollection_1_t10979 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
 KeyValuePair_2_t10968  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m81003 (ReadOnlyCollection_1_t10979 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
 void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m81004 (ReadOnlyCollection_1_t10979 * __this, int32_t ___index, KeyValuePair_2_t10968  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m81005 (ReadOnlyCollection_1_t10979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m81006 (ReadOnlyCollection_1_t10979 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m81007 (ReadOnlyCollection_1_t10979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.IList.Add(System.Object)
 int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m81008 (ReadOnlyCollection_1_t10979 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.IList.Clear()
 void ReadOnlyCollection_1_System_Collections_IList_Clear_m81009 (ReadOnlyCollection_1_t10979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.IList.Contains(System.Object)
 bool ReadOnlyCollection_1_System_Collections_IList_Contains_m81010 (ReadOnlyCollection_1_t10979 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.IList.IndexOf(System.Object)
 int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m81011 (ReadOnlyCollection_1_t10979 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.IList.Insert(System.Int32,System.Object)
 void ReadOnlyCollection_1_System_Collections_IList_Insert_m81012 (ReadOnlyCollection_1_t10979 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.IList.Remove(System.Object)
 void ReadOnlyCollection_1_System_Collections_IList_Remove_m81013 (ReadOnlyCollection_1_t10979 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.IList.RemoveAt(System.Int32)
 void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m81014 (ReadOnlyCollection_1_t10979 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.ICollection.get_IsSynchronized()
 bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m81015 (ReadOnlyCollection_1_t10979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m81016 (ReadOnlyCollection_1_t10979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.IList.get_IsFixedSize()
 bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m81017 (ReadOnlyCollection_1_t10979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.IList.get_IsReadOnly()
 bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m81018 (ReadOnlyCollection_1_t10979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.IList.get_Item(System.Int32)
 Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m81019 (ReadOnlyCollection_1_t10979 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void ReadOnlyCollection_1_System_Collections_IList_set_Item_m81020 (ReadOnlyCollection_1_t10979 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::Contains(T)
 bool ReadOnlyCollection_1_Contains_m81021 (ReadOnlyCollection_1_t10979 * __this, KeyValuePair_2_t10968  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::CopyTo(T[],System.Int32)
 void ReadOnlyCollection_1_CopyTo_m81022 (ReadOnlyCollection_1_t10979 * __this, KeyValuePair_2U5BU5D_t10975* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::GetEnumerator()
 Object_t* ReadOnlyCollection_1_GetEnumerator_m81023 (ReadOnlyCollection_1_t10979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::IndexOf(T)
 int32_t ReadOnlyCollection_1_IndexOf_m81024 (ReadOnlyCollection_1_t10979 * __this, KeyValuePair_2_t10968  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::get_Count()
 int32_t ReadOnlyCollection_1_get_Count_m81025 (ReadOnlyCollection_1_t10979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::get_Item(System.Int32)
 KeyValuePair_2_t10968  ReadOnlyCollection_1_get_Item_m81026 (ReadOnlyCollection_1_t10979 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
