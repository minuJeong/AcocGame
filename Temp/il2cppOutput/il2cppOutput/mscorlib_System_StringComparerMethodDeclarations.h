﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.StringComparer
struct StringComparer_t2666;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Void System.StringComparer::.ctor()
 void StringComparer__ctor_m14672 (StringComparer_t2666 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.StringComparer::.cctor()
 void StringComparer__cctor_m14673 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
 StringComparer_t2666 * StringComparer_get_OrdinalIgnoreCase_m9074 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.StringComparer::Compare(System.Object,System.Object)
 int32_t StringComparer_Compare_m14674 (StringComparer_t2666 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.StringComparer::Equals(System.Object,System.Object)
 bool StringComparer_Equals_m14675 (StringComparer_t2666 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.StringComparer::GetHashCode(System.Object)
 int32_t StringComparer_GetHashCode_m14676 (StringComparer_t2666 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.StringComparer::Compare(System.String,System.String)
// System.Boolean System.StringComparer::Equals(System.String,System.String)
// System.Int32 System.StringComparer::GetHashCode(System.String)