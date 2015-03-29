#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>
struct Dictionary_2_t284;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4123;
// System.Collections.Generic.ICollection`1<ExitGames.Client.Photon.Hashtable>
struct ICollection_1_t4782;
// System.Collections.ICollection
struct ICollection_t429;
// System.Object
struct Object_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t256;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,ExitGames.Client.Photon.Hashtable>
struct KeyCollection_t4783;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,ExitGames.Client.Photon.Hashtable>
struct ValueCollection_t4784;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t4639;
// System.Collections.Generic.IDictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>
struct IDictionary_2_t4785;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Collections.Generic.KeyValuePair`2<System.Int32,ExitGames.Client.Photon.Hashtable>[]
struct KeyValuePair_2U5BU5D_t4786;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,ExitGames.Client.Photon.Hashtable>>
struct IEnumerator_1_t4787;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t95;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,ExitGames.Client.Photon.Hashtable>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,ExitGames.Client.Photon.Hashtable>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::.ctor()
 void Dictionary_2__ctor_m2440 (Dictionary_2_t284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m20292 (Dictionary_2_t284 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
 void Dictionary_2__ctor_m20293 (Dictionary_2_t284 * __this, Object_t* ___dictionary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::.ctor(System.Int32)
 void Dictionary_2__ctor_m20294 (Dictionary_2_t284 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m20295 (Dictionary_2_t284 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m20296 (Dictionary_2_t284 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20297 (Dictionary_2_t284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20298 (Dictionary_2_t284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m20299 (Dictionary_2_t284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m20300 (Dictionary_2_t284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m20301 (Dictionary_2_t284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m20302 (Dictionary_2_t284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20303 (Dictionary_2_t284 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m20304 (Dictionary_2_t284 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m20305 (Dictionary_2_t284 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m20306 (Dictionary_2_t284 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m20307 (Dictionary_2_t284 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20308 (Dictionary_2_t284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20309 (Dictionary_2_t284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20310 (Dictionary_2_t284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20311 (Dictionary_2_t284 * __this, KeyValuePair_2_t489  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20312 (Dictionary_2_t284 * __this, KeyValuePair_2_t489  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20313 (Dictionary_2_t284 * __this, KeyValuePair_2U5BU5D_t4786* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20314 (Dictionary_2_t284 * __this, KeyValuePair_2_t489  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m20315 (Dictionary_2_t284 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20316 (Dictionary_2_t284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20317 (Dictionary_2_t284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20318 (Dictionary_2_t284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::get_Count()
 int32_t Dictionary_2_get_Count_m20319 (Dictionary_2_t284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::get_Item(TKey)
 Hashtable_t256 * Dictionary_2_get_Item_m2546 (Dictionary_2_t284 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m2545 (Dictionary_2_t284 * __this, int32_t ___key, Hashtable_t256 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m20320 (Dictionary_2_t284 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m20321 (Dictionary_2_t284 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m20322 (Dictionary_2_t284 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::make_pair(TKey,TValue)
 KeyValuePair_2_t489  Dictionary_2_make_pair_m20323 (Object_t * __this/* static, unused */, int32_t ___key, Hashtable_t256 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::pick_key(TKey,TValue)
 int32_t Dictionary_2_pick_key_m20324 (Object_t * __this/* static, unused */, int32_t ___key, Hashtable_t256 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::pick_value(TKey,TValue)
 Hashtable_t256 * Dictionary_2_pick_value_m20325 (Object_t * __this/* static, unused */, int32_t ___key, Hashtable_t256 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m20326 (Dictionary_2_t284 * __this, KeyValuePair_2U5BU5D_t4786* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::Resize()
 void Dictionary_2_Resize_m20327 (Dictionary_2_t284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::Add(TKey,TValue)
 void Dictionary_2_Add_m20328 (Dictionary_2_t284 * __this, int32_t ___key, Hashtable_t256 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::Clear()
 void Dictionary_2_Clear_m2543 (Dictionary_2_t284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m2544 (Dictionary_2_t284 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m20329 (Dictionary_2_t284 * __this, Hashtable_t256 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m20330 (Dictionary_2_t284 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m20331 (Dictionary_2_t284 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::Remove(TKey)
 bool Dictionary_2_Remove_m20332 (Dictionary_2_t284 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m20333 (Dictionary_2_t284 * __this, int32_t ___key, Hashtable_t256 ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::get_Keys()
 KeyCollection_t4783 * Dictionary_2_get_Keys_m20334 (Dictionary_2_t284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::get_Values()
 ValueCollection_t4784 * Dictionary_2_get_Values_m20335 (Dictionary_2_t284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::ToTKey(System.Object)
 int32_t Dictionary_2_ToTKey_m20336 (Dictionary_2_t284 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::ToTValue(System.Object)
 Hashtable_t256 * Dictionary_2_ToTValue_m20337 (Dictionary_2_t284 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m20338 (Dictionary_2_t284 * __this, KeyValuePair_2_t489  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::GetEnumerator()
 Enumerator_t488  Dictionary_2_GetEnumerator_m2547 (Dictionary_2_t284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t96  Dictionary_2_U3CCopyToU3Em__0_m20339 (Object_t * __this/* static, unused */, int32_t ___key, Hashtable_t256 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
