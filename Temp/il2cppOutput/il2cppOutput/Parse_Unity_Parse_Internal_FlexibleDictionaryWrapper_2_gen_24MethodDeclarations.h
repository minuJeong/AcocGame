#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>
struct FlexibleDictionaryWrapper_2_t1914;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t6476;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t2215;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t6506;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct IEnumerator_1_t6507;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_51.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m60446 (FlexibleDictionaryWrapper_2_t1914 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m60447 (FlexibleDictionaryWrapper_2_t1914 * __this, String_t* ___key, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m60448 (FlexibleDictionaryWrapper_2_t1914 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m60449 (FlexibleDictionaryWrapper_2_t1914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m60450 (FlexibleDictionaryWrapper_2_t1914 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m60451 (FlexibleDictionaryWrapper_2_t1914 * __this, String_t* ___key, bool* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m60452 (FlexibleDictionaryWrapper_2_t1914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>::get_Item(System.String)
 bool FlexibleDictionaryWrapper_2_get_Item_m60453 (FlexibleDictionaryWrapper_2_t1914 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m60454 (FlexibleDictionaryWrapper_2_t1914 * __this, String_t* ___key, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m60455 (FlexibleDictionaryWrapper_2_t1914 * __this, KeyValuePair_2_t6464  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m60456 (FlexibleDictionaryWrapper_2_t1914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m60457 (FlexibleDictionaryWrapper_2_t1914 * __this, KeyValuePair_2_t6464  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m60458 (FlexibleDictionaryWrapper_2_t1914 * __this, KeyValuePair_2U5BU5D_t6506* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m60459 (FlexibleDictionaryWrapper_2_t1914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m60460 (FlexibleDictionaryWrapper_2_t1914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m60461 (FlexibleDictionaryWrapper_2_t1914 * __this, KeyValuePair_2_t6464  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m60462 (FlexibleDictionaryWrapper_2_t1914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60463 (FlexibleDictionaryWrapper_2_t1914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>::<get_Values>b__0(TIn)
 bool FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60464 (Object_t * __this/* static, unused */, float ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t6464  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60465 (Object_t * __this/* static, unused */, KeyValuePair_2_t8382  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
