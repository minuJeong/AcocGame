﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>
struct FlexibleDictionaryWrapper_2_t2150;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1088;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>
struct IDictionary_2_t10751;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t434;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1173;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>
struct IDictionary_2_t2222;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_104.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_genMethodDeclarations.h"
#define FlexibleDictionaryWrapper_2__ctor_m78665(__this, ___toWrap, method) (void)FlexibleDictionaryWrapper_2__ctor_m59080_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (Object_t*)___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m78666(__this, ___key, ___value, method) (void)FlexibleDictionaryWrapper_2_Add_m59081_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, (Object_t *)___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m78667(__this, ___key, method) (bool)FlexibleDictionaryWrapper_2_ContainsKey_m59082_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m78668(__this, method) (Object_t*)FlexibleDictionaryWrapper_2_get_Keys_m59083_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m78669(__this, ___key, method) (bool)FlexibleDictionaryWrapper_2_Remove_m59084_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m78670(__this, ___key, ___value, method) (bool)FlexibleDictionaryWrapper_2_TryGetValue_m59085_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, (Object_t **)___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m78671(__this, method) (Object_t*)FlexibleDictionaryWrapper_2_get_Values_m59086_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m78672(__this, ___key, method) (Object_t *)FlexibleDictionaryWrapper_2_get_Item_m59087_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m78673(__this, ___key, ___value, method) (void)FlexibleDictionaryWrapper_2_set_Item_m59088_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, (Object_t *)___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m78674 (FlexibleDictionaryWrapper_2_t2150 * __this, KeyValuePair_2_t410  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m78675(__this, method) (void)FlexibleDictionaryWrapper_2_Clear_m59090_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m78676 (FlexibleDictionaryWrapper_2_t2150 * __this, KeyValuePair_2_t410  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m78677(__this, ___array, ___arrayIndex, method) (void)FlexibleDictionaryWrapper_2_CopyTo_m59092_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (KeyValuePair_2U5BU5D_t434*)___array, (int32_t)___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m78678(__this, method) (int32_t)FlexibleDictionaryWrapper_2_get_Count_m59093_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m78679(__this, method) (bool)FlexibleDictionaryWrapper_2_get_IsReadOnly_m59094_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m78680 (FlexibleDictionaryWrapper_2_t2150 * __this, KeyValuePair_2_t410  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m78681(__this, method) (Object_t*)FlexibleDictionaryWrapper_2_GetEnumerator_m59096_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m78682(__this, method) (Object_t *)FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59097_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m78683(__this/* static, unused */, ___item, method) (Object_t *)FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59098_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseRole>>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t410  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m78684 (Object_t * __this/* static, unused */, KeyValuePair_2_t10753  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
