﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Evidence
struct Evidence_t3382;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t94;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;

// System.Void System.Security.Policy.Evidence::.ctor()
 void Evidence__ctor_m13561 (Evidence_t3382 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Evidence::get_Count()
 int32_t Evidence_get_Count_m13562 (Evidence_t3382 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::get_IsSynchronized()
 bool Evidence_get_IsSynchronized_m13563 (Evidence_t3382 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Policy.Evidence::get_SyncRoot()
 Object_t * Evidence_get_SyncRoot_m13564 (Evidence_t3382 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.Policy.Evidence::get_HostEvidenceList()
 ArrayList_t94 * Evidence_get_HostEvidenceList_m13565 (Evidence_t3382 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.Policy.Evidence::get_AssemblyEvidenceList()
 ArrayList_t94 * Evidence_get_AssemblyEvidenceList_m13566 (Evidence_t3382 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::CopyTo(System.Array,System.Int32)
 void Evidence_CopyTo_m13567 (Evidence_t3382 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::Equals(System.Object)
 bool Evidence_Equals_m13568 (Evidence_t3382 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Policy.Evidence::GetEnumerator()
 Object_t * Evidence_GetEnumerator_m13569 (Evidence_t3382 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Evidence::GetHashCode()
 int32_t Evidence_GetHashCode_m13570 (Evidence_t3382 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
