#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DateTimeOffset
struct DateTimeOffset_t3689;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t905;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.DateTimeOffset::.ctor(System.DateTime)
 void DateTimeOffset__ctor_m14336 (DateTimeOffset_t3689 * __this, DateTime_t126  ___dateTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.DateTime,System.TimeSpan)
 void DateTimeOffset__ctor_m14337 (DateTimeOffset_t3689 * __this, DateTime_t126  ___dateTime, TimeSpan_t1247  ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
 void DateTimeOffset__ctor_m14338 (DateTimeOffset_t3689 * __this, int64_t ___ticks, TimeSpan_t1247  ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void DateTimeOffset__ctor_m14339 (DateTimeOffset_t3689 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.cctor()
 void DateTimeOffset__cctor_m14340 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::System.IComparable.CompareTo(System.Object)
 int32_t DateTimeOffset_System_IComparable_CompareTo_m14341 (DateTimeOffset_t3689 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void DateTimeOffset_System_Runtime_Serialization_ISerializable_GetObjectData_m14342 (DateTimeOffset_t3689 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
 void DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m14343 (DateTimeOffset_t3689 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
 int32_t DateTimeOffset_CompareTo_m14344 (DateTimeOffset_t3689 * __this, DateTimeOffset_t3689  ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
 bool DateTimeOffset_Equals_m14345 (DateTimeOffset_t3689 * __this, DateTimeOffset_t3689  ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.Object)
 bool DateTimeOffset_Equals_m14346 (DateTimeOffset_t3689 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::GetHashCode()
 int32_t DateTimeOffset_GetHashCode_m14347 (DateTimeOffset_t3689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString()
 String_t* DateTimeOffset_ToString_m14348 (DateTimeOffset_t3689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
 String_t* DateTimeOffset_ToString_m14349 (DateTimeOffset_t3689 * __this, String_t* ___format, Object_t * ___formatProvider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_DateTime()
 DateTime_t126  DateTimeOffset_get_DateTime_m14350 (DateTimeOffset_t3689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTimeOffset::get_Offset()
 TimeSpan_t1247  DateTimeOffset_get_Offset_m14351 (DateTimeOffset_t3689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
 DateTime_t126  DateTimeOffset_get_UtcDateTime_m14352 (DateTimeOffset_t3689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
