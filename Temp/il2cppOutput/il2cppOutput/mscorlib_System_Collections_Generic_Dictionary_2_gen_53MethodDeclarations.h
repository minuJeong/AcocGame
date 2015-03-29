#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>
struct Dictionary_2_t6182;
// System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>
struct ICollection_1_t6183;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1088;
// System.Collections.ICollection
struct ICollection_t429;
// System.Object
struct Object_t;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>
struct Reference_t6175;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>
struct KeyCollection_t6184;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>
struct ValueCollection_t6185;
// System.Collections.Generic.IEqualityComparer`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>
struct IEqualityComparer_1_t6180;
// System.Collections.Generic.IDictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>
struct IDictionary_2_t6174;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.KeyValuePair`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>[]
struct KeyValuePair_2U5BU5D_t6186;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>>
struct IEnumerator_1_t6187;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t95;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_37.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__36.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8MethodDeclarations.h"
#define Dictionary_2__ctor_m31015(__this, method) (void)Dictionary_2__ctor_m7663_gshared((Dictionary_2_t473 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m31016(__this, ___comparer, method) (void)Dictionary_2__ctor_m15879_gshared((Dictionary_2_t473 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m31017(__this, ___dictionary, method) (void)Dictionary_2__ctor_m7665_gshared((Dictionary_2_t473 *)__this, (Object_t*)___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::.ctor(System.Int32)
#define Dictionary_2__ctor_m31018(__this, ___capacity, method) (void)Dictionary_2__ctor_m7664_gshared((Dictionary_2_t473 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m31019(__this, ___dictionary, ___comparer, method) (void)Dictionary_2__ctor_m7693_gshared((Dictionary_2_t473 *)__this, (Object_t*)___dictionary, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m31020(__this, ___info, ___context, method) (void)Dictionary_2__ctor_m15884_gshared((Dictionary_2_t473 *)__this, (SerializationInfo_t2614 *)___info, (StreamingContext_t2615 )___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31021(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m7679_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31022(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m7680_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m31023(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Keys_m7685_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m31024(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Values_m7686_gshared((Dictionary_2_t473 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.IDictionary.get_IsFixedSize()
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m31025(__this, method) (bool)Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m7681_gshared((Dictionary_2_t473 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.IDictionary.get_IsReadOnly()
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m31026(__this, method) (bool)Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m7682_gshared((Dictionary_2_t473 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m31027(__this, ___key, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Item_m7683_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m31028(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_set_Item_m7684_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m31029(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_Add_m7687_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m31030(__this, ___key, method) (bool)Dictionary_2_System_Collections_IDictionary_Contains_m7688_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m31031(__this, ___key, method) (void)Dictionary_2_System_Collections_IDictionary_Remove_m7690_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31032(__this, method) (bool)Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m7668_gshared((Dictionary_2_t473 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31033(__this, method) (Object_t *)Dictionary_2_System_Collections_ICollection_get_SyncRoot_m7669_gshared((Dictionary_2_t473 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31034(__this, method) (bool)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m7671_gshared((Dictionary_2_t473 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31035 (Dictionary_2_t6182 * __this, KeyValuePair_2_t6176  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31036 (Dictionary_2_t6182 * __this, KeyValuePair_2_t6176  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31037(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m7675_gshared((Dictionary_2_t473 *)__this, (KeyValuePair_2U5BU5D_t2415*)___array, (int32_t)___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31038 (Dictionary_2_t6182 * __this, KeyValuePair_2_t6176  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m31039(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_ICollection_CopyTo_m7670_gshared((Dictionary_2_t473 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31040(__this, method) (Object_t *)Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m7666_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31041(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m7677_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31042(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_GetEnumerator_m7689_gshared((Dictionary_2_t473 *)__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::get_Count()
#define Dictionary_2_get_Count_m31043(__this, method) (int32_t)Dictionary_2_get_Count_m2433_gshared((Dictionary_2_t473 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::get_Item(TKey)
#define Dictionary_2_get_Item_m31044(__this, ___key, method) (Object_t *)Dictionary_2_get_Item_m7678_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m31045(__this, ___key, ___value, method) (void)Dictionary_2_set_Item_m7662_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m31046(__this, ___capacity, ___hcp, method) (void)Dictionary_2_Init_m7692_gshared((Dictionary_2_t473 *)__this, (int32_t)___capacity, (Object_t*)___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m31047(__this, ___size, method) (void)Dictionary_2_InitArrays_m7715_gshared((Dictionary_2_t473 *)__this, (int32_t)___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m31048(__this, ___array, ___index, method) (void)Dictionary_2_CopyToCheck_m7704_gshared((Dictionary_2_t473 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::make_pair(TKey,TValue)
 KeyValuePair_2_t6176  Dictionary_2_make_pair_m31049 (Object_t * __this/* static, unused */, Reference_t6175 * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m31050(__this/* static, unused */, ___key, ___value, method) (Reference_t6175 *)Dictionary_2_pick_key_m15915_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m31051(__this/* static, unused */, ___key, ___value, method) (Object_t *)Dictionary_2_pick_value_m15917_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m31052(__this, ___array, ___index, method) (void)Dictionary_2_CopyTo_m7703_gshared((Dictionary_2_t473 *)__this, (KeyValuePair_2U5BU5D_t2415*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::Resize()
#define Dictionary_2_Resize_m31053(__this, method) (void)Dictionary_2_Resize_m7714_gshared((Dictionary_2_t473 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::Add(TKey,TValue)
#define Dictionary_2_Add_m31054(__this, ___key, ___value, method) (void)Dictionary_2_Add_m2476_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::Clear()
#define Dictionary_2_Clear_m31055(__this, method) (void)Dictionary_2_Clear_m7673_gshared((Dictionary_2_t473 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m31056(__this, ___key, method) (bool)Dictionary_2_ContainsKey_m2477_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m31057(__this, ___value, method) (bool)Dictionary_2_ContainsValue_m15921_gshared((Dictionary_2_t473 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m31058(__this, ___info, ___context, method) (void)Dictionary_2_GetObjectData_m7667_gshared((Dictionary_2_t473 *)__this, (SerializationInfo_t2614 *)___info, (StreamingContext_t2615 )___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m31059(__this, ___sender, method) (void)Dictionary_2_OnDeserialization_m7691_gshared((Dictionary_2_t473 *)__this, (Object_t *)___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::Remove(TKey)
#define Dictionary_2_Remove_m31060(__this, ___key, method) (bool)Dictionary_2_Remove_m2553_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m31061(__this, ___key, ___value, method) (bool)Dictionary_2_TryGetValue_m2726_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, (Object_t **)___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::get_Keys()
#define Dictionary_2_get_Keys_m31062(__this, method) (KeyCollection_t6184 *)Dictionary_2_get_Keys_m2458_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::get_Values()
#define Dictionary_2_get_Values_m31063(__this, method) (ValueCollection_t6185 *)Dictionary_2_get_Values_m7699_gshared((Dictionary_2_t473 *)__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m31064(__this, ___key, method) (Reference_t6175 *)Dictionary_2_ToTKey_m7700_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m31065(__this, ___value, method) (Object_t *)Dictionary_2_ToTValue_m7701_gshared((Dictionary_2_t473 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m31066 (Dictionary_2_t6182 * __this, KeyValuePair_2_t6176  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::GetEnumerator()
 Enumerator_t6188  Dictionary_2_GetEnumerator_m31067 (Dictionary_2_t6182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m31068(__this/* static, unused */, ___key, ___value, method) (DictionaryEntry_t96 )Dictionary_2_U3CCopyToU3Em__0_m7705_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
