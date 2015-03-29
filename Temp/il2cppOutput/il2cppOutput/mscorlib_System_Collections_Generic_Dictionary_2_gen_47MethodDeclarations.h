#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>
struct Dictionary_2_t2396;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t4147;
// System.Collections.Generic.ICollection`1<ExitGames.Client.Photon.CustomType>
struct ICollection_1_t11403;
// System.Collections.ICollection
struct ICollection_t429;
// System.Object
struct Object_t;
// ExitGames.Client.Photon.CustomType
struct CustomType_t2394;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,ExitGames.Client.Photon.CustomType>
struct KeyCollection_t11423;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,ExitGames.Client.Photon.CustomType>
struct ValueCollection_t11424;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t4145;
// System.Collections.Generic.IDictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>
struct IDictionary_2_t11425;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.KeyValuePair`2<System.Byte,ExitGames.Client.Photon.CustomType>[]
struct KeyValuePair_2U5BU5D_t11426;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Byte,ExitGames.Client.Photon.CustomType>>
struct IEnumerator_1_t11428;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t95;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Byte,ExitGames.Client.Photon.CustomType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_122.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,ExitGames.Client.Photon.CustomType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__62.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::.ctor()
 void Dictionary_2__ctor_m7868 (Dictionary_2_t2396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m84258 (Dictionary_2_t2396 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
 void Dictionary_2__ctor_m84259 (Dictionary_2_t2396 * __this, Object_t* ___dictionary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::.ctor(System.Int32)
 void Dictionary_2__ctor_m84260 (Dictionary_2_t2396 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m84261 (Dictionary_2_t2396 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m84262 (Dictionary_2_t2396 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m84263 (Dictionary_2_t2396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m84264 (Dictionary_2_t2396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m84265 (Dictionary_2_t2396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m84266 (Dictionary_2_t2396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m84267 (Dictionary_2_t2396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m84268 (Dictionary_2_t2396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m84269 (Dictionary_2_t2396 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m84270 (Dictionary_2_t2396 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m84271 (Dictionary_2_t2396 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m84272 (Dictionary_2_t2396 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m84273 (Dictionary_2_t2396 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m84274 (Dictionary_2_t2396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m84275 (Dictionary_2_t2396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m84276 (Dictionary_2_t2396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m84277 (Dictionary_2_t2396 * __this, KeyValuePair_2_t11427  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m84278 (Dictionary_2_t2396 * __this, KeyValuePair_2_t11427  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m84279 (Dictionary_2_t2396 * __this, KeyValuePair_2U5BU5D_t11426* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m84280 (Dictionary_2_t2396 * __this, KeyValuePair_2_t11427  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m84281 (Dictionary_2_t2396 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m84282 (Dictionary_2_t2396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m84283 (Dictionary_2_t2396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m84284 (Dictionary_2_t2396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::get_Count()
 int32_t Dictionary_2_get_Count_m84285 (Dictionary_2_t2396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::get_Item(TKey)
 CustomType_t2394 * Dictionary_2_get_Item_m84286 (Dictionary_2_t2396 * __this, uint8_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m84287 (Dictionary_2_t2396 * __this, uint8_t ___key, CustomType_t2394 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m84288 (Dictionary_2_t2396 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m84289 (Dictionary_2_t2396 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m84290 (Dictionary_2_t2396 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::make_pair(TKey,TValue)
 KeyValuePair_2_t11427  Dictionary_2_make_pair_m84291 (Object_t * __this/* static, unused */, uint8_t ___key, CustomType_t2394 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::pick_key(TKey,TValue)
 uint8_t Dictionary_2_pick_key_m84292 (Object_t * __this/* static, unused */, uint8_t ___key, CustomType_t2394 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::pick_value(TKey,TValue)
 CustomType_t2394 * Dictionary_2_pick_value_m84293 (Object_t * __this/* static, unused */, uint8_t ___key, CustomType_t2394 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m84294 (Dictionary_2_t2396 * __this, KeyValuePair_2U5BU5D_t11426* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::Resize()
 void Dictionary_2_Resize_m84295 (Dictionary_2_t2396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::Add(TKey,TValue)
 void Dictionary_2_Add_m7844 (Dictionary_2_t2396 * __this, uint8_t ___key, CustomType_t2394 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::Clear()
 void Dictionary_2_Clear_m84296 (Dictionary_2_t2396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m7842 (Dictionary_2_t2396 * __this, uint8_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m84297 (Dictionary_2_t2396 * __this, CustomType_t2394 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m84298 (Dictionary_2_t2396 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m84299 (Dictionary_2_t2396 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::Remove(TKey)
 bool Dictionary_2_Remove_m84300 (Dictionary_2_t2396 * __this, uint8_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m7848 (Dictionary_2_t2396 * __this, uint8_t ___key, CustomType_t2394 ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::get_Keys()
 KeyCollection_t11423 * Dictionary_2_get_Keys_m84301 (Dictionary_2_t2396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::get_Values()
 ValueCollection_t11424 * Dictionary_2_get_Values_m84302 (Dictionary_2_t2396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::ToTKey(System.Object)
 uint8_t Dictionary_2_ToTKey_m84303 (Dictionary_2_t2396 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::ToTValue(System.Object)
 CustomType_t2394 * Dictionary_2_ToTValue_m84304 (Dictionary_2_t2396 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m84305 (Dictionary_2_t2396 * __this, KeyValuePair_2_t11427  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::GetEnumerator()
 Enumerator_t11429  Dictionary_2_GetEnumerator_m84306 (Dictionary_2_t2396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t96  Dictionary_2_U3CCopyToU3Em__0_m84307 (Object_t * __this/* static, unused */, uint8_t ___key, CustomType_t2394 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
