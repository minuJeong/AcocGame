#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>
struct FlexibleDictionaryWrapper_2_t2043;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t7585;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t2216;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8699;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t8700;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m67007 (FlexibleDictionaryWrapper_2_t2043 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m67008 (FlexibleDictionaryWrapper_2_t2043 * __this, String_t* ___key, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m67009 (FlexibleDictionaryWrapper_2_t2043 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m67010 (FlexibleDictionaryWrapper_2_t2043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m67011 (FlexibleDictionaryWrapper_2_t2043 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m67012 (FlexibleDictionaryWrapper_2_t2043 * __this, String_t* ___key, double* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m67013 (FlexibleDictionaryWrapper_2_t2043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Item(System.String)
 double FlexibleDictionaryWrapper_2_get_Item_m67014 (FlexibleDictionaryWrapper_2_t2043 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m67015 (FlexibleDictionaryWrapper_2_t2043 * __this, String_t* ___key, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m67016 (FlexibleDictionaryWrapper_2_t2043 * __this, KeyValuePair_2_t8406  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m67017 (FlexibleDictionaryWrapper_2_t2043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m67018 (FlexibleDictionaryWrapper_2_t2043 * __this, KeyValuePair_2_t8406  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m67019 (FlexibleDictionaryWrapper_2_t2043 * __this, KeyValuePair_2U5BU5D_t8699* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m67020 (FlexibleDictionaryWrapper_2_t2043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m67021 (FlexibleDictionaryWrapper_2_t2043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m67022 (FlexibleDictionaryWrapper_2_t2043 * __this, KeyValuePair_2_t8406  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m67023 (FlexibleDictionaryWrapper_2_t2043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m67024 (FlexibleDictionaryWrapper_2_t2043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::<get_Values>b__0(TIn)
 double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m67025 (Object_t * __this/* static, unused */, double ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t8406  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m67026 (Object_t * __this/* static, unused */, KeyValuePair_2_t8406  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
