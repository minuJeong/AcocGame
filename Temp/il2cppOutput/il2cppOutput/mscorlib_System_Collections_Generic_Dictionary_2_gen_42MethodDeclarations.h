﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>
struct Dictionary_2_t1522;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t4683;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,System.String>>
struct ICollection_1_t6687;
// System.Collections.ICollection
struct ICollection_t429;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1003;
// System.Type
struct Type_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>
struct KeyCollection_t6688;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>
struct ValueCollection_t6689;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t4681;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>
struct IDictionary_2_t1157;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>[]
struct KeyValuePair_2U5BU5D_t6690;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>>
struct IEnumerator_1_t6691;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t95;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_42.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__47.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8MethodDeclarations.h"
#define Dictionary_2__ctor_m6729(__this, method) (void)Dictionary_2__ctor_m7665_gshared((Dictionary_2_t473 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m34946(__this, ___comparer, method) (void)Dictionary_2__ctor_m15882_gshared((Dictionary_2_t473 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m34947(__this, ___dictionary, method) (void)Dictionary_2__ctor_m7667_gshared((Dictionary_2_t473 *)__this, (Object_t*)___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m34948(__this, ___capacity, method) (void)Dictionary_2__ctor_m7666_gshared((Dictionary_2_t473 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m34949(__this, ___dictionary, ___comparer, method) (void)Dictionary_2__ctor_m7695_gshared((Dictionary_2_t473 *)__this, (Object_t*)___dictionary, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m34950(__this, ___info, ___context, method) (void)Dictionary_2__ctor_m15887_gshared((Dictionary_2_t473 *)__this, (SerializationInfo_t2615 *)___info, (StreamingContext_t2616 )___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m34951(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m7681_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m34952(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m7682_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m34953(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Keys_m7687_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m34954(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Values_m7688_gshared((Dictionary_2_t473 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.get_IsFixedSize()
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m34955(__this, method) (bool)Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m7683_gshared((Dictionary_2_t473 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.get_IsReadOnly()
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m34956(__this, method) (bool)Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m7684_gshared((Dictionary_2_t473 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m34957(__this, ___key, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Item_m7685_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m34958(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_set_Item_m7686_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m34959(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_Add_m7689_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m34960(__this, ___key, method) (bool)Dictionary_2_System_Collections_IDictionary_Contains_m7690_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m34961(__this, ___key, method) (void)Dictionary_2_System_Collections_IDictionary_Remove_m7692_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m34962(__this, method) (bool)Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m7670_gshared((Dictionary_2_t473 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m34963(__this, method) (Object_t *)Dictionary_2_System_Collections_ICollection_get_SyncRoot_m7671_gshared((Dictionary_2_t473 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m34964(__this, method) (bool)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m7673_gshared((Dictionary_2_t473 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m34965 (Dictionary_2_t1522 * __this, KeyValuePair_2_t6459  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m34966 (Dictionary_2_t1522 * __this, KeyValuePair_2_t6459  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m34967(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m7677_gshared((Dictionary_2_t473 *)__this, (KeyValuePair_2U5BU5D_t2415*)___array, (int32_t)___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m34968 (Dictionary_2_t1522 * __this, KeyValuePair_2_t6459  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m34969(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_ICollection_CopyTo_m7672_gshared((Dictionary_2_t473 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m34970(__this, method) (Object_t *)Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m7668_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m34971(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m7679_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m34972(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_GetEnumerator_m7691_gshared((Dictionary_2_t473 *)__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::get_Count()
#define Dictionary_2_get_Count_m34973(__this, method) (int32_t)Dictionary_2_get_Count_m2433_gshared((Dictionary_2_t473 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::get_Item(TKey)
#define Dictionary_2_get_Item_m34974(__this, ___key, method) (Object_t*)Dictionary_2_get_Item_m7680_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m34975(__this, ___key, ___value, method) (void)Dictionary_2_set_Item_m7664_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m34976(__this, ___capacity, ___hcp, method) (void)Dictionary_2_Init_m7694_gshared((Dictionary_2_t473 *)__this, (int32_t)___capacity, (Object_t*)___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m34977(__this, ___size, method) (void)Dictionary_2_InitArrays_m7717_gshared((Dictionary_2_t473 *)__this, (int32_t)___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m34978(__this, ___array, ___index, method) (void)Dictionary_2_CopyToCheck_m7706_gshared((Dictionary_2_t473 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::make_pair(TKey,TValue)
 KeyValuePair_2_t6459  Dictionary_2_make_pair_m34979 (Object_t * __this/* static, unused */, Type_t * ___key, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m34980(__this/* static, unused */, ___key, ___value, method) (Type_t *)Dictionary_2_pick_key_m15918_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m34981(__this/* static, unused */, ___key, ___value, method) (Object_t*)Dictionary_2_pick_value_m15920_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m34982(__this, ___array, ___index, method) (void)Dictionary_2_CopyTo_m7705_gshared((Dictionary_2_t473 *)__this, (KeyValuePair_2U5BU5D_t2415*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::Resize()
#define Dictionary_2_Resize_m34983(__this, method) (void)Dictionary_2_Resize_m7716_gshared((Dictionary_2_t473 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::Add(TKey,TValue)
#define Dictionary_2_Add_m34984(__this, ___key, ___value, method) (void)Dictionary_2_Add_m2476_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::Clear()
#define Dictionary_2_Clear_m34985(__this, method) (void)Dictionary_2_Clear_m7675_gshared((Dictionary_2_t473 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m34986(__this, ___key, method) (bool)Dictionary_2_ContainsKey_m2477_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m34987(__this, ___value, method) (bool)Dictionary_2_ContainsValue_m15924_gshared((Dictionary_2_t473 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m34988(__this, ___info, ___context, method) (void)Dictionary_2_GetObjectData_m7669_gshared((Dictionary_2_t473 *)__this, (SerializationInfo_t2615 *)___info, (StreamingContext_t2616 )___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m34989(__this, ___sender, method) (void)Dictionary_2_OnDeserialization_m7693_gshared((Dictionary_2_t473 *)__this, (Object_t *)___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::Remove(TKey)
#define Dictionary_2_Remove_m34990(__this, ___key, method) (bool)Dictionary_2_Remove_m2553_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m34991(__this, ___key, ___value, method) (bool)Dictionary_2_TryGetValue_m2728_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, (Object_t **)___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::get_Keys()
#define Dictionary_2_get_Keys_m34992(__this, method) (KeyCollection_t6688 *)Dictionary_2_get_Keys_m2458_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::get_Values()
#define Dictionary_2_get_Values_m34993(__this, method) (ValueCollection_t6689 *)Dictionary_2_get_Values_m7701_gshared((Dictionary_2_t473 *)__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m34994(__this, ___key, method) (Type_t *)Dictionary_2_ToTKey_m7702_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m34995(__this, ___value, method) (Object_t*)Dictionary_2_ToTValue_m7703_gshared((Dictionary_2_t473 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m34996 (Dictionary_2_t1522 * __this, KeyValuePair_2_t6459  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::GetEnumerator()
 Enumerator_t6692  Dictionary_2_GetEnumerator_m34997 (Dictionary_2_t1522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m34998(__this/* static, unused */, ___key, ___value, method) (DictionaryEntry_t96 )Dictionary_2_U3CCopyToU3Em__0_m7707_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
