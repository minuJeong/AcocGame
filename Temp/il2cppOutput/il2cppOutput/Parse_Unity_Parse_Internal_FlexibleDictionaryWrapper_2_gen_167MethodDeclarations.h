﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>
struct FlexibleDictionaryWrapper_2_t2057;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t5014;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t2215;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8665;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t8666;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_51.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m67706 (FlexibleDictionaryWrapper_2_t2057 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m67707 (FlexibleDictionaryWrapper_2_t2057 * __this, String_t* ___key, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m67708 (FlexibleDictionaryWrapper_2_t2057 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m67709 (FlexibleDictionaryWrapper_2_t2057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m67710 (FlexibleDictionaryWrapper_2_t2057 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m67711 (FlexibleDictionaryWrapper_2_t2057 * __this, String_t* ___key, float* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m67712 (FlexibleDictionaryWrapper_2_t2057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Item(System.String)
 float FlexibleDictionaryWrapper_2_get_Item_m67713 (FlexibleDictionaryWrapper_2_t2057 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m67714 (FlexibleDictionaryWrapper_2_t2057 * __this, String_t* ___key, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m67715 (FlexibleDictionaryWrapper_2_t2057 * __this, KeyValuePair_2_t8382  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m67716 (FlexibleDictionaryWrapper_2_t2057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m67717 (FlexibleDictionaryWrapper_2_t2057 * __this, KeyValuePair_2_t8382  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m67718 (FlexibleDictionaryWrapper_2_t2057 * __this, KeyValuePair_2U5BU5D_t8665* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m67719 (FlexibleDictionaryWrapper_2_t2057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m67720 (FlexibleDictionaryWrapper_2_t2057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m67721 (FlexibleDictionaryWrapper_2_t2057 * __this, KeyValuePair_2_t8382  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m67722 (FlexibleDictionaryWrapper_2_t2057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m67723 (FlexibleDictionaryWrapper_2_t2057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::<get_Values>b__0(TIn)
 float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m67724 (Object_t * __this/* static, unused */, float ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t8382  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m67725 (Object_t * __this/* static, unused */, KeyValuePair_2_t8382  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;