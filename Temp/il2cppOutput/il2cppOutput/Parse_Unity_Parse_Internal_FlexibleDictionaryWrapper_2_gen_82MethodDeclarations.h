#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1972;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4122;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t9033;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t4212;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t4214;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_62.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m63473 (FlexibleDictionaryWrapper_2_t1972 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m63474 (FlexibleDictionaryWrapper_2_t1972 * __this, String_t* ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m63475 (FlexibleDictionaryWrapper_2_t1972 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m63476 (FlexibleDictionaryWrapper_2_t1972 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m63477 (FlexibleDictionaryWrapper_2_t1972 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m63478 (FlexibleDictionaryWrapper_2_t1972 * __this, String_t* ___key, int32_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m63479 (FlexibleDictionaryWrapper_2_t1972 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::get_Item(System.String)
 int32_t FlexibleDictionaryWrapper_2_get_Item_m63480 (FlexibleDictionaryWrapper_2_t1972 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m63481 (FlexibleDictionaryWrapper_2_t1972 * __this, String_t* ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m63482 (FlexibleDictionaryWrapper_2_t1972 * __this, KeyValuePair_2_t4213  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m63483 (FlexibleDictionaryWrapper_2_t1972 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m63484 (FlexibleDictionaryWrapper_2_t1972 * __this, KeyValuePair_2_t4213  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m63485 (FlexibleDictionaryWrapper_2_t1972 * __this, KeyValuePair_2U5BU5D_t4212* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m63486 (FlexibleDictionaryWrapper_2_t1972 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m63487 (FlexibleDictionaryWrapper_2_t1972 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m63488 (FlexibleDictionaryWrapper_2_t1972 * __this, KeyValuePair_2_t4213  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m63489 (FlexibleDictionaryWrapper_2_t1972 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m63490 (FlexibleDictionaryWrapper_2_t1972 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::<get_Values>b__0(TIn)
 int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m63491 (Object_t * __this/* static, unused */, uint16_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t4213  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m63492 (Object_t * __this/* static, unused */, KeyValuePair_2_t9035  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
