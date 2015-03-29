#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct Dictionary_2_t976;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4122;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct ICollection_1_t6052;
// System.Collections.ICollection
struct ICollection_t429;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>
struct IDictionary_2_t977;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct KeyCollection_t6053;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct ValueCollection_t6054;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t4638;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct IDictionary_2_t914;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>[]
struct KeyValuePair_2U5BU5D_t6055;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>>
struct IEnumerator_1_t6056;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t95;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_35.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__34.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::.ctor()
 void Dictionary_2__ctor_m5275 (Dictionary_2_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m30024 (Dictionary_2_t976 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
 void Dictionary_2__ctor_m30025 (Dictionary_2_t976 * __this, Object_t* ___dictionary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::.ctor(System.Int32)
 void Dictionary_2__ctor_m30026 (Dictionary_2_t976 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m30027 (Dictionary_2_t976 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m30028 (Dictionary_2_t976 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m30029 (Dictionary_2_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m30030 (Dictionary_2_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m30031 (Dictionary_2_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m30032 (Dictionary_2_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m30033 (Dictionary_2_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m30034 (Dictionary_2_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m30035 (Dictionary_2_t976 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m30036 (Dictionary_2_t976 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m30037 (Dictionary_2_t976 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m30038 (Dictionary_2_t976 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m30039 (Dictionary_2_t976 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m30040 (Dictionary_2_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m30041 (Dictionary_2_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30042 (Dictionary_2_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m30043 (Dictionary_2_t976 * __this, KeyValuePair_2_t6043  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m30044 (Dictionary_2_t976 * __this, KeyValuePair_2_t6043  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m30045 (Dictionary_2_t976 * __this, KeyValuePair_2U5BU5D_t6055* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m30046 (Dictionary_2_t976 * __this, KeyValuePair_2_t6043  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m30047 (Dictionary_2_t976 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m30048 (Dictionary_2_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m30049 (Dictionary_2_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m30050 (Dictionary_2_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Count()
 int32_t Dictionary_2_get_Count_m30051 (Dictionary_2_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(TKey)
 Object_t* Dictionary_2_get_Item_m30052 (Dictionary_2_t976 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m30053 (Dictionary_2_t976 * __this, int32_t ___key, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m30054 (Dictionary_2_t976 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m30055 (Dictionary_2_t976 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m30056 (Dictionary_2_t976 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::make_pair(TKey,TValue)
 KeyValuePair_2_t6043  Dictionary_2_make_pair_m30057 (Object_t * __this/* static, unused */, int32_t ___key, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::pick_key(TKey,TValue)
 int32_t Dictionary_2_pick_key_m30058 (Object_t * __this/* static, unused */, int32_t ___key, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::pick_value(TKey,TValue)
 Object_t* Dictionary_2_pick_value_m30059 (Object_t * __this/* static, unused */, int32_t ___key, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m30060 (Dictionary_2_t976 * __this, KeyValuePair_2U5BU5D_t6055* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::Resize()
 void Dictionary_2_Resize_m30061 (Dictionary_2_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::Add(TKey,TValue)
 void Dictionary_2_Add_m30062 (Dictionary_2_t976 * __this, int32_t ___key, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::Clear()
 void Dictionary_2_Clear_m30063 (Dictionary_2_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m30064 (Dictionary_2_t976 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m30065 (Dictionary_2_t976 * __this, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m30066 (Dictionary_2_t976 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m30067 (Dictionary_2_t976 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::Remove(TKey)
 bool Dictionary_2_Remove_m30068 (Dictionary_2_t976 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m30069 (Dictionary_2_t976 * __this, int32_t ___key, Object_t** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Keys()
 KeyCollection_t6053 * Dictionary_2_get_Keys_m30070 (Dictionary_2_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Values()
 ValueCollection_t6054 * Dictionary_2_get_Values_m30071 (Dictionary_2_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::ToTKey(System.Object)
 int32_t Dictionary_2_ToTKey_m30072 (Dictionary_2_t976 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::ToTValue(System.Object)
 Object_t* Dictionary_2_ToTValue_m30073 (Dictionary_2_t976 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m30074 (Dictionary_2_t976 * __this, KeyValuePair_2_t6043  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::GetEnumerator()
 Enumerator_t6057  Dictionary_2_GetEnumerator_m30075 (Dictionary_2_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t96  Dictionary_2_U3CCopyToU3Em__0_m30076 (Object_t * __this/* static, unused */, int32_t ___key, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
