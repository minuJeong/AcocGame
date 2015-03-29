#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t278;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<UnityEngine.GameObject>
struct ICollection_1_t4723;
// System.Collections.ICollection
struct ICollection_t429;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t47;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GameObject>
struct KeyCollection_t4724;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameObject>
struct ValueCollection_t4725;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t438;
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.GameObject>
struct IDictionary_2_t4726;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>[]
struct KeyValuePair_2U5BU5D_t4727;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>>
struct IEnumerator_1_t4729;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t95;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8MethodDeclarations.h"
#define Dictionary_2__ctor_m2445(__this, method) (void)Dictionary_2__ctor_m7663_gshared((Dictionary_2_t473 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19820(__this, ___comparer, method) (void)Dictionary_2__ctor_m15879_gshared((Dictionary_2_t473 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m19821(__this, ___dictionary, method) (void)Dictionary_2__ctor_m7665_gshared((Dictionary_2_t473 *)__this, (Object_t*)___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor(System.Int32)
#define Dictionary_2__ctor_m19822(__this, ___capacity, method) (void)Dictionary_2__ctor_m7664_gshared((Dictionary_2_t473 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19823(__this, ___dictionary, ___comparer, method) (void)Dictionary_2__ctor_m7693_gshared((Dictionary_2_t473 *)__this, (Object_t*)___dictionary, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m19824(__this, ___info, ___context, method) (void)Dictionary_2__ctor_m15884_gshared((Dictionary_2_t473 *)__this, (SerializationInfo_t2614 *)___info, (StreamingContext_t2615 )___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19825(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m7679_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19826(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m7680_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m19827(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Keys_m7685_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m19828(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Values_m7686_gshared((Dictionary_2_t473 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.get_IsFixedSize()
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m19829(__this, method) (bool)Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m7681_gshared((Dictionary_2_t473 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.get_IsReadOnly()
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m19830(__this, method) (bool)Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m7682_gshared((Dictionary_2_t473 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19831(__this, ___key, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Item_m7683_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19832(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_set_Item_m7684_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m19833(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_Add_m7687_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m19834(__this, ___key, method) (bool)Dictionary_2_System_Collections_IDictionary_Contains_m7688_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m19835(__this, ___key, method) (void)Dictionary_2_System_Collections_IDictionary_Remove_m7690_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19836(__this, method) (bool)Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m7668_gshared((Dictionary_2_t473 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19837(__this, method) (Object_t *)Dictionary_2_System_Collections_ICollection_get_SyncRoot_m7669_gshared((Dictionary_2_t473 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19838(__this, method) (bool)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m7671_gshared((Dictionary_2_t473 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19839 (Dictionary_2_t278 * __this, KeyValuePair_2_t4728  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19840 (Dictionary_2_t278 * __this, KeyValuePair_2_t4728  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19841(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m7675_gshared((Dictionary_2_t473 *)__this, (KeyValuePair_2U5BU5D_t2415*)___array, (int32_t)___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19842 (Dictionary_2_t278 * __this, KeyValuePair_2_t4728  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19843(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_ICollection_CopyTo_m7670_gshared((Dictionary_2_t473 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19844(__this, method) (Object_t *)Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m7666_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19845(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m7677_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19846(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_GetEnumerator_m7689_gshared((Dictionary_2_t473 *)__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Count()
#define Dictionary_2_get_Count_m19847(__this, method) (int32_t)Dictionary_2_get_Count_m2433_gshared((Dictionary_2_t473 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Item(TKey)
#define Dictionary_2_get_Item_m19848(__this, ___key, method) (GameObject_t47 *)Dictionary_2_get_Item_m7678_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m19849(__this, ___key, ___value, method) (void)Dictionary_2_set_Item_m7662_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m19850(__this, ___capacity, ___hcp, method) (void)Dictionary_2_Init_m7692_gshared((Dictionary_2_t473 *)__this, (int32_t)___capacity, (Object_t*)___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m19851(__this, ___size, method) (void)Dictionary_2_InitArrays_m7715_gshared((Dictionary_2_t473 *)__this, (int32_t)___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m19852(__this, ___array, ___index, method) (void)Dictionary_2_CopyToCheck_m7704_gshared((Dictionary_2_t473 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::make_pair(TKey,TValue)
 KeyValuePair_2_t4728  Dictionary_2_make_pair_m19853 (Object_t * __this/* static, unused */, String_t* ___key, GameObject_t47 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m19854(__this/* static, unused */, ___key, ___value, method) (String_t*)Dictionary_2_pick_key_m15915_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m19855(__this/* static, unused */, ___key, ___value, method) (GameObject_t47 *)Dictionary_2_pick_value_m15917_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m19856(__this, ___array, ___index, method) (void)Dictionary_2_CopyTo_m7703_gshared((Dictionary_2_t473 *)__this, (KeyValuePair_2U5BU5D_t2415*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Resize()
#define Dictionary_2_Resize_m19857(__this, method) (void)Dictionary_2_Resize_m7714_gshared((Dictionary_2_t473 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Add(TKey,TValue)
#define Dictionary_2_Add_m2518(__this, ___key, ___value, method) (void)Dictionary_2_Add_m2476_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Clear()
#define Dictionary_2_Clear_m19858(__this, method) (void)Dictionary_2_Clear_m7673_gshared((Dictionary_2_t473 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m19859(__this, ___key, method) (bool)Dictionary_2_ContainsKey_m2477_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m19860(__this, ___value, method) (bool)Dictionary_2_ContainsValue_m15921_gshared((Dictionary_2_t473 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m19861(__this, ___info, ___context, method) (void)Dictionary_2_GetObjectData_m7667_gshared((Dictionary_2_t473 *)__this, (SerializationInfo_t2614 *)___info, (StreamingContext_t2615 )___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m19862(__this, ___sender, method) (void)Dictionary_2_OnDeserialization_m7691_gshared((Dictionary_2_t473 *)__this, (Object_t *)___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Remove(TKey)
#define Dictionary_2_Remove_m19863(__this, ___key, method) (bool)Dictionary_2_Remove_m2553_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m2516(__this, ___key, ___value, method) (bool)Dictionary_2_TryGetValue_m2726_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, (Object_t **)___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Keys()
#define Dictionary_2_get_Keys_m19864(__this, method) (KeyCollection_t4724 *)Dictionary_2_get_Keys_m2458_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Values()
#define Dictionary_2_get_Values_m19865(__this, method) (ValueCollection_t4725 *)Dictionary_2_get_Values_m7699_gshared((Dictionary_2_t473 *)__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m19866(__this, ___key, method) (String_t*)Dictionary_2_ToTKey_m7700_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m19867(__this, ___value, method) (GameObject_t47 *)Dictionary_2_ToTValue_m7701_gshared((Dictionary_2_t473 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m19868 (Dictionary_2_t278 * __this, KeyValuePair_2_t4728  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::GetEnumerator()
 Enumerator_t4730  Dictionary_2_GetEnumerator_m19869 (Dictionary_2_t278 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m19870(__this/* static, unused */, ___key, ___value, method) (DictionaryEntry_t96 )Dictionary_2_U3CCopyToU3Em__0_m7705_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
