#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.StringBuilder
struct StringBuilder_t531;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Char[]
struct CharU5BU5D_t450;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.IFormatProvider
struct IFormatProvider_t905;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32)
 void StringBuilder__ctor_m13774 (StringBuilder_t531 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
 void StringBuilder__ctor_m13775 (StringBuilder_t531 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, int32_t ___capacity, int32_t ___maxCapacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
 void StringBuilder__ctor_m2748 (StringBuilder_t531 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
 void StringBuilder__ctor_m5309 (StringBuilder_t531 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String)
 void StringBuilder__ctor_m4093 (StringBuilder_t531 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void StringBuilder__ctor_m13776 (StringBuilder_t531 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void StringBuilder_System_Runtime_Serialization_ISerializable_GetObjectData_m13777 (StringBuilder_t531 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Capacity()
 int32_t StringBuilder_get_Capacity_m13778 (StringBuilder_t531 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Capacity(System.Int32)
 void StringBuilder_set_Capacity_m13779 (StringBuilder_t531 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Length()
 int32_t StringBuilder_get_Length_m5298 (StringBuilder_t531 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
 void StringBuilder_set_Length_m9982 (StringBuilder_t531 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
 uint16_t StringBuilder_get_Chars_m13780 (StringBuilder_t531 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Chars(System.Int32,System.Char)
 void StringBuilder_set_Chars_m6308 (StringBuilder_t531 * __this, int32_t ___index, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString()
 String_t* StringBuilder_ToString_m2751 (StringBuilder_t531 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString(System.Int32,System.Int32)
 String_t* StringBuilder_ToString_m13781 (StringBuilder_t531 * __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
 StringBuilder_t531 * StringBuilder_Remove_m5299 (StringBuilder_t531 * __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String)
 StringBuilder_t531 * StringBuilder_Replace_m13782 (StringBuilder_t531 * __this, String_t* ___oldValue, String_t* ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String,System.Int32,System.Int32)
 StringBuilder_t531 * StringBuilder_Replace_m13783 (StringBuilder_t531 * __this, String_t* ___oldValue, String_t* ___newValue, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[])
 StringBuilder_t531 * StringBuilder_Append_m9984 (StringBuilder_t531 * __this, CharU5BU5D_t450* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
 StringBuilder_t531 * StringBuilder_Append_m4750 (StringBuilder_t531 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
 StringBuilder_t531 * StringBuilder_Append_m9977 (StringBuilder_t531 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int64)
 StringBuilder_t531 * StringBuilder_Append_m9871 (StringBuilder_t531 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
 StringBuilder_t531 * StringBuilder_Append_m7825 (StringBuilder_t531 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
 StringBuilder_t531 * StringBuilder_Append_m4357 (StringBuilder_t531 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
 StringBuilder_t531 * StringBuilder_Append_m13784 (StringBuilder_t531 * __this, uint16_t ___value, int32_t ___repeatCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
 StringBuilder_t531 * StringBuilder_Append_m13785 (StringBuilder_t531 * __this, CharU5BU5D_t450* ___value, int32_t ___startIndex, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
 StringBuilder_t531 * StringBuilder_Append_m9872 (StringBuilder_t531 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
 StringBuilder_t531 * StringBuilder_AppendLine_m4012 (StringBuilder_t531 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
 StringBuilder_t531 * StringBuilder_AppendLine_m4011 (StringBuilder_t531 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
 StringBuilder_t531 * StringBuilder_AppendFormat_m7879 (StringBuilder_t531 * __this, String_t* ___format, ObjectU5BU5D_t5* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object[])
 StringBuilder_t531 * StringBuilder_AppendFormat_m13786 (StringBuilder_t531 * __this, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t5* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
 StringBuilder_t531 * StringBuilder_AppendFormat_m2749 (StringBuilder_t531 * __this, String_t* ___format, Object_t * ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
 StringBuilder_t531 * StringBuilder_AppendFormat_m2750 (StringBuilder_t531 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
 StringBuilder_t531 * StringBuilder_Insert_m13787 (StringBuilder_t531 * __this, int32_t ___index, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Char)
 StringBuilder_t531 * StringBuilder_Insert_m13788 (StringBuilder_t531 * __this, int32_t ___index, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String,System.Int32)
 StringBuilder_t531 * StringBuilder_Insert_m13789 (StringBuilder_t531 * __this, int32_t ___index, String_t* ___value, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::InternalEnsureCapacity(System.Int32)
 void StringBuilder_InternalEnsureCapacity_m13790 (StringBuilder_t531 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
