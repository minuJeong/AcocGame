#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>
struct FlexibleDictionaryWrapper_2_t1904;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t6477;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t9010;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t6507;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct IEnumerator_1_t6508;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_59.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m60059 (FlexibleDictionaryWrapper_2_t1904 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m60060 (FlexibleDictionaryWrapper_2_t1904 * __this, String_t* ___key, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m60061 (FlexibleDictionaryWrapper_2_t1904 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m60062 (FlexibleDictionaryWrapper_2_t1904 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m60063 (FlexibleDictionaryWrapper_2_t1904 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m60064 (FlexibleDictionaryWrapper_2_t1904 * __this, String_t* ___key, bool* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m60065 (FlexibleDictionaryWrapper_2_t1904 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>::get_Item(System.String)
 bool FlexibleDictionaryWrapper_2_get_Item_m60066 (FlexibleDictionaryWrapper_2_t1904 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m60067 (FlexibleDictionaryWrapper_2_t1904 * __this, String_t* ___key, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m60068 (FlexibleDictionaryWrapper_2_t1904 * __this, KeyValuePair_2_t6465  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m60069 (FlexibleDictionaryWrapper_2_t1904 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m60070 (FlexibleDictionaryWrapper_2_t1904 * __this, KeyValuePair_2_t6465  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m60071 (FlexibleDictionaryWrapper_2_t1904 * __this, KeyValuePair_2U5BU5D_t6507* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m60072 (FlexibleDictionaryWrapper_2_t1904 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m60073 (FlexibleDictionaryWrapper_2_t1904 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m60074 (FlexibleDictionaryWrapper_2_t1904 * __this, KeyValuePair_2_t6465  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m60075 (FlexibleDictionaryWrapper_2_t1904 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60076 (FlexibleDictionaryWrapper_2_t1904 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>::<get_Values>b__0(TIn)
 bool FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60077 (Object_t * __this/* static, unused */, uint8_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t6465  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60078 (Object_t * __this/* static, unused */, KeyValuePair_2_t9012  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
