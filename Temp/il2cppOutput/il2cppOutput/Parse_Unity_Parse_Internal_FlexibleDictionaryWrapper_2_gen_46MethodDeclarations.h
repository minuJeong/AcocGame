﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>
struct FlexibleDictionaryWrapper_2_t1936;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t7195;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t9054;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t9190;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t9023;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_60.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_64.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m61613 (FlexibleDictionaryWrapper_2_t1936 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m61614 (FlexibleDictionaryWrapper_2_t1936 * __this, String_t* ___key, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m61615 (FlexibleDictionaryWrapper_2_t1936 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m61616 (FlexibleDictionaryWrapper_2_t1936 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m61617 (FlexibleDictionaryWrapper_2_t1936 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m61618 (FlexibleDictionaryWrapper_2_t1936 * __this, String_t* ___key, int8_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m61619 (FlexibleDictionaryWrapper_2_t1936 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Item(System.String)
 int8_t FlexibleDictionaryWrapper_2_get_Item_m61620 (FlexibleDictionaryWrapper_2_t1936 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m61621 (FlexibleDictionaryWrapper_2_t1936 * __this, String_t* ___key, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m61622 (FlexibleDictionaryWrapper_2_t1936 * __this, KeyValuePair_2_t9020  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m61623 (FlexibleDictionaryWrapper_2_t1936 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m61624 (FlexibleDictionaryWrapper_2_t1936 * __this, KeyValuePair_2_t9020  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m61625 (FlexibleDictionaryWrapper_2_t1936 * __this, KeyValuePair_2U5BU5D_t9190* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m61626 (FlexibleDictionaryWrapper_2_t1936 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m61627 (FlexibleDictionaryWrapper_2_t1936 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m61628 (FlexibleDictionaryWrapper_2_t1936 * __this, KeyValuePair_2_t9020  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m61629 (FlexibleDictionaryWrapper_2_t1936 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m61630 (FlexibleDictionaryWrapper_2_t1936 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::<get_Values>b__0(TIn)
 int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m61631 (Object_t * __this/* static, unused */, int64_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t9020  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m61632 (Object_t * __this/* static, unused */, KeyValuePair_2_t9056  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
