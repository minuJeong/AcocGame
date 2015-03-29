#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t1393;
// System.Text.RegularExpressions.Group
struct Group_t1396;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;

// System.Void System.Text.RegularExpressions.GroupCollection::.ctor(System.Int32,System.Int32)
 void GroupCollection__ctor_m9369 (GroupCollection_t1393 * __this, int32_t ___n, int32_t ___gap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.GroupCollection::get_Count()
 int32_t GroupCollection_get_Count_m9370 (GroupCollection_t1393 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.GroupCollection::get_IsSynchronized()
 bool GroupCollection_get_IsSynchronized_m9371 (GroupCollection_t1393 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.Int32)
 Group_t1396 * GroupCollection_get_Item_m9372 (GroupCollection_t1393 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.GroupCollection::SetValue(System.Text.RegularExpressions.Group,System.Int32)
 void GroupCollection_SetValue_m9373 (GroupCollection_t1393 * __this, Group_t1396 * ___g, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.String)
 Group_t1396 * GroupCollection_get_Item_m6319 (GroupCollection_t1393 * __this, String_t* ___groupName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.GroupCollection::get_SyncRoot()
 Object_t * GroupCollection_get_SyncRoot_m9374 (GroupCollection_t1393 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.GroupCollection::CopyTo(System.Array,System.Int32)
 void GroupCollection_CopyTo_m9375 (GroupCollection_t1393 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.GroupCollection::GetEnumerator()
 Object_t * GroupCollection_GetEnumerator_m9376 (GroupCollection_t1393 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
