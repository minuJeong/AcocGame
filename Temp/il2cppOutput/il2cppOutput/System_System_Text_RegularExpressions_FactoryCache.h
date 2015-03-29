#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t48;
// System.Text.RegularExpressions.MRUList
struct MRUList_t2780;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t2773  : public Object_t
{
	// System.Int32 System.Text.RegularExpressions.FactoryCache::capacity
	int32_t ___capacity;
	// System.Collections.Hashtable System.Text.RegularExpressions.FactoryCache::factories
	Hashtable_t48 * ___factories;
	// System.Text.RegularExpressions.MRUList System.Text.RegularExpressions.FactoryCache::mru_list
	MRUList_t2780 * ___mru_list;
};
