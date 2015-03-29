#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Double>
struct Collection_1_t7591;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Double[]
struct DoubleU5BU5D_t2398;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_t7102;
// System.Collections.Generic.IList`1<System.Double>
struct IList_1_t2199;

// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::.ctor()
 void Collection_1__ctor_m44128 (Collection_1_t7591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m44129 (Collection_1_t7591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Collection_1_System_Collections_ICollection_CopyTo_m44130 (Collection_1_t7591 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m44131 (Collection_1_t7591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Add(System.Object)
 int32_t Collection_1_System_Collections_IList_Add_m44132 (Collection_1_t7591 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Contains(System.Object)
 bool Collection_1_System_Collections_IList_Contains_m44133 (Collection_1_t7591 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.IndexOf(System.Object)
 int32_t Collection_1_System_Collections_IList_IndexOf_m44134 (Collection_1_t7591 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Insert(System.Int32,System.Object)
 void Collection_1_System_Collections_IList_Insert_m44135 (Collection_1_t7591 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Remove(System.Object)
 void Collection_1_System_Collections_IList_Remove_m44136 (Collection_1_t7591 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.get_IsSynchronized()
 bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m44137 (Collection_1_t7591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m44138 (Collection_1_t7591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_IsFixedSize()
 bool Collection_1_System_Collections_IList_get_IsFixedSize_m44139 (Collection_1_t7591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_IsReadOnly()
 bool Collection_1_System_Collections_IList_get_IsReadOnly_m44140 (Collection_1_t7591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_Item(System.Int32)
 Object_t * Collection_1_System_Collections_IList_get_Item_m44141 (Collection_1_t7591 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void Collection_1_System_Collections_IList_set_Item_m44142 (Collection_1_t7591 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Add(T)
 void Collection_1_Add_m44143 (Collection_1_t7591 * __this, double ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Clear()
 void Collection_1_Clear_m44144 (Collection_1_t7591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::ClearItems()
 void Collection_1_ClearItems_m44145 (Collection_1_t7591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::Contains(T)
 bool Collection_1_Contains_m44146 (Collection_1_t7591 * __this, double ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::CopyTo(T[],System.Int32)
 void Collection_1_CopyTo_m44147 (Collection_1_t7591 * __this, DoubleU5BU5D_t2398* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Double>::GetEnumerator()
 Object_t* Collection_1_GetEnumerator_m44148 (Collection_1_t7591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::IndexOf(T)
 int32_t Collection_1_IndexOf_m44149 (Collection_1_t7591 * __this, double ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Insert(System.Int32,T)
 void Collection_1_Insert_m44150 (Collection_1_t7591 * __this, int32_t ___index, double ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::InsertItem(System.Int32,T)
 void Collection_1_InsertItem_m44151 (Collection_1_t7591 * __this, int32_t ___index, double ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::Remove(T)
 bool Collection_1_Remove_m44152 (Collection_1_t7591 * __this, double ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::RemoveAt(System.Int32)
 void Collection_1_RemoveAt_m44153 (Collection_1_t7591 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::RemoveItem(System.Int32)
 void Collection_1_RemoveItem_m44154 (Collection_1_t7591 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::get_Count()
 int32_t Collection_1_get_Count_m44155 (Collection_1_t7591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.ObjectModel.Collection`1<System.Double>::get_Item(System.Int32)
 double Collection_1_get_Item_m44156 (Collection_1_t7591 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::set_Item(System.Int32,T)
 void Collection_1_set_Item_m44157 (Collection_1_t7591 * __this, int32_t ___index, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::SetItem(System.Int32,T)
 void Collection_1_SetItem_m44158 (Collection_1_t7591 * __this, int32_t ___index, double ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsValidItem(System.Object)
 bool Collection_1_IsValidItem_m44159 (Object_t * __this/* static, unused */, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.ObjectModel.Collection`1<System.Double>::ConvertItem(System.Object)
 double Collection_1_ConvertItem_m44160 (Object_t * __this/* static, unused */, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::CheckWritable(System.Collections.Generic.IList`1<T>)
 void Collection_1_CheckWritable_m44161 (Object_t * __this/* static, unused */, Object_t* ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsSynchronized(System.Collections.Generic.IList`1<T>)
 bool Collection_1_IsSynchronized_m44162 (Object_t * __this/* static, unused */, Object_t* ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsFixedSize(System.Collections.Generic.IList`1<T>)
 bool Collection_1_IsFixedSize_m44163 (Object_t * __this/* static, unused */, Object_t* ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
