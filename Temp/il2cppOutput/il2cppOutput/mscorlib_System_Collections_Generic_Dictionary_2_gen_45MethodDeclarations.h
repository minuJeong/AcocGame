#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>
struct Dictionary_2_t2350;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4122;
// System.Collections.Generic.ICollection`1<ExitGames.Client.Photon.NCommand>
struct ICollection_1_t11333;
// System.Collections.ICollection
struct ICollection_t429;
// System.Object
struct Object_t;
// ExitGames.Client.Photon.NCommand
struct NCommand_t2353;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,ExitGames.Client.Photon.NCommand>
struct KeyCollection_t2436;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,ExitGames.Client.Photon.NCommand>
struct ValueCollection_t11334;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t4638;
// System.Collections.Generic.IDictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>
struct IDictionary_2_t11335;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.KeyValuePair`2<System.Int32,ExitGames.Client.Photon.NCommand>[]
struct KeyValuePair_2U5BU5D_t11336;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,ExitGames.Client.Photon.NCommand>>
struct IEnumerator_1_t11338;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t95;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,ExitGames.Client.Photon.NCommand>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_119.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,ExitGames.Client.Photon.NCommand>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__59.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::.ctor()
 void Dictionary_2__ctor_m83501 (Dictionary_2_t2350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m83502 (Dictionary_2_t2350 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
 void Dictionary_2__ctor_m83503 (Dictionary_2_t2350 * __this, Object_t* ___dictionary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::.ctor(System.Int32)
 void Dictionary_2__ctor_m7745 (Dictionary_2_t2350 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m83504 (Dictionary_2_t2350 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m83505 (Dictionary_2_t2350 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m83506 (Dictionary_2_t2350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m83507 (Dictionary_2_t2350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m83508 (Dictionary_2_t2350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m83509 (Dictionary_2_t2350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m83510 (Dictionary_2_t2350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m83511 (Dictionary_2_t2350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m83512 (Dictionary_2_t2350 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m83513 (Dictionary_2_t2350 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m83514 (Dictionary_2_t2350 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m83515 (Dictionary_2_t2350 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m83516 (Dictionary_2_t2350 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m83517 (Dictionary_2_t2350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m83518 (Dictionary_2_t2350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m83519 (Dictionary_2_t2350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m83520 (Dictionary_2_t2350 * __this, KeyValuePair_2_t11337  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m83521 (Dictionary_2_t2350 * __this, KeyValuePair_2_t11337  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m83522 (Dictionary_2_t2350 * __this, KeyValuePair_2U5BU5D_t11336* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m83523 (Dictionary_2_t2350 * __this, KeyValuePair_2_t11337  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m83524 (Dictionary_2_t2350 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m83525 (Dictionary_2_t2350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m83526 (Dictionary_2_t2350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m83527 (Dictionary_2_t2350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::get_Count()
 int32_t Dictionary_2_get_Count_m7786 (Dictionary_2_t2350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::get_Item(TKey)
 NCommand_t2353 * Dictionary_2_get_Item_m7748 (Dictionary_2_t2350 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m83528 (Dictionary_2_t2350 * __this, int32_t ___key, NCommand_t2353 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m83529 (Dictionary_2_t2350 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m83530 (Dictionary_2_t2350 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m83531 (Dictionary_2_t2350 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::make_pair(TKey,TValue)
 KeyValuePair_2_t11337  Dictionary_2_make_pair_m83532 (Object_t * __this/* static, unused */, int32_t ___key, NCommand_t2353 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::pick_key(TKey,TValue)
 int32_t Dictionary_2_pick_key_m83533 (Object_t * __this/* static, unused */, int32_t ___key, NCommand_t2353 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::pick_value(TKey,TValue)
 NCommand_t2353 * Dictionary_2_pick_value_m83534 (Object_t * __this/* static, unused */, int32_t ___key, NCommand_t2353 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m83535 (Dictionary_2_t2350 * __this, KeyValuePair_2U5BU5D_t11336* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::Resize()
 void Dictionary_2_Resize_m83536 (Dictionary_2_t2350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::Add(TKey,TValue)
 void Dictionary_2_Add_m7821 (Dictionary_2_t2350 * __this, int32_t ___key, NCommand_t2353 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::Clear()
 void Dictionary_2_Clear_m7749 (Dictionary_2_t2350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m7747 (Dictionary_2_t2350 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m83537 (Dictionary_2_t2350 * __this, NCommand_t2353 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m83538 (Dictionary_2_t2350 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m83539 (Dictionary_2_t2350 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::Remove(TKey)
 bool Dictionary_2_Remove_m7806 (Dictionary_2_t2350 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m7808 (Dictionary_2_t2350 * __this, int32_t ___key, NCommand_t2353 ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::get_Keys()
 KeyCollection_t2436 * Dictionary_2_get_Keys_m7800 (Dictionary_2_t2350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::get_Values()
 ValueCollection_t11334 * Dictionary_2_get_Values_m83540 (Dictionary_2_t2350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::ToTKey(System.Object)
 int32_t Dictionary_2_ToTKey_m83541 (Dictionary_2_t2350 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::ToTValue(System.Object)
 NCommand_t2353 * Dictionary_2_ToTValue_m83542 (Dictionary_2_t2350 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m83543 (Dictionary_2_t2350 * __this, KeyValuePair_2_t11337  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::GetEnumerator()
 Enumerator_t11339  Dictionary_2_GetEnumerator_m83544 (Dictionary_2_t2350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t96  Dictionary_2_U3CCopyToU3Em__0_m83545 (Object_t * __this/* static, unused */, int32_t ___key, NCommand_t2353 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
