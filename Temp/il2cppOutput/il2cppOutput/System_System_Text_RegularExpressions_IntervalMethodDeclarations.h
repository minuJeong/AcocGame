#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Interval
struct Interval_t2800;
struct Interval_t2800_marshaled;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"

// System.Void System.Text.RegularExpressions.Interval::.ctor(System.Int32,System.Int32)
 void Interval__ctor_m9519 (Interval_t2800 * __this, int32_t ___low, int32_t ___high, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Interval::get_Empty()
 Interval_t2800  Interval_get_Empty_m9520 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsDiscontiguous()
 bool Interval_get_IsDiscontiguous_m9521 (Interval_t2800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsSingleton()
 bool Interval_get_IsSingleton_m9522 (Interval_t2800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsEmpty()
 bool Interval_get_IsEmpty_m9523 (Interval_t2800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interval::get_Size()
 int32_t Interval_get_Size_m9524 (Interval_t2800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::IsDisjoint(System.Text.RegularExpressions.Interval)
 bool Interval_IsDisjoint_m9525 (Interval_t2800 * __this, Interval_t2800  ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::IsAdjacent(System.Text.RegularExpressions.Interval)
 bool Interval_IsAdjacent_m9526 (Interval_t2800 * __this, Interval_t2800  ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Text.RegularExpressions.Interval)
 bool Interval_Contains_m9527 (Interval_t2800 * __this, Interval_t2800  ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Int32)
 bool Interval_Contains_m9528 (Interval_t2800 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Intersects(System.Text.RegularExpressions.Interval)
 bool Interval_Intersects_m9529 (Interval_t2800 * __this, Interval_t2800  ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interval::Merge(System.Text.RegularExpressions.Interval)
 void Interval_Merge_m9530 (Interval_t2800 * __this, Interval_t2800  ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interval::CompareTo(System.Object)
 int32_t Interval_CompareTo_m9531 (Interval_t2800 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Interval_t2800_marshal(const Interval_t2800& unmarshaled, Interval_t2800_marshaled& marshaled);
void Interval_t2800_marshal_back(const Interval_t2800_marshaled& marshaled, Interval_t2800& unmarshaled);
void Interval_t2800_marshal_cleanup(Interval_t2800_marshaled& marshaled);
