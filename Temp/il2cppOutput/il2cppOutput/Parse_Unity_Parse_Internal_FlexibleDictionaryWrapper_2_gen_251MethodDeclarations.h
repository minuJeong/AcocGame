#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>
struct FlexibleDictionaryWrapper_2_t2141;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>>
struct ICollection_1_t8485;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>
struct IDictionary_2_t1170;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>>[]
struct KeyValuePair_2U5BU5D_t10639;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>>>
struct IEnumerator_1_t10635;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_99.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_genMethodDeclarations.h"
#define FlexibleDictionaryWrapper_2__ctor_m77498(__this, ___toWrap, method) (void)FlexibleDictionaryWrapper_2__ctor_m59077_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (Object_t*)___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m77499(__this, ___key, ___value, method) (void)FlexibleDictionaryWrapper_2_Add_m59078_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, (Object_t *)___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m77500(__this, ___key, method) (bool)FlexibleDictionaryWrapper_2_ContainsKey_m59079_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m77501(__this, method) (Object_t*)FlexibleDictionaryWrapper_2_get_Keys_m59080_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m77502(__this, ___key, method) (bool)FlexibleDictionaryWrapper_2_Remove_m59081_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m77503(__this, ___key, ___value, method) (bool)FlexibleDictionaryWrapper_2_TryGetValue_m59082_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, (Object_t **)___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m77504(__this, method) (Object_t*)FlexibleDictionaryWrapper_2_get_Values_m59083_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m77505(__this, ___key, method) (Object_t*)FlexibleDictionaryWrapper_2_get_Item_m59084_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m77506(__this, ___key, ___value, method) (void)FlexibleDictionaryWrapper_2_set_Item_m59085_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, (Object_t *)___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m77507 (FlexibleDictionaryWrapper_2_t2141 * __this, KeyValuePair_2_t10632  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m77508(__this, method) (void)FlexibleDictionaryWrapper_2_Clear_m59087_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m77509 (FlexibleDictionaryWrapper_2_t2141 * __this, KeyValuePair_2_t10632  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m77510(__this, ___array, ___arrayIndex, method) (void)FlexibleDictionaryWrapper_2_CopyTo_m59089_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (KeyValuePair_2U5BU5D_t434*)___array, (int32_t)___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m77511(__this, method) (int32_t)FlexibleDictionaryWrapper_2_get_Count_m59090_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m77512(__this, method) (bool)FlexibleDictionaryWrapper_2_get_IsReadOnly_m59091_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m77513 (FlexibleDictionaryWrapper_2_t2141 * __this, KeyValuePair_2_t10632  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m77514(__this, method) (Object_t*)FlexibleDictionaryWrapper_2_GetEnumerator_m59093_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m77515(__this, method) (Object_t *)FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59094_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m77516(__this/* static, unused */, ___item, method) (Object_t*)FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59095_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t10632  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m77517 (Object_t * __this/* static, unused */, KeyValuePair_2_t410  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
