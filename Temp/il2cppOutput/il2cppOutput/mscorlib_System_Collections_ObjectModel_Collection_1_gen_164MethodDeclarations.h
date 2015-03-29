#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Collection_1_t10600;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>[]
struct KeyValuePair_2U5BU5D_t7010;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct IEnumerator_1_t1589;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct IList_1_t10599;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::.ctor()
 void Collection_1__ctor_m77139 (Collection_1_t10600 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m77140 (Collection_1_t10600 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Collection_1_System_Collections_ICollection_CopyTo_m77141 (Collection_1_t10600 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m77142 (Collection_1_t10600 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::System.Collections.IList.Add(System.Object)
 int32_t Collection_1_System_Collections_IList_Add_m77143 (Collection_1_t10600 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::System.Collections.IList.Contains(System.Object)
 bool Collection_1_System_Collections_IList_Contains_m77144 (Collection_1_t10600 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::System.Collections.IList.IndexOf(System.Object)
 int32_t Collection_1_System_Collections_IList_IndexOf_m77145 (Collection_1_t10600 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::System.Collections.IList.Insert(System.Int32,System.Object)
 void Collection_1_System_Collections_IList_Insert_m77146 (Collection_1_t10600 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::System.Collections.IList.Remove(System.Object)
 void Collection_1_System_Collections_IList_Remove_m77147 (Collection_1_t10600 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::System.Collections.ICollection.get_IsSynchronized()
 bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m77148 (Collection_1_t10600 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m77149 (Collection_1_t10600 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::System.Collections.IList.get_IsFixedSize()
 bool Collection_1_System_Collections_IList_get_IsFixedSize_m77150 (Collection_1_t10600 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::System.Collections.IList.get_IsReadOnly()
 bool Collection_1_System_Collections_IList_get_IsReadOnly_m77151 (Collection_1_t10600 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::System.Collections.IList.get_Item(System.Int32)
 Object_t * Collection_1_System_Collections_IList_get_Item_m77152 (Collection_1_t10600 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void Collection_1_System_Collections_IList_set_Item_m77153 (Collection_1_t10600 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::Add(T)
 void Collection_1_Add_m77154 (Collection_1_t10600 * __this, KeyValuePair_2_t1587  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::Clear()
 void Collection_1_Clear_m77155 (Collection_1_t10600 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::ClearItems()
 void Collection_1_ClearItems_m77156 (Collection_1_t10600 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::Contains(T)
 bool Collection_1_Contains_m77157 (Collection_1_t10600 * __this, KeyValuePair_2_t1587  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::CopyTo(T[],System.Int32)
 void Collection_1_CopyTo_m77158 (Collection_1_t10600 * __this, KeyValuePair_2U5BU5D_t7010* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::GetEnumerator()
 Object_t* Collection_1_GetEnumerator_m77159 (Collection_1_t10600 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::IndexOf(T)
 int32_t Collection_1_IndexOf_m77160 (Collection_1_t10600 * __this, KeyValuePair_2_t1587  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::Insert(System.Int32,T)
 void Collection_1_Insert_m77161 (Collection_1_t10600 * __this, int32_t ___index, KeyValuePair_2_t1587  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::InsertItem(System.Int32,T)
 void Collection_1_InsertItem_m77162 (Collection_1_t10600 * __this, int32_t ___index, KeyValuePair_2_t1587  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::Remove(T)
 bool Collection_1_Remove_m77163 (Collection_1_t10600 * __this, KeyValuePair_2_t1587  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::RemoveAt(System.Int32)
 void Collection_1_RemoveAt_m77164 (Collection_1_t10600 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::RemoveItem(System.Int32)
 void Collection_1_RemoveItem_m77165 (Collection_1_t10600 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::get_Count()
 int32_t Collection_1_get_Count_m77166 (Collection_1_t10600 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::get_Item(System.Int32)
 KeyValuePair_2_t1587  Collection_1_get_Item_m77167 (Collection_1_t10600 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::set_Item(System.Int32,T)
 void Collection_1_set_Item_m77168 (Collection_1_t10600 * __this, int32_t ___index, KeyValuePair_2_t1587  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::SetItem(System.Int32,T)
 void Collection_1_SetItem_m77169 (Collection_1_t10600 * __this, int32_t ___index, KeyValuePair_2_t1587  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::IsValidItem(System.Object)
 bool Collection_1_IsValidItem_m77170 (Object_t * __this/* static, unused */, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::ConvertItem(System.Object)
 KeyValuePair_2_t1587  Collection_1_ConvertItem_m77171 (Object_t * __this/* static, unused */, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::CheckWritable(System.Collections.Generic.IList`1<T>)
 void Collection_1_CheckWritable_m77172 (Object_t * __this/* static, unused */, Object_t* ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::IsSynchronized(System.Collections.Generic.IList`1<T>)
 bool Collection_1_IsSynchronized_m77173 (Object_t * __this/* static, unused */, Object_t* ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::IsFixedSize(System.Collections.Generic.IList`1<T>)
 bool Collection_1_IsFixedSize_m77174 (Object_t * __this/* static, unused */, Object_t* ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
