#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseRole>
struct ParseQuery_1_t1184;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t1010;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1178;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseRole>>
struct IEnumerable_1_t6883;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1028;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseRole>>
struct Task_1_t6884;
// System.Threading.Tasks.Task`1<Parse.ParseRole>
struct Task_1_t6885;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t994;
// Parse.ParseRole
struct ParseRole_t1081;
// System.Collections.Generic.IEnumerable`1<Parse.ParseRole>
struct IEnumerable_1_t6886;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1031;
// Parse.ParseObject
struct ParseObject_t534;
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

// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
 void ParseQuery_1__ctor_m36561 (ParseQuery_1_t1184 * __this, ParseQuery_1_t1184 * ___source, Object_t* ___where, Object_t* ___replacementOrderBy, Object_t* ___thenBy, Nullable_1_t124  ___skip, Nullable_1_t124  ___limit, Object_t* ___includes, Object_t* ___selectedKeys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseRole>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
 HashSet_1_t1178 * ParseQuery_1_MergeIncludes_m36562 (ParseQuery_1_t1184 * __this, Object_t* ___includes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseRole>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
 HashSet_1_t1178 * ParseQuery_1_MergeSelectedKeys_m36563 (ParseQuery_1_t1184 * __this, Object_t* ___selectedKeys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 Object_t* ParseQuery_1_MergeWhereClauses_m36564 (ParseQuery_1_t1184 * __this, Object_t* ___where, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor()
 void ParseQuery_1__ctor_m6847 (ParseQuery_1_t1184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor(System.String)
 void ParseQuery_1__ctor_m36565 (ParseQuery_1_t1184 * __this, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
 ParseQuery_1_t1184 * ParseQuery_1_Or_m36566 (Object_t * __this/* static, unused */, Object_t* ___queries, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::OrderBy(System.String)
 ParseQuery_1_t1184 * ParseQuery_1_OrderBy_m36567 (ParseQuery_1_t1184 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::OrderByDescending(System.String)
 ParseQuery_1_t1184 * ParseQuery_1_OrderByDescending_m36568 (ParseQuery_1_t1184 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::ThenBy(System.String)
 ParseQuery_1_t1184 * ParseQuery_1_ThenBy_m36569 (ParseQuery_1_t1184 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::ThenByDescending(System.String)
 ParseQuery_1_t1184 * ParseQuery_1_ThenByDescending_m36570 (ParseQuery_1_t1184 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Include(System.String)
 ParseQuery_1_t1184 * ParseQuery_1_Include_m36571 (ParseQuery_1_t1184 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Select(System.String)
 ParseQuery_1_t1184 * ParseQuery_1_Select_m36572 (ParseQuery_1_t1184 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Skip(System.Int32)
 ParseQuery_1_t1184 * ParseQuery_1_Skip_m36573 (ParseQuery_1_t1184 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Limit(System.Int32)
 ParseQuery_1_t1184 * ParseQuery_1_Limit_m36574 (ParseQuery_1_t1184 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereContains(System.String,System.String)
 ParseQuery_1_t1184 * ParseQuery_1_WhereContains_m36575 (ParseQuery_1_t1184 * __this, String_t* ___key, String_t* ___substring, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereDoesNotExist(System.String)
 ParseQuery_1_t1184 * ParseQuery_1_WhereDoesNotExist_m36576 (ParseQuery_1_t1184 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereEndsWith(System.String,System.String)
 ParseQuery_1_t1184 * ParseQuery_1_WhereEndsWith_m36577 (ParseQuery_1_t1184 * __this, String_t* ___key, String_t* ___suffix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereEqualTo(System.String,System.Object)
 ParseQuery_1_t1184 * ParseQuery_1_WhereEqualTo_m36578 (ParseQuery_1_t1184 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereExists(System.String)
 ParseQuery_1_t1184 * ParseQuery_1_WhereExists_m36579 (ParseQuery_1_t1184 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereGreaterThan(System.String,System.Object)
 ParseQuery_1_t1184 * ParseQuery_1_WhereGreaterThan_m36580 (ParseQuery_1_t1184 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereGreaterThanOrEqualTo(System.String,System.Object)
 ParseQuery_1_t1184 * ParseQuery_1_WhereGreaterThanOrEqualTo_m36581 (ParseQuery_1_t1184 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereLessThan(System.String,System.Object)
 ParseQuery_1_t1184 * ParseQuery_1_WhereLessThan_m36582 (ParseQuery_1_t1184 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereLessThanOrEqualTo(System.String,System.Object)
 ParseQuery_1_t1184 * ParseQuery_1_WhereLessThanOrEqualTo_m36583 (ParseQuery_1_t1184 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
 ParseQuery_1_t1184 * ParseQuery_1_WhereMatches_m36584 (ParseQuery_1_t1184 * __this, String_t* ___key, Regex_t1028 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
 ParseQuery_1_t1184 * ParseQuery_1_WhereMatches_m36585 (ParseQuery_1_t1184 * __this, String_t* ___key, Regex_t1028 * ___regex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.String,System.String)
 ParseQuery_1_t1184 * ParseQuery_1_WhereMatches_m36586 (ParseQuery_1_t1184 * __this, String_t* ___key, String_t* ___pattern, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.String)
 ParseQuery_1_t1184 * ParseQuery_1_WhereMatches_m36587 (ParseQuery_1_t1184 * __this, String_t* ___key, String_t* ___pattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereNear(System.String,Parse.ParseGeoPoint)
 ParseQuery_1_t1184 * ParseQuery_1_WhereNear_m36588 (ParseQuery_1_t1184 * __this, String_t* ___key, ParseGeoPoint_t1117  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereNotEqualTo(System.String,System.Object)
 ParseQuery_1_t1184 * ParseQuery_1_WhereNotEqualTo_m36589 (ParseQuery_1_t1184 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereStartsWith(System.String,System.String)
 ParseQuery_1_t1184 * ParseQuery_1_WhereStartsWith_m36590 (ParseQuery_1_t1184 * __this, String_t* ___key, String_t* ___suffix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
 ParseQuery_1_t1184 * ParseQuery_1_WhereWithinGeoBox_m36591 (ParseQuery_1_t1184 * __this, String_t* ___key, ParseGeoPoint_t1117  ___southwest, ParseGeoPoint_t1117  ___northeast, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
 ParseQuery_1_t1184 * ParseQuery_1_WhereWithinDistance_m36592 (ParseQuery_1_t1184 * __this, String_t* ___key, ParseGeoPoint_t1117  ___point, ParseGeoDistance_t1116  ___maxDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseRole>::FindAsync()
 Task_1_t6884 * ParseQuery_1_FindAsync_m36593 (ParseQuery_1_t1184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseRole>::FindAsync(System.Threading.CancellationToken)
 Task_1_t6884 * ParseQuery_1_FindAsync_m36594 (ParseQuery_1_t1184 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstOrDefaultAsync()
 Task_1_t6885 * ParseQuery_1_FirstOrDefaultAsync_m36595 (ParseQuery_1_t1184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstOrDefaultAsync(System.Threading.CancellationToken)
 Task_1_t6885 * ParseQuery_1_FirstOrDefaultAsync_m36596 (ParseQuery_1_t1184 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstAsync()
 Task_1_t6885 * ParseQuery_1_FirstAsync_m36597 (ParseQuery_1_t1184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstAsync(System.Threading.CancellationToken)
 Task_1_t6885 * ParseQuery_1_FirstAsync_m36598 (ParseQuery_1_t1184 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseRole>::CountAsync()
 Task_1_t994 * ParseQuery_1_CountAsync_m36599 (ParseQuery_1_t1184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseRole>::CountAsync(System.Threading.CancellationToken)
 Task_1_t994 * ParseQuery_1_CountAsync_m36600 (ParseQuery_1_t1184 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::GetAsync(System.String)
 Task_1_t6885 * ParseQuery_1_GetAsync_m36601 (ParseQuery_1_t1184 * __this, String_t* ___objectId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::GetAsync(System.String,System.Threading.CancellationToken)
 Task_1_t6885 * ParseQuery_1_GetAsync_m36602 (ParseQuery_1_t1184 * __this, String_t* ___objectId, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseRole>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 ParseRole_t1081 * ParseQuery_1_CreateParseObjectFromQueryResult_m36603 (ParseQuery_1_t1184 * __this, Object_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseRole>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
 Object_t* ParseQuery_1_PrepareObjectsFromResults_m36604 (ParseQuery_1_t1184 * __this, Object_t* ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseQuery`1<Parse.ParseRole>::GetConstraint(System.String)
 Object_t * ParseQuery_1_GetConstraint_m36605 (ParseQuery_1_t1184 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::BuildParameters(System.Boolean)
 Object_t* ParseQuery_1_BuildParameters_m36606 (ParseQuery_1_t1184 * __this, bool ___includeClassName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseRole>::RegexQuote(System.String)
 String_t* ParseQuery_1_RegexQuote_m36607 (ParseQuery_1_t1184 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseRole>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
 String_t* ParseQuery_1_GetRegexOptions_m36608 (ParseQuery_1_t1184 * __this, Regex_t1028 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
 Object_t* ParseQuery_1_EncodeRegex_m36609 (ParseQuery_1_t1184 * __this, Regex_t1028 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereRelatedTo(Parse.ParseObject,System.String)
 ParseQuery_1_t1184 * ParseQuery_1_WhereRelatedTo_m36610 (ParseQuery_1_t1184 * __this, ParseObject_t534 * ___parent, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseRole>::get_JsonString()
 String_t* ParseQuery_1_get_JsonString_m36611 (ParseQuery_1_t1184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::EnsureNotInstallationQuery()
 void ParseQuery_1_EnsureNotInstallationQuery_m36612 (ParseQuery_1_t1184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseRole>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 Object_t* ParseQuery_1_U3CFindAsyncU3Eb__34_m36613 (ParseQuery_1_t1184 * __this, Task_1_t1099 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseRole>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 ParseRole_t1081 * ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m36614 (ParseQuery_1_t1184 * __this, Task_1_t1099 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseRole>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
 ParseRole_t1081 * ParseQuery_1_U3CFirstAsyncU3Eb__36_m36615 (Object_t * __this/* static, unused */, Task_1_t6885 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.ParseQuery`1<Parse.ParseRole>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 int32_t ParseQuery_1_U3CCountAsyncU3Eb__38_m36616 (Object_t * __this/* static, unused */, Task_1_t1099 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseRole>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
 ParseRole_t1081 * ParseQuery_1_U3CGetAsyncU3Eb__3a_m36617 (Object_t * __this/* static, unused */, Task_1_t6884 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseRole>::<PrepareObjectsFromResults>b__3c(System.Object)
 ParseRole_t1081 * ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m36618 (ParseQuery_1_t1184 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
