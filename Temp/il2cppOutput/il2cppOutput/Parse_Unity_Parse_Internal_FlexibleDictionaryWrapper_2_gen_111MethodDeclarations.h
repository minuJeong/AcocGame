﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>
struct FlexibleDictionaryWrapper_2_t2001;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t6475;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t9053;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t9448;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t9058;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_64.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m64910 (FlexibleDictionaryWrapper_2_t2001 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m64911 (FlexibleDictionaryWrapper_2_t2001 * __this, String_t* ___key, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m64912 (FlexibleDictionaryWrapper_2_t2001 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m64913 (FlexibleDictionaryWrapper_2_t2001 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m64914 (FlexibleDictionaryWrapper_2_t2001 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m64915 (FlexibleDictionaryWrapper_2_t2001 * __this, String_t* ___key, int64_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m64916 (FlexibleDictionaryWrapper_2_t2001 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Item(System.String)
 int64_t FlexibleDictionaryWrapper_2_get_Item_m64917 (FlexibleDictionaryWrapper_2_t2001 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m64918 (FlexibleDictionaryWrapper_2_t2001 * __this, String_t* ___key, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m64919 (FlexibleDictionaryWrapper_2_t2001 * __this, KeyValuePair_2_t9055  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m64920 (FlexibleDictionaryWrapper_2_t2001 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m64921 (FlexibleDictionaryWrapper_2_t2001 * __this, KeyValuePair_2_t9055  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m64922 (FlexibleDictionaryWrapper_2_t2001 * __this, KeyValuePair_2U5BU5D_t9448* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m64923 (FlexibleDictionaryWrapper_2_t2001 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m64924 (FlexibleDictionaryWrapper_2_t2001 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m64925 (FlexibleDictionaryWrapper_2_t2001 * __this, KeyValuePair_2_t9055  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m64926 (FlexibleDictionaryWrapper_2_t2001 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m64927 (FlexibleDictionaryWrapper_2_t2001 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::<get_Values>b__0(TIn)
 int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m64928 (Object_t * __this/* static, unused */, int64_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t9055  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m64929 (Object_t * __this/* static, unused */, KeyValuePair_2_t9055  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;