#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>
struct FlexibleDictionaryWrapper_2_t2051;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t5014;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t2214;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8665;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t8666;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_51.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m67472 (FlexibleDictionaryWrapper_2_t2051 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m67473 (FlexibleDictionaryWrapper_2_t2051 * __this, String_t* ___key, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m67474 (FlexibleDictionaryWrapper_2_t2051 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m67475 (FlexibleDictionaryWrapper_2_t2051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m67476 (FlexibleDictionaryWrapper_2_t2051 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m67477 (FlexibleDictionaryWrapper_2_t2051 * __this, String_t* ___key, float* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m67478 (FlexibleDictionaryWrapper_2_t2051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::get_Item(System.String)
 float FlexibleDictionaryWrapper_2_get_Item_m67479 (FlexibleDictionaryWrapper_2_t2051 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m67480 (FlexibleDictionaryWrapper_2_t2051 * __this, String_t* ___key, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m67481 (FlexibleDictionaryWrapper_2_t2051 * __this, KeyValuePair_2_t8382  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m67482 (FlexibleDictionaryWrapper_2_t2051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m67483 (FlexibleDictionaryWrapper_2_t2051 * __this, KeyValuePair_2_t8382  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m67484 (FlexibleDictionaryWrapper_2_t2051 * __this, KeyValuePair_2U5BU5D_t8665* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m67485 (FlexibleDictionaryWrapper_2_t2051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m67486 (FlexibleDictionaryWrapper_2_t2051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m67487 (FlexibleDictionaryWrapper_2_t2051 * __this, KeyValuePair_2_t8382  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m67488 (FlexibleDictionaryWrapper_2_t2051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m67489 (FlexibleDictionaryWrapper_2_t2051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::<get_Values>b__0(TIn)
 float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m67490 (Object_t * __this/* static, unused */, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t8382  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m67491 (Object_t * __this/* static, unused */, KeyValuePair_2_t4213  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
