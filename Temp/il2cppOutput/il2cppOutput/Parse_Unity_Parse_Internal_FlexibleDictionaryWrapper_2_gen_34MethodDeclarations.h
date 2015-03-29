#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1924;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t4147;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t9061;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t9137;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t9014;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_59.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m60989 (FlexibleDictionaryWrapper_2_t1924 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m60990 (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m60991 (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m60992 (FlexibleDictionaryWrapper_2_t1924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m60993 (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m60994 (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, uint8_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m60995 (FlexibleDictionaryWrapper_2_t1924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Item(System.String)
 uint8_t FlexibleDictionaryWrapper_2_get_Item_m60996 (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m60997 (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m60998 (FlexibleDictionaryWrapper_2_t1924 * __this, KeyValuePair_2_t9011  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m60999 (FlexibleDictionaryWrapper_2_t1924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m61000 (FlexibleDictionaryWrapper_2_t1924 * __this, KeyValuePair_2_t9011  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m61001 (FlexibleDictionaryWrapper_2_t1924 * __this, KeyValuePair_2U5BU5D_t9137* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m61002 (FlexibleDictionaryWrapper_2_t1924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m61003 (FlexibleDictionaryWrapper_2_t1924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m61004 (FlexibleDictionaryWrapper_2_t1924 * __this, KeyValuePair_2_t9011  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m61005 (FlexibleDictionaryWrapper_2_t1924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m61006 (FlexibleDictionaryWrapper_2_t1924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::<get_Values>b__0(TIn)
 uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m61007 (Object_t * __this/* static, unused */, uint64_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t9011  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m61008 (Object_t * __this/* static, unused */, KeyValuePair_2_t9063  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
