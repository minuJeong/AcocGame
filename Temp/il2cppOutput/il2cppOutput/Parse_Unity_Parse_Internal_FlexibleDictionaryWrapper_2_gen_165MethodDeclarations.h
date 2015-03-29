#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>
struct FlexibleDictionaryWrapper_2_t2055;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t5014;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Char>
struct IDictionary_2_t9069;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8665;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t8666;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_51.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Char>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m67628 (FlexibleDictionaryWrapper_2_t2055 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m67629 (FlexibleDictionaryWrapper_2_t2055 * __this, String_t* ___key, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m67630 (FlexibleDictionaryWrapper_2_t2055 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m67631 (FlexibleDictionaryWrapper_2_t2055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m67632 (FlexibleDictionaryWrapper_2_t2055 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m67633 (FlexibleDictionaryWrapper_2_t2055 * __this, String_t* ___key, float* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m67634 (FlexibleDictionaryWrapper_2_t2055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>::get_Item(System.String)
 float FlexibleDictionaryWrapper_2_get_Item_m67635 (FlexibleDictionaryWrapper_2_t2055 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m67636 (FlexibleDictionaryWrapper_2_t2055 * __this, String_t* ___key, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m67637 (FlexibleDictionaryWrapper_2_t2055 * __this, KeyValuePair_2_t8382  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m67638 (FlexibleDictionaryWrapper_2_t2055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m67639 (FlexibleDictionaryWrapper_2_t2055 * __this, KeyValuePair_2_t8382  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m67640 (FlexibleDictionaryWrapper_2_t2055 * __this, KeyValuePair_2U5BU5D_t8665* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m67641 (FlexibleDictionaryWrapper_2_t2055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m67642 (FlexibleDictionaryWrapper_2_t2055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m67643 (FlexibleDictionaryWrapper_2_t2055 * __this, KeyValuePair_2_t8382  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m67644 (FlexibleDictionaryWrapper_2_t2055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m67645 (FlexibleDictionaryWrapper_2_t2055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>::<get_Values>b__0(TIn)
 float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m67646 (Object_t * __this/* static, unused */, uint16_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Char>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t8382  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m67647 (Object_t * __this/* static, unused */, KeyValuePair_2_t9071  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
