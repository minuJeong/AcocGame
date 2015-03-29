#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>
struct Dictionary_2_t2229;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<Parse.ParseUser>
struct ICollection_1_t6868;
// System.Collections.ICollection
struct ICollection_t429;
// System.Object
struct Object_t;
// Parse.ParseUser
struct ParseUser_t391;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseUser>
struct KeyCollection_t8928;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.ParseUser>
struct ValueCollection_t8929;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t438;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseUser>
struct IDictionary_2_t2221;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseUser>[]
struct KeyValuePair_2U5BU5D_t8930;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseUser>>
struct IEnumerator_1_t8931;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t95;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseUser>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Parse.ParseUser>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__56.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8MethodDeclarations.h"
#define Dictionary_2__ctor_m58373(__this, method) (void)Dictionary_2__ctor_m7663_gshared((Dictionary_2_t473 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m58374(__this, ___comparer, method) (void)Dictionary_2__ctor_m15879_gshared((Dictionary_2_t473 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m58375(__this, ___dictionary, method) (void)Dictionary_2__ctor_m7665_gshared((Dictionary_2_t473 *)__this, (Object_t*)___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::.ctor(System.Int32)
#define Dictionary_2__ctor_m58376(__this, ___capacity, method) (void)Dictionary_2__ctor_m7664_gshared((Dictionary_2_t473 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m58377(__this, ___dictionary, ___comparer, method) (void)Dictionary_2__ctor_m7693_gshared((Dictionary_2_t473 *)__this, (Object_t*)___dictionary, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m58378(__this, ___info, ___context, method) (void)Dictionary_2__ctor_m15884_gshared((Dictionary_2_t473 *)__this, (SerializationInfo_t2614 *)___info, (StreamingContext_t2615 )___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m58379(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m7679_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m58380(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m7680_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m58381(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Keys_m7685_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m58382(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Values_m7686_gshared((Dictionary_2_t473 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.IDictionary.get_IsFixedSize()
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m58383(__this, method) (bool)Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m7681_gshared((Dictionary_2_t473 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.IDictionary.get_IsReadOnly()
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m58384(__this, method) (bool)Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m7682_gshared((Dictionary_2_t473 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m58385(__this, ___key, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Item_m7683_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m58386(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_set_Item_m7684_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m58387(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_Add_m7687_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m58388(__this, ___key, method) (bool)Dictionary_2_System_Collections_IDictionary_Contains_m7688_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m58389(__this, ___key, method) (void)Dictionary_2_System_Collections_IDictionary_Remove_m7690_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m58390(__this, method) (bool)Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m7668_gshared((Dictionary_2_t473 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m58391(__this, method) (Object_t *)Dictionary_2_System_Collections_ICollection_get_SyncRoot_m7669_gshared((Dictionary_2_t473 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m58392(__this, method) (bool)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m7671_gshared((Dictionary_2_t473 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m58393 (Dictionary_2_t2229 * __this, KeyValuePair_2_t8570  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m58394 (Dictionary_2_t2229 * __this, KeyValuePair_2_t8570  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m58395(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m7675_gshared((Dictionary_2_t473 *)__this, (KeyValuePair_2U5BU5D_t2415*)___array, (int32_t)___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m58396 (Dictionary_2_t2229 * __this, KeyValuePair_2_t8570  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m58397(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_ICollection_CopyTo_m7670_gshared((Dictionary_2_t473 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m58398(__this, method) (Object_t *)Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m7666_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m58399(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m7677_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m58400(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_GetEnumerator_m7689_gshared((Dictionary_2_t473 *)__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::get_Count()
#define Dictionary_2_get_Count_m58401(__this, method) (int32_t)Dictionary_2_get_Count_m2433_gshared((Dictionary_2_t473 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::get_Item(TKey)
#define Dictionary_2_get_Item_m58402(__this, ___key, method) (ParseUser_t391 *)Dictionary_2_get_Item_m7678_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m58403(__this, ___key, ___value, method) (void)Dictionary_2_set_Item_m7662_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m58404(__this, ___capacity, ___hcp, method) (void)Dictionary_2_Init_m7692_gshared((Dictionary_2_t473 *)__this, (int32_t)___capacity, (Object_t*)___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m58405(__this, ___size, method) (void)Dictionary_2_InitArrays_m7715_gshared((Dictionary_2_t473 *)__this, (int32_t)___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m58406(__this, ___array, ___index, method) (void)Dictionary_2_CopyToCheck_m7704_gshared((Dictionary_2_t473 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::make_pair(TKey,TValue)
 KeyValuePair_2_t8570  Dictionary_2_make_pair_m58407 (Object_t * __this/* static, unused */, String_t* ___key, ParseUser_t391 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m58408(__this/* static, unused */, ___key, ___value, method) (String_t*)Dictionary_2_pick_key_m15915_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m58409(__this/* static, unused */, ___key, ___value, method) (ParseUser_t391 *)Dictionary_2_pick_value_m15917_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m58410(__this, ___array, ___index, method) (void)Dictionary_2_CopyTo_m7703_gshared((Dictionary_2_t473 *)__this, (KeyValuePair_2U5BU5D_t2415*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::Resize()
#define Dictionary_2_Resize_m58411(__this, method) (void)Dictionary_2_Resize_m7714_gshared((Dictionary_2_t473 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::Add(TKey,TValue)
#define Dictionary_2_Add_m58412(__this, ___key, ___value, method) (void)Dictionary_2_Add_m2476_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::Clear()
#define Dictionary_2_Clear_m58413(__this, method) (void)Dictionary_2_Clear_m7673_gshared((Dictionary_2_t473 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m58414(__this, ___key, method) (bool)Dictionary_2_ContainsKey_m2477_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m58415(__this, ___value, method) (bool)Dictionary_2_ContainsValue_m15921_gshared((Dictionary_2_t473 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m58416(__this, ___info, ___context, method) (void)Dictionary_2_GetObjectData_m7667_gshared((Dictionary_2_t473 *)__this, (SerializationInfo_t2614 *)___info, (StreamingContext_t2615 )___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m58417(__this, ___sender, method) (void)Dictionary_2_OnDeserialization_m7691_gshared((Dictionary_2_t473 *)__this, (Object_t *)___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::Remove(TKey)
#define Dictionary_2_Remove_m58418(__this, ___key, method) (bool)Dictionary_2_Remove_m2553_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m58419(__this, ___key, ___value, method) (bool)Dictionary_2_TryGetValue_m2726_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, (Object_t **)___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::get_Keys()
#define Dictionary_2_get_Keys_m58420(__this, method) (KeyCollection_t8928 *)Dictionary_2_get_Keys_m2458_gshared((Dictionary_2_t473 *)__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::get_Values()
#define Dictionary_2_get_Values_m58421(__this, method) (ValueCollection_t8929 *)Dictionary_2_get_Values_m7699_gshared((Dictionary_2_t473 *)__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m58422(__this, ___key, method) (String_t*)Dictionary_2_ToTKey_m7700_gshared((Dictionary_2_t473 *)__this, (Object_t *)___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m58423(__this, ___value, method) (ParseUser_t391 *)Dictionary_2_ToTValue_m7701_gshared((Dictionary_2_t473 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m58424 (Dictionary_2_t2229 * __this, KeyValuePair_2_t8570  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::GetEnumerator()
 Enumerator_t8932  Dictionary_2_GetEnumerator_m58425 (Dictionary_2_t2229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m58426(__this/* static, unused */, ___key, ___value, method) (DictionaryEntry_t96 )Dictionary_2_U3CCopyToU3Em__0_m7705_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
