#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>
struct Dictionary_2_t798;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>
struct ICollection_1_t796;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4122;
// System.Collections.ICollection
struct ICollection_t429;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t648;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.Graphic,System.Int32>
struct KeyCollection_t5505;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.Graphic,System.Int32>
struct ValueCollection_t5506;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Graphic>
struct IEqualityComparer_1_t5503;
// System.Collections.Generic.IDictionary`2<UnityEngine.UI.Graphic,System.Int32>
struct IDictionary_2_t5507;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>[]
struct KeyValuePair_2U5BU5D_t5508;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
struct IEnumerator_1_t5510;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t95;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.Graphic,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__22.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor()
 void Dictionary_2__ctor_m25724 (Dictionary_2_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m25725 (Dictionary_2_t798 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
 void Dictionary_2__ctor_m25726 (Dictionary_2_t798 * __this, Object_t* ___dictionary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Int32)
 void Dictionary_2__ctor_m25727 (Dictionary_2_t798 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m25728 (Dictionary_2_t798 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m25729 (Dictionary_2_t798 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25730 (Dictionary_2_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25731 (Dictionary_2_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m25732 (Dictionary_2_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m25733 (Dictionary_2_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m25734 (Dictionary_2_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m25735 (Dictionary_2_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m25736 (Dictionary_2_t798 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m25737 (Dictionary_2_t798 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m25738 (Dictionary_2_t798 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m25739 (Dictionary_2_t798 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m25740 (Dictionary_2_t798 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25741 (Dictionary_2_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25742 (Dictionary_2_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25743 (Dictionary_2_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25744 (Dictionary_2_t798 * __this, KeyValuePair_2_t5509  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25745 (Dictionary_2_t798 * __this, KeyValuePair_2_t5509  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25746 (Dictionary_2_t798 * __this, KeyValuePair_2U5BU5D_t5508* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25747 (Dictionary_2_t798 * __this, KeyValuePair_2_t5509  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m25748 (Dictionary_2_t798 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25749 (Dictionary_2_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25750 (Dictionary_2_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25751 (Dictionary_2_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Count()
 int32_t Dictionary_2_get_Count_m25752 (Dictionary_2_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Item(TKey)
 int32_t Dictionary_2_get_Item_m25753 (Dictionary_2_t798 * __this, Graphic_t648 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m25754 (Dictionary_2_t798 * __this, Graphic_t648 * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m25755 (Dictionary_2_t798 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m25756 (Dictionary_2_t798 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m25757 (Dictionary_2_t798 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::make_pair(TKey,TValue)
 KeyValuePair_2_t5509  Dictionary_2_make_pair_m25758 (Object_t * __this/* static, unused */, Graphic_t648 * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::pick_key(TKey,TValue)
 Graphic_t648 * Dictionary_2_pick_key_m25759 (Object_t * __this/* static, unused */, Graphic_t648 * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::pick_value(TKey,TValue)
 int32_t Dictionary_2_pick_value_m25760 (Object_t * __this/* static, unused */, Graphic_t648 * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m25761 (Dictionary_2_t798 * __this, KeyValuePair_2U5BU5D_t5508* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Resize()
 void Dictionary_2_Resize_m25762 (Dictionary_2_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Add(TKey,TValue)
 void Dictionary_2_Add_m25763 (Dictionary_2_t798 * __this, Graphic_t648 * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Clear()
 void Dictionary_2_Clear_m25764 (Dictionary_2_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m25765 (Dictionary_2_t798 * __this, Graphic_t648 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m25766 (Dictionary_2_t798 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m25767 (Dictionary_2_t798 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m25768 (Dictionary_2_t798 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Remove(TKey)
 bool Dictionary_2_Remove_m25769 (Dictionary_2_t798 * __this, Graphic_t648 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m25770 (Dictionary_2_t798 * __this, Graphic_t648 * ___key, int32_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Keys()
 KeyCollection_t5505 * Dictionary_2_get_Keys_m25771 (Dictionary_2_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Values()
 ValueCollection_t5506 * Dictionary_2_get_Values_m25772 (Dictionary_2_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ToTKey(System.Object)
 Graphic_t648 * Dictionary_2_ToTKey_m25773 (Dictionary_2_t798 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ToTValue(System.Object)
 int32_t Dictionary_2_ToTValue_m25774 (Dictionary_2_t798 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m25775 (Dictionary_2_t798 * __this, KeyValuePair_2_t5509  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::GetEnumerator()
 Enumerator_t5511  Dictionary_2_GetEnumerator_m25776 (Dictionary_2_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t96  Dictionary_2_U3CCopyToU3Em__0_m25777 (Object_t * __this/* static, unused */, Graphic_t648 * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
