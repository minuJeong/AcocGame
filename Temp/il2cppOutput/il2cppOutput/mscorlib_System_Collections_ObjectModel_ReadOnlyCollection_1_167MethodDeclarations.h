#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>
struct ReadOnlyCollection_1_t10553;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>
struct IList_1_t10557;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>[]
struct KeyValuePair_2U5BU5D_t10549;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>
struct IEnumerator_1_t10545;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_96.h"

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::.ctor(System.Collections.Generic.IList`1<T>)
 void ReadOnlyCollection_1__ctor_m76635 (ReadOnlyCollection_1_t10553 * __this, Object_t* ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.Generic.ICollection<T>.Add(T)
 void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m76636 (ReadOnlyCollection_1_t10553 * __this, KeyValuePair_2_t10542  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.Generic.ICollection<T>.Clear()
 void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m76637 (ReadOnlyCollection_1_t10553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
 void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m76638 (ReadOnlyCollection_1_t10553 * __this, int32_t ___index, KeyValuePair_2_t10542  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.Generic.ICollection<T>.Remove(T)
 bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m76639 (ReadOnlyCollection_1_t10553 * __this, KeyValuePair_2_t10542  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
 void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m76640 (ReadOnlyCollection_1_t10553 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
 KeyValuePair_2_t10542  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m76641 (ReadOnlyCollection_1_t10553 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
 void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m76642 (ReadOnlyCollection_1_t10553 * __this, int32_t ___index, KeyValuePair_2_t10542  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m76643 (ReadOnlyCollection_1_t10553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m76644 (ReadOnlyCollection_1_t10553 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m76645 (ReadOnlyCollection_1_t10553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.IList.Add(System.Object)
 int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m76646 (ReadOnlyCollection_1_t10553 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.IList.Clear()
 void ReadOnlyCollection_1_System_Collections_IList_Clear_m76647 (ReadOnlyCollection_1_t10553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.IList.Contains(System.Object)
 bool ReadOnlyCollection_1_System_Collections_IList_Contains_m76648 (ReadOnlyCollection_1_t10553 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.IList.IndexOf(System.Object)
 int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m76649 (ReadOnlyCollection_1_t10553 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.IList.Insert(System.Int32,System.Object)
 void ReadOnlyCollection_1_System_Collections_IList_Insert_m76650 (ReadOnlyCollection_1_t10553 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.IList.Remove(System.Object)
 void ReadOnlyCollection_1_System_Collections_IList_Remove_m76651 (ReadOnlyCollection_1_t10553 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.IList.RemoveAt(System.Int32)
 void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m76652 (ReadOnlyCollection_1_t10553 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.ICollection.get_IsSynchronized()
 bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m76653 (ReadOnlyCollection_1_t10553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m76654 (ReadOnlyCollection_1_t10553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.IList.get_IsFixedSize()
 bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m76655 (ReadOnlyCollection_1_t10553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.IList.get_IsReadOnly()
 bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m76656 (ReadOnlyCollection_1_t10553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.IList.get_Item(System.Int32)
 Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m76657 (ReadOnlyCollection_1_t10553 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void ReadOnlyCollection_1_System_Collections_IList_set_Item_m76658 (ReadOnlyCollection_1_t10553 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::Contains(T)
 bool ReadOnlyCollection_1_Contains_m76659 (ReadOnlyCollection_1_t10553 * __this, KeyValuePair_2_t10542  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::CopyTo(T[],System.Int32)
 void ReadOnlyCollection_1_CopyTo_m76660 (ReadOnlyCollection_1_t10553 * __this, KeyValuePair_2U5BU5D_t10549* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::GetEnumerator()
 Object_t* ReadOnlyCollection_1_GetEnumerator_m76661 (ReadOnlyCollection_1_t10553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::IndexOf(T)
 int32_t ReadOnlyCollection_1_IndexOf_m76662 (ReadOnlyCollection_1_t10553 * __this, KeyValuePair_2_t10542  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::get_Count()
 int32_t ReadOnlyCollection_1_get_Count_m76663 (ReadOnlyCollection_1_t10553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>>::get_Item(System.Int32)
 KeyValuePair_2_t10542  ReadOnlyCollection_1_get_Item_m76664 (ReadOnlyCollection_1_t10553 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
