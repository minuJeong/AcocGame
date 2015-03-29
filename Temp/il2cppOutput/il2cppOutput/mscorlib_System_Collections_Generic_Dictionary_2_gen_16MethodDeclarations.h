#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t610;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4122;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>
struct ICollection_1_t5283;
// System.Collections.ICollection
struct ICollection_t429;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t549;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct KeyCollection_t5284;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct ValueCollection_t772;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t4638;
// System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct IDictionary_2_t5285;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>[]
struct KeyValuePair_2U5BU5D_t5286;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
struct IEnumerator_1_t5287;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t95;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor()
 void Dictionary_2__ctor_m4077 (Dictionary_2_t610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m23880 (Dictionary_2_t610 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
 void Dictionary_2__ctor_m23881 (Dictionary_2_t610 * __this, Object_t* ___dictionary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Int32)
 void Dictionary_2__ctor_m23882 (Dictionary_2_t610 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m23883 (Dictionary_2_t610 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m23884 (Dictionary_2_t610 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23885 (Dictionary_2_t610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23886 (Dictionary_2_t610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m23887 (Dictionary_2_t610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m23888 (Dictionary_2_t610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m23889 (Dictionary_2_t610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m23890 (Dictionary_2_t610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m23891 (Dictionary_2_t610 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m23892 (Dictionary_2_t610 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m23893 (Dictionary_2_t610 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m23894 (Dictionary_2_t610 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m23895 (Dictionary_2_t610 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23896 (Dictionary_2_t610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23897 (Dictionary_2_t610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23898 (Dictionary_2_t610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23899 (Dictionary_2_t610 * __this, KeyValuePair_2_t771  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23900 (Dictionary_2_t610 * __this, KeyValuePair_2_t771  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23901 (Dictionary_2_t610 * __this, KeyValuePair_2U5BU5D_t5286* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23902 (Dictionary_2_t610 * __this, KeyValuePair_2_t771  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m23903 (Dictionary_2_t610 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23904 (Dictionary_2_t610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23905 (Dictionary_2_t610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23906 (Dictionary_2_t610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Count()
 int32_t Dictionary_2_get_Count_m23907 (Dictionary_2_t610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Item(TKey)
 PointerEventData_t549 * Dictionary_2_get_Item_m23908 (Dictionary_2_t610 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m23909 (Dictionary_2_t610 * __this, int32_t ___key, PointerEventData_t549 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m23910 (Dictionary_2_t610 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m23911 (Dictionary_2_t610 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m23912 (Dictionary_2_t610 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::make_pair(TKey,TValue)
 KeyValuePair_2_t771  Dictionary_2_make_pair_m23913 (Object_t * __this/* static, unused */, int32_t ___key, PointerEventData_t549 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::pick_key(TKey,TValue)
 int32_t Dictionary_2_pick_key_m23914 (Object_t * __this/* static, unused */, int32_t ___key, PointerEventData_t549 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::pick_value(TKey,TValue)
 PointerEventData_t549 * Dictionary_2_pick_value_m23915 (Object_t * __this/* static, unused */, int32_t ___key, PointerEventData_t549 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m23916 (Dictionary_2_t610 * __this, KeyValuePair_2U5BU5D_t5286* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Resize()
 void Dictionary_2_Resize_m23917 (Dictionary_2_t610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Add(TKey,TValue)
 void Dictionary_2_Add_m4079 (Dictionary_2_t610 * __this, int32_t ___key, PointerEventData_t549 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Clear()
 void Dictionary_2_Clear_m4090 (Dictionary_2_t610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m23918 (Dictionary_2_t610 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m23919 (Dictionary_2_t610 * __this, PointerEventData_t549 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m23920 (Dictionary_2_t610 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m23921 (Dictionary_2_t610 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Remove(TKey)
 bool Dictionary_2_Remove_m4080 (Dictionary_2_t610 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m4078 (Dictionary_2_t610 * __this, int32_t ___key, PointerEventData_t549 ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Keys()
 KeyCollection_t5284 * Dictionary_2_get_Keys_m23922 (Dictionary_2_t610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Values()
 ValueCollection_t772 * Dictionary_2_get_Values_m4086 (Dictionary_2_t610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ToTKey(System.Object)
 int32_t Dictionary_2_ToTKey_m23923 (Dictionary_2_t610 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ToTValue(System.Object)
 PointerEventData_t549 * Dictionary_2_ToTValue_m23924 (Dictionary_2_t610 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m23925 (Dictionary_2_t610 * __this, KeyValuePair_2_t771  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::GetEnumerator()
 Enumerator_t770  Dictionary_2_GetEnumerator_m4092 (Dictionary_2_t610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t96  Dictionary_2_U3CCopyToU3Em__0_m23926 (Object_t * __this/* static, unused */, int32_t ___key, PointerEventData_t549 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
