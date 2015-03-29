#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>
struct FlexibleDictionaryWrapper_2_t2033;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t7586;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t1160;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8700;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t8701;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m66620 (FlexibleDictionaryWrapper_2_t2033 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m66621 (FlexibleDictionaryWrapper_2_t2033 * __this, String_t* ___key, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m66622 (FlexibleDictionaryWrapper_2_t2033 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m66623 (FlexibleDictionaryWrapper_2_t2033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m66624 (FlexibleDictionaryWrapper_2_t2033 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m66625 (FlexibleDictionaryWrapper_2_t2033 * __this, String_t* ___key, double* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m66626 (FlexibleDictionaryWrapper_2_t2033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::get_Item(System.String)
 double FlexibleDictionaryWrapper_2_get_Item_m66627 (FlexibleDictionaryWrapper_2_t2033 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m66628 (FlexibleDictionaryWrapper_2_t2033 * __this, String_t* ___key, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m66629 (FlexibleDictionaryWrapper_2_t2033 * __this, KeyValuePair_2_t8407  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m66630 (FlexibleDictionaryWrapper_2_t2033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m66631 (FlexibleDictionaryWrapper_2_t2033 * __this, KeyValuePair_2_t8407  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m66632 (FlexibleDictionaryWrapper_2_t2033 * __this, KeyValuePair_2U5BU5D_t8700* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m66633 (FlexibleDictionaryWrapper_2_t2033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m66634 (FlexibleDictionaryWrapper_2_t2033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m66635 (FlexibleDictionaryWrapper_2_t2033 * __this, KeyValuePair_2_t8407  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m66636 (FlexibleDictionaryWrapper_2_t2033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m66637 (FlexibleDictionaryWrapper_2_t2033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::<get_Values>b__0(TIn)
 double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m66638 (Object_t * __this/* static, unused */, bool ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t8407  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m66639 (Object_t * __this/* static, unused */, KeyValuePair_2_t6465  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
