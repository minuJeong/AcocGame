#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1963;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t7296;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t9061;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t9293;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t9038;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_62.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m62969 (FlexibleDictionaryWrapper_2_t1963 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m62970 (FlexibleDictionaryWrapper_2_t1963 * __this, String_t* ___key, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m62971 (FlexibleDictionaryWrapper_2_t1963 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m62972 (FlexibleDictionaryWrapper_2_t1963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m62973 (FlexibleDictionaryWrapper_2_t1963 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m62974 (FlexibleDictionaryWrapper_2_t1963 * __this, String_t* ___key, uint16_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m62975 (FlexibleDictionaryWrapper_2_t1963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_Item(System.String)
 uint16_t FlexibleDictionaryWrapper_2_get_Item_m62976 (FlexibleDictionaryWrapper_2_t1963 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m62977 (FlexibleDictionaryWrapper_2_t1963 * __this, String_t* ___key, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m62978 (FlexibleDictionaryWrapper_2_t1963 * __this, KeyValuePair_2_t9035  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m62979 (FlexibleDictionaryWrapper_2_t1963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m62980 (FlexibleDictionaryWrapper_2_t1963 * __this, KeyValuePair_2_t9035  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m62981 (FlexibleDictionaryWrapper_2_t1963 * __this, KeyValuePair_2U5BU5D_t9293* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m62982 (FlexibleDictionaryWrapper_2_t1963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m62983 (FlexibleDictionaryWrapper_2_t1963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m62984 (FlexibleDictionaryWrapper_2_t1963 * __this, KeyValuePair_2_t9035  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m62985 (FlexibleDictionaryWrapper_2_t1963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m62986 (FlexibleDictionaryWrapper_2_t1963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::<get_Values>b__0(TIn)
 uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m62987 (Object_t * __this/* static, unused */, uint64_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t9035  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m62988 (Object_t * __this/* static, unused */, KeyValuePair_2_t9063  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
