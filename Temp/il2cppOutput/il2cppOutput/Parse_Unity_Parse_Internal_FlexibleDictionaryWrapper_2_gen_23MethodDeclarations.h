#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>
struct FlexibleDictionaryWrapper_2_t1913;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t6476;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t2216;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t6506;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct IEnumerator_1_t6507;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m60407 (FlexibleDictionaryWrapper_2_t1913 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m60408 (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m60409 (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m60410 (FlexibleDictionaryWrapper_2_t1913 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m60411 (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m60412 (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, bool* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m60413 (FlexibleDictionaryWrapper_2_t1913 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>::get_Item(System.String)
 bool FlexibleDictionaryWrapper_2_get_Item_m60414 (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m60415 (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m60416 (FlexibleDictionaryWrapper_2_t1913 * __this, KeyValuePair_2_t6464  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m60417 (FlexibleDictionaryWrapper_2_t1913 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m60418 (FlexibleDictionaryWrapper_2_t1913 * __this, KeyValuePair_2_t6464  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m60419 (FlexibleDictionaryWrapper_2_t1913 * __this, KeyValuePair_2U5BU5D_t6506* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m60420 (FlexibleDictionaryWrapper_2_t1913 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m60421 (FlexibleDictionaryWrapper_2_t1913 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m60422 (FlexibleDictionaryWrapper_2_t1913 * __this, KeyValuePair_2_t6464  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m60423 (FlexibleDictionaryWrapper_2_t1913 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60424 (FlexibleDictionaryWrapper_2_t1913 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>::<get_Values>b__0(TIn)
 bool FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60425 (Object_t * __this/* static, unused */, double ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t6464  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60426 (Object_t * __this/* static, unused */, KeyValuePair_2_t8406  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
