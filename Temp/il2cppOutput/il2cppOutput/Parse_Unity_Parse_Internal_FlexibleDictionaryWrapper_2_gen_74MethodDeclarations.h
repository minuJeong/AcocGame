#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>
struct FlexibleDictionaryWrapper_2_t1964;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t7297;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Char>
struct IDictionary_2_t9070;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t9294;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t9039;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_62.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Char>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m63011 (FlexibleDictionaryWrapper_2_t1964 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m63012 (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m63013 (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m63014 (FlexibleDictionaryWrapper_2_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m63015 (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m63016 (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, uint16_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m63017 (FlexibleDictionaryWrapper_2_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>::get_Item(System.String)
 uint16_t FlexibleDictionaryWrapper_2_get_Item_m63018 (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m63019 (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m63020 (FlexibleDictionaryWrapper_2_t1964 * __this, KeyValuePair_2_t9036  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m63021 (FlexibleDictionaryWrapper_2_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m63022 (FlexibleDictionaryWrapper_2_t1964 * __this, KeyValuePair_2_t9036  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m63023 (FlexibleDictionaryWrapper_2_t1964 * __this, KeyValuePair_2U5BU5D_t9294* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m63024 (FlexibleDictionaryWrapper_2_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m63025 (FlexibleDictionaryWrapper_2_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m63026 (FlexibleDictionaryWrapper_2_t1964 * __this, KeyValuePair_2_t9036  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m63027 (FlexibleDictionaryWrapper_2_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m63028 (FlexibleDictionaryWrapper_2_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>::<get_Values>b__0(TIn)
 uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m63029 (Object_t * __this/* static, unused */, uint16_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Char>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t9036  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m63030 (Object_t * __this/* static, unused */, KeyValuePair_2_t9072  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
