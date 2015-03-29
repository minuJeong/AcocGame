#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>
struct FlexibleDictionaryWrapper_2_t2016;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t7484;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Char>
struct IDictionary_2_t9069;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t9500;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t9066;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Char>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m65648 (FlexibleDictionaryWrapper_2_t2016 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m65649 (FlexibleDictionaryWrapper_2_t2016 * __this, String_t* ___key, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m65650 (FlexibleDictionaryWrapper_2_t2016 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m65651 (FlexibleDictionaryWrapper_2_t2016 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m65652 (FlexibleDictionaryWrapper_2_t2016 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m65653 (FlexibleDictionaryWrapper_2_t2016 * __this, String_t* ___key, uint64_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m65654 (FlexibleDictionaryWrapper_2_t2016 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::get_Item(System.String)
 uint64_t FlexibleDictionaryWrapper_2_get_Item_m65655 (FlexibleDictionaryWrapper_2_t2016 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m65656 (FlexibleDictionaryWrapper_2_t2016 * __this, String_t* ___key, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m65657 (FlexibleDictionaryWrapper_2_t2016 * __this, KeyValuePair_2_t9063  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m65658 (FlexibleDictionaryWrapper_2_t2016 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m65659 (FlexibleDictionaryWrapper_2_t2016 * __this, KeyValuePair_2_t9063  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m65660 (FlexibleDictionaryWrapper_2_t2016 * __this, KeyValuePair_2U5BU5D_t9500* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m65661 (FlexibleDictionaryWrapper_2_t2016 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m65662 (FlexibleDictionaryWrapper_2_t2016 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m65663 (FlexibleDictionaryWrapper_2_t2016 * __this, KeyValuePair_2_t9063  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m65664 (FlexibleDictionaryWrapper_2_t2016 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m65665 (FlexibleDictionaryWrapper_2_t2016 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::<get_Values>b__0(TIn)
 uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m65666 (Object_t * __this/* static, unused */, uint16_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t9063  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m65667 (Object_t * __this/* static, unused */, KeyValuePair_2_t9071  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
