#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>
struct FlexibleDictionaryWrapper_2_t2132;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1088;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>
struct IDictionary_2_t10540;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t434;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1173;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t2216;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Double>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_96.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_genMethodDeclarations.h"
#define FlexibleDictionaryWrapper_2__ctor_m76487(__this, ___toWrap, method) (void)FlexibleDictionaryWrapper_2__ctor_m59077_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (Object_t*)___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m76488(__this, ___key, ___value, method) (void)FlexibleDictionaryWrapper_2_Add_m59078_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, (Object_t *)___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m76489(__this, ___key, method) (bool)FlexibleDictionaryWrapper_2_ContainsKey_m59079_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m76490(__this, method) (Object_t*)FlexibleDictionaryWrapper_2_get_Keys_m59080_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m76491(__this, ___key, method) (bool)FlexibleDictionaryWrapper_2_Remove_m59081_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m76492(__this, ___key, ___value, method) (bool)FlexibleDictionaryWrapper_2_TryGetValue_m59082_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, (Object_t **)___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m76493(__this, method) (Object_t*)FlexibleDictionaryWrapper_2_get_Values_m59083_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m76494(__this, ___key, method) (Object_t *)FlexibleDictionaryWrapper_2_get_Item_m59084_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m76495(__this, ___key, ___value, method) (void)FlexibleDictionaryWrapper_2_set_Item_m59085_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, (Object_t *)___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m76496 (FlexibleDictionaryWrapper_2_t2132 * __this, KeyValuePair_2_t410  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m76497(__this, method) (void)FlexibleDictionaryWrapper_2_Clear_m59087_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m76498 (FlexibleDictionaryWrapper_2_t2132 * __this, KeyValuePair_2_t410  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m76499(__this, ___array, ___arrayIndex, method) (void)FlexibleDictionaryWrapper_2_CopyTo_m59089_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (KeyValuePair_2U5BU5D_t434*)___array, (int32_t)___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m76500(__this, method) (int32_t)FlexibleDictionaryWrapper_2_get_Count_m59090_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m76501(__this, method) (bool)FlexibleDictionaryWrapper_2_get_IsReadOnly_m59091_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m76502 (FlexibleDictionaryWrapper_2_t2132 * __this, KeyValuePair_2_t410  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m76503(__this, method) (Object_t*)FlexibleDictionaryWrapper_2_GetEnumerator_m59093_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m76504(__this, method) (Object_t *)FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59094_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m76505(__this/* static, unused */, ___item, method) (Object_t *)FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59095_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Double>>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t410  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m76506 (Object_t * __this/* static, unused */, KeyValuePair_2_t10542  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
