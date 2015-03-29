#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseSession>
struct ParseQuery_1_t1189;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t1010;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1178;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseSession>>
struct IEnumerable_1_t6938;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1028;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>
struct Task_1_t6939;
// System.Threading.Tasks.Task`1<Parse.ParseSession>
struct Task_1_t1187;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t994;
// Parse.ParseSession
struct ParseSession_t1188;
// System.Collections.Generic.IEnumerable`1<Parse.ParseSession>
struct IEnumerable_1_t6940;
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

// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
 void ParseQuery_1__ctor_m36952 (ParseQuery_1_t1189 * __this, ParseQuery_1_t1189 * ___source, Object_t* ___where, Object_t* ___replacementOrderBy, Object_t* ___thenBy, Nullable_1_t124  ___skip, Nullable_1_t124  ___limit, Object_t* ___includes, Object_t* ___selectedKeys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseSession>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
 HashSet_1_t1178 * ParseQuery_1_MergeIncludes_m36953 (ParseQuery_1_t1189 * __this, Object_t* ___includes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseSession>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
 HashSet_1_t1178 * ParseQuery_1_MergeSelectedKeys_m36954 (ParseQuery_1_t1189 * __this, Object_t* ___selectedKeys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 Object_t* ParseQuery_1_MergeWhereClauses_m36955 (ParseQuery_1_t1189 * __this, Object_t* ___where, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor()
 void ParseQuery_1__ctor_m6856 (ParseQuery_1_t1189 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor(System.String)
 void ParseQuery_1__ctor_m36956 (ParseQuery_1_t1189 * __this, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
 ParseQuery_1_t1189 * ParseQuery_1_Or_m36957 (Object_t * __this/* static, unused */, Object_t* ___queries, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::OrderBy(System.String)
 ParseQuery_1_t1189 * ParseQuery_1_OrderBy_m36958 (ParseQuery_1_t1189 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::OrderByDescending(System.String)
 ParseQuery_1_t1189 * ParseQuery_1_OrderByDescending_m36959 (ParseQuery_1_t1189 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::ThenBy(System.String)
 ParseQuery_1_t1189 * ParseQuery_1_ThenBy_m36960 (ParseQuery_1_t1189 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::ThenByDescending(System.String)
 ParseQuery_1_t1189 * ParseQuery_1_ThenByDescending_m36961 (ParseQuery_1_t1189 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Include(System.String)
 ParseQuery_1_t1189 * ParseQuery_1_Include_m36962 (ParseQuery_1_t1189 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Select(System.String)
 ParseQuery_1_t1189 * ParseQuery_1_Select_m36963 (ParseQuery_1_t1189 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Skip(System.Int32)
 ParseQuery_1_t1189 * ParseQuery_1_Skip_m36964 (ParseQuery_1_t1189 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Limit(System.Int32)
 ParseQuery_1_t1189 * ParseQuery_1_Limit_m36965 (ParseQuery_1_t1189 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereContains(System.String,System.String)
 ParseQuery_1_t1189 * ParseQuery_1_WhereContains_m36966 (ParseQuery_1_t1189 * __this, String_t* ___key, String_t* ___substring, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereDoesNotExist(System.String)
 ParseQuery_1_t1189 * ParseQuery_1_WhereDoesNotExist_m36967 (ParseQuery_1_t1189 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereEndsWith(System.String,System.String)
 ParseQuery_1_t1189 * ParseQuery_1_WhereEndsWith_m36968 (ParseQuery_1_t1189 * __this, String_t* ___key, String_t* ___suffix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereEqualTo(System.String,System.Object)
 ParseQuery_1_t1189 * ParseQuery_1_WhereEqualTo_m36969 (ParseQuery_1_t1189 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereExists(System.String)
 ParseQuery_1_t1189 * ParseQuery_1_WhereExists_m36970 (ParseQuery_1_t1189 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereGreaterThan(System.String,System.Object)
 ParseQuery_1_t1189 * ParseQuery_1_WhereGreaterThan_m36971 (ParseQuery_1_t1189 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereGreaterThanOrEqualTo(System.String,System.Object)
 ParseQuery_1_t1189 * ParseQuery_1_WhereGreaterThanOrEqualTo_m36972 (ParseQuery_1_t1189 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereLessThan(System.String,System.Object)
 ParseQuery_1_t1189 * ParseQuery_1_WhereLessThan_m36973 (ParseQuery_1_t1189 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereLessThanOrEqualTo(System.String,System.Object)
 ParseQuery_1_t1189 * ParseQuery_1_WhereLessThanOrEqualTo_m36974 (ParseQuery_1_t1189 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
 ParseQuery_1_t1189 * ParseQuery_1_WhereMatches_m36975 (ParseQuery_1_t1189 * __this, String_t* ___key, Regex_t1028 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
 ParseQuery_1_t1189 * ParseQuery_1_WhereMatches_m36976 (ParseQuery_1_t1189 * __this, String_t* ___key, Regex_t1028 * ___regex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.String,System.String)
 ParseQuery_1_t1189 * ParseQuery_1_WhereMatches_m36977 (ParseQuery_1_t1189 * __this, String_t* ___key, String_t* ___pattern, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.String)
 ParseQuery_1_t1189 * ParseQuery_1_WhereMatches_m36978 (ParseQuery_1_t1189 * __this, String_t* ___key, String_t* ___pattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereNear(System.String,Parse.ParseGeoPoint)
 ParseQuery_1_t1189 * ParseQuery_1_WhereNear_m36979 (ParseQuery_1_t1189 * __this, String_t* ___key, ParseGeoPoint_t1117  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereNotEqualTo(System.String,System.Object)
 ParseQuery_1_t1189 * ParseQuery_1_WhereNotEqualTo_m36980 (ParseQuery_1_t1189 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereStartsWith(System.String,System.String)
 ParseQuery_1_t1189 * ParseQuery_1_WhereStartsWith_m36981 (ParseQuery_1_t1189 * __this, String_t* ___key, String_t* ___suffix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
 ParseQuery_1_t1189 * ParseQuery_1_WhereWithinGeoBox_m36982 (ParseQuery_1_t1189 * __this, String_t* ___key, ParseGeoPoint_t1117  ___southwest, ParseGeoPoint_t1117  ___northeast, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
 ParseQuery_1_t1189 * ParseQuery_1_WhereWithinDistance_m36983 (ParseQuery_1_t1189 * __this, String_t* ___key, ParseGeoPoint_t1117  ___point, ParseGeoDistance_t1116  ___maxDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseSession>::FindAsync()
 Task_1_t6939 * ParseQuery_1_FindAsync_m36984 (ParseQuery_1_t1189 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseSession>::FindAsync(System.Threading.CancellationToken)
 Task_1_t6939 * ParseQuery_1_FindAsync_m36985 (ParseQuery_1_t1189 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstOrDefaultAsync()
 Task_1_t1187 * ParseQuery_1_FirstOrDefaultAsync_m36986 (ParseQuery_1_t1189 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstOrDefaultAsync(System.Threading.CancellationToken)
 Task_1_t1187 * ParseQuery_1_FirstOrDefaultAsync_m36987 (ParseQuery_1_t1189 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstAsync()
 Task_1_t1187 * ParseQuery_1_FirstAsync_m36988 (ParseQuery_1_t1189 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstAsync(System.Threading.CancellationToken)
 Task_1_t1187 * ParseQuery_1_FirstAsync_m36989 (ParseQuery_1_t1189 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseSession>::CountAsync()
 Task_1_t994 * ParseQuery_1_CountAsync_m36990 (ParseQuery_1_t1189 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseSession>::CountAsync(System.Threading.CancellationToken)
 Task_1_t994 * ParseQuery_1_CountAsync_m36991 (ParseQuery_1_t1189 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::GetAsync(System.String)
 Task_1_t1187 * ParseQuery_1_GetAsync_m36992 (ParseQuery_1_t1189 * __this, String_t* ___objectId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::GetAsync(System.String,System.Threading.CancellationToken)
 Task_1_t1187 * ParseQuery_1_GetAsync_m36993 (ParseQuery_1_t1189 * __this, String_t* ___objectId, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseSession>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 ParseSession_t1188 * ParseQuery_1_CreateParseObjectFromQueryResult_m36994 (ParseQuery_1_t1189 * __this, Object_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseSession>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
 Object_t* ParseQuery_1_PrepareObjectsFromResults_m36995 (ParseQuery_1_t1189 * __this, Object_t* ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseQuery`1<Parse.ParseSession>::GetConstraint(System.String)
 Object_t * ParseQuery_1_GetConstraint_m36996 (ParseQuery_1_t1189 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::BuildParameters(System.Boolean)
 Object_t* ParseQuery_1_BuildParameters_m36997 (ParseQuery_1_t1189 * __this, bool ___includeClassName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseSession>::RegexQuote(System.String)
 String_t* ParseQuery_1_RegexQuote_m36998 (ParseQuery_1_t1189 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseSession>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
 String_t* ParseQuery_1_GetRegexOptions_m36999 (ParseQuery_1_t1189 * __this, Regex_t1028 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
 Object_t* ParseQuery_1_EncodeRegex_m37000 (ParseQuery_1_t1189 * __this, Regex_t1028 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereRelatedTo(Parse.ParseObject,System.String)
 ParseQuery_1_t1189 * ParseQuery_1_WhereRelatedTo_m37001 (ParseQuery_1_t1189 * __this, ParseObject_t534 * ___parent, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseSession>::get_JsonString()
 String_t* ParseQuery_1_get_JsonString_m37002 (ParseQuery_1_t1189 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::EnsureNotInstallationQuery()
 void ParseQuery_1_EnsureNotInstallationQuery_m37003 (ParseQuery_1_t1189 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseSession>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 Object_t* ParseQuery_1_U3CFindAsyncU3Eb__34_m37004 (ParseQuery_1_t1189 * __this, Task_1_t1099 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseSession>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 ParseSession_t1188 * ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m37005 (ParseQuery_1_t1189 * __this, Task_1_t1099 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseSession>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
 ParseSession_t1188 * ParseQuery_1_U3CFirstAsyncU3Eb__36_m37006 (Object_t * __this/* static, unused */, Task_1_t1187 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.ParseQuery`1<Parse.ParseSession>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 int32_t ParseQuery_1_U3CCountAsyncU3Eb__38_m37007 (Object_t * __this/* static, unused */, Task_1_t1099 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseSession>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
 ParseSession_t1188 * ParseQuery_1_U3CGetAsyncU3Eb__3a_m37008 (Object_t * __this/* static, unused */, Task_1_t6939 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseSession>::<PrepareObjectsFromResults>b__3c(System.Object)
 ParseSession_t1188 * ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m37009 (ParseQuery_1_t1189 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
