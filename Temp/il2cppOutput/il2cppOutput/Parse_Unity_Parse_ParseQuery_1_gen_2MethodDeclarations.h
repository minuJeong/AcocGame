#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseUser>
struct ParseQuery_1_t1205;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t1010;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1178;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseUser>>
struct IEnumerable_1_t6834;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1028;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>
struct Task_1_t6835;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t535;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t994;
// Parse.ParseUser
struct ParseUser_t391;
// System.Collections.Generic.IEnumerable`1<Parse.ParseUser>
struct IEnumerable_1_t6836;
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

// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
 void ParseQuery_1__ctor_m36180 (ParseQuery_1_t1205 * __this, ParseQuery_1_t1205 * ___source, Object_t* ___where, Object_t* ___replacementOrderBy, Object_t* ___thenBy, Nullable_1_t124  ___skip, Nullable_1_t124  ___limit, Object_t* ___includes, Object_t* ___selectedKeys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
 HashSet_1_t1178 * ParseQuery_1_MergeIncludes_m36181 (ParseQuery_1_t1205 * __this, Object_t* ___includes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
 HashSet_1_t1178 * ParseQuery_1_MergeSelectedKeys_m36182 (ParseQuery_1_t1205 * __this, Object_t* ___selectedKeys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 Object_t* ParseQuery_1_MergeWhereClauses_m36183 (ParseQuery_1_t1205 * __this, Object_t* ___where, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor()
 void ParseQuery_1__ctor_m6865 (ParseQuery_1_t1205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor(System.String)
 void ParseQuery_1__ctor_m36184 (ParseQuery_1_t1205 * __this, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
 ParseQuery_1_t1205 * ParseQuery_1_Or_m36185 (Object_t * __this/* static, unused */, Object_t* ___queries, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::OrderBy(System.String)
 ParseQuery_1_t1205 * ParseQuery_1_OrderBy_m36186 (ParseQuery_1_t1205 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::OrderByDescending(System.String)
 ParseQuery_1_t1205 * ParseQuery_1_OrderByDescending_m36187 (ParseQuery_1_t1205 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::ThenBy(System.String)
 ParseQuery_1_t1205 * ParseQuery_1_ThenBy_m36188 (ParseQuery_1_t1205 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::ThenByDescending(System.String)
 ParseQuery_1_t1205 * ParseQuery_1_ThenByDescending_m36189 (ParseQuery_1_t1205 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Include(System.String)
 ParseQuery_1_t1205 * ParseQuery_1_Include_m36190 (ParseQuery_1_t1205 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Select(System.String)
 ParseQuery_1_t1205 * ParseQuery_1_Select_m36191 (ParseQuery_1_t1205 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Skip(System.Int32)
 ParseQuery_1_t1205 * ParseQuery_1_Skip_m36192 (ParseQuery_1_t1205 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Limit(System.Int32)
 ParseQuery_1_t1205 * ParseQuery_1_Limit_m36193 (ParseQuery_1_t1205 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereContains(System.String,System.String)
 ParseQuery_1_t1205 * ParseQuery_1_WhereContains_m36194 (ParseQuery_1_t1205 * __this, String_t* ___key, String_t* ___substring, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereDoesNotExist(System.String)
 ParseQuery_1_t1205 * ParseQuery_1_WhereDoesNotExist_m36195 (ParseQuery_1_t1205 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereEndsWith(System.String,System.String)
 ParseQuery_1_t1205 * ParseQuery_1_WhereEndsWith_m36196 (ParseQuery_1_t1205 * __this, String_t* ___key, String_t* ___suffix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereEqualTo(System.String,System.Object)
 ParseQuery_1_t1205 * ParseQuery_1_WhereEqualTo_m36197 (ParseQuery_1_t1205 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereExists(System.String)
 ParseQuery_1_t1205 * ParseQuery_1_WhereExists_m36198 (ParseQuery_1_t1205 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereGreaterThan(System.String,System.Object)
 ParseQuery_1_t1205 * ParseQuery_1_WhereGreaterThan_m36199 (ParseQuery_1_t1205 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereGreaterThanOrEqualTo(System.String,System.Object)
 ParseQuery_1_t1205 * ParseQuery_1_WhereGreaterThanOrEqualTo_m36200 (ParseQuery_1_t1205 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereLessThan(System.String,System.Object)
 ParseQuery_1_t1205 * ParseQuery_1_WhereLessThan_m36201 (ParseQuery_1_t1205 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereLessThanOrEqualTo(System.String,System.Object)
 ParseQuery_1_t1205 * ParseQuery_1_WhereLessThanOrEqualTo_m36202 (ParseQuery_1_t1205 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
 ParseQuery_1_t1205 * ParseQuery_1_WhereMatches_m36203 (ParseQuery_1_t1205 * __this, String_t* ___key, Regex_t1028 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
 ParseQuery_1_t1205 * ParseQuery_1_WhereMatches_m36204 (ParseQuery_1_t1205 * __this, String_t* ___key, Regex_t1028 * ___regex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.String,System.String)
 ParseQuery_1_t1205 * ParseQuery_1_WhereMatches_m36205 (ParseQuery_1_t1205 * __this, String_t* ___key, String_t* ___pattern, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.String)
 ParseQuery_1_t1205 * ParseQuery_1_WhereMatches_m36206 (ParseQuery_1_t1205 * __this, String_t* ___key, String_t* ___pattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereNear(System.String,Parse.ParseGeoPoint)
 ParseQuery_1_t1205 * ParseQuery_1_WhereNear_m36207 (ParseQuery_1_t1205 * __this, String_t* ___key, ParseGeoPoint_t1117  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereNotEqualTo(System.String,System.Object)
 ParseQuery_1_t1205 * ParseQuery_1_WhereNotEqualTo_m36208 (ParseQuery_1_t1205 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereStartsWith(System.String,System.String)
 ParseQuery_1_t1205 * ParseQuery_1_WhereStartsWith_m36209 (ParseQuery_1_t1205 * __this, String_t* ___key, String_t* ___suffix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
 ParseQuery_1_t1205 * ParseQuery_1_WhereWithinGeoBox_m36210 (ParseQuery_1_t1205 * __this, String_t* ___key, ParseGeoPoint_t1117  ___southwest, ParseGeoPoint_t1117  ___northeast, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
 ParseQuery_1_t1205 * ParseQuery_1_WhereWithinDistance_m36211 (ParseQuery_1_t1205 * __this, String_t* ___key, ParseGeoPoint_t1117  ___point, ParseGeoDistance_t1116  ___maxDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseUser>::FindAsync()
 Task_1_t6835 * ParseQuery_1_FindAsync_m36212 (ParseQuery_1_t1205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseUser>::FindAsync(System.Threading.CancellationToken)
 Task_1_t6835 * ParseQuery_1_FindAsync_m36213 (ParseQuery_1_t1205 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstOrDefaultAsync()
 Task_1_t535 * ParseQuery_1_FirstOrDefaultAsync_m36214 (ParseQuery_1_t1205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstOrDefaultAsync(System.Threading.CancellationToken)
 Task_1_t535 * ParseQuery_1_FirstOrDefaultAsync_m36215 (ParseQuery_1_t1205 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstAsync()
 Task_1_t535 * ParseQuery_1_FirstAsync_m36216 (ParseQuery_1_t1205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstAsync(System.Threading.CancellationToken)
 Task_1_t535 * ParseQuery_1_FirstAsync_m36217 (ParseQuery_1_t1205 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CountAsync()
 Task_1_t994 * ParseQuery_1_CountAsync_m36218 (ParseQuery_1_t1205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CountAsync(System.Threading.CancellationToken)
 Task_1_t994 * ParseQuery_1_CountAsync_m36219 (ParseQuery_1_t1205 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::GetAsync(System.String)
 Task_1_t535 * ParseQuery_1_GetAsync_m36220 (ParseQuery_1_t1205 * __this, String_t* ___objectId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::GetAsync(System.String,System.Threading.CancellationToken)
 Task_1_t535 * ParseQuery_1_GetAsync_m36221 (ParseQuery_1_t1205 * __this, String_t* ___objectId, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseUser>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 ParseUser_t391 * ParseQuery_1_CreateParseObjectFromQueryResult_m36222 (ParseQuery_1_t1205 * __this, Object_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseUser>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
 Object_t* ParseQuery_1_PrepareObjectsFromResults_m36223 (ParseQuery_1_t1205 * __this, Object_t* ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseQuery`1<Parse.ParseUser>::GetConstraint(System.String)
 Object_t * ParseQuery_1_GetConstraint_m36224 (ParseQuery_1_t1205 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::BuildParameters(System.Boolean)
 Object_t* ParseQuery_1_BuildParameters_m36225 (ParseQuery_1_t1205 * __this, bool ___includeClassName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseUser>::RegexQuote(System.String)
 String_t* ParseQuery_1_RegexQuote_m36226 (ParseQuery_1_t1205 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseUser>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
 String_t* ParseQuery_1_GetRegexOptions_m36227 (ParseQuery_1_t1205 * __this, Regex_t1028 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
 Object_t* ParseQuery_1_EncodeRegex_m36228 (ParseQuery_1_t1205 * __this, Regex_t1028 * ___regex, String_t* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereRelatedTo(Parse.ParseObject,System.String)
 ParseQuery_1_t1205 * ParseQuery_1_WhereRelatedTo_m36229 (ParseQuery_1_t1205 * __this, ParseObject_t534 * ___parent, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseQuery`1<Parse.ParseUser>::get_JsonString()
 String_t* ParseQuery_1_get_JsonString_m36230 (ParseQuery_1_t1205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::EnsureNotInstallationQuery()
 void ParseQuery_1_EnsureNotInstallationQuery_m36231 (ParseQuery_1_t1205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseUser>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 Object_t* ParseQuery_1_U3CFindAsyncU3Eb__34_m36232 (ParseQuery_1_t1205 * __this, Task_1_t1099 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseUser>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 ParseUser_t391 * ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m36233 (ParseQuery_1_t1205 * __this, Task_1_t1099 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseUser>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
 ParseUser_t391 * ParseQuery_1_U3CFirstAsyncU3Eb__36_m36234 (Object_t * __this/* static, unused */, Task_1_t535 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.ParseQuery`1<Parse.ParseUser>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 int32_t ParseQuery_1_U3CCountAsyncU3Eb__38_m36235 (Object_t * __this/* static, unused */, Task_1_t1099 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseUser>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
 ParseUser_t391 * ParseQuery_1_U3CGetAsyncU3Eb__3a_m36236 (Object_t * __this/* static, unused */, Task_1_t6835 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Parse.ParseQuery`1<Parse.ParseUser>::<PrepareObjectsFromResults>b__3c(System.Object)
 ParseUser_t391 * ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m36237 (ParseQuery_1_t1205 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
