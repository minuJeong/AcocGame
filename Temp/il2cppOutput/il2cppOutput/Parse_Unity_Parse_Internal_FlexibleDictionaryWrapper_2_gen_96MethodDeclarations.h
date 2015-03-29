﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>
struct FlexibleDictionaryWrapper_2_t1986;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t7387;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t2214;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t9397;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t9051;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_63.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m64175 (FlexibleDictionaryWrapper_2_t1986 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m64176 (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m64177 (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m64178 (FlexibleDictionaryWrapper_2_t1986 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m64179 (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m64180 (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, uint32_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m64181 (FlexibleDictionaryWrapper_2_t1986 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::get_Item(System.String)
 uint32_t FlexibleDictionaryWrapper_2_get_Item_m64182 (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m64183 (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m64184 (FlexibleDictionaryWrapper_2_t1986 * __this, KeyValuePair_2_t9048  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m64185 (FlexibleDictionaryWrapper_2_t1986 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m64186 (FlexibleDictionaryWrapper_2_t1986 * __this, KeyValuePair_2_t9048  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m64187 (FlexibleDictionaryWrapper_2_t1986 * __this, KeyValuePair_2U5BU5D_t9397* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m64188 (FlexibleDictionaryWrapper_2_t1986 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m64189 (FlexibleDictionaryWrapper_2_t1986 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m64190 (FlexibleDictionaryWrapper_2_t1986 * __this, KeyValuePair_2_t9048  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m64191 (FlexibleDictionaryWrapper_2_t1986 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m64192 (FlexibleDictionaryWrapper_2_t1986 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::<get_Values>b__0(TIn)
 uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m64193 (Object_t * __this/* static, unused */, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t9048  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m64194 (Object_t * __this/* static, unused */, KeyValuePair_2_t4214  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
