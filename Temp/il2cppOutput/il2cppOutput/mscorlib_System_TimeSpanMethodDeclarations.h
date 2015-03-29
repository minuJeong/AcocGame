#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeSpan
struct TimeSpan_t1247;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.TimeSpan::.ctor(System.Int64)
 void TimeSpan__ctor_m14691 (TimeSpan_t1247 * __this, int64_t ___ticks, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
 void TimeSpan__ctor_m14692 (TimeSpan_t1247 * __this, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void TimeSpan__ctor_m14693 (TimeSpan_t1247 * __this, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.cctor()
 void TimeSpan__cctor_m14694 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::CalculateTicks(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 int64_t TimeSpan_CalculateTicks_m14695 (Object_t * __this/* static, unused */, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Days()
 int32_t TimeSpan_get_Days_m14696 (TimeSpan_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Hours()
 int32_t TimeSpan_get_Hours_m14697 (TimeSpan_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Milliseconds()
 int32_t TimeSpan_get_Milliseconds_m14698 (TimeSpan_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Minutes()
 int32_t TimeSpan_get_Minutes_m14699 (TimeSpan_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Seconds()
 int32_t TimeSpan_get_Seconds_m14700 (TimeSpan_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::get_Ticks()
 int64_t TimeSpan_get_Ticks_m14701 (TimeSpan_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalDays()
 double TimeSpan_get_TotalDays_m14702 (TimeSpan_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalHours()
 double TimeSpan_get_TotalHours_m14703 (TimeSpan_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMilliseconds()
 double TimeSpan_get_TotalMilliseconds_m9860 (TimeSpan_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMinutes()
 double TimeSpan_get_TotalMinutes_m14704 (TimeSpan_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalSeconds()
 double TimeSpan_get_TotalSeconds_m14705 (TimeSpan_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Add(System.TimeSpan)
 TimeSpan_t1247  TimeSpan_Add_m14706 (TimeSpan_t1247 * __this, TimeSpan_t1247  ___ts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::Compare(System.TimeSpan,System.TimeSpan)
 int32_t TimeSpan_Compare_m14707 (Object_t * __this/* static, unused */, TimeSpan_t1247  ___t1, TimeSpan_t1247  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.Object)
 int32_t TimeSpan_CompareTo_m14708 (TimeSpan_t1247 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.TimeSpan)
 int32_t TimeSpan_CompareTo_m14709 (TimeSpan_t1247 * __this, TimeSpan_t1247  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.TimeSpan)
 bool TimeSpan_Equals_m14710 (TimeSpan_t1247 * __this, TimeSpan_t1247  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Duration()
 TimeSpan_t1247  TimeSpan_Duration_m14711 (TimeSpan_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.Object)
 bool TimeSpan_Equals_m14712 (TimeSpan_t1247 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
 TimeSpan_t1247  TimeSpan_FromMinutes_m14713 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
 TimeSpan_t1247  TimeSpan_FromSeconds_m6194 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMilliseconds(System.Double)
 TimeSpan_t1247  TimeSpan_FromMilliseconds_m7021 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::From(System.Double,System.Int64)
 TimeSpan_t1247  TimeSpan_From_m14714 (Object_t * __this/* static, unused */, double ___value, int64_t ___tickMultiplicator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
 TimeSpan_t1247  TimeSpan_FromTicks_m9859 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::GetHashCode()
 int32_t TimeSpan_GetHashCode_m14715 (TimeSpan_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Negate()
 TimeSpan_t1247  TimeSpan_Negate_m14716 (TimeSpan_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Subtract(System.TimeSpan)
 TimeSpan_t1247  TimeSpan_Subtract_m14717 (TimeSpan_t1247 * __this, TimeSpan_t1247  ___ts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeSpan::ToString()
 String_t* TimeSpan_ToString_m14718 (TimeSpan_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
 TimeSpan_t1247  TimeSpan_op_Addition_m14719 (Object_t * __this/* static, unused */, TimeSpan_t1247  ___t1, TimeSpan_t1247  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_Equality_m14720 (Object_t * __this/* static, unused */, TimeSpan_t1247  ___t1, TimeSpan_t1247  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThan(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_GreaterThan_m14721 (Object_t * __this/* static, unused */, TimeSpan_t1247  ___t1, TimeSpan_t1247  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThanOrEqual(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_GreaterThanOrEqual_m14722 (Object_t * __this/* static, unused */, TimeSpan_t1247  ___t1, TimeSpan_t1247  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_Inequality_m14723 (Object_t * __this/* static, unused */, TimeSpan_t1247  ___t1, TimeSpan_t1247  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThan(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_LessThan_m14724 (Object_t * __this/* static, unused */, TimeSpan_t1247  ___t1, TimeSpan_t1247  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThanOrEqual(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_LessThanOrEqual_m14725 (Object_t * __this/* static, unused */, TimeSpan_t1247  ___t1, TimeSpan_t1247  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
 TimeSpan_t1247  TimeSpan_op_Subtraction_m14726 (Object_t * __this/* static, unused */, TimeSpan_t1247  ___t1, TimeSpan_t1247  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
