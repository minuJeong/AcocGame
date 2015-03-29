#pragma once
#include <stdint.h>
// System.Collections.Generic.IDictionary`2<System.Int64,System.Boolean>
struct IDictionary_2_t6469;
// System.Collections.Generic.IList`1<System.WeakReference>
struct IList_1_t1329;
// System.Func`1<System.Boolean>
struct Func_1_t508;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.ThreadLocal`1<System.Boolean>
struct ThreadLocal_1_t1162  : public Object_t
{
	// System.Boolean System.Threading.ThreadLocal`1<System.Boolean>::disposed
	bool ___disposed;
	// System.Int64 System.Threading.ThreadLocal`1<System.Boolean>::id
	int64_t ___id;
	// System.Func`1<T> System.Threading.ThreadLocal`1<System.Boolean>::valueFactory
	Func_1_t508 * ___valueFactory;
};
struct ThreadLocal_1_t1162_StaticFields{
	// System.Int64 System.Threading.ThreadLocal`1<System.Boolean>::lastId
	int64_t ___lastId;
	// System.Collections.Generic.IList`1<System.WeakReference> System.Threading.ThreadLocal`1<System.Boolean>::allDataDictionaries
	Object_t* ___allDataDictionaries;
	// System.Func`1<T> System.Threading.ThreadLocal`1<System.Boolean>::CS$<>9__CachedAnonymousMethodDelegate1
	Func_1_t508 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate1;
};
struct ThreadLocal_1_t1162_ThreadStaticFields{
	// System.Collections.Generic.IDictionary`2<System.Int64,T> System.Threading.ThreadLocal`1<System.Boolean>::threadLocalData
	Object_t* ___threadLocalData;
};
