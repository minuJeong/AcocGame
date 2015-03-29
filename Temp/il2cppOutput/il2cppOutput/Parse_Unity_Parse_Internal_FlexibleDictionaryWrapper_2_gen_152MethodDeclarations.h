#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>
struct FlexibleDictionaryWrapper_2_t2042;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t7585;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Char>
struct IDictionary_2_t9069;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8699;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t8700;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Char>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m66968 (FlexibleDictionaryWrapper_2_t2042 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m66969 (FlexibleDictionaryWrapper_2_t2042 * __this, String_t* ___key, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m66970 (FlexibleDictionaryWrapper_2_t2042 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m66971 (FlexibleDictionaryWrapper_2_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m66972 (FlexibleDictionaryWrapper_2_t2042 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m66973 (FlexibleDictionaryWrapper_2_t2042 * __this, String_t* ___key, double* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m66974 (FlexibleDictionaryWrapper_2_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>::get_Item(System.String)
 double FlexibleDictionaryWrapper_2_get_Item_m66975 (FlexibleDictionaryWrapper_2_t2042 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m66976 (FlexibleDictionaryWrapper_2_t2042 * __this, String_t* ___key, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m66977 (FlexibleDictionaryWrapper_2_t2042 * __this, KeyValuePair_2_t8406  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m66978 (FlexibleDictionaryWrapper_2_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m66979 (FlexibleDictionaryWrapper_2_t2042 * __this, KeyValuePair_2_t8406  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m66980 (FlexibleDictionaryWrapper_2_t2042 * __this, KeyValuePair_2U5BU5D_t8699* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m66981 (FlexibleDictionaryWrapper_2_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m66982 (FlexibleDictionaryWrapper_2_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m66983 (FlexibleDictionaryWrapper_2_t2042 * __this, KeyValuePair_2_t8406  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m66984 (FlexibleDictionaryWrapper_2_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m66985 (FlexibleDictionaryWrapper_2_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>::<get_Values>b__0(TIn)
 double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m66986 (Object_t * __this/* static, unused */, uint16_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Char>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t8406  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m66987 (Object_t * __this/* static, unused */, KeyValuePair_2_t9071  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
