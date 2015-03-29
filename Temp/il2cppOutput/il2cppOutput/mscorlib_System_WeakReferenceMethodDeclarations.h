#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.WeakReference
struct WeakReference_t983;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.WeakReference::.ctor()
 void WeakReference__ctor_m14774 (WeakReference_t983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Object)
 void WeakReference__ctor_m14775 (WeakReference_t983 * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
 void WeakReference__ctor_m14776 (WeakReference_t983 * __this, Object_t * ___target, bool ___trackResurrection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WeakReference__ctor_m14777 (WeakReference_t983 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::AllocateHandle(System.Object)
 void WeakReference_AllocateHandle_m14778 (WeakReference_t983 * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WeakReference::get_IsAlive()
 bool WeakReference_get_IsAlive_m14779 (WeakReference_t983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.WeakReference::get_Target()
 Object_t * WeakReference_get_Target_m14780 (WeakReference_t983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WeakReference::get_TrackResurrection()
 bool WeakReference_get_TrackResurrection_m14781 (WeakReference_t983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::Finalize()
 void WeakReference_Finalize_m14782 (WeakReference_t983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WeakReference_GetObjectData_m14783 (WeakReference_t983 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
