#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>
struct FlexibleDictionaryWrapper_2_t2161;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct ICollection_1_t8739;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t123;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>[]
struct KeyValuePair_2U5BU5D_t10879;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>>
struct IEnumerator_1_t10875;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_109.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_genMethodDeclarations.h"
#define FlexibleDictionaryWrapper_2__ctor_m79928(__this, ___toWrap, method) (void)FlexibleDictionaryWrapper_2__ctor_m59077_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (Object_t*)___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m79929(__this, ___key, ___value, method) (void)FlexibleDictionaryWrapper_2_Add_m59078_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, (Object_t *)___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m79930(__this, ___key, method) (bool)FlexibleDictionaryWrapper_2_ContainsKey_m59079_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m79931(__this, method) (Object_t*)FlexibleDictionaryWrapper_2_get_Keys_m59080_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m79932(__this, ___key, method) (bool)FlexibleDictionaryWrapper_2_Remove_m59081_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m79933(__this, ___key, ___value, method) (bool)FlexibleDictionaryWrapper_2_TryGetValue_m59082_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, (Object_t **)___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m79934(__this, method) (Object_t*)FlexibleDictionaryWrapper_2_get_Values_m59083_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m79935(__this, ___key, method) (Dictionary_2_t123 *)FlexibleDictionaryWrapper_2_get_Item_m59084_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m79936(__this, ___key, ___value, method) (void)FlexibleDictionaryWrapper_2_set_Item_m59085_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (String_t*)___key, (Object_t *)___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m79937 (FlexibleDictionaryWrapper_2_t2161 * __this, KeyValuePair_2_t10872  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m79938(__this, method) (void)FlexibleDictionaryWrapper_2_Clear_m59087_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m79939 (FlexibleDictionaryWrapper_2_t2161 * __this, KeyValuePair_2_t10872  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m79940(__this, ___array, ___arrayIndex, method) (void)FlexibleDictionaryWrapper_2_CopyTo_m59089_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, (KeyValuePair_2U5BU5D_t434*)___array, (int32_t)___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m79941(__this, method) (int32_t)FlexibleDictionaryWrapper_2_get_Count_m59090_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m79942(__this, method) (bool)FlexibleDictionaryWrapper_2_get_IsReadOnly_m59091_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m79943 (FlexibleDictionaryWrapper_2_t2161 * __this, KeyValuePair_2_t10872  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m79944(__this, method) (Object_t*)FlexibleDictionaryWrapper_2_GetEnumerator_m59093_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m79945(__this, method) (Object_t *)FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59094_gshared((FlexibleDictionaryWrapper_2_t1889 *)__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m79946(__this/* static, unused */, ___item, method) (Dictionary_2_t123 *)FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59095_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t10872  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m79947 (Object_t * __this/* static, unused */, KeyValuePair_2_t410  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
