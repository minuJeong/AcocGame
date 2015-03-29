#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>
struct FlexibleDictionaryWrapper_2_t2064;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1088;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseGeoPoint>
struct IDictionary_2_t2218;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t434;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1173;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m68285 (FlexibleDictionaryWrapper_2_t2064 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m68286 (FlexibleDictionaryWrapper_2_t2064 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m68287 (FlexibleDictionaryWrapper_2_t2064 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m68288 (FlexibleDictionaryWrapper_2_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m68289 (FlexibleDictionaryWrapper_2_t2064 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m68290 (FlexibleDictionaryWrapper_2_t2064 * __this, String_t* ___key, Object_t ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m68291 (FlexibleDictionaryWrapper_2_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Item(System.String)
 Object_t * FlexibleDictionaryWrapper_2_get_Item_m68292 (FlexibleDictionaryWrapper_2_t2064 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m68293 (FlexibleDictionaryWrapper_2_t2064 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m68294 (FlexibleDictionaryWrapper_2_t2064 * __this, KeyValuePair_2_t410  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m68295 (FlexibleDictionaryWrapper_2_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m68296 (FlexibleDictionaryWrapper_2_t2064 * __this, KeyValuePair_2_t410  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m68297 (FlexibleDictionaryWrapper_2_t2064 * __this, KeyValuePair_2U5BU5D_t434* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m68298 (FlexibleDictionaryWrapper_2_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m68299 (FlexibleDictionaryWrapper_2_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m68300 (FlexibleDictionaryWrapper_2_t2064 * __this, KeyValuePair_2_t410  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m68301 (FlexibleDictionaryWrapper_2_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m68302 (FlexibleDictionaryWrapper_2_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::<get_Values>b__0(TIn)
 Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m68303 (Object_t * __this/* static, unused */, ParseGeoPoint_t1117  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t410  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m68304 (Object_t * __this/* static, unused */, KeyValuePair_2_t8498  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
