#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>
struct FlexibleDictionaryWrapper_2_t1902;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t6476;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t6506;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct IEnumerator_1_t6507;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m59825 (FlexibleDictionaryWrapper_2_t1902 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m59826 (FlexibleDictionaryWrapper_2_t1902 * __this, String_t* ___key, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m59827 (FlexibleDictionaryWrapper_2_t1902 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59828 (FlexibleDictionaryWrapper_2_t1902 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m59829 (FlexibleDictionaryWrapper_2_t1902 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m59830 (FlexibleDictionaryWrapper_2_t1902 * __this, String_t* ___key, bool* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m59831 (FlexibleDictionaryWrapper_2_t1902 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>::get_Item(System.String)
 bool FlexibleDictionaryWrapper_2_get_Item_m59832 (FlexibleDictionaryWrapper_2_t1902 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m59833 (FlexibleDictionaryWrapper_2_t1902 * __this, String_t* ___key, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m59834 (FlexibleDictionaryWrapper_2_t1902 * __this, KeyValuePair_2_t6464  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m59835 (FlexibleDictionaryWrapper_2_t1902 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m59836 (FlexibleDictionaryWrapper_2_t1902 * __this, KeyValuePair_2_t6464  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m59837 (FlexibleDictionaryWrapper_2_t1902 * __this, KeyValuePair_2U5BU5D_t6506* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m59838 (FlexibleDictionaryWrapper_2_t1902 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59839 (FlexibleDictionaryWrapper_2_t1902 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m59840 (FlexibleDictionaryWrapper_2_t1902 * __this, KeyValuePair_2_t6464  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59841 (FlexibleDictionaryWrapper_2_t1902 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59842 (FlexibleDictionaryWrapper_2_t1902 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>::<get_Values>b__0(TIn)
 bool FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59843 (Object_t * __this/* static, unused */, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t6464  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59844 (Object_t * __this/* static, unused */, KeyValuePair_2_t410  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
