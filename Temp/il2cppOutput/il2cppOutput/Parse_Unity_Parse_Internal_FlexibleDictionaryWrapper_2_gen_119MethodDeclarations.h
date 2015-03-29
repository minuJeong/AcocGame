#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>
struct FlexibleDictionaryWrapper_2_t2009;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t7484;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t9017;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t9500;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t9066;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_60.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m65375 (FlexibleDictionaryWrapper_2_t2009 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m65376 (FlexibleDictionaryWrapper_2_t2009 * __this, String_t* ___key, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m65377 (FlexibleDictionaryWrapper_2_t2009 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m65378 (FlexibleDictionaryWrapper_2_t2009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m65379 (FlexibleDictionaryWrapper_2_t2009 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m65380 (FlexibleDictionaryWrapper_2_t2009 * __this, String_t* ___key, uint64_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m65381 (FlexibleDictionaryWrapper_2_t2009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Item(System.String)
 uint64_t FlexibleDictionaryWrapper_2_get_Item_m65382 (FlexibleDictionaryWrapper_2_t2009 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m65383 (FlexibleDictionaryWrapper_2_t2009 * __this, String_t* ___key, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m65384 (FlexibleDictionaryWrapper_2_t2009 * __this, KeyValuePair_2_t9063  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m65385 (FlexibleDictionaryWrapper_2_t2009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m65386 (FlexibleDictionaryWrapper_2_t2009 * __this, KeyValuePair_2_t9063  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m65387 (FlexibleDictionaryWrapper_2_t2009 * __this, KeyValuePair_2U5BU5D_t9500* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m65388 (FlexibleDictionaryWrapper_2_t2009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m65389 (FlexibleDictionaryWrapper_2_t2009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m65390 (FlexibleDictionaryWrapper_2_t2009 * __this, KeyValuePair_2_t9063  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m65391 (FlexibleDictionaryWrapper_2_t2009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m65392 (FlexibleDictionaryWrapper_2_t2009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::<get_Values>b__0(TIn)
 uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m65393 (Object_t * __this/* static, unused */, int8_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t9063  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m65394 (Object_t * __this/* static, unused */, KeyValuePair_2_t9019  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
