#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseObject>
struct ParseQuery_1_t1174;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t1010;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1178;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseObject>>
struct IEnumerable_1_t6603;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1028;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>
struct Task_1_t1154;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1125;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t994;
// Parse.ParseObject
struct ParseObject_t534;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>
struct IEnumerable_1_t1056;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1031;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1099;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen_0.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// Parse.ParseGeoDistance
#include "Parse_Unity_Parse_ParseGeoDistance.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
 void ParseQuery_1__ctor_m34305 (ParseQuery_1_t1174 * __this, ParseQuery_1_t1174 * ___source, Object_t* ___where, Object_t* ___replacementOrderBy, Object_t* ___thenBy, Nullable_1_t124  ___skip, Nullable_1_t124  ___limit, Object_t* ___includes, Object_t* ___selectedKeys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
 HashSet_1_t1178 * ParseQuery_1_MergeIncludes_m34306 (ParseQuery_1_t1174 * __this, Object_t* ___includes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
 HashSet_1_t1178 * ParseQuery_1_MergeSelectedKeys_m34307 (ParseQuery_1_t1174 * __this, Object_t* ___selectedKeys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 Object_t* ParseQuery_1_MergeWhereClauses_m34308 (ParseQuery_1_t1174 * __this, Object_t* ___where, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor()
 void ParseQuery_1__ctor_m34309 (ParseQuery_1_t1174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor(System.String)
 void ParseQuery_1__ctor_m6720 (ParseQuery_1_t1174 * __this, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
 ParseQuery_1_t1174 * ParseQuery_1_Or_m34310 (Object_t * __this/* static, unused */, Object_t* ___queries, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::OrderBy(System.String)
 ParseQuery_1_t1174 * ParseQuery_1_OrderBy_m34311 (ParseQuery_1_t1174 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::OrderByDescending(System.String)
 ParseQuery_1_t1174 * ParseQuery_1_OrderByDescending_m34312 (ParseQuery_1_t1174 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::ThenBy(System.String)
 ParseQuery_1_t1174 * ParseQuery_1_ThenBy_m34313 (ParseQuery_1_t1174 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::ThenByDescending(System.String)
 ParseQuery_1_t1174 * ParseQuery_1_ThenByDescending_m34314 (ParseQuery_1_t1174 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Include(System.String)
 ParseQuery_1_t1174 * ParseQuery_1_Include_m34315 (ParseQuery_1_t1174 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Select(System.String)
 ParseQuery_1_t1174 * ParseQuery_1_Select_m34316 (ParseQuery_1_t1174 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Skip(System.Int32)
 ParseQuery_1_t1174 * ParseQuery_1_Skip_m34317 (ParseQuery_1_t1174 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Limit(System.Int32)
 ParseQuery_1_t1174 * ParseQuery_1_Limit_m34318 (ParseQuery_1_t1174 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereContains(System.String,System.String)
 ParseQuery_1_t1174 * ParseQuery_1_WhereContains_m34319 (ParseQuery_1_t1174 * __this, String_t* ___key, String_t* ___substring, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereDoesNotExist(System.String)
 ParseQuery_1_t1174 * ParseQuery_1_WhereDoesNotExist_m34320 (ParseQuery_1_t1174 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereEndsWith(System.String,System.String)
 ParseQuery_1_t1174 * ParseQuery_1_WhereEndsWith_m34321 (ParseQuery_1_t1174 * __this, String_t* ___key, String_t* ___suffix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereEqualTo(System.String,System.Object)
 ParseQuery_1_t1174 * ParseQuery_1_WhereEqualTo_m34322 (ParseQuery_1_t1174 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereExists(System.String)
 ParseQuery_1_t1174 * ParseQuery_1_WhereExists_m34323 (ParseQuery_1_t1174 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereGreaterThan(System.String,System.Object)
 ParseQuery_1_t1174 * ParseQuery_1_WhereGreaterThan_m34324 (ParseQuery_1_t1174 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereGreaterThanOrEqualTo(System.String,System.Object)
 ParseQuery_1_t1174 * ParseQuery_1_WhereGreaterThanOrEqualTo_m34325 (ParseQuery_1_t1174 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereLessThan(System.String,System.Object)
 ParseQuery_1_t1174 * ParseQuery_1_WhereLessThan_m34326 (ParseQuery_1_t1174 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereLessThanOrEqualTo(System.String,System.Object)
 ParseQuery_1_t1174 * ParseQuery_1_WhereLessThanOrEqualTo_m34327 (ParseQuery_1_t1174 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
 ParseQuery_1_t1174 * ParseQuery_1_WhereMatches_m34328 (ParseQuery_1_t1174 * __this, String_t* ___key, Regex_t1028 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
 ParseQuery_1_t1174 * ParseQuery_1_WhereMatches_m34329 (ParseQuery_1_t1174 * __this, String_t* ___key, Regex_t1028 * ___regex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.String,System.String)
 ParseQuery_1_t1174 * ParseQuery_1_WhereMatches_m34330 (ParseQuery_1_t1174 * __this, String_t* ___key, String_t* ___pattern, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.String)
 ParseQuery_1_t1174 * ParseQuery_1_WhereMatches_m34331 (ParseQuery_1_t1174 * __this, String_t* ___key, String_t* ___pattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereNear(System.String,Parse.ParseGeoPoint)
 ParseQuery_1_t1174 * ParseQuery_1_WhereNear_m34332 (ParseQuery_1_t1174 * __this, String_t* ___key, ParseGeoPoint_t1117  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereNotEqualTo(System.String,System.Object)
 ParseQuery_1_t1174 * ParseQuery_1_WhereNotEqualTo_m34333 (ParseQuery_1_t1174 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereStartsWith(System.String,System.String)
 ParseQuery_1_t1174 * ParseQuery_1_WhereStartsWith_m34334 (ParseQuery_1_t1174 * __this, String_t* ___key, String_t* ___suffix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
 ParseQuery_1_t1174 * ParseQuery_1_WhereWithinGeoBox_m34335 (ParseQuery_1_t1174 * __this, String_t* ___key, ParseGeoPoint_t1117  ___southwest, ParseGeoPoint_t1117  ___northeast, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
 ParseQuery_1_t1174 * ParseQuery_1_WhereWithinDistance_m34336 (ParseQuery_1_t1174 * __this, String_t* ___key, ParseGeoPoint_t1117  ___point, ParseGeoDistance_t1116  ___maxDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseObject>::FindAsync()
 Task_1_t1154 * ParseQuery_1_FindAsync_m34337 (ParseQuery_1_t1174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseObject>::FindAsync(System.Threading.CancellationToken)
 Task_1_t1154 * ParseQuery_1_FindAsync_m34338 (ParseQuery_1_t1174 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstOrDefaultAsync()
 Task_1_t1125 * ParseQuery_1_FirstOrDefaultAsync_m34339 (ParseQuery_1_t1174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstOrDefaultAsync(System.Threading.CancellationToken)
 Task_1_t1125 * ParseQuery_1_FirstOrDefaultAsync_m34340 (ParseQuery_1_t1174 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstAsync()
 Task_1_t1125 * ParseQuery_1_FirstAsync_m34341 (ParseQuery_1_t1174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstAsync(System.Threading.CancellationToken)
 Task_1_t1125 * ParseQuery_1_FirstAsync_m34342 (ParseQuery_1_t1174 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::CountAsync()
 Task_1_t994 * ParseQuery_1_CountAsync_m34343 (ParseQuery_1_t1174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::CountAsync(System.Threading.CancellationToken)
 Task_1_t994 * ParseQuery_1_CountAsync_m34344 (ParseQuery_1_t1174 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::GetAsync(System.String)
 Task_1_t1125 * ParseQuery_1_GetAsync_m34345 (ParseQuery_1_t1174 * __this, String_t* ___objectId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::GetAsync(System.String,System.Threading.CancellationToken)
 Task_1_t1125 * ParseQuery_1_GetAsync_m34346 (ParseQuery_1_t1174 * __this, String_t* ___objectId, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseObject>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 ParseObject_t534 * ParseQuery_1_CreateParseObjectFromQueryResult_m34347 (ParseQuery_1_t1174 * __this, Object_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseObject>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
 Object_t* ParseQuery_1_PrepareObjectsFromResults_m34348 (ParseQuery_1_t1174 * __this, Object_t* ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseQuery`1<Parse.ParseObject>::GetConstraint(System.String)
 Object_t * ParseQuery_1_GetConstraint_m34349 (ParseQuery_1_t1174 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::BuildParameters(System.Boolean)
 Object_t* ParseQuery_1_BuildParameters_m34350 (ParseQuery_1_t1174 * __this, bool ___includeClassName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseObject>::RegexQuote(System.String)
 String_t* ParseQuery_1_RegexQuote_m34351 (ParseQuery_1_t1174 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseObject>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
 String_t* ParseQuery_1_GetRegexOptions_m34352 (ParseQuery_1_t1174 * __this, Regex_t1028 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
 Object_t* ParseQuery_1_EncodeRegex_m34353 (ParseQuery_1_t1174 * __this, Regex_t1028 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereRelatedTo(Parse.ParseObject,System.String)
 ParseQuery_1_t1174 * ParseQuery_1_WhereRelatedTo_m34354 (ParseQuery_1_t1174 * __this, ParseObject_t534 * ___parent, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseObject>::get_JsonString()
 String_t* ParseQuery_1_get_JsonString_m34355 (ParseQuery_1_t1174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::EnsureNotInstallationQuery()
 void ParseQuery_1_EnsureNotInstallationQuery_m34356 (ParseQuery_1_t1174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseObject>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 Object_t* ParseQuery_1_U3CFindAsyncU3Eb__34_m34357 (ParseQuery_1_t1174 * __this, Task_1_t1099 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseObject>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 ParseObject_t534 * ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m34358 (ParseQuery_1_t1174 * __this, Task_1_t1099 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseObject>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
 ParseObject_t534 * ParseQuery_1_U3CFirstAsyncU3Eb__36_m34359 (Object_t * __this/* static, unused */, Task_1_t1125 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.ParseQuery`1<Parse.ParseObject>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 int32_t ParseQuery_1_U3CCountAsyncU3Eb__38_m34360 (Object_t * __this/* static, unused */, Task_1_t1099 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseObject>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
 ParseObject_t534 * ParseQuery_1_U3CGetAsyncU3Eb__3a_m34361 (Object_t * __this/* static, unused */, Task_1_t1154 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseObject>::<PrepareObjectsFromResults>b__3c(System.Object)
 ParseObject_t534 * ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m34362 (ParseQuery_1_t1174 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
