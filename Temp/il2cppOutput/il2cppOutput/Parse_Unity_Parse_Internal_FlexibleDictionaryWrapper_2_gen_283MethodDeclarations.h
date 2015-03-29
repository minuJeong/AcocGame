#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>
struct FlexibleDictionaryWrapper_2_t2173;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>>
struct ICollection_1_t8914;
// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>
struct Dictionary_2_t2228;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>>[]
struct KeyValuePair_2U5BU5D_t11023;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>>>
struct IEnumerator_1_t11019;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_115.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_genMethodDeclarations.h"
#define FlexibleDictionaryWrapper_2__ctor_m81386(__this, ___toWrap, method) (void)FlexibleDictionaryWrapper_2__ctor_m59077_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (Object_t*)___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m81387(__this, ___key, ___value, method) (void)FlexibleDictionaryWrapper_2_Add_m59078_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, (Object_t *)___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m81388(__this, ___key, method) (bool)FlexibleDictionaryWrapper_2_ContainsKey_m59079_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m81389(__this, method) (Object_t*)FlexibleDictionaryWrapper_2_get_Keys_m59080_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m81390(__this, ___key, method) (bool)FlexibleDictionaryWrapper_2_Remove_m59081_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m81391(__this, ___key, ___value, method) (bool)FlexibleDictionaryWrapper_2_TryGetValue_m59082_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, (Object_t **)___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m81392(__this, method) (Object_t*)FlexibleDictionaryWrapper_2_get_Values_m59083_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m81393(__this, ___key, method) (Dictionary_2_t2228 *)FlexibleDictionaryWrapper_2_get_Item_m59084_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m81394(__this, ___key, ___value, method) (void)FlexibleDictionaryWrapper_2_set_Item_m59085_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, (Object_t *)___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m81395 (FlexibleDictionaryWrapper_2_t2173 * __this, KeyValuePair_2_t11016  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m81396(__this, method) (void)FlexibleDictionaryWrapper_2_Clear_m59087_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m81397 (FlexibleDictionaryWrapper_2_t2173 * __this, KeyValuePair_2_t11016  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m81398(__this, ___array, ___arrayIndex, method) (void)FlexibleDictionaryWrapper_2_CopyTo_m59089_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (KeyValuePair_2U5BU5D_t434*)___array, (int32_t)___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m81399(__this, method) (int32_t)FlexibleDictionaryWrapper_2_get_Count_m59090_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m81400(__this, method) (bool)FlexibleDictionaryWrapper_2_get_IsReadOnly_m59091_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m81401 (FlexibleDictionaryWrapper_2_t2173 * __this, KeyValuePair_2_t11016  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m81402(__this, method) (Object_t*)FlexibleDictionaryWrapper_2_GetEnumerator_m59093_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m81403(__this, method) (Object_t *)FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59094_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m81404(__this/* static, unused */, ___item, method) (Dictionary_2_t2228 *)FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59095_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t11016  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m81405 (Object_t * __this/* static, unused */, KeyValuePair_2_t410  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
