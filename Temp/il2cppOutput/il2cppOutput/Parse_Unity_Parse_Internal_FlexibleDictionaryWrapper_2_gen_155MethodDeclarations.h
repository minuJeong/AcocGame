#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>
struct FlexibleDictionaryWrapper_2_t2045;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t5014;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8665;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t8666;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_51.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m67085 (FlexibleDictionaryWrapper_2_t2045 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m67086 (FlexibleDictionaryWrapper_2_t2045 * __this, String_t* ___key, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m67087 (FlexibleDictionaryWrapper_2_t2045 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m67088 (FlexibleDictionaryWrapper_2_t2045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m67089 (FlexibleDictionaryWrapper_2_t2045 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m67090 (FlexibleDictionaryWrapper_2_t2045 * __this, String_t* ___key, float* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m67091 (FlexibleDictionaryWrapper_2_t2045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::get_Item(System.String)
 float FlexibleDictionaryWrapper_2_get_Item_m67092 (FlexibleDictionaryWrapper_2_t2045 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m67093 (FlexibleDictionaryWrapper_2_t2045 * __this, String_t* ___key, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m67094 (FlexibleDictionaryWrapper_2_t2045 * __this, KeyValuePair_2_t8382  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m67095 (FlexibleDictionaryWrapper_2_t2045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m67096 (FlexibleDictionaryWrapper_2_t2045 * __this, KeyValuePair_2_t8382  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m67097 (FlexibleDictionaryWrapper_2_t2045 * __this, KeyValuePair_2U5BU5D_t8665* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m67098 (FlexibleDictionaryWrapper_2_t2045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m67099 (FlexibleDictionaryWrapper_2_t2045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m67100 (FlexibleDictionaryWrapper_2_t2045 * __this, KeyValuePair_2_t8382  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m67101 (FlexibleDictionaryWrapper_2_t2045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m67102 (FlexibleDictionaryWrapper_2_t2045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::<get_Values>b__0(TIn)
 float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m67103 (Object_t * __this/* static, unused */, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t8382  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m67104 (Object_t * __this/* static, unused */, KeyValuePair_2_t410  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
