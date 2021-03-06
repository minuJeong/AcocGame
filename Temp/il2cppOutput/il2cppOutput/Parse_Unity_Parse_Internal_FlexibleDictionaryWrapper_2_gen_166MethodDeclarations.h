﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>
struct FlexibleDictionaryWrapper_2_t2056;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t5015;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t2216;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8666;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t8667;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_51.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m67670 (FlexibleDictionaryWrapper_2_t2056 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m67671 (FlexibleDictionaryWrapper_2_t2056 * __this, String_t* ___key, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m67672 (FlexibleDictionaryWrapper_2_t2056 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m67673 (FlexibleDictionaryWrapper_2_t2056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m67674 (FlexibleDictionaryWrapper_2_t2056 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m67675 (FlexibleDictionaryWrapper_2_t2056 * __this, String_t* ___key, float* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m67676 (FlexibleDictionaryWrapper_2_t2056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Item(System.String)
 float FlexibleDictionaryWrapper_2_get_Item_m67677 (FlexibleDictionaryWrapper_2_t2056 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m67678 (FlexibleDictionaryWrapper_2_t2056 * __this, String_t* ___key, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m67679 (FlexibleDictionaryWrapper_2_t2056 * __this, KeyValuePair_2_t8383  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m67680 (FlexibleDictionaryWrapper_2_t2056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m67681 (FlexibleDictionaryWrapper_2_t2056 * __this, KeyValuePair_2_t8383  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m67682 (FlexibleDictionaryWrapper_2_t2056 * __this, KeyValuePair_2U5BU5D_t8666* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m67683 (FlexibleDictionaryWrapper_2_t2056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m67684 (FlexibleDictionaryWrapper_2_t2056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m67685 (FlexibleDictionaryWrapper_2_t2056 * __this, KeyValuePair_2_t8383  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m67686 (FlexibleDictionaryWrapper_2_t2056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m67687 (FlexibleDictionaryWrapper_2_t2056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::<get_Values>b__0(TIn)
 float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m67688 (Object_t * __this/* static, unused */, double ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t8383  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m67689 (Object_t * __this/* static, unused */, KeyValuePair_2_t8407  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
