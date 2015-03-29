#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t122;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t1404;
// System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseSession>,Parse.ParseSession>
struct Func_2_t6936;
// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.Int32>
struct Func_2_t1559;
// System.Func`2<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>,Parse.ParseSession>
struct Func_2_t6937;
// System.Object
#include "mscorlib_System_Object.h"
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen_0.h"
// Parse.ParseQuery`1<Parse.ParseSession>
struct ParseQuery_1_t1189  : public Object_t
{
	// System.String Parse.ParseQuery`1<Parse.ParseSession>::className
	String_t* ___className;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::where
	Dictionary_2_t122 * ___where;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Parse.ParseQuery`1<Parse.ParseSession>::orderBy
	ReadOnlyCollection_1_t1404 * ___orderBy;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Parse.ParseQuery`1<Parse.ParseSession>::includes
	ReadOnlyCollection_1_t1404 * ___includes;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Parse.ParseQuery`1<Parse.ParseSession>::selectedKeys
	ReadOnlyCollection_1_t1404 * ___selectedKeys;
	// System.Nullable`1<System.Int32> Parse.ParseQuery`1<Parse.ParseSession>::skip
	Nullable_1_t124  ___skip;
	// System.Nullable`1<System.Int32> Parse.ParseQuery`1<Parse.ParseSession>::limit
	Nullable_1_t124  ___limit;
};
struct ParseQuery_1_t1189_StaticFields{
	// System.Func`2<System.Threading.Tasks.Task`1<T>,T> Parse.ParseQuery`1<Parse.ParseSession>::CS$<>9__CachedAnonymousMethodDelegate37
	Func_2_t6936 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate37;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.Int32> Parse.ParseQuery`1<Parse.ParseSession>::CS$<>9__CachedAnonymousMethodDelegate39
	Func_2_t1559 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate39;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>,T> Parse.ParseQuery`1<Parse.ParseSession>::CS$<>9__CachedAnonymousMethodDelegate3b
	Func_2_t6937 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate3b;
};
