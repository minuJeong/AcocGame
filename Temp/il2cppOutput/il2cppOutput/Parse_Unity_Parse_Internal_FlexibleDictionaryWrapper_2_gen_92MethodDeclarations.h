#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>
struct FlexibleDictionaryWrapper_2_t1982;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t7386;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t9009;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t9396;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t9050;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_63.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_59.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m64016 (FlexibleDictionaryWrapper_2_t1982 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m64017 (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m64018 (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m64019 (FlexibleDictionaryWrapper_2_t1982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m64020 (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m64021 (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, uint32_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m64022 (FlexibleDictionaryWrapper_2_t1982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Item(System.String)
 uint32_t FlexibleDictionaryWrapper_2_get_Item_m64023 (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m64024 (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m64025 (FlexibleDictionaryWrapper_2_t1982 * __this, KeyValuePair_2_t9047  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m64026 (FlexibleDictionaryWrapper_2_t1982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m64027 (FlexibleDictionaryWrapper_2_t1982 * __this, KeyValuePair_2_t9047  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m64028 (FlexibleDictionaryWrapper_2_t1982 * __this, KeyValuePair_2U5BU5D_t9396* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m64029 (FlexibleDictionaryWrapper_2_t1982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m64030 (FlexibleDictionaryWrapper_2_t1982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m64031 (FlexibleDictionaryWrapper_2_t1982 * __this, KeyValuePair_2_t9047  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m64032 (FlexibleDictionaryWrapper_2_t1982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m64033 (FlexibleDictionaryWrapper_2_t1982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::<get_Values>b__0(TIn)
 uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m64034 (Object_t * __this/* static, unused */, uint8_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t9047  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m64035 (Object_t * __this/* static, unused */, KeyValuePair_2_t9011  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
