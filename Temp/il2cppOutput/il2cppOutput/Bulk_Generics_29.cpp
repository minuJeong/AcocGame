#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo IList_1_t14751_il2cpp_TypeInfo;

// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IList`1<UnityEngine.ISerializationCallbackReceiver>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.ISerializationCallbackReceiver>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.ISerializationCallbackReceiver>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.ISerializationCallbackReceiver>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.ISerializationCallbackReceiver>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.ISerializationCallbackReceiver>
extern MethodInfo IList_1_get_Item_m111509_MethodInfo;
extern MethodInfo IList_1_set_Item_m111510_MethodInfo;
static PropertyInfo IList_1_t14751____Item_PropertyInfo = 
{
	&IList_1_t14751_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111509_MethodInfo/* get */
	, &IList_1_set_Item_m111510_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14751_PropertyInfos[] =
{
	&IList_1_t14751____Item_PropertyInfo,
	NULL
};
extern Il2CppType ISerializationCallbackReceiver_t764_0_0_0;
static ParameterInfo IList_1_t14751_IList_1_IndexOf_m111511_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ISerializationCallbackReceiver_t764_0_0_0},
};
extern TypeInfo IList_1_t14751_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.ISerializationCallbackReceiver>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111511_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14751_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t14751_IList_1_IndexOf_m111511_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ISerializationCallbackReceiver_t764_0_0_0;
static ParameterInfo IList_1_t14751_IList_1_Insert_m111512_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ISerializationCallbackReceiver_t764_0_0_0},
};
extern TypeInfo IList_1_t14751_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.ISerializationCallbackReceiver>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111512_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14751_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Object_t/* invoker_method */
	, IList_1_t14751_IList_1_Insert_m111512_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14751_IList_1_RemoveAt_m111513_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14751_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.ISerializationCallbackReceiver>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111513_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14751_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14751_IList_1_RemoveAt_m111513_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14751_IList_1_get_Item_m111509_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14751_il2cpp_TypeInfo;
extern Il2CppType ISerializationCallbackReceiver_t764_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.ISerializationCallbackReceiver>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111509_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14751_il2cpp_TypeInfo/* declaring_type */
	, &ISerializationCallbackReceiver_t764_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t14751_IList_1_get_Item_m111509_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ISerializationCallbackReceiver_t764_0_0_0;
static ParameterInfo IList_1_t14751_IList_1_set_Item_m111510_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ISerializationCallbackReceiver_t764_0_0_0},
};
extern TypeInfo IList_1_t14751_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.ISerializationCallbackReceiver>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111510_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14751_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Object_t/* invoker_method */
	, IList_1_t14751_IList_1_set_Item_m111510_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t14751_MethodInfos[] =
{
	&IList_1_IndexOf_m111511_MethodInfo,
	&IList_1_Insert_m111512_MethodInfo,
	&IList_1_RemoveAt_m111513_MethodInfo,
	&IList_1_get_Item_m111509_MethodInfo,
	&IList_1_set_Item_m111510_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14750_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14752_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14751_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14750_il2cpp_TypeInfo,
	&IEnumerable_1_t14752_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14751_0_0_0;
extern Il2CppType IList_1_t14751_1_0_0;
struct IList_1_t14751;
extern TypeInfo IList_1_t14751_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14751_GenericClass;
extern CustomAttributesCache IList_1_t3845__CustomAttributeCache;
TypeInfo IList_1_t14751_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14751_MethodInfos/* methods */
	, IList_1_t14751_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14751_il2cpp_TypeInfo/* element_class */
	, IList_1_t14751_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3845__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14751_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14751_0_0_0/* byval_arg */
	, &IList_1_t14751_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14751_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Image>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_129.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t5533_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Image>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_129MethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_Image.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_127.h"
extern TypeInfo ObjectU5BU5D_t5_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t5533_il2cpp_TypeInfo;
extern TypeInfo Image_t665_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t5534_il2cpp_TypeInfo;
extern TypeInfo Void_t40_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_127MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m25984_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m25986_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Image>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Image>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Image>
extern Il2CppType ObjectU5BU5D_t5_0_0_33;
FieldInfo CachedInvokableCall_1_t5533____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t5_0_0_33/* type */
	, &CachedInvokableCall_1_t5533_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t5533, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t5533_FieldInfos[] =
{
	&CachedInvokableCall_1_t5533____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t111_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
extern Il2CppType Image_t665_0_0_0;
static ParameterInfo CachedInvokableCall_1_t5533_CachedInvokableCall_1__ctor_m25982_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t111_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &Image_t665_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t5533_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Image>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m25982_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m16515_gshared/* method */
	, &CachedInvokableCall_1_t5533_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t5533_CachedInvokableCall_1__ctor_m25982_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t5_0_0_0;
static ParameterInfo CachedInvokableCall_1_t5533_CachedInvokableCall_1_Invoke_m25983_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t5_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t5533_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Image>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m25983_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m16517_gshared/* method */
	, &CachedInvokableCall_1_t5533_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, CachedInvokableCall_1_t5533_CachedInvokableCall_1_Invoke_m25983_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CachedInvokableCall_1_t5533_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m25982_MethodInfo,
	&CachedInvokableCall_1_Invoke_m25983_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m25983_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m25987_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t5533_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&CachedInvokableCall_1_Invoke_m25983_MethodInfo,
	&InvokableCall_1_Find_m25987_MethodInfo,
};
extern Il2CppType UnityAction_1_t5535_0_0_0;
extern TypeInfo UnityAction_1_t5535_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisImage_t665_m94154_MethodInfo;
extern TypeInfo Image_t665_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m25989_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m25984_MethodInfo;
extern TypeInfo Image_t665_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m25986_MethodInfo;
static void* CachedInvokableCall_1_t5533_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t5535_0_0_0,
	&UnityAction_1_t5535_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisImage_t665_m94154_MethodInfo,
	&Image_t665_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m25989_MethodInfo,
	&InvokableCall_1__ctor_m25984_MethodInfo,
	&Image_t665_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m25986_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t5533_0_0_0;
extern Il2CppType CachedInvokableCall_1_t5533_1_0_0;
extern TypeInfo InvokableCall_1_t5534_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t5533;
extern TypeInfo CachedInvokableCall_1_t5533_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t5533_GenericClass;
TypeInfo CachedInvokableCall_1_t5533_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t5533_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t5533_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t5534_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t5533_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t5533_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t5533_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t5533_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t5533_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t5533_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t5533_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t5533)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_1_t5534_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<UnityEngine.UI.Image>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_133.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo InvokableCall_1_t5534_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t5535_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t401_il2cpp_TypeInfo;
extern TypeInfo Image_t665_il2cpp_TypeInfo;
extern TypeInfo Void_t40_il2cpp_TypeInfo;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<UnityEngine.UI.Image>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_133MethodDeclarations.h"
extern Il2CppType UnityAction_1_t5535_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m8993_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m385_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m9174_MethodInfo;
extern MethodInfo Delegate_Combine_m4230_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m8992_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1970_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisImage_t665_m94154_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m8994_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m25989_MethodInfo;
extern MethodInfo Delegate_get_Target_m9170_MethodInfo;
extern MethodInfo Delegate_get_Method_m9168_MethodInfo;
struct BaseInvokableCall_t2624;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
struct BaseInvokableCall_t2624;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
 void BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m90272_gshared (Object_t * __this/* static, unused */, Object_t * p0, MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m90272(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m90272_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.UI.Image>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.UI.Image>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisImage_t665_m94154(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m90272_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisImage_t665_m94154_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>
extern Il2CppType UnityAction_1_t5535_0_0_1;
FieldInfo InvokableCall_1_t5534____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t5535_0_0_1/* type */
	, &InvokableCall_1_t5534_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t5534, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t5534_FieldInfos[] =
{
	&InvokableCall_1_t5534____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
static ParameterInfo InvokableCall_1_t5534_InvokableCall_1__ctor_m25984_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo InvokableCall_1_t5534_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m25984_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m16518_gshared/* method */
	, &InvokableCall_1_t5534_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t5534_InvokableCall_1__ctor_m25984_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UnityAction_1_t5535_0_0_0;
static ParameterInfo InvokableCall_1_t5534_InvokableCall_1__ctor_m25985_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t5535_0_0_0},
};
extern TypeInfo InvokableCall_1_t5534_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m25985_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m16519_gshared/* method */
	, &InvokableCall_1_t5534_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InvokableCall_1_t5534_InvokableCall_1__ctor_m25985_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t5_0_0_0;
static ParameterInfo InvokableCall_1_t5534_InvokableCall_1_Invoke_m25986_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t5_0_0_0},
};
extern TypeInfo InvokableCall_1_t5534_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m25986_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m16520_gshared/* method */
	, &InvokableCall_1_t5534_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InvokableCall_1_t5534_InvokableCall_1_Invoke_m25986_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
static ParameterInfo InvokableCall_1_t5534_InvokableCall_1_Find_m25987_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo InvokableCall_1_t5534_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m25987_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m16521_gshared/* method */
	, &InvokableCall_1_t5534_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t5534_InvokableCall_1_Find_m25987_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InvokableCall_1_t5534_MethodInfos[] =
{
	&InvokableCall_1__ctor_m25984_MethodInfo,
	&InvokableCall_1__ctor_m25985_MethodInfo,
	&InvokableCall_1_Invoke_m25986_MethodInfo,
	&InvokableCall_1_Find_m25987_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m25986_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m25987_MethodInfo;
static MethodInfo* InvokableCall_1_t5534_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&InvokableCall_1_Invoke_m25986_MethodInfo,
	&InvokableCall_1_Find_m25987_MethodInfo,
};
extern Il2CppType UnityAction_1_t5535_0_0_0;
extern TypeInfo UnityAction_1_t5535_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisImage_t665_m94154_MethodInfo;
extern TypeInfo Image_t665_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m25989_MethodInfo;
static void* InvokableCall_1_t5534_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t5535_0_0_0,
	&UnityAction_1_t5535_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisImage_t665_m94154_MethodInfo,
	&Image_t665_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m25989_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t5534_0_0_0;
extern Il2CppType InvokableCall_1_t5534_1_0_0;
extern TypeInfo BaseInvokableCall_t2624_il2cpp_TypeInfo;
struct InvokableCall_1_t5534;
extern TypeInfo InvokableCall_1_t5534_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t5534_GenericClass;
TypeInfo InvokableCall_1_t5534_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t5534_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t5534_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t2624_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t5534_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t5534_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t5534_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t5534_0_0_0/* byval_arg */
	, &InvokableCall_1_t5534_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t5534_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t5534_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t5534)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t5535_il2cpp_TypeInfo;

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.Image>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.Image>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.UI.Image>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.Image>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.Image>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t39_0_0_0;
static ParameterInfo UnityAction_1_t5535_UnityAction_1__ctor_m25988_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t39_0_0_0},
};
extern TypeInfo UnityAction_1_t5535_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_IntPtr_t39 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.Image>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m25988_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m16522_gshared/* method */
	, &UnityAction_1_t5535_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_IntPtr_t39/* invoker_method */
	, UnityAction_1_t5535_UnityAction_1__ctor_m25988_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Image_t665_0_0_0;
static ParameterInfo UnityAction_1_t5535_UnityAction_1_Invoke_m25989_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &Image_t665_0_0_0},
};
extern TypeInfo UnityAction_1_t5535_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.Image>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m25989_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m16523_gshared/* method */
	, &UnityAction_1_t5535_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityAction_1_t5535_UnityAction_1_Invoke_m25989_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Image_t665_0_0_0;
extern Il2CppType AsyncCallback_t35_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t5535_UnityAction_1_BeginInvoke_m25990_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &Image_t665_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t35_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t5535_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t34_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.UI.Image>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m25990_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m16524_gshared/* method */
	, &UnityAction_1_t5535_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t34_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t5535_UnityAction_1_BeginInvoke_m25990_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t34_0_0_0;
static ParameterInfo UnityAction_1_t5535_UnityAction_1_EndInvoke_m25991_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t34_0_0_0},
};
extern TypeInfo UnityAction_1_t5535_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.Image>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m25991_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m16525_gshared/* method */
	, &UnityAction_1_t5535_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityAction_1_t5535_UnityAction_1_EndInvoke_m25991_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* UnityAction_1_t5535_MethodInfos[] =
{
	&UnityAction_1__ctor_m25988_MethodInfo,
	&UnityAction_1_Invoke_m25989_MethodInfo,
	&UnityAction_1_BeginInvoke_m25990_MethodInfo,
	&UnityAction_1_EndInvoke_m25991_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m469_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m470_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m471_MethodInfo;
extern MethodInfo MulticastDelegate_DynamicInvokeImpl_m472_MethodInfo;
extern MethodInfo Delegate_Clone_m473_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m471_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m474_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m475_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m476_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m25989_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m25990_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m25991_MethodInfo;
static MethodInfo* UnityAction_1_t5535_VTable[] =
{
	&MulticastDelegate_Equals_m469_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&MulticastDelegate_GetHashCode_m470_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&MulticastDelegate_GetObjectData_m471_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m472_MethodInfo,
	&Delegate_Clone_m473_MethodInfo,
	&MulticastDelegate_GetObjectData_m471_MethodInfo,
	&MulticastDelegate_GetInvocationList_m474_MethodInfo,
	&MulticastDelegate_CombineImpl_m475_MethodInfo,
	&MulticastDelegate_RemoveImpl_m476_MethodInfo,
	&UnityAction_1_Invoke_m25989_MethodInfo,
	&UnityAction_1_BeginInvoke_m25990_MethodInfo,
	&UnityAction_1_EndInvoke_m25991_MethodInfo,
};
extern TypeInfo ICloneable_t84_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t85_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t5535_InterfacesOffsets[] = 
{
	{ &ICloneable_t84_il2cpp_TypeInfo, 4},
	{ &ISerializable_t85_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t5535_0_0_0;
extern Il2CppType UnityAction_1_t5535_1_0_0;
extern TypeInfo MulticastDelegate_t38_il2cpp_TypeInfo;
struct UnityAction_1_t5535;
extern TypeInfo UnityAction_1_t5535_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t5535_GenericClass;
TypeInfo UnityAction_1_t5535_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t5535_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t38_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t5535_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t5535_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t5535_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t5535_0_0_0/* byval_arg */
	, &UnityAction_1_t5535_1_0_0/* this_arg */
	, UnityAction_1_t5535_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t5535_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t5535)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13099_il2cpp_TypeInfo;

// UnityEngine.UI.Image/Type
#include "UnityEngine_UI_UnityEngine_UI_Image_Type.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Type>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Type>
extern MethodInfo IEnumerator_1_get_Current_m111514_MethodInfo;
static PropertyInfo IEnumerator_1_t13099____Current_PropertyInfo = 
{
	&IEnumerator_1_t13099_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111514_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13099_PropertyInfos[] =
{
	&IEnumerator_1_t13099____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t13099_il2cpp_TypeInfo;
extern Il2CppType Type_t657_0_0_0;
extern void* RuntimeInvoker_Type_t657 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Type>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111514_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13099_il2cpp_TypeInfo/* declaring_type */
	, &Type_t657_0_0_0/* return_type */
	, RuntimeInvoker_Type_t657/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t13099_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111514_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t13099_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13099_0_0_0;
extern Il2CppType IEnumerator_1_t13099_1_0_0;
struct IEnumerator_1_t13099;
extern TypeInfo IEnumerator_1_t13099_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t13099_GenericClass;
TypeInfo IEnumerator_1_t13099_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13099_MethodInfos/* methods */
	, IEnumerator_1_t13099_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13099_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13099_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13099_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13099_0_0_0/* byval_arg */
	, &IEnumerator_1_t13099_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13099_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_333.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5536_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_333MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo InternalEnumerator_1_t5536_il2cpp_TypeInfo;
extern TypeInfo Type_t657_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m25997_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5142_MethodInfo;
extern MethodInfo Array_get_Length_m7860_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisType_t657_m94156_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/Type>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/Type>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisType_t657_m94156 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisType_t657_m94156_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25992_MethodInfo;
 void InternalEnumerator_1__ctor_m25992 (InternalEnumerator_1_t5536 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25993_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25993 (InternalEnumerator_1_t5536 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25994_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25994 (InternalEnumerator_1_t5536 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25997(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25997_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Type_t657_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25995_MethodInfo;
 void InternalEnumerator_1_Dispose_m25995 (InternalEnumerator_1_t5536 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25996_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25996 (InternalEnumerator_1_t5536 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7860(L_1, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		__this->___idx = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m25997_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m25997 (InternalEnumerator_1_t5536 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_1, (String_t*) &_stringLiteral2292, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t935 * L_3 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_3, (String_t*) &_stringLiteral2293, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7860(L_5, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisType_t657_m94156(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisType_t657_m94156_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5536____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5536_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5536, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5536____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5536_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5536, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5536_FieldInfos[] =
{
	&InternalEnumerator_1_t5536____array_FieldInfo,
	&InternalEnumerator_1_t5536____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25994_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5536____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5536_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25994_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m25997_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5536____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5536_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25997_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5536_PropertyInfos[] =
{
	&InternalEnumerator_1_t5536____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5536____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5536_InternalEnumerator_1__ctor_m25992_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5536_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25992_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25992/* method */
	, &InternalEnumerator_1_t5536_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5536_InternalEnumerator_1__ctor_m25992_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5536_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25993_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25993/* method */
	, &InternalEnumerator_1_t5536_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5536_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25994_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25994/* method */
	, &InternalEnumerator_1_t5536_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5536_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25995_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25995/* method */
	, &InternalEnumerator_1_t5536_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5536_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25996_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25996/* method */
	, &InternalEnumerator_1_t5536_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5536_il2cpp_TypeInfo;
extern Il2CppType Type_t657_0_0_0;
extern void* RuntimeInvoker_Type_t657 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25997_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25997/* method */
	, &InternalEnumerator_1_t5536_il2cpp_TypeInfo/* declaring_type */
	, &Type_t657_0_0_0/* return_type */
	, RuntimeInvoker_Type_t657/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t5536_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25992_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25993_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25994_MethodInfo,
	&InternalEnumerator_1_Dispose_m25995_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25996_MethodInfo,
	&InternalEnumerator_1_get_Current_m25997_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25994_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m25996_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25993_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25995_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25997_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5536_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25994_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25996_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25993_MethodInfo,
	&InternalEnumerator_1_Dispose_m25995_MethodInfo,
	&InternalEnumerator_1_get_Current_m25997_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13099_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5536_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t13099_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13099_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5536_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13099_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5536_0_0_0;
extern Il2CppType InternalEnumerator_1_t5536_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5536_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5536_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5536_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5536_MethodInfos/* methods */
	, InternalEnumerator_1_t5536_PropertyInfos/* properties */
	, InternalEnumerator_1_t5536_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5536_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5536_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5536_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5536_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5536_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5536_1_0_0/* this_arg */
	, InternalEnumerator_1_t5536_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5536_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5536)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14753_il2cpp_TypeInfo;

#include "UnityEngine.UI_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>
extern MethodInfo ICollection_1_get_Count_m111515_MethodInfo;
static PropertyInfo ICollection_1_t14753____Count_PropertyInfo = 
{
	&ICollection_1_t14753_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111515_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111516_MethodInfo;
static PropertyInfo ICollection_1_t14753____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14753_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111516_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14753_PropertyInfos[] =
{
	&ICollection_1_t14753____Count_PropertyInfo,
	&ICollection_1_t14753____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14753_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::get_Count()
MethodInfo ICollection_1_get_Count_m111515_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14753_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14753_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111516_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14753_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Type_t657_0_0_0;
static ParameterInfo ICollection_1_t14753_ICollection_1_Add_m111517_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Type_t657_0_0_0},
};
extern TypeInfo ICollection_1_t14753_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::Add(T)
MethodInfo ICollection_1_Add_m111517_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14753_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14753_ICollection_1_Add_m111517_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14753_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::Clear()
MethodInfo ICollection_1_Clear_m111518_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14753_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Type_t657_0_0_0;
static ParameterInfo ICollection_1_t14753_ICollection_1_Contains_m111519_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Type_t657_0_0_0},
};
extern TypeInfo ICollection_1_t14753_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::Contains(T)
MethodInfo ICollection_1_Contains_m111519_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14753_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14753_ICollection_1_Contains_m111519_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TypeU5BU5D_t12732_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14753_ICollection_1_CopyTo_m111520_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TypeU5BU5D_t12732_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14753_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111520_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14753_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14753_ICollection_1_CopyTo_m111520_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Type_t657_0_0_0;
static ParameterInfo ICollection_1_t14753_ICollection_1_Remove_m111521_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Type_t657_0_0_0},
};
extern TypeInfo ICollection_1_t14753_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::Remove(T)
MethodInfo ICollection_1_Remove_m111521_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14753_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14753_ICollection_1_Remove_m111521_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t14753_MethodInfos[] =
{
	&ICollection_1_get_Count_m111515_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111516_MethodInfo,
	&ICollection_1_Add_m111517_MethodInfo,
	&ICollection_1_Clear_m111518_MethodInfo,
	&ICollection_1_Contains_m111519_MethodInfo,
	&ICollection_1_CopyTo_m111520_MethodInfo,
	&ICollection_1_Remove_m111521_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14755_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14753_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14755_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14753_0_0_0;
extern Il2CppType ICollection_1_t14753_1_0_0;
struct ICollection_1_t14753;
extern TypeInfo ICollection_1_t14753_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14753_GenericClass;
TypeInfo ICollection_1_t14753_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14753_MethodInfos/* methods */
	, ICollection_1_t14753_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14753_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14753_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14753_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14753_0_0_0/* byval_arg */
	, &ICollection_1_t14753_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14753_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t14755_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Type>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Type>
extern TypeInfo IEnumerable_1_t14755_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13099_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Type>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111522_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14755_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13099_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t14755_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111522_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14755_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14755_0_0_0;
extern Il2CppType IEnumerable_1_t14755_1_0_0;
struct IEnumerable_1_t14755;
extern TypeInfo IEnumerable_1_t14755_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14755_GenericClass;
TypeInfo IEnumerable_1_t14755_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14755_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14755_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14755_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14755_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14755_0_0_0/* byval_arg */
	, &IEnumerable_1_t14755_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14755_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14754_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>
extern MethodInfo IList_1_get_Item_m111523_MethodInfo;
extern MethodInfo IList_1_set_Item_m111524_MethodInfo;
static PropertyInfo IList_1_t14754____Item_PropertyInfo = 
{
	&IList_1_t14754_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111523_MethodInfo/* get */
	, &IList_1_set_Item_m111524_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14754_PropertyInfos[] =
{
	&IList_1_t14754____Item_PropertyInfo,
	NULL
};
extern Il2CppType Type_t657_0_0_0;
static ParameterInfo IList_1_t14754_IList_1_IndexOf_m111525_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Type_t657_0_0_0},
};
extern TypeInfo IList_1_t14754_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111525_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14754_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14754_IList_1_IndexOf_m111525_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Type_t657_0_0_0;
static ParameterInfo IList_1_t14754_IList_1_Insert_m111526_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Type_t657_0_0_0},
};
extern TypeInfo IList_1_t14754_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111526_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14754_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14754_IList_1_Insert_m111526_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14754_IList_1_RemoveAt_m111527_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14754_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111527_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14754_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14754_IList_1_RemoveAt_m111527_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14754_IList_1_get_Item_m111523_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14754_il2cpp_TypeInfo;
extern Il2CppType Type_t657_0_0_0;
extern void* RuntimeInvoker_Type_t657_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111523_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14754_il2cpp_TypeInfo/* declaring_type */
	, &Type_t657_0_0_0/* return_type */
	, RuntimeInvoker_Type_t657_Int32_t63/* invoker_method */
	, IList_1_t14754_IList_1_get_Item_m111523_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Type_t657_0_0_0;
static ParameterInfo IList_1_t14754_IList_1_set_Item_m111524_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Type_t657_0_0_0},
};
extern TypeInfo IList_1_t14754_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111524_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14754_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14754_IList_1_set_Item_m111524_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t14754_MethodInfos[] =
{
	&IList_1_IndexOf_m111525_MethodInfo,
	&IList_1_Insert_m111526_MethodInfo,
	&IList_1_RemoveAt_m111527_MethodInfo,
	&IList_1_get_Item_m111523_MethodInfo,
	&IList_1_set_Item_m111524_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14753_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14755_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14754_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14753_il2cpp_TypeInfo,
	&IEnumerable_1_t14755_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14754_0_0_0;
extern Il2CppType IList_1_t14754_1_0_0;
struct IList_1_t14754;
extern TypeInfo IList_1_t14754_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14754_GenericClass;
extern CustomAttributesCache IList_1_t3845__CustomAttributeCache;
TypeInfo IList_1_t14754_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14754_MethodInfos/* methods */
	, IList_1_t14754_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14754_il2cpp_TypeInfo/* element_class */
	, IList_1_t14754_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3845__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14754_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14754_0_0_0/* byval_arg */
	, &IList_1_t14754_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14754_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13100_il2cpp_TypeInfo;

// UnityEngine.UI.Image/FillMethod
#include "UnityEngine_UI_UnityEngine_UI_Image_FillMethod.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/FillMethod>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/FillMethod>
extern MethodInfo IEnumerator_1_get_Current_m111528_MethodInfo;
static PropertyInfo IEnumerator_1_t13100____Current_PropertyInfo = 
{
	&IEnumerator_1_t13100_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111528_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13100_PropertyInfos[] =
{
	&IEnumerator_1_t13100____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t13100_il2cpp_TypeInfo;
extern Il2CppType FillMethod_t658_0_0_0;
extern void* RuntimeInvoker_FillMethod_t658 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/FillMethod>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111528_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13100_il2cpp_TypeInfo/* declaring_type */
	, &FillMethod_t658_0_0_0/* return_type */
	, RuntimeInvoker_FillMethod_t658/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t13100_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111528_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t13100_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13100_0_0_0;
extern Il2CppType IEnumerator_1_t13100_1_0_0;
struct IEnumerator_1_t13100;
extern TypeInfo IEnumerator_1_t13100_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t13100_GenericClass;
TypeInfo IEnumerator_1_t13100_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13100_MethodInfos/* methods */
	, IEnumerator_1_t13100_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13100_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13100_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13100_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13100_0_0_0/* byval_arg */
	, &IEnumerator_1_t13100_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13100_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_334.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5537_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_334MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5537_il2cpp_TypeInfo;
extern TypeInfo FillMethod_t658_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26003_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5142_MethodInfo;
extern MethodInfo Array_get_Length_m7860_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFillMethod_t658_m94167_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/FillMethod>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/FillMethod>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisFillMethod_t658_m94167 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisFillMethod_t658_m94167_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25998_MethodInfo;
 void InternalEnumerator_1__ctor_m25998 (InternalEnumerator_1_t5537 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25999_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25999 (InternalEnumerator_1_t5537 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26000_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26000 (InternalEnumerator_1_t5537 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26003(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26003_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&FillMethod_t658_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26001_MethodInfo;
 void InternalEnumerator_1_Dispose_m26001 (InternalEnumerator_1_t5537 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26002_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26002 (InternalEnumerator_1_t5537 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7860(L_1, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		__this->___idx = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m26003_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26003 (InternalEnumerator_1_t5537 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_1, (String_t*) &_stringLiteral2292, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t935 * L_3 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_3, (String_t*) &_stringLiteral2293, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7860(L_5, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisFillMethod_t658_m94167(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisFillMethod_t658_m94167_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5537____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5537_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5537, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5537____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5537_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5537, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5537_FieldInfos[] =
{
	&InternalEnumerator_1_t5537____array_FieldInfo,
	&InternalEnumerator_1_t5537____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26000_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5537____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5537_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26000_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26003_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5537____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5537_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26003_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5537_PropertyInfos[] =
{
	&InternalEnumerator_1_t5537____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5537____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5537_InternalEnumerator_1__ctor_m25998_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5537_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25998_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25998/* method */
	, &InternalEnumerator_1_t5537_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5537_InternalEnumerator_1__ctor_m25998_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5537_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25999_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25999/* method */
	, &InternalEnumerator_1_t5537_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5537_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26000_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26000/* method */
	, &InternalEnumerator_1_t5537_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5537_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26001_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26001/* method */
	, &InternalEnumerator_1_t5537_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5537_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26002_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26002/* method */
	, &InternalEnumerator_1_t5537_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5537_il2cpp_TypeInfo;
extern Il2CppType FillMethod_t658_0_0_0;
extern void* RuntimeInvoker_FillMethod_t658 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26003_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26003/* method */
	, &InternalEnumerator_1_t5537_il2cpp_TypeInfo/* declaring_type */
	, &FillMethod_t658_0_0_0/* return_type */
	, RuntimeInvoker_FillMethod_t658/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t5537_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25998_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25999_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26000_MethodInfo,
	&InternalEnumerator_1_Dispose_m26001_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26002_MethodInfo,
	&InternalEnumerator_1_get_Current_m26003_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26000_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26002_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25999_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26001_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26003_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5537_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26000_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26002_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25999_MethodInfo,
	&InternalEnumerator_1_Dispose_m26001_MethodInfo,
	&InternalEnumerator_1_get_Current_m26003_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13100_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5537_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t13100_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13100_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5537_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13100_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5537_0_0_0;
extern Il2CppType InternalEnumerator_1_t5537_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5537_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5537_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5537_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5537_MethodInfos/* methods */
	, InternalEnumerator_1_t5537_PropertyInfos/* properties */
	, InternalEnumerator_1_t5537_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5537_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5537_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5537_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5537_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5537_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5537_1_0_0/* this_arg */
	, InternalEnumerator_1_t5537_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5537_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5537)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14756_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>
extern MethodInfo ICollection_1_get_Count_m111529_MethodInfo;
static PropertyInfo ICollection_1_t14756____Count_PropertyInfo = 
{
	&ICollection_1_t14756_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111529_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111530_MethodInfo;
static PropertyInfo ICollection_1_t14756____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14756_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111530_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14756_PropertyInfos[] =
{
	&ICollection_1_t14756____Count_PropertyInfo,
	&ICollection_1_t14756____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14756_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::get_Count()
MethodInfo ICollection_1_get_Count_m111529_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14756_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14756_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111530_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14756_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType FillMethod_t658_0_0_0;
static ParameterInfo ICollection_1_t14756_ICollection_1_Add_m111531_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FillMethod_t658_0_0_0},
};
extern TypeInfo ICollection_1_t14756_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::Add(T)
MethodInfo ICollection_1_Add_m111531_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14756_ICollection_1_Add_m111531_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14756_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::Clear()
MethodInfo ICollection_1_Clear_m111532_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType FillMethod_t658_0_0_0;
static ParameterInfo ICollection_1_t14756_ICollection_1_Contains_m111533_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FillMethod_t658_0_0_0},
};
extern TypeInfo ICollection_1_t14756_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::Contains(T)
MethodInfo ICollection_1_Contains_m111533_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14756_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14756_ICollection_1_Contains_m111533_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType FillMethodU5BU5D_t12733_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14756_ICollection_1_CopyTo_m111534_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FillMethodU5BU5D_t12733_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14756_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111534_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14756_ICollection_1_CopyTo_m111534_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType FillMethod_t658_0_0_0;
static ParameterInfo ICollection_1_t14756_ICollection_1_Remove_m111535_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FillMethod_t658_0_0_0},
};
extern TypeInfo ICollection_1_t14756_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::Remove(T)
MethodInfo ICollection_1_Remove_m111535_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14756_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14756_ICollection_1_Remove_m111535_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t14756_MethodInfos[] =
{
	&ICollection_1_get_Count_m111529_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111530_MethodInfo,
	&ICollection_1_Add_m111531_MethodInfo,
	&ICollection_1_Clear_m111532_MethodInfo,
	&ICollection_1_Contains_m111533_MethodInfo,
	&ICollection_1_CopyTo_m111534_MethodInfo,
	&ICollection_1_Remove_m111535_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14758_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14756_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14758_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14756_0_0_0;
extern Il2CppType ICollection_1_t14756_1_0_0;
struct ICollection_1_t14756;
extern TypeInfo ICollection_1_t14756_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14756_GenericClass;
TypeInfo ICollection_1_t14756_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14756_MethodInfos/* methods */
	, ICollection_1_t14756_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14756_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14756_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14756_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14756_0_0_0/* byval_arg */
	, &ICollection_1_t14756_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14756_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t14758_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/FillMethod>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/FillMethod>
extern TypeInfo IEnumerable_1_t14758_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13100_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/FillMethod>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111536_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14758_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13100_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t14758_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111536_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14758_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14758_0_0_0;
extern Il2CppType IEnumerable_1_t14758_1_0_0;
struct IEnumerable_1_t14758;
extern TypeInfo IEnumerable_1_t14758_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14758_GenericClass;
TypeInfo IEnumerable_1_t14758_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14758_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14758_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14758_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14758_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14758_0_0_0/* byval_arg */
	, &IEnumerable_1_t14758_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14758_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14757_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>
extern MethodInfo IList_1_get_Item_m111537_MethodInfo;
extern MethodInfo IList_1_set_Item_m111538_MethodInfo;
static PropertyInfo IList_1_t14757____Item_PropertyInfo = 
{
	&IList_1_t14757_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111537_MethodInfo/* get */
	, &IList_1_set_Item_m111538_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14757_PropertyInfos[] =
{
	&IList_1_t14757____Item_PropertyInfo,
	NULL
};
extern Il2CppType FillMethod_t658_0_0_0;
static ParameterInfo IList_1_t14757_IList_1_IndexOf_m111539_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FillMethod_t658_0_0_0},
};
extern TypeInfo IList_1_t14757_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111539_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14757_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14757_IList_1_IndexOf_m111539_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType FillMethod_t658_0_0_0;
static ParameterInfo IList_1_t14757_IList_1_Insert_m111540_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FillMethod_t658_0_0_0},
};
extern TypeInfo IList_1_t14757_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111540_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14757_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14757_IList_1_Insert_m111540_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14757_IList_1_RemoveAt_m111541_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14757_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111541_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14757_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14757_IList_1_RemoveAt_m111541_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14757_IList_1_get_Item_m111537_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14757_il2cpp_TypeInfo;
extern Il2CppType FillMethod_t658_0_0_0;
extern void* RuntimeInvoker_FillMethod_t658_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111537_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14757_il2cpp_TypeInfo/* declaring_type */
	, &FillMethod_t658_0_0_0/* return_type */
	, RuntimeInvoker_FillMethod_t658_Int32_t63/* invoker_method */
	, IList_1_t14757_IList_1_get_Item_m111537_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType FillMethod_t658_0_0_0;
static ParameterInfo IList_1_t14757_IList_1_set_Item_m111538_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FillMethod_t658_0_0_0},
};
extern TypeInfo IList_1_t14757_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111538_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14757_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14757_IList_1_set_Item_m111538_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t14757_MethodInfos[] =
{
	&IList_1_IndexOf_m111539_MethodInfo,
	&IList_1_Insert_m111540_MethodInfo,
	&IList_1_RemoveAt_m111541_MethodInfo,
	&IList_1_get_Item_m111537_MethodInfo,
	&IList_1_set_Item_m111538_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14756_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14758_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14757_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14756_il2cpp_TypeInfo,
	&IEnumerable_1_t14758_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14757_0_0_0;
extern Il2CppType IList_1_t14757_1_0_0;
struct IList_1_t14757;
extern TypeInfo IList_1_t14757_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14757_GenericClass;
extern CustomAttributesCache IList_1_t3845__CustomAttributeCache;
TypeInfo IList_1_t14757_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14757_MethodInfos/* methods */
	, IList_1_t14757_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14757_il2cpp_TypeInfo/* element_class */
	, IList_1_t14757_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3845__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14757_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14757_0_0_0/* byval_arg */
	, &IList_1_t14757_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14757_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13101_il2cpp_TypeInfo;

// UnityEngine.UI.Image/OriginHorizontal
#include "UnityEngine_UI_UnityEngine_UI_Image_OriginHorizontal.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>
extern MethodInfo IEnumerator_1_get_Current_m111542_MethodInfo;
static PropertyInfo IEnumerator_1_t13101____Current_PropertyInfo = 
{
	&IEnumerator_1_t13101_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111542_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13101_PropertyInfos[] =
{
	&IEnumerator_1_t13101____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t13101_il2cpp_TypeInfo;
extern Il2CppType OriginHorizontal_t659_0_0_0;
extern void* RuntimeInvoker_OriginHorizontal_t659 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111542_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13101_il2cpp_TypeInfo/* declaring_type */
	, &OriginHorizontal_t659_0_0_0/* return_type */
	, RuntimeInvoker_OriginHorizontal_t659/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t13101_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111542_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t13101_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13101_0_0_0;
extern Il2CppType IEnumerator_1_t13101_1_0_0;
struct IEnumerator_1_t13101;
extern TypeInfo IEnumerator_1_t13101_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t13101_GenericClass;
TypeInfo IEnumerator_1_t13101_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13101_MethodInfos/* methods */
	, IEnumerator_1_t13101_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13101_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13101_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13101_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13101_0_0_0/* byval_arg */
	, &IEnumerator_1_t13101_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13101_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_335.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5538_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_335MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5538_il2cpp_TypeInfo;
extern TypeInfo OriginHorizontal_t659_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26009_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5142_MethodInfo;
extern MethodInfo Array_get_Length_m7860_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOriginHorizontal_t659_m94178_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/OriginHorizontal>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/OriginHorizontal>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisOriginHorizontal_t659_m94178 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisOriginHorizontal_t659_m94178_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26004_MethodInfo;
 void InternalEnumerator_1__ctor_m26004 (InternalEnumerator_1_t5538 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26005_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26005 (InternalEnumerator_1_t5538 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26006_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26006 (InternalEnumerator_1_t5538 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26009(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26009_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&OriginHorizontal_t659_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26007_MethodInfo;
 void InternalEnumerator_1_Dispose_m26007 (InternalEnumerator_1_t5538 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26008_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26008 (InternalEnumerator_1_t5538 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7860(L_1, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		__this->___idx = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m26009_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26009 (InternalEnumerator_1_t5538 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_1, (String_t*) &_stringLiteral2292, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t935 * L_3 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_3, (String_t*) &_stringLiteral2293, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7860(L_5, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisOriginHorizontal_t659_m94178(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisOriginHorizontal_t659_m94178_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5538____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5538_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5538, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5538____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5538_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5538, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5538_FieldInfos[] =
{
	&InternalEnumerator_1_t5538____array_FieldInfo,
	&InternalEnumerator_1_t5538____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26006_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5538____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5538_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26006_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26009_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5538____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5538_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26009_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5538_PropertyInfos[] =
{
	&InternalEnumerator_1_t5538____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5538____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5538_InternalEnumerator_1__ctor_m26004_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5538_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26004_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26004/* method */
	, &InternalEnumerator_1_t5538_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5538_InternalEnumerator_1__ctor_m26004_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5538_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26005_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26005/* method */
	, &InternalEnumerator_1_t5538_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5538_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26006_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26006/* method */
	, &InternalEnumerator_1_t5538_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5538_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26007_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26007/* method */
	, &InternalEnumerator_1_t5538_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5538_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26008_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26008/* method */
	, &InternalEnumerator_1_t5538_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5538_il2cpp_TypeInfo;
extern Il2CppType OriginHorizontal_t659_0_0_0;
extern void* RuntimeInvoker_OriginHorizontal_t659 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26009_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26009/* method */
	, &InternalEnumerator_1_t5538_il2cpp_TypeInfo/* declaring_type */
	, &OriginHorizontal_t659_0_0_0/* return_type */
	, RuntimeInvoker_OriginHorizontal_t659/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t5538_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26004_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26005_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26006_MethodInfo,
	&InternalEnumerator_1_Dispose_m26007_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26008_MethodInfo,
	&InternalEnumerator_1_get_Current_m26009_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26006_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26008_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26005_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26007_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26009_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5538_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26006_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26008_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26005_MethodInfo,
	&InternalEnumerator_1_Dispose_m26007_MethodInfo,
	&InternalEnumerator_1_get_Current_m26009_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13101_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5538_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t13101_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13101_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5538_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13101_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5538_0_0_0;
extern Il2CppType InternalEnumerator_1_t5538_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5538_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5538_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5538_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5538_MethodInfos/* methods */
	, InternalEnumerator_1_t5538_PropertyInfos/* properties */
	, InternalEnumerator_1_t5538_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5538_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5538_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5538_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5538_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5538_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5538_1_0_0/* this_arg */
	, InternalEnumerator_1_t5538_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5538_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5538)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14759_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>
extern MethodInfo ICollection_1_get_Count_m111543_MethodInfo;
static PropertyInfo ICollection_1_t14759____Count_PropertyInfo = 
{
	&ICollection_1_t14759_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111543_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111544_MethodInfo;
static PropertyInfo ICollection_1_t14759____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14759_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111544_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14759_PropertyInfos[] =
{
	&ICollection_1_t14759____Count_PropertyInfo,
	&ICollection_1_t14759____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14759_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::get_Count()
MethodInfo ICollection_1_get_Count_m111543_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14759_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14759_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111544_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14759_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType OriginHorizontal_t659_0_0_0;
static ParameterInfo ICollection_1_t14759_ICollection_1_Add_m111545_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OriginHorizontal_t659_0_0_0},
};
extern TypeInfo ICollection_1_t14759_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::Add(T)
MethodInfo ICollection_1_Add_m111545_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14759_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14759_ICollection_1_Add_m111545_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14759_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::Clear()
MethodInfo ICollection_1_Clear_m111546_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14759_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType OriginHorizontal_t659_0_0_0;
static ParameterInfo ICollection_1_t14759_ICollection_1_Contains_m111547_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OriginHorizontal_t659_0_0_0},
};
extern TypeInfo ICollection_1_t14759_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::Contains(T)
MethodInfo ICollection_1_Contains_m111547_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14759_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14759_ICollection_1_Contains_m111547_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType OriginHorizontalU5BU5D_t12734_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14759_ICollection_1_CopyTo_m111548_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OriginHorizontalU5BU5D_t12734_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14759_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111548_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14759_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14759_ICollection_1_CopyTo_m111548_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType OriginHorizontal_t659_0_0_0;
static ParameterInfo ICollection_1_t14759_ICollection_1_Remove_m111549_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OriginHorizontal_t659_0_0_0},
};
extern TypeInfo ICollection_1_t14759_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::Remove(T)
MethodInfo ICollection_1_Remove_m111549_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14759_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14759_ICollection_1_Remove_m111549_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t14759_MethodInfos[] =
{
	&ICollection_1_get_Count_m111543_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111544_MethodInfo,
	&ICollection_1_Add_m111545_MethodInfo,
	&ICollection_1_Clear_m111546_MethodInfo,
	&ICollection_1_Contains_m111547_MethodInfo,
	&ICollection_1_CopyTo_m111548_MethodInfo,
	&ICollection_1_Remove_m111549_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14761_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14759_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14761_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14759_0_0_0;
extern Il2CppType ICollection_1_t14759_1_0_0;
struct ICollection_1_t14759;
extern TypeInfo ICollection_1_t14759_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14759_GenericClass;
TypeInfo ICollection_1_t14759_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14759_MethodInfos/* methods */
	, ICollection_1_t14759_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14759_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14759_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14759_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14759_0_0_0/* byval_arg */
	, &ICollection_1_t14759_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14759_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t14761_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/OriginHorizontal>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/OriginHorizontal>
extern TypeInfo IEnumerable_1_t14761_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13101_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/OriginHorizontal>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111550_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14761_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13101_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t14761_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111550_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14761_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14761_0_0_0;
extern Il2CppType IEnumerable_1_t14761_1_0_0;
struct IEnumerable_1_t14761;
extern TypeInfo IEnumerable_1_t14761_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14761_GenericClass;
TypeInfo IEnumerable_1_t14761_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14761_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14761_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14761_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14761_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14761_0_0_0/* byval_arg */
	, &IEnumerable_1_t14761_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14761_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14760_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>
extern MethodInfo IList_1_get_Item_m111551_MethodInfo;
extern MethodInfo IList_1_set_Item_m111552_MethodInfo;
static PropertyInfo IList_1_t14760____Item_PropertyInfo = 
{
	&IList_1_t14760_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111551_MethodInfo/* get */
	, &IList_1_set_Item_m111552_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14760_PropertyInfos[] =
{
	&IList_1_t14760____Item_PropertyInfo,
	NULL
};
extern Il2CppType OriginHorizontal_t659_0_0_0;
static ParameterInfo IList_1_t14760_IList_1_IndexOf_m111553_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OriginHorizontal_t659_0_0_0},
};
extern TypeInfo IList_1_t14760_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111553_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14760_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14760_IList_1_IndexOf_m111553_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType OriginHorizontal_t659_0_0_0;
static ParameterInfo IList_1_t14760_IList_1_Insert_m111554_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OriginHorizontal_t659_0_0_0},
};
extern TypeInfo IList_1_t14760_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111554_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14760_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14760_IList_1_Insert_m111554_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14760_IList_1_RemoveAt_m111555_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14760_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111555_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14760_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14760_IList_1_RemoveAt_m111555_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14760_IList_1_get_Item_m111551_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14760_il2cpp_TypeInfo;
extern Il2CppType OriginHorizontal_t659_0_0_0;
extern void* RuntimeInvoker_OriginHorizontal_t659_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111551_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14760_il2cpp_TypeInfo/* declaring_type */
	, &OriginHorizontal_t659_0_0_0/* return_type */
	, RuntimeInvoker_OriginHorizontal_t659_Int32_t63/* invoker_method */
	, IList_1_t14760_IList_1_get_Item_m111551_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType OriginHorizontal_t659_0_0_0;
static ParameterInfo IList_1_t14760_IList_1_set_Item_m111552_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OriginHorizontal_t659_0_0_0},
};
extern TypeInfo IList_1_t14760_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111552_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14760_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14760_IList_1_set_Item_m111552_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t14760_MethodInfos[] =
{
	&IList_1_IndexOf_m111553_MethodInfo,
	&IList_1_Insert_m111554_MethodInfo,
	&IList_1_RemoveAt_m111555_MethodInfo,
	&IList_1_get_Item_m111551_MethodInfo,
	&IList_1_set_Item_m111552_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14759_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14761_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14760_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14759_il2cpp_TypeInfo,
	&IEnumerable_1_t14761_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14760_0_0_0;
extern Il2CppType IList_1_t14760_1_0_0;
struct IList_1_t14760;
extern TypeInfo IList_1_t14760_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14760_GenericClass;
extern CustomAttributesCache IList_1_t3845__CustomAttributeCache;
TypeInfo IList_1_t14760_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14760_MethodInfos/* methods */
	, IList_1_t14760_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14760_il2cpp_TypeInfo/* element_class */
	, IList_1_t14760_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3845__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14760_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14760_0_0_0/* byval_arg */
	, &IList_1_t14760_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14760_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13102_il2cpp_TypeInfo;

// UnityEngine.UI.Image/OriginVertical
#include "UnityEngine_UI_UnityEngine_UI_Image_OriginVertical.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/OriginVertical>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/OriginVertical>
extern MethodInfo IEnumerator_1_get_Current_m111556_MethodInfo;
static PropertyInfo IEnumerator_1_t13102____Current_PropertyInfo = 
{
	&IEnumerator_1_t13102_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111556_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13102_PropertyInfos[] =
{
	&IEnumerator_1_t13102____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t13102_il2cpp_TypeInfo;
extern Il2CppType OriginVertical_t660_0_0_0;
extern void* RuntimeInvoker_OriginVertical_t660 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/OriginVertical>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111556_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13102_il2cpp_TypeInfo/* declaring_type */
	, &OriginVertical_t660_0_0_0/* return_type */
	, RuntimeInvoker_OriginVertical_t660/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t13102_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111556_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t13102_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13102_0_0_0;
extern Il2CppType IEnumerator_1_t13102_1_0_0;
struct IEnumerator_1_t13102;
extern TypeInfo IEnumerator_1_t13102_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t13102_GenericClass;
TypeInfo IEnumerator_1_t13102_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13102_MethodInfos/* methods */
	, IEnumerator_1_t13102_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13102_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13102_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13102_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13102_0_0_0/* byval_arg */
	, &IEnumerator_1_t13102_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13102_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_336.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5539_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_336MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5539_il2cpp_TypeInfo;
extern TypeInfo OriginVertical_t660_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26015_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5142_MethodInfo;
extern MethodInfo Array_get_Length_m7860_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOriginVertical_t660_m94189_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/OriginVertical>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/OriginVertical>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisOriginVertical_t660_m94189 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisOriginVertical_t660_m94189_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26010_MethodInfo;
 void InternalEnumerator_1__ctor_m26010 (InternalEnumerator_1_t5539 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26011_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26011 (InternalEnumerator_1_t5539 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26012_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26012 (InternalEnumerator_1_t5539 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26015(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26015_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&OriginVertical_t660_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26013_MethodInfo;
 void InternalEnumerator_1_Dispose_m26013 (InternalEnumerator_1_t5539 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26014_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26014 (InternalEnumerator_1_t5539 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7860(L_1, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		__this->___idx = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m26015_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26015 (InternalEnumerator_1_t5539 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_1, (String_t*) &_stringLiteral2292, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t935 * L_3 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_3, (String_t*) &_stringLiteral2293, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7860(L_5, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisOriginVertical_t660_m94189(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisOriginVertical_t660_m94189_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5539____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5539_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5539, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5539____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5539_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5539, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5539_FieldInfos[] =
{
	&InternalEnumerator_1_t5539____array_FieldInfo,
	&InternalEnumerator_1_t5539____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26012_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5539____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5539_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26012_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26015_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5539____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5539_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26015_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5539_PropertyInfos[] =
{
	&InternalEnumerator_1_t5539____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5539____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5539_InternalEnumerator_1__ctor_m26010_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5539_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26010_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26010/* method */
	, &InternalEnumerator_1_t5539_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5539_InternalEnumerator_1__ctor_m26010_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5539_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26011_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26011/* method */
	, &InternalEnumerator_1_t5539_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5539_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26012_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26012/* method */
	, &InternalEnumerator_1_t5539_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5539_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26013_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26013/* method */
	, &InternalEnumerator_1_t5539_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5539_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26014_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26014/* method */
	, &InternalEnumerator_1_t5539_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5539_il2cpp_TypeInfo;
extern Il2CppType OriginVertical_t660_0_0_0;
extern void* RuntimeInvoker_OriginVertical_t660 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26015_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26015/* method */
	, &InternalEnumerator_1_t5539_il2cpp_TypeInfo/* declaring_type */
	, &OriginVertical_t660_0_0_0/* return_type */
	, RuntimeInvoker_OriginVertical_t660/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t5539_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26010_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26011_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26012_MethodInfo,
	&InternalEnumerator_1_Dispose_m26013_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26014_MethodInfo,
	&InternalEnumerator_1_get_Current_m26015_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26012_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26014_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26011_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26013_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26015_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5539_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26012_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26014_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26011_MethodInfo,
	&InternalEnumerator_1_Dispose_m26013_MethodInfo,
	&InternalEnumerator_1_get_Current_m26015_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13102_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5539_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t13102_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13102_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5539_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13102_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5539_0_0_0;
extern Il2CppType InternalEnumerator_1_t5539_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5539_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5539_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5539_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5539_MethodInfos/* methods */
	, InternalEnumerator_1_t5539_PropertyInfos/* properties */
	, InternalEnumerator_1_t5539_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5539_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5539_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5539_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5539_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5539_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5539_1_0_0/* this_arg */
	, InternalEnumerator_1_t5539_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5539_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5539)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14762_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>
extern MethodInfo ICollection_1_get_Count_m111557_MethodInfo;
static PropertyInfo ICollection_1_t14762____Count_PropertyInfo = 
{
	&ICollection_1_t14762_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111557_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111558_MethodInfo;
static PropertyInfo ICollection_1_t14762____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14762_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111558_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14762_PropertyInfos[] =
{
	&ICollection_1_t14762____Count_PropertyInfo,
	&ICollection_1_t14762____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14762_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::get_Count()
MethodInfo ICollection_1_get_Count_m111557_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14762_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14762_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111558_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14762_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType OriginVertical_t660_0_0_0;
static ParameterInfo ICollection_1_t14762_ICollection_1_Add_m111559_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OriginVertical_t660_0_0_0},
};
extern TypeInfo ICollection_1_t14762_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::Add(T)
MethodInfo ICollection_1_Add_m111559_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14762_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14762_ICollection_1_Add_m111559_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14762_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::Clear()
MethodInfo ICollection_1_Clear_m111560_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14762_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType OriginVertical_t660_0_0_0;
static ParameterInfo ICollection_1_t14762_ICollection_1_Contains_m111561_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OriginVertical_t660_0_0_0},
};
extern TypeInfo ICollection_1_t14762_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::Contains(T)
MethodInfo ICollection_1_Contains_m111561_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14762_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14762_ICollection_1_Contains_m111561_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType OriginVerticalU5BU5D_t12735_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14762_ICollection_1_CopyTo_m111562_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OriginVerticalU5BU5D_t12735_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14762_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111562_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14762_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14762_ICollection_1_CopyTo_m111562_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType OriginVertical_t660_0_0_0;
static ParameterInfo ICollection_1_t14762_ICollection_1_Remove_m111563_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OriginVertical_t660_0_0_0},
};
extern TypeInfo ICollection_1_t14762_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::Remove(T)
MethodInfo ICollection_1_Remove_m111563_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14762_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14762_ICollection_1_Remove_m111563_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t14762_MethodInfos[] =
{
	&ICollection_1_get_Count_m111557_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111558_MethodInfo,
	&ICollection_1_Add_m111559_MethodInfo,
	&ICollection_1_Clear_m111560_MethodInfo,
	&ICollection_1_Contains_m111561_MethodInfo,
	&ICollection_1_CopyTo_m111562_MethodInfo,
	&ICollection_1_Remove_m111563_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14764_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14762_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14764_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14762_0_0_0;
extern Il2CppType ICollection_1_t14762_1_0_0;
struct ICollection_1_t14762;
extern TypeInfo ICollection_1_t14762_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14762_GenericClass;
TypeInfo ICollection_1_t14762_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14762_MethodInfos/* methods */
	, ICollection_1_t14762_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14762_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14762_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14762_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14762_0_0_0/* byval_arg */
	, &ICollection_1_t14762_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14762_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t14764_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/OriginVertical>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/OriginVertical>
extern TypeInfo IEnumerable_1_t14764_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13102_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/OriginVertical>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111564_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14764_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13102_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t14764_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111564_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14764_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14764_0_0_0;
extern Il2CppType IEnumerable_1_t14764_1_0_0;
struct IEnumerable_1_t14764;
extern TypeInfo IEnumerable_1_t14764_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14764_GenericClass;
TypeInfo IEnumerable_1_t14764_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14764_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14764_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14764_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14764_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14764_0_0_0/* byval_arg */
	, &IEnumerable_1_t14764_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14764_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14763_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>
extern MethodInfo IList_1_get_Item_m111565_MethodInfo;
extern MethodInfo IList_1_set_Item_m111566_MethodInfo;
static PropertyInfo IList_1_t14763____Item_PropertyInfo = 
{
	&IList_1_t14763_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111565_MethodInfo/* get */
	, &IList_1_set_Item_m111566_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14763_PropertyInfos[] =
{
	&IList_1_t14763____Item_PropertyInfo,
	NULL
};
extern Il2CppType OriginVertical_t660_0_0_0;
static ParameterInfo IList_1_t14763_IList_1_IndexOf_m111567_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OriginVertical_t660_0_0_0},
};
extern TypeInfo IList_1_t14763_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111567_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14763_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14763_IList_1_IndexOf_m111567_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType OriginVertical_t660_0_0_0;
static ParameterInfo IList_1_t14763_IList_1_Insert_m111568_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OriginVertical_t660_0_0_0},
};
extern TypeInfo IList_1_t14763_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111568_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14763_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14763_IList_1_Insert_m111568_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14763_IList_1_RemoveAt_m111569_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14763_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111569_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14763_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14763_IList_1_RemoveAt_m111569_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14763_IList_1_get_Item_m111565_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14763_il2cpp_TypeInfo;
extern Il2CppType OriginVertical_t660_0_0_0;
extern void* RuntimeInvoker_OriginVertical_t660_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111565_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14763_il2cpp_TypeInfo/* declaring_type */
	, &OriginVertical_t660_0_0_0/* return_type */
	, RuntimeInvoker_OriginVertical_t660_Int32_t63/* invoker_method */
	, IList_1_t14763_IList_1_get_Item_m111565_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType OriginVertical_t660_0_0_0;
static ParameterInfo IList_1_t14763_IList_1_set_Item_m111566_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OriginVertical_t660_0_0_0},
};
extern TypeInfo IList_1_t14763_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111566_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14763_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14763_IList_1_set_Item_m111566_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t14763_MethodInfos[] =
{
	&IList_1_IndexOf_m111567_MethodInfo,
	&IList_1_Insert_m111568_MethodInfo,
	&IList_1_RemoveAt_m111569_MethodInfo,
	&IList_1_get_Item_m111565_MethodInfo,
	&IList_1_set_Item_m111566_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14762_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14764_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14763_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14762_il2cpp_TypeInfo,
	&IEnumerable_1_t14764_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14763_0_0_0;
extern Il2CppType IList_1_t14763_1_0_0;
struct IList_1_t14763;
extern TypeInfo IList_1_t14763_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14763_GenericClass;
extern CustomAttributesCache IList_1_t3845__CustomAttributeCache;
TypeInfo IList_1_t14763_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14763_MethodInfos/* methods */
	, IList_1_t14763_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14763_il2cpp_TypeInfo/* element_class */
	, IList_1_t14763_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3845__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14763_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14763_0_0_0/* byval_arg */
	, &IList_1_t14763_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14763_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13103_il2cpp_TypeInfo;

// UnityEngine.UI.Image/Origin90
#include "UnityEngine_UI_UnityEngine_UI_Image_Origin90.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Origin90>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Origin90>
extern MethodInfo IEnumerator_1_get_Current_m111570_MethodInfo;
static PropertyInfo IEnumerator_1_t13103____Current_PropertyInfo = 
{
	&IEnumerator_1_t13103_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111570_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13103_PropertyInfos[] =
{
	&IEnumerator_1_t13103____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t13103_il2cpp_TypeInfo;
extern Il2CppType Origin90_t661_0_0_0;
extern void* RuntimeInvoker_Origin90_t661 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Origin90>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111570_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13103_il2cpp_TypeInfo/* declaring_type */
	, &Origin90_t661_0_0_0/* return_type */
	, RuntimeInvoker_Origin90_t661/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t13103_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111570_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t13103_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13103_0_0_0;
extern Il2CppType IEnumerator_1_t13103_1_0_0;
struct IEnumerator_1_t13103;
extern TypeInfo IEnumerator_1_t13103_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t13103_GenericClass;
TypeInfo IEnumerator_1_t13103_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13103_MethodInfos/* methods */
	, IEnumerator_1_t13103_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13103_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13103_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13103_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13103_0_0_0/* byval_arg */
	, &IEnumerator_1_t13103_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13103_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_337.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5540_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_337MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5540_il2cpp_TypeInfo;
extern TypeInfo Origin90_t661_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26021_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5142_MethodInfo;
extern MethodInfo Array_get_Length_m7860_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOrigin90_t661_m94200_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/Origin90>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/Origin90>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisOrigin90_t661_m94200 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisOrigin90_t661_m94200_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26016_MethodInfo;
 void InternalEnumerator_1__ctor_m26016 (InternalEnumerator_1_t5540 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26017_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26017 (InternalEnumerator_1_t5540 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26018_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26018 (InternalEnumerator_1_t5540 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26021(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26021_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Origin90_t661_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26019_MethodInfo;
 void InternalEnumerator_1_Dispose_m26019 (InternalEnumerator_1_t5540 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26020_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26020 (InternalEnumerator_1_t5540 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7860(L_1, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		__this->___idx = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m26021_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26021 (InternalEnumerator_1_t5540 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_1, (String_t*) &_stringLiteral2292, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t935 * L_3 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_3, (String_t*) &_stringLiteral2293, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7860(L_5, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisOrigin90_t661_m94200(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisOrigin90_t661_m94200_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5540____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5540_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5540, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5540____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5540_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5540, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5540_FieldInfos[] =
{
	&InternalEnumerator_1_t5540____array_FieldInfo,
	&InternalEnumerator_1_t5540____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26018_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5540____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5540_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26018_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26021_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5540____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5540_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26021_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5540_PropertyInfos[] =
{
	&InternalEnumerator_1_t5540____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5540____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5540_InternalEnumerator_1__ctor_m26016_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5540_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26016_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26016/* method */
	, &InternalEnumerator_1_t5540_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5540_InternalEnumerator_1__ctor_m26016_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5540_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26017_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26017/* method */
	, &InternalEnumerator_1_t5540_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5540_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26018_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26018/* method */
	, &InternalEnumerator_1_t5540_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5540_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26019_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26019/* method */
	, &InternalEnumerator_1_t5540_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5540_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26020_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26020/* method */
	, &InternalEnumerator_1_t5540_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5540_il2cpp_TypeInfo;
extern Il2CppType Origin90_t661_0_0_0;
extern void* RuntimeInvoker_Origin90_t661 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26021_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26021/* method */
	, &InternalEnumerator_1_t5540_il2cpp_TypeInfo/* declaring_type */
	, &Origin90_t661_0_0_0/* return_type */
	, RuntimeInvoker_Origin90_t661/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t5540_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26016_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26017_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26018_MethodInfo,
	&InternalEnumerator_1_Dispose_m26019_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26020_MethodInfo,
	&InternalEnumerator_1_get_Current_m26021_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26018_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26020_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26017_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26019_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26021_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5540_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26018_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26020_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26017_MethodInfo,
	&InternalEnumerator_1_Dispose_m26019_MethodInfo,
	&InternalEnumerator_1_get_Current_m26021_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13103_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5540_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t13103_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13103_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5540_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13103_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5540_0_0_0;
extern Il2CppType InternalEnumerator_1_t5540_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5540_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5540_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5540_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5540_MethodInfos/* methods */
	, InternalEnumerator_1_t5540_PropertyInfos/* properties */
	, InternalEnumerator_1_t5540_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5540_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5540_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5540_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5540_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5540_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5540_1_0_0/* this_arg */
	, InternalEnumerator_1_t5540_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5540_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5540)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14765_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>
extern MethodInfo ICollection_1_get_Count_m111571_MethodInfo;
static PropertyInfo ICollection_1_t14765____Count_PropertyInfo = 
{
	&ICollection_1_t14765_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111571_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111572_MethodInfo;
static PropertyInfo ICollection_1_t14765____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14765_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111572_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14765_PropertyInfos[] =
{
	&ICollection_1_t14765____Count_PropertyInfo,
	&ICollection_1_t14765____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14765_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::get_Count()
MethodInfo ICollection_1_get_Count_m111571_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14765_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14765_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111572_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14765_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Origin90_t661_0_0_0;
static ParameterInfo ICollection_1_t14765_ICollection_1_Add_m111573_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin90_t661_0_0_0},
};
extern TypeInfo ICollection_1_t14765_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::Add(T)
MethodInfo ICollection_1_Add_m111573_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14765_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14765_ICollection_1_Add_m111573_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14765_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::Clear()
MethodInfo ICollection_1_Clear_m111574_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14765_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Origin90_t661_0_0_0;
static ParameterInfo ICollection_1_t14765_ICollection_1_Contains_m111575_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin90_t661_0_0_0},
};
extern TypeInfo ICollection_1_t14765_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::Contains(T)
MethodInfo ICollection_1_Contains_m111575_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14765_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14765_ICollection_1_Contains_m111575_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Origin90U5BU5D_t12736_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14765_ICollection_1_CopyTo_m111576_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Origin90U5BU5D_t12736_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14765_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111576_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14765_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14765_ICollection_1_CopyTo_m111576_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Origin90_t661_0_0_0;
static ParameterInfo ICollection_1_t14765_ICollection_1_Remove_m111577_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin90_t661_0_0_0},
};
extern TypeInfo ICollection_1_t14765_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::Remove(T)
MethodInfo ICollection_1_Remove_m111577_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14765_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14765_ICollection_1_Remove_m111577_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t14765_MethodInfos[] =
{
	&ICollection_1_get_Count_m111571_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111572_MethodInfo,
	&ICollection_1_Add_m111573_MethodInfo,
	&ICollection_1_Clear_m111574_MethodInfo,
	&ICollection_1_Contains_m111575_MethodInfo,
	&ICollection_1_CopyTo_m111576_MethodInfo,
	&ICollection_1_Remove_m111577_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14767_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14765_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14767_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14765_0_0_0;
extern Il2CppType ICollection_1_t14765_1_0_0;
struct ICollection_1_t14765;
extern TypeInfo ICollection_1_t14765_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14765_GenericClass;
TypeInfo ICollection_1_t14765_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14765_MethodInfos/* methods */
	, ICollection_1_t14765_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14765_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14765_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14765_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14765_0_0_0/* byval_arg */
	, &ICollection_1_t14765_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14765_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t14767_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Origin90>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Origin90>
extern TypeInfo IEnumerable_1_t14767_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13103_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Origin90>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111578_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14767_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13103_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t14767_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111578_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14767_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14767_0_0_0;
extern Il2CppType IEnumerable_1_t14767_1_0_0;
struct IEnumerable_1_t14767;
extern TypeInfo IEnumerable_1_t14767_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14767_GenericClass;
TypeInfo IEnumerable_1_t14767_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14767_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14767_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14767_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14767_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14767_0_0_0/* byval_arg */
	, &IEnumerable_1_t14767_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14767_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14766_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>
extern MethodInfo IList_1_get_Item_m111579_MethodInfo;
extern MethodInfo IList_1_set_Item_m111580_MethodInfo;
static PropertyInfo IList_1_t14766____Item_PropertyInfo = 
{
	&IList_1_t14766_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111579_MethodInfo/* get */
	, &IList_1_set_Item_m111580_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14766_PropertyInfos[] =
{
	&IList_1_t14766____Item_PropertyInfo,
	NULL
};
extern Il2CppType Origin90_t661_0_0_0;
static ParameterInfo IList_1_t14766_IList_1_IndexOf_m111581_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin90_t661_0_0_0},
};
extern TypeInfo IList_1_t14766_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111581_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14766_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14766_IList_1_IndexOf_m111581_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Origin90_t661_0_0_0;
static ParameterInfo IList_1_t14766_IList_1_Insert_m111582_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Origin90_t661_0_0_0},
};
extern TypeInfo IList_1_t14766_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111582_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14766_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14766_IList_1_Insert_m111582_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14766_IList_1_RemoveAt_m111583_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14766_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111583_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14766_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14766_IList_1_RemoveAt_m111583_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14766_IList_1_get_Item_m111579_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14766_il2cpp_TypeInfo;
extern Il2CppType Origin90_t661_0_0_0;
extern void* RuntimeInvoker_Origin90_t661_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111579_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14766_il2cpp_TypeInfo/* declaring_type */
	, &Origin90_t661_0_0_0/* return_type */
	, RuntimeInvoker_Origin90_t661_Int32_t63/* invoker_method */
	, IList_1_t14766_IList_1_get_Item_m111579_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Origin90_t661_0_0_0;
static ParameterInfo IList_1_t14766_IList_1_set_Item_m111580_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Origin90_t661_0_0_0},
};
extern TypeInfo IList_1_t14766_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111580_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14766_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14766_IList_1_set_Item_m111580_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t14766_MethodInfos[] =
{
	&IList_1_IndexOf_m111581_MethodInfo,
	&IList_1_Insert_m111582_MethodInfo,
	&IList_1_RemoveAt_m111583_MethodInfo,
	&IList_1_get_Item_m111579_MethodInfo,
	&IList_1_set_Item_m111580_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14765_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14767_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14766_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14765_il2cpp_TypeInfo,
	&IEnumerable_1_t14767_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14766_0_0_0;
extern Il2CppType IList_1_t14766_1_0_0;
struct IList_1_t14766;
extern TypeInfo IList_1_t14766_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14766_GenericClass;
extern CustomAttributesCache IList_1_t3845__CustomAttributeCache;
TypeInfo IList_1_t14766_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14766_MethodInfos/* methods */
	, IList_1_t14766_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14766_il2cpp_TypeInfo/* element_class */
	, IList_1_t14766_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3845__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14766_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14766_0_0_0/* byval_arg */
	, &IList_1_t14766_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14766_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13104_il2cpp_TypeInfo;

// UnityEngine.UI.Image/Origin180
#include "UnityEngine_UI_UnityEngine_UI_Image_Origin180.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Origin180>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Origin180>
extern MethodInfo IEnumerator_1_get_Current_m111584_MethodInfo;
static PropertyInfo IEnumerator_1_t13104____Current_PropertyInfo = 
{
	&IEnumerator_1_t13104_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111584_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13104_PropertyInfos[] =
{
	&IEnumerator_1_t13104____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t13104_il2cpp_TypeInfo;
extern Il2CppType Origin180_t662_0_0_0;
extern void* RuntimeInvoker_Origin180_t662 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Origin180>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111584_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13104_il2cpp_TypeInfo/* declaring_type */
	, &Origin180_t662_0_0_0/* return_type */
	, RuntimeInvoker_Origin180_t662/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t13104_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111584_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t13104_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13104_0_0_0;
extern Il2CppType IEnumerator_1_t13104_1_0_0;
struct IEnumerator_1_t13104;
extern TypeInfo IEnumerator_1_t13104_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t13104_GenericClass;
TypeInfo IEnumerator_1_t13104_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13104_MethodInfos/* methods */
	, IEnumerator_1_t13104_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13104_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13104_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13104_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13104_0_0_0/* byval_arg */
	, &IEnumerator_1_t13104_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13104_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_338.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5541_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_338MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5541_il2cpp_TypeInfo;
extern TypeInfo Origin180_t662_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26027_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5142_MethodInfo;
extern MethodInfo Array_get_Length_m7860_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOrigin180_t662_m94211_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/Origin180>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/Origin180>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisOrigin180_t662_m94211 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisOrigin180_t662_m94211_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26022_MethodInfo;
 void InternalEnumerator_1__ctor_m26022 (InternalEnumerator_1_t5541 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26023_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26023 (InternalEnumerator_1_t5541 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26024_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26024 (InternalEnumerator_1_t5541 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26027(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26027_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Origin180_t662_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26025_MethodInfo;
 void InternalEnumerator_1_Dispose_m26025 (InternalEnumerator_1_t5541 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26026_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26026 (InternalEnumerator_1_t5541 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7860(L_1, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		__this->___idx = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m26027_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26027 (InternalEnumerator_1_t5541 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_1, (String_t*) &_stringLiteral2292, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t935 * L_3 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_3, (String_t*) &_stringLiteral2293, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7860(L_5, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisOrigin180_t662_m94211(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisOrigin180_t662_m94211_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5541____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5541_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5541, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5541____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5541_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5541, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5541_FieldInfos[] =
{
	&InternalEnumerator_1_t5541____array_FieldInfo,
	&InternalEnumerator_1_t5541____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26024_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5541____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5541_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26024_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26027_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5541____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5541_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26027_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5541_PropertyInfos[] =
{
	&InternalEnumerator_1_t5541____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5541____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5541_InternalEnumerator_1__ctor_m26022_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5541_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26022_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26022/* method */
	, &InternalEnumerator_1_t5541_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5541_InternalEnumerator_1__ctor_m26022_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5541_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26023_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26023/* method */
	, &InternalEnumerator_1_t5541_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5541_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26024_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26024/* method */
	, &InternalEnumerator_1_t5541_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5541_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26025_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26025/* method */
	, &InternalEnumerator_1_t5541_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5541_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26026_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26026/* method */
	, &InternalEnumerator_1_t5541_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5541_il2cpp_TypeInfo;
extern Il2CppType Origin180_t662_0_0_0;
extern void* RuntimeInvoker_Origin180_t662 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26027_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26027/* method */
	, &InternalEnumerator_1_t5541_il2cpp_TypeInfo/* declaring_type */
	, &Origin180_t662_0_0_0/* return_type */
	, RuntimeInvoker_Origin180_t662/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t5541_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26022_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26023_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26024_MethodInfo,
	&InternalEnumerator_1_Dispose_m26025_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26026_MethodInfo,
	&InternalEnumerator_1_get_Current_m26027_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26024_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26026_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26023_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26025_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26027_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5541_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26024_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26026_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26023_MethodInfo,
	&InternalEnumerator_1_Dispose_m26025_MethodInfo,
	&InternalEnumerator_1_get_Current_m26027_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13104_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5541_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t13104_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13104_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5541_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13104_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5541_0_0_0;
extern Il2CppType InternalEnumerator_1_t5541_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5541_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5541_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5541_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5541_MethodInfos/* methods */
	, InternalEnumerator_1_t5541_PropertyInfos/* properties */
	, InternalEnumerator_1_t5541_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5541_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5541_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5541_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5541_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5541_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5541_1_0_0/* this_arg */
	, InternalEnumerator_1_t5541_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5541_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5541)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14768_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>
extern MethodInfo ICollection_1_get_Count_m111585_MethodInfo;
static PropertyInfo ICollection_1_t14768____Count_PropertyInfo = 
{
	&ICollection_1_t14768_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111585_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111586_MethodInfo;
static PropertyInfo ICollection_1_t14768____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14768_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111586_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14768_PropertyInfos[] =
{
	&ICollection_1_t14768____Count_PropertyInfo,
	&ICollection_1_t14768____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14768_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::get_Count()
MethodInfo ICollection_1_get_Count_m111585_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14768_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14768_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111586_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14768_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Origin180_t662_0_0_0;
static ParameterInfo ICollection_1_t14768_ICollection_1_Add_m111587_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin180_t662_0_0_0},
};
extern TypeInfo ICollection_1_t14768_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::Add(T)
MethodInfo ICollection_1_Add_m111587_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14768_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14768_ICollection_1_Add_m111587_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14768_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::Clear()
MethodInfo ICollection_1_Clear_m111588_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14768_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Origin180_t662_0_0_0;
static ParameterInfo ICollection_1_t14768_ICollection_1_Contains_m111589_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin180_t662_0_0_0},
};
extern TypeInfo ICollection_1_t14768_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::Contains(T)
MethodInfo ICollection_1_Contains_m111589_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14768_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14768_ICollection_1_Contains_m111589_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Origin180U5BU5D_t12737_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14768_ICollection_1_CopyTo_m111590_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Origin180U5BU5D_t12737_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14768_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111590_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14768_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14768_ICollection_1_CopyTo_m111590_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Origin180_t662_0_0_0;
static ParameterInfo ICollection_1_t14768_ICollection_1_Remove_m111591_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin180_t662_0_0_0},
};
extern TypeInfo ICollection_1_t14768_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::Remove(T)
MethodInfo ICollection_1_Remove_m111591_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14768_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14768_ICollection_1_Remove_m111591_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t14768_MethodInfos[] =
{
	&ICollection_1_get_Count_m111585_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111586_MethodInfo,
	&ICollection_1_Add_m111587_MethodInfo,
	&ICollection_1_Clear_m111588_MethodInfo,
	&ICollection_1_Contains_m111589_MethodInfo,
	&ICollection_1_CopyTo_m111590_MethodInfo,
	&ICollection_1_Remove_m111591_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14770_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14768_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14770_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14768_0_0_0;
extern Il2CppType ICollection_1_t14768_1_0_0;
struct ICollection_1_t14768;
extern TypeInfo ICollection_1_t14768_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14768_GenericClass;
TypeInfo ICollection_1_t14768_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14768_MethodInfos/* methods */
	, ICollection_1_t14768_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14768_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14768_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14768_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14768_0_0_0/* byval_arg */
	, &ICollection_1_t14768_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14768_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t14770_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Origin180>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Origin180>
extern TypeInfo IEnumerable_1_t14770_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13104_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Origin180>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111592_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14770_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13104_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t14770_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111592_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14770_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14770_0_0_0;
extern Il2CppType IEnumerable_1_t14770_1_0_0;
struct IEnumerable_1_t14770;
extern TypeInfo IEnumerable_1_t14770_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14770_GenericClass;
TypeInfo IEnumerable_1_t14770_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14770_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14770_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14770_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14770_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14770_0_0_0/* byval_arg */
	, &IEnumerable_1_t14770_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14770_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14769_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>
extern MethodInfo IList_1_get_Item_m111593_MethodInfo;
extern MethodInfo IList_1_set_Item_m111594_MethodInfo;
static PropertyInfo IList_1_t14769____Item_PropertyInfo = 
{
	&IList_1_t14769_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111593_MethodInfo/* get */
	, &IList_1_set_Item_m111594_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14769_PropertyInfos[] =
{
	&IList_1_t14769____Item_PropertyInfo,
	NULL
};
extern Il2CppType Origin180_t662_0_0_0;
static ParameterInfo IList_1_t14769_IList_1_IndexOf_m111595_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin180_t662_0_0_0},
};
extern TypeInfo IList_1_t14769_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111595_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14769_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14769_IList_1_IndexOf_m111595_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Origin180_t662_0_0_0;
static ParameterInfo IList_1_t14769_IList_1_Insert_m111596_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Origin180_t662_0_0_0},
};
extern TypeInfo IList_1_t14769_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111596_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14769_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14769_IList_1_Insert_m111596_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14769_IList_1_RemoveAt_m111597_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14769_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111597_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14769_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14769_IList_1_RemoveAt_m111597_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14769_IList_1_get_Item_m111593_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14769_il2cpp_TypeInfo;
extern Il2CppType Origin180_t662_0_0_0;
extern void* RuntimeInvoker_Origin180_t662_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111593_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14769_il2cpp_TypeInfo/* declaring_type */
	, &Origin180_t662_0_0_0/* return_type */
	, RuntimeInvoker_Origin180_t662_Int32_t63/* invoker_method */
	, IList_1_t14769_IList_1_get_Item_m111593_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Origin180_t662_0_0_0;
static ParameterInfo IList_1_t14769_IList_1_set_Item_m111594_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Origin180_t662_0_0_0},
};
extern TypeInfo IList_1_t14769_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111594_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14769_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14769_IList_1_set_Item_m111594_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t14769_MethodInfos[] =
{
	&IList_1_IndexOf_m111595_MethodInfo,
	&IList_1_Insert_m111596_MethodInfo,
	&IList_1_RemoveAt_m111597_MethodInfo,
	&IList_1_get_Item_m111593_MethodInfo,
	&IList_1_set_Item_m111594_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14768_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14770_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14769_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14768_il2cpp_TypeInfo,
	&IEnumerable_1_t14770_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14769_0_0_0;
extern Il2CppType IList_1_t14769_1_0_0;
struct IList_1_t14769;
extern TypeInfo IList_1_t14769_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14769_GenericClass;
extern CustomAttributesCache IList_1_t3845__CustomAttributeCache;
TypeInfo IList_1_t14769_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14769_MethodInfos/* methods */
	, IList_1_t14769_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14769_il2cpp_TypeInfo/* element_class */
	, IList_1_t14769_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3845__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14769_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14769_0_0_0/* byval_arg */
	, &IList_1_t14769_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14769_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13105_il2cpp_TypeInfo;

// UnityEngine.UI.Image/Origin360
#include "UnityEngine_UI_UnityEngine_UI_Image_Origin360.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Origin360>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Origin360>
extern MethodInfo IEnumerator_1_get_Current_m111598_MethodInfo;
static PropertyInfo IEnumerator_1_t13105____Current_PropertyInfo = 
{
	&IEnumerator_1_t13105_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111598_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13105_PropertyInfos[] =
{
	&IEnumerator_1_t13105____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t13105_il2cpp_TypeInfo;
extern Il2CppType Origin360_t663_0_0_0;
extern void* RuntimeInvoker_Origin360_t663 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Origin360>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111598_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13105_il2cpp_TypeInfo/* declaring_type */
	, &Origin360_t663_0_0_0/* return_type */
	, RuntimeInvoker_Origin360_t663/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t13105_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111598_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t13105_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13105_0_0_0;
extern Il2CppType IEnumerator_1_t13105_1_0_0;
struct IEnumerator_1_t13105;
extern TypeInfo IEnumerator_1_t13105_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t13105_GenericClass;
TypeInfo IEnumerator_1_t13105_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13105_MethodInfos/* methods */
	, IEnumerator_1_t13105_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13105_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13105_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13105_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13105_0_0_0/* byval_arg */
	, &IEnumerator_1_t13105_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13105_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_339.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5542_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_339MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5542_il2cpp_TypeInfo;
extern TypeInfo Origin360_t663_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26033_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5142_MethodInfo;
extern MethodInfo Array_get_Length_m7860_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOrigin360_t663_m94222_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/Origin360>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/Origin360>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisOrigin360_t663_m94222 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisOrigin360_t663_m94222_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26028_MethodInfo;
 void InternalEnumerator_1__ctor_m26028 (InternalEnumerator_1_t5542 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26029_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26029 (InternalEnumerator_1_t5542 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26030_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26030 (InternalEnumerator_1_t5542 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26033(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26033_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Origin360_t663_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26031_MethodInfo;
 void InternalEnumerator_1_Dispose_m26031 (InternalEnumerator_1_t5542 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26032_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26032 (InternalEnumerator_1_t5542 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7860(L_1, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		__this->___idx = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m26033_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26033 (InternalEnumerator_1_t5542 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_1, (String_t*) &_stringLiteral2292, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t935 * L_3 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_3, (String_t*) &_stringLiteral2293, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7860(L_5, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisOrigin360_t663_m94222(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisOrigin360_t663_m94222_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5542____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5542_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5542, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5542____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5542_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5542, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5542_FieldInfos[] =
{
	&InternalEnumerator_1_t5542____array_FieldInfo,
	&InternalEnumerator_1_t5542____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26030_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5542____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5542_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26030_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26033_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5542____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5542_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26033_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5542_PropertyInfos[] =
{
	&InternalEnumerator_1_t5542____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5542____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5542_InternalEnumerator_1__ctor_m26028_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5542_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26028_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26028/* method */
	, &InternalEnumerator_1_t5542_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5542_InternalEnumerator_1__ctor_m26028_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5542_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26029_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26029/* method */
	, &InternalEnumerator_1_t5542_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5542_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26030_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26030/* method */
	, &InternalEnumerator_1_t5542_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5542_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26031_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26031/* method */
	, &InternalEnumerator_1_t5542_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5542_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26032_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26032/* method */
	, &InternalEnumerator_1_t5542_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5542_il2cpp_TypeInfo;
extern Il2CppType Origin360_t663_0_0_0;
extern void* RuntimeInvoker_Origin360_t663 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26033_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26033/* method */
	, &InternalEnumerator_1_t5542_il2cpp_TypeInfo/* declaring_type */
	, &Origin360_t663_0_0_0/* return_type */
	, RuntimeInvoker_Origin360_t663/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t5542_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26028_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26029_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26030_MethodInfo,
	&InternalEnumerator_1_Dispose_m26031_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26032_MethodInfo,
	&InternalEnumerator_1_get_Current_m26033_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26030_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26032_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26029_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26031_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26033_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5542_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26030_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26032_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26029_MethodInfo,
	&InternalEnumerator_1_Dispose_m26031_MethodInfo,
	&InternalEnumerator_1_get_Current_m26033_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13105_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5542_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t13105_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13105_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5542_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13105_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5542_0_0_0;
extern Il2CppType InternalEnumerator_1_t5542_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5542_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5542_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5542_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5542_MethodInfos/* methods */
	, InternalEnumerator_1_t5542_PropertyInfos/* properties */
	, InternalEnumerator_1_t5542_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5542_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5542_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5542_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5542_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5542_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5542_1_0_0/* this_arg */
	, InternalEnumerator_1_t5542_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5542_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5542)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14771_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>
extern MethodInfo ICollection_1_get_Count_m111599_MethodInfo;
static PropertyInfo ICollection_1_t14771____Count_PropertyInfo = 
{
	&ICollection_1_t14771_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111599_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111600_MethodInfo;
static PropertyInfo ICollection_1_t14771____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14771_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111600_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14771_PropertyInfos[] =
{
	&ICollection_1_t14771____Count_PropertyInfo,
	&ICollection_1_t14771____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14771_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::get_Count()
MethodInfo ICollection_1_get_Count_m111599_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14771_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14771_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111600_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14771_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Origin360_t663_0_0_0;
static ParameterInfo ICollection_1_t14771_ICollection_1_Add_m111601_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin360_t663_0_0_0},
};
extern TypeInfo ICollection_1_t14771_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::Add(T)
MethodInfo ICollection_1_Add_m111601_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14771_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14771_ICollection_1_Add_m111601_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14771_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::Clear()
MethodInfo ICollection_1_Clear_m111602_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14771_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Origin360_t663_0_0_0;
static ParameterInfo ICollection_1_t14771_ICollection_1_Contains_m111603_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin360_t663_0_0_0},
};
extern TypeInfo ICollection_1_t14771_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::Contains(T)
MethodInfo ICollection_1_Contains_m111603_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14771_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14771_ICollection_1_Contains_m111603_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Origin360U5BU5D_t12738_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14771_ICollection_1_CopyTo_m111604_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Origin360U5BU5D_t12738_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14771_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111604_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14771_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14771_ICollection_1_CopyTo_m111604_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Origin360_t663_0_0_0;
static ParameterInfo ICollection_1_t14771_ICollection_1_Remove_m111605_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin360_t663_0_0_0},
};
extern TypeInfo ICollection_1_t14771_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::Remove(T)
MethodInfo ICollection_1_Remove_m111605_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14771_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14771_ICollection_1_Remove_m111605_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t14771_MethodInfos[] =
{
	&ICollection_1_get_Count_m111599_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111600_MethodInfo,
	&ICollection_1_Add_m111601_MethodInfo,
	&ICollection_1_Clear_m111602_MethodInfo,
	&ICollection_1_Contains_m111603_MethodInfo,
	&ICollection_1_CopyTo_m111604_MethodInfo,
	&ICollection_1_Remove_m111605_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14773_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14771_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14773_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14771_0_0_0;
extern Il2CppType ICollection_1_t14771_1_0_0;
struct ICollection_1_t14771;
extern TypeInfo ICollection_1_t14771_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14771_GenericClass;
TypeInfo ICollection_1_t14771_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14771_MethodInfos/* methods */
	, ICollection_1_t14771_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14771_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14771_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14771_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14771_0_0_0/* byval_arg */
	, &ICollection_1_t14771_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14771_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t14773_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Origin360>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Origin360>
extern TypeInfo IEnumerable_1_t14773_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13105_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Origin360>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111606_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14773_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13105_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t14773_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111606_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14773_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14773_0_0_0;
extern Il2CppType IEnumerable_1_t14773_1_0_0;
struct IEnumerable_1_t14773;
extern TypeInfo IEnumerable_1_t14773_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14773_GenericClass;
TypeInfo IEnumerable_1_t14773_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14773_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14773_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14773_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14773_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14773_0_0_0/* byval_arg */
	, &IEnumerable_1_t14773_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14773_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14772_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>
extern MethodInfo IList_1_get_Item_m111607_MethodInfo;
extern MethodInfo IList_1_set_Item_m111608_MethodInfo;
static PropertyInfo IList_1_t14772____Item_PropertyInfo = 
{
	&IList_1_t14772_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111607_MethodInfo/* get */
	, &IList_1_set_Item_m111608_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14772_PropertyInfos[] =
{
	&IList_1_t14772____Item_PropertyInfo,
	NULL
};
extern Il2CppType Origin360_t663_0_0_0;
static ParameterInfo IList_1_t14772_IList_1_IndexOf_m111609_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin360_t663_0_0_0},
};
extern TypeInfo IList_1_t14772_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111609_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14772_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14772_IList_1_IndexOf_m111609_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Origin360_t663_0_0_0;
static ParameterInfo IList_1_t14772_IList_1_Insert_m111610_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Origin360_t663_0_0_0},
};
extern TypeInfo IList_1_t14772_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111610_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14772_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14772_IList_1_Insert_m111610_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14772_IList_1_RemoveAt_m111611_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14772_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111611_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14772_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14772_IList_1_RemoveAt_m111611_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14772_IList_1_get_Item_m111607_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14772_il2cpp_TypeInfo;
extern Il2CppType Origin360_t663_0_0_0;
extern void* RuntimeInvoker_Origin360_t663_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111607_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14772_il2cpp_TypeInfo/* declaring_type */
	, &Origin360_t663_0_0_0/* return_type */
	, RuntimeInvoker_Origin360_t663_Int32_t63/* invoker_method */
	, IList_1_t14772_IList_1_get_Item_m111607_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Origin360_t663_0_0_0;
static ParameterInfo IList_1_t14772_IList_1_set_Item_m111608_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Origin360_t663_0_0_0},
};
extern TypeInfo IList_1_t14772_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111608_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14772_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14772_IList_1_set_Item_m111608_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t14772_MethodInfos[] =
{
	&IList_1_IndexOf_m111609_MethodInfo,
	&IList_1_Insert_m111610_MethodInfo,
	&IList_1_RemoveAt_m111611_MethodInfo,
	&IList_1_get_Item_m111607_MethodInfo,
	&IList_1_set_Item_m111608_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14771_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14773_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14772_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14771_il2cpp_TypeInfo,
	&IEnumerable_1_t14773_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14772_0_0_0;
extern Il2CppType IList_1_t14772_1_0_0;
struct IList_1_t14772;
extern TypeInfo IList_1_t14772_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14772_GenericClass;
extern CustomAttributesCache IList_1_t3845__CustomAttributeCache;
TypeInfo IList_1_t14772_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14772_MethodInfos/* methods */
	, IList_1_t14772_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14772_il2cpp_TypeInfo/* element_class */
	, IList_1_t14772_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3845__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14772_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14772_0_0_0/* byval_arg */
	, &IList_1_t14772_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14772_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13106_il2cpp_TypeInfo;

// UnityEngine.UI.InputField
#include "UnityEngine_UI_UnityEngine_UI_InputField.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField>
extern MethodInfo IEnumerator_1_get_Current_m111612_MethodInfo;
static PropertyInfo IEnumerator_1_t13106____Current_PropertyInfo = 
{
	&IEnumerator_1_t13106_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111612_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13106_PropertyInfos[] =
{
	&IEnumerator_1_t13106____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t13106_il2cpp_TypeInfo;
extern Il2CppType InputField_t538_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111612_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13106_il2cpp_TypeInfo/* declaring_type */
	, &InputField_t538_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t13106_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111612_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t13106_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13106_0_0_0;
extern Il2CppType IEnumerator_1_t13106_1_0_0;
struct IEnumerator_1_t13106;
extern TypeInfo IEnumerator_1_t13106_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t13106_GenericClass;
TypeInfo IEnumerator_1_t13106_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13106_MethodInfos/* methods */
	, IEnumerator_1_t13106_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13106_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13106_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13106_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13106_0_0_0/* byval_arg */
	, &IEnumerator_1_t13106_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13106_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_340.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5543_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_340MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5543_il2cpp_TypeInfo;
extern TypeInfo InputField_t538_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26039_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5142_MethodInfo;
extern MethodInfo Array_get_Length_m7860_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisInputField_t538_m94233_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m89686_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m89686(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m89686_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField>(System.Int32)
#define Array_InternalArray__get_Item_TisInputField_t538_m94233(__this, p0, method) (InputField_t538 *)Array_InternalArray__get_Item_TisObject_t_m89686_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisInputField_t538_m94233_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5543____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5543_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5543, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5543____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5543_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5543, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5543_FieldInfos[] =
{
	&InternalEnumerator_1_t5543____array_FieldInfo,
	&InternalEnumerator_1_t5543____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26036_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5543____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5543_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26036_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26039_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5543____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5543_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26039_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5543_PropertyInfos[] =
{
	&InternalEnumerator_1_t5543____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5543____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5543_InternalEnumerator_1__ctor_m26034_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5543_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26034_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m15494_gshared/* method */
	, &InternalEnumerator_1_t5543_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5543_InternalEnumerator_1__ctor_m26034_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5543_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26035_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m15495_gshared/* method */
	, &InternalEnumerator_1_t5543_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5543_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26036_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15496_gshared/* method */
	, &InternalEnumerator_1_t5543_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5543_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26037_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m15497_gshared/* method */
	, &InternalEnumerator_1_t5543_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5543_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26038_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m15498_gshared/* method */
	, &InternalEnumerator_1_t5543_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5543_il2cpp_TypeInfo;
extern Il2CppType InputField_t538_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26039_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m15499_gshared/* method */
	, &InternalEnumerator_1_t5543_il2cpp_TypeInfo/* declaring_type */
	, &InputField_t538_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t5543_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26034_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26035_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26036_MethodInfo,
	&InternalEnumerator_1_Dispose_m26037_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26038_MethodInfo,
	&InternalEnumerator_1_get_Current_m26039_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26036_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26038_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26035_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26037_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26039_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5543_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26036_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26038_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26035_MethodInfo,
	&InternalEnumerator_1_Dispose_m26037_MethodInfo,
	&InternalEnumerator_1_get_Current_m26039_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13106_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5543_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t13106_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13106_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5543_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13106_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m26039_MethodInfo;
extern TypeInfo InputField_t538_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisInputField_t538_m94233_MethodInfo;
static void* InternalEnumerator_1_t5543_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26039_MethodInfo,
	&InputField_t538_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisInputField_t538_m94233_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5543_0_0_0;
extern Il2CppType InternalEnumerator_1_t5543_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5543_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5543_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5543_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5543_MethodInfos/* methods */
	, InternalEnumerator_1_t5543_PropertyInfos/* properties */
	, InternalEnumerator_1_t5543_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5543_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5543_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5543_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5543_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5543_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5543_1_0_0/* this_arg */
	, InternalEnumerator_1_t5543_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5543_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t5543_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5543)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14774_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>
extern MethodInfo ICollection_1_get_Count_m111613_MethodInfo;
static PropertyInfo ICollection_1_t14774____Count_PropertyInfo = 
{
	&ICollection_1_t14774_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111613_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111614_MethodInfo;
static PropertyInfo ICollection_1_t14774____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14774_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111614_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14774_PropertyInfos[] =
{
	&ICollection_1_t14774____Count_PropertyInfo,
	&ICollection_1_t14774____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14774_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::get_Count()
MethodInfo ICollection_1_get_Count_m111613_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14774_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14774_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111614_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14774_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType InputField_t538_0_0_0;
static ParameterInfo ICollection_1_t14774_ICollection_1_Add_m111615_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InputField_t538_0_0_0},
};
extern TypeInfo ICollection_1_t14774_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::Add(T)
MethodInfo ICollection_1_Add_m111615_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14774_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, ICollection_1_t14774_ICollection_1_Add_m111615_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14774_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::Clear()
MethodInfo ICollection_1_Clear_m111616_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14774_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType InputField_t538_0_0_0;
static ParameterInfo ICollection_1_t14774_ICollection_1_Contains_m111617_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InputField_t538_0_0_0},
};
extern TypeInfo ICollection_1_t14774_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::Contains(T)
MethodInfo ICollection_1_Contains_m111617_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14774_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t14774_ICollection_1_Contains_m111617_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType InputFieldU5BU5D_t12739_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14774_ICollection_1_CopyTo_m111618_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &InputFieldU5BU5D_t12739_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14774_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111618_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14774_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14774_ICollection_1_CopyTo_m111618_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType InputField_t538_0_0_0;
static ParameterInfo ICollection_1_t14774_ICollection_1_Remove_m111619_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InputField_t538_0_0_0},
};
extern TypeInfo ICollection_1_t14774_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::Remove(T)
MethodInfo ICollection_1_Remove_m111619_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14774_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t14774_ICollection_1_Remove_m111619_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t14774_MethodInfos[] =
{
	&ICollection_1_get_Count_m111613_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111614_MethodInfo,
	&ICollection_1_Add_m111615_MethodInfo,
	&ICollection_1_Clear_m111616_MethodInfo,
	&ICollection_1_Contains_m111617_MethodInfo,
	&ICollection_1_CopyTo_m111618_MethodInfo,
	&ICollection_1_Remove_m111619_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14776_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14774_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14776_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14774_0_0_0;
extern Il2CppType ICollection_1_t14774_1_0_0;
struct ICollection_1_t14774;
extern TypeInfo ICollection_1_t14774_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14774_GenericClass;
TypeInfo ICollection_1_t14774_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14774_MethodInfos/* methods */
	, ICollection_1_t14774_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14774_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14774_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14774_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14774_0_0_0/* byval_arg */
	, &ICollection_1_t14774_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14774_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t14776_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField>
extern TypeInfo IEnumerable_1_t14776_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13106_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111620_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14776_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13106_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t14776_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111620_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14776_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14776_0_0_0;
extern Il2CppType IEnumerable_1_t14776_1_0_0;
struct IEnumerable_1_t14776;
extern TypeInfo IEnumerable_1_t14776_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14776_GenericClass;
TypeInfo IEnumerable_1_t14776_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14776_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14776_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14776_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14776_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14776_0_0_0/* byval_arg */
	, &IEnumerable_1_t14776_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14776_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14775_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.InputField>
extern MethodInfo IList_1_get_Item_m111621_MethodInfo;
extern MethodInfo IList_1_set_Item_m111622_MethodInfo;
static PropertyInfo IList_1_t14775____Item_PropertyInfo = 
{
	&IList_1_t14775_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111621_MethodInfo/* get */
	, &IList_1_set_Item_m111622_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14775_PropertyInfos[] =
{
	&IList_1_t14775____Item_PropertyInfo,
	NULL
};
extern Il2CppType InputField_t538_0_0_0;
static ParameterInfo IList_1_t14775_IList_1_IndexOf_m111623_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InputField_t538_0_0_0},
};
extern TypeInfo IList_1_t14775_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111623_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14775_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t14775_IList_1_IndexOf_m111623_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType InputField_t538_0_0_0;
static ParameterInfo IList_1_t14775_IList_1_Insert_m111624_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &InputField_t538_0_0_0},
};
extern TypeInfo IList_1_t14775_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111624_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14775_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Object_t/* invoker_method */
	, IList_1_t14775_IList_1_Insert_m111624_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14775_IList_1_RemoveAt_m111625_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14775_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111625_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14775_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14775_IList_1_RemoveAt_m111625_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14775_IList_1_get_Item_m111621_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14775_il2cpp_TypeInfo;
extern Il2CppType InputField_t538_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111621_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14775_il2cpp_TypeInfo/* declaring_type */
	, &InputField_t538_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t14775_IList_1_get_Item_m111621_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType InputField_t538_0_0_0;
static ParameterInfo IList_1_t14775_IList_1_set_Item_m111622_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &InputField_t538_0_0_0},
};
extern TypeInfo IList_1_t14775_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111622_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14775_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Object_t/* invoker_method */
	, IList_1_t14775_IList_1_set_Item_m111622_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t14775_MethodInfos[] =
{
	&IList_1_IndexOf_m111623_MethodInfo,
	&IList_1_Insert_m111624_MethodInfo,
	&IList_1_RemoveAt_m111625_MethodInfo,
	&IList_1_get_Item_m111621_MethodInfo,
	&IList_1_set_Item_m111622_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14774_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14776_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14775_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14774_il2cpp_TypeInfo,
	&IEnumerable_1_t14776_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14775_0_0_0;
extern Il2CppType IList_1_t14775_1_0_0;
struct IList_1_t14775;
extern TypeInfo IList_1_t14775_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14775_GenericClass;
extern CustomAttributesCache IList_1_t3845__CustomAttributeCache;
TypeInfo IList_1_t14775_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14775_MethodInfos/* methods */
	, IList_1_t14775_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14775_il2cpp_TypeInfo/* element_class */
	, IList_1_t14775_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3845__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14775_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14775_0_0_0/* byval_arg */
	, &IList_1_t14775_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14775_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.InputField>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_130.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t5544_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.InputField>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_130MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_128.h"
extern TypeInfo ObjectU5BU5D_t5_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t5544_il2cpp_TypeInfo;
extern TypeInfo InputField_t538_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t5545_il2cpp_TypeInfo;
extern TypeInfo Void_t40_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_128MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m26042_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m26044_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.InputField>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.InputField>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.InputField>
extern Il2CppType ObjectU5BU5D_t5_0_0_33;
FieldInfo CachedInvokableCall_1_t5544____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t5_0_0_33/* type */
	, &CachedInvokableCall_1_t5544_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t5544, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t5544_FieldInfos[] =
{
	&CachedInvokableCall_1_t5544____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t111_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
extern Il2CppType InputField_t538_0_0_0;
static ParameterInfo CachedInvokableCall_1_t5544_CachedInvokableCall_1__ctor_m26040_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t111_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &InputField_t538_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t5544_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.InputField>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m26040_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m16515_gshared/* method */
	, &CachedInvokableCall_1_t5544_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t5544_CachedInvokableCall_1__ctor_m26040_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t5_0_0_0;
static ParameterInfo CachedInvokableCall_1_t5544_CachedInvokableCall_1_Invoke_m26041_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t5_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t5544_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.InputField>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m26041_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m16517_gshared/* method */
	, &CachedInvokableCall_1_t5544_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, CachedInvokableCall_1_t5544_CachedInvokableCall_1_Invoke_m26041_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CachedInvokableCall_1_t5544_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m26040_MethodInfo,
	&CachedInvokableCall_1_Invoke_m26041_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m26041_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m26045_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t5544_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&CachedInvokableCall_1_Invoke_m26041_MethodInfo,
	&InvokableCall_1_Find_m26045_MethodInfo,
};
extern Il2CppType UnityAction_1_t5546_0_0_0;
extern TypeInfo UnityAction_1_t5546_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisInputField_t538_m94243_MethodInfo;
extern TypeInfo InputField_t538_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m26047_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m26042_MethodInfo;
extern TypeInfo InputField_t538_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m26044_MethodInfo;
static void* CachedInvokableCall_1_t5544_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t5546_0_0_0,
	&UnityAction_1_t5546_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisInputField_t538_m94243_MethodInfo,
	&InputField_t538_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m26047_MethodInfo,
	&InvokableCall_1__ctor_m26042_MethodInfo,
	&InputField_t538_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m26044_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t5544_0_0_0;
extern Il2CppType CachedInvokableCall_1_t5544_1_0_0;
extern TypeInfo InvokableCall_1_t5545_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t5544;
extern TypeInfo CachedInvokableCall_1_t5544_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t5544_GenericClass;
TypeInfo CachedInvokableCall_1_t5544_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t5544_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t5544_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t5545_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t5544_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t5544_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t5544_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t5544_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t5544_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t5544_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t5544_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t5544)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_1_t5545_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_134.h"
extern TypeInfo InvokableCall_1_t5545_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t5546_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t401_il2cpp_TypeInfo;
extern TypeInfo InputField_t538_il2cpp_TypeInfo;
extern TypeInfo Void_t40_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_134MethodDeclarations.h"
extern Il2CppType UnityAction_1_t5546_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m8993_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m385_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m9174_MethodInfo;
extern MethodInfo Delegate_Combine_m4230_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m8992_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1970_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisInputField_t538_m94243_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m8994_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m26047_MethodInfo;
extern MethodInfo Delegate_get_Target_m9170_MethodInfo;
extern MethodInfo Delegate_get_Method_m9168_MethodInfo;
struct BaseInvokableCall_t2624;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.UI.InputField>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.UI.InputField>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisInputField_t538_m94243(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m90272_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisInputField_t538_m94243_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>
extern Il2CppType UnityAction_1_t5546_0_0_1;
FieldInfo InvokableCall_1_t5545____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t5546_0_0_1/* type */
	, &InvokableCall_1_t5545_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t5545, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t5545_FieldInfos[] =
{
	&InvokableCall_1_t5545____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
static ParameterInfo InvokableCall_1_t5545_InvokableCall_1__ctor_m26042_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo InvokableCall_1_t5545_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m26042_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m16518_gshared/* method */
	, &InvokableCall_1_t5545_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t5545_InvokableCall_1__ctor_m26042_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UnityAction_1_t5546_0_0_0;
static ParameterInfo InvokableCall_1_t5545_InvokableCall_1__ctor_m26043_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t5546_0_0_0},
};
extern TypeInfo InvokableCall_1_t5545_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m26043_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m16519_gshared/* method */
	, &InvokableCall_1_t5545_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InvokableCall_1_t5545_InvokableCall_1__ctor_m26043_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t5_0_0_0;
static ParameterInfo InvokableCall_1_t5545_InvokableCall_1_Invoke_m26044_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t5_0_0_0},
};
extern TypeInfo InvokableCall_1_t5545_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m26044_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m16520_gshared/* method */
	, &InvokableCall_1_t5545_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InvokableCall_1_t5545_InvokableCall_1_Invoke_m26044_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
static ParameterInfo InvokableCall_1_t5545_InvokableCall_1_Find_m26045_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo InvokableCall_1_t5545_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m26045_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m16521_gshared/* method */
	, &InvokableCall_1_t5545_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t5545_InvokableCall_1_Find_m26045_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InvokableCall_1_t5545_MethodInfos[] =
{
	&InvokableCall_1__ctor_m26042_MethodInfo,
	&InvokableCall_1__ctor_m26043_MethodInfo,
	&InvokableCall_1_Invoke_m26044_MethodInfo,
	&InvokableCall_1_Find_m26045_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m26044_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m26045_MethodInfo;
static MethodInfo* InvokableCall_1_t5545_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&InvokableCall_1_Invoke_m26044_MethodInfo,
	&InvokableCall_1_Find_m26045_MethodInfo,
};
extern Il2CppType UnityAction_1_t5546_0_0_0;
extern TypeInfo UnityAction_1_t5546_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisInputField_t538_m94243_MethodInfo;
extern TypeInfo InputField_t538_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m26047_MethodInfo;
static void* InvokableCall_1_t5545_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t5546_0_0_0,
	&UnityAction_1_t5546_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisInputField_t538_m94243_MethodInfo,
	&InputField_t538_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m26047_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t5545_0_0_0;
extern Il2CppType InvokableCall_1_t5545_1_0_0;
extern TypeInfo BaseInvokableCall_t2624_il2cpp_TypeInfo;
struct InvokableCall_1_t5545;
extern TypeInfo InvokableCall_1_t5545_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t5545_GenericClass;
TypeInfo InvokableCall_1_t5545_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t5545_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t5545_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t2624_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t5545_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t5545_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t5545_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t5545_0_0_0/* byval_arg */
	, &InvokableCall_1_t5545_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t5545_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t5545_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t5545)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t5546_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t39_0_0_0;
static ParameterInfo UnityAction_1_t5546_UnityAction_1__ctor_m26046_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t39_0_0_0},
};
extern TypeInfo UnityAction_1_t5546_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_IntPtr_t39 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m26046_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m16522_gshared/* method */
	, &UnityAction_1_t5546_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_IntPtr_t39/* invoker_method */
	, UnityAction_1_t5546_UnityAction_1__ctor_m26046_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType InputField_t538_0_0_0;
static ParameterInfo UnityAction_1_t5546_UnityAction_1_Invoke_m26047_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &InputField_t538_0_0_0},
};
extern TypeInfo UnityAction_1_t5546_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m26047_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m16523_gshared/* method */
	, &UnityAction_1_t5546_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityAction_1_t5546_UnityAction_1_Invoke_m26047_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType InputField_t538_0_0_0;
extern Il2CppType AsyncCallback_t35_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t5546_UnityAction_1_BeginInvoke_m26048_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &InputField_t538_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t35_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t5546_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t34_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m26048_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m16524_gshared/* method */
	, &UnityAction_1_t5546_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t34_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t5546_UnityAction_1_BeginInvoke_m26048_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t34_0_0_0;
static ParameterInfo UnityAction_1_t5546_UnityAction_1_EndInvoke_m26049_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t34_0_0_0},
};
extern TypeInfo UnityAction_1_t5546_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m26049_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m16525_gshared/* method */
	, &UnityAction_1_t5546_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityAction_1_t5546_UnityAction_1_EndInvoke_m26049_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* UnityAction_1_t5546_MethodInfos[] =
{
	&UnityAction_1__ctor_m26046_MethodInfo,
	&UnityAction_1_Invoke_m26047_MethodInfo,
	&UnityAction_1_BeginInvoke_m26048_MethodInfo,
	&UnityAction_1_EndInvoke_m26049_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m469_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m470_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m471_MethodInfo;
extern MethodInfo MulticastDelegate_DynamicInvokeImpl_m472_MethodInfo;
extern MethodInfo Delegate_Clone_m473_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m471_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m474_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m475_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m476_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m26047_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m26048_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m26049_MethodInfo;
static MethodInfo* UnityAction_1_t5546_VTable[] =
{
	&MulticastDelegate_Equals_m469_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&MulticastDelegate_GetHashCode_m470_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&MulticastDelegate_GetObjectData_m471_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m472_MethodInfo,
	&Delegate_Clone_m473_MethodInfo,
	&MulticastDelegate_GetObjectData_m471_MethodInfo,
	&MulticastDelegate_GetInvocationList_m474_MethodInfo,
	&MulticastDelegate_CombineImpl_m475_MethodInfo,
	&MulticastDelegate_RemoveImpl_m476_MethodInfo,
	&UnityAction_1_Invoke_m26047_MethodInfo,
	&UnityAction_1_BeginInvoke_m26048_MethodInfo,
	&UnityAction_1_EndInvoke_m26049_MethodInfo,
};
extern TypeInfo ICloneable_t84_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t85_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t5546_InterfacesOffsets[] = 
{
	{ &ICloneable_t84_il2cpp_TypeInfo, 4},
	{ &ISerializable_t85_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t5546_0_0_0;
extern Il2CppType UnityAction_1_t5546_1_0_0;
extern TypeInfo MulticastDelegate_t38_il2cpp_TypeInfo;
struct UnityAction_1_t5546;
extern TypeInfo UnityAction_1_t5546_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t5546_GenericClass;
TypeInfo UnityAction_1_t5546_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t5546_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t38_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t5546_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t5546_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t5546_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t5546_0_0_0/* byval_arg */
	, &UnityAction_1_t5546_1_0_0/* this_arg */
	, UnityAction_1_t5546_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t5546_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t5546)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13107_il2cpp_TypeInfo;

// UnityEngine.UI.InputField/ContentType
#include "UnityEngine_UI_UnityEngine_UI_InputField_ContentType.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/ContentType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/ContentType>
extern MethodInfo IEnumerator_1_get_Current_m111626_MethodInfo;
static PropertyInfo IEnumerator_1_t13107____Current_PropertyInfo = 
{
	&IEnumerator_1_t13107_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111626_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13107_PropertyInfos[] =
{
	&IEnumerator_1_t13107____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t13107_il2cpp_TypeInfo;
extern Il2CppType ContentType_t669_0_0_0;
extern void* RuntimeInvoker_ContentType_t669 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/ContentType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111626_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13107_il2cpp_TypeInfo/* declaring_type */
	, &ContentType_t669_0_0_0/* return_type */
	, RuntimeInvoker_ContentType_t669/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t13107_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111626_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t13107_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13107_0_0_0;
extern Il2CppType IEnumerator_1_t13107_1_0_0;
struct IEnumerator_1_t13107;
extern TypeInfo IEnumerator_1_t13107_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t13107_GenericClass;
TypeInfo IEnumerator_1_t13107_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13107_MethodInfos/* methods */
	, IEnumerator_1_t13107_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13107_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13107_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13107_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13107_0_0_0/* byval_arg */
	, &IEnumerator_1_t13107_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13107_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_341.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5547_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_341MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5547_il2cpp_TypeInfo;
extern TypeInfo ContentType_t669_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26055_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5142_MethodInfo;
extern MethodInfo Array_get_Length_m7860_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContentType_t669_m94245_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/ContentType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/ContentType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisContentType_t669_m94245 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisContentType_t669_m94245_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26050_MethodInfo;
 void InternalEnumerator_1__ctor_m26050 (InternalEnumerator_1_t5547 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26051_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26051 (InternalEnumerator_1_t5547 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26052_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26052 (InternalEnumerator_1_t5547 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26055(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26055_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ContentType_t669_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26053_MethodInfo;
 void InternalEnumerator_1_Dispose_m26053 (InternalEnumerator_1_t5547 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26054_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26054 (InternalEnumerator_1_t5547 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7860(L_1, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		__this->___idx = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m26055_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26055 (InternalEnumerator_1_t5547 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_1, (String_t*) &_stringLiteral2292, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t935 * L_3 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_3, (String_t*) &_stringLiteral2293, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7860(L_5, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisContentType_t669_m94245(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisContentType_t669_m94245_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5547____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5547_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5547, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5547____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5547_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5547, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5547_FieldInfos[] =
{
	&InternalEnumerator_1_t5547____array_FieldInfo,
	&InternalEnumerator_1_t5547____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26052_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5547____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5547_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26052_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26055_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5547____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5547_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26055_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5547_PropertyInfos[] =
{
	&InternalEnumerator_1_t5547____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5547____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5547_InternalEnumerator_1__ctor_m26050_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5547_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26050_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26050/* method */
	, &InternalEnumerator_1_t5547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5547_InternalEnumerator_1__ctor_m26050_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5547_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26051_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26051/* method */
	, &InternalEnumerator_1_t5547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5547_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26052_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26052/* method */
	, &InternalEnumerator_1_t5547_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5547_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26053_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26053/* method */
	, &InternalEnumerator_1_t5547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5547_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26054_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26054/* method */
	, &InternalEnumerator_1_t5547_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5547_il2cpp_TypeInfo;
extern Il2CppType ContentType_t669_0_0_0;
extern void* RuntimeInvoker_ContentType_t669 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26055_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26055/* method */
	, &InternalEnumerator_1_t5547_il2cpp_TypeInfo/* declaring_type */
	, &ContentType_t669_0_0_0/* return_type */
	, RuntimeInvoker_ContentType_t669/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t5547_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26050_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26051_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26052_MethodInfo,
	&InternalEnumerator_1_Dispose_m26053_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26054_MethodInfo,
	&InternalEnumerator_1_get_Current_m26055_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26052_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26054_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26051_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26053_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26055_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5547_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26052_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26054_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26051_MethodInfo,
	&InternalEnumerator_1_Dispose_m26053_MethodInfo,
	&InternalEnumerator_1_get_Current_m26055_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13107_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5547_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t13107_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13107_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5547_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13107_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5547_0_0_0;
extern Il2CppType InternalEnumerator_1_t5547_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5547_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5547_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5547_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5547_MethodInfos/* methods */
	, InternalEnumerator_1_t5547_PropertyInfos/* properties */
	, InternalEnumerator_1_t5547_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5547_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5547_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5547_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5547_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5547_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5547_1_0_0/* this_arg */
	, InternalEnumerator_1_t5547_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5547_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5547)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14777_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>
extern MethodInfo ICollection_1_get_Count_m111627_MethodInfo;
static PropertyInfo ICollection_1_t14777____Count_PropertyInfo = 
{
	&ICollection_1_t14777_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111627_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111628_MethodInfo;
static PropertyInfo ICollection_1_t14777____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14777_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111628_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14777_PropertyInfos[] =
{
	&ICollection_1_t14777____Count_PropertyInfo,
	&ICollection_1_t14777____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14777_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::get_Count()
MethodInfo ICollection_1_get_Count_m111627_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14777_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14777_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111628_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14777_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ContentType_t669_0_0_0;
static ParameterInfo ICollection_1_t14777_ICollection_1_Add_m111629_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContentType_t669_0_0_0},
};
extern TypeInfo ICollection_1_t14777_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::Add(T)
MethodInfo ICollection_1_Add_m111629_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14777_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14777_ICollection_1_Add_m111629_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14777_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::Clear()
MethodInfo ICollection_1_Clear_m111630_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14777_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ContentType_t669_0_0_0;
static ParameterInfo ICollection_1_t14777_ICollection_1_Contains_m111631_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContentType_t669_0_0_0},
};
extern TypeInfo ICollection_1_t14777_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::Contains(T)
MethodInfo ICollection_1_Contains_m111631_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14777_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14777_ICollection_1_Contains_m111631_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ContentTypeU5BU5D_t683_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14777_ICollection_1_CopyTo_m111632_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ContentTypeU5BU5D_t683_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14777_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111632_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14777_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14777_ICollection_1_CopyTo_m111632_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ContentType_t669_0_0_0;
static ParameterInfo ICollection_1_t14777_ICollection_1_Remove_m111633_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContentType_t669_0_0_0},
};
extern TypeInfo ICollection_1_t14777_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::Remove(T)
MethodInfo ICollection_1_Remove_m111633_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14777_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14777_ICollection_1_Remove_m111633_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t14777_MethodInfos[] =
{
	&ICollection_1_get_Count_m111627_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111628_MethodInfo,
	&ICollection_1_Add_m111629_MethodInfo,
	&ICollection_1_Clear_m111630_MethodInfo,
	&ICollection_1_Contains_m111631_MethodInfo,
	&ICollection_1_CopyTo_m111632_MethodInfo,
	&ICollection_1_Remove_m111633_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14779_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14777_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14779_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14777_0_0_0;
extern Il2CppType ICollection_1_t14777_1_0_0;
struct ICollection_1_t14777;
extern TypeInfo ICollection_1_t14777_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14777_GenericClass;
TypeInfo ICollection_1_t14777_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14777_MethodInfos/* methods */
	, ICollection_1_t14777_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14777_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14777_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14777_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14777_0_0_0/* byval_arg */
	, &ICollection_1_t14777_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14777_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t14779_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/ContentType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/ContentType>
extern TypeInfo IEnumerable_1_t14779_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13107_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/ContentType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111634_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14779_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13107_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t14779_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111634_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14779_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14779_0_0_0;
extern Il2CppType IEnumerable_1_t14779_1_0_0;
struct IEnumerable_1_t14779;
extern TypeInfo IEnumerable_1_t14779_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14779_GenericClass;
TypeInfo IEnumerable_1_t14779_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14779_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14779_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14779_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14779_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14779_0_0_0/* byval_arg */
	, &IEnumerable_1_t14779_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14779_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14778_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>
extern MethodInfo IList_1_get_Item_m111635_MethodInfo;
extern MethodInfo IList_1_set_Item_m111636_MethodInfo;
static PropertyInfo IList_1_t14778____Item_PropertyInfo = 
{
	&IList_1_t14778_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111635_MethodInfo/* get */
	, &IList_1_set_Item_m111636_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14778_PropertyInfos[] =
{
	&IList_1_t14778____Item_PropertyInfo,
	NULL
};
extern Il2CppType ContentType_t669_0_0_0;
static ParameterInfo IList_1_t14778_IList_1_IndexOf_m111637_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContentType_t669_0_0_0},
};
extern TypeInfo IList_1_t14778_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111637_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14778_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14778_IList_1_IndexOf_m111637_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ContentType_t669_0_0_0;
static ParameterInfo IList_1_t14778_IList_1_Insert_m111638_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ContentType_t669_0_0_0},
};
extern TypeInfo IList_1_t14778_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111638_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14778_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14778_IList_1_Insert_m111638_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14778_IList_1_RemoveAt_m111639_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14778_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111639_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14778_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14778_IList_1_RemoveAt_m111639_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14778_IList_1_get_Item_m111635_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14778_il2cpp_TypeInfo;
extern Il2CppType ContentType_t669_0_0_0;
extern void* RuntimeInvoker_ContentType_t669_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111635_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14778_il2cpp_TypeInfo/* declaring_type */
	, &ContentType_t669_0_0_0/* return_type */
	, RuntimeInvoker_ContentType_t669_Int32_t63/* invoker_method */
	, IList_1_t14778_IList_1_get_Item_m111635_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ContentType_t669_0_0_0;
static ParameterInfo IList_1_t14778_IList_1_set_Item_m111636_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ContentType_t669_0_0_0},
};
extern TypeInfo IList_1_t14778_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111636_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14778_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14778_IList_1_set_Item_m111636_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t14778_MethodInfos[] =
{
	&IList_1_IndexOf_m111637_MethodInfo,
	&IList_1_Insert_m111638_MethodInfo,
	&IList_1_RemoveAt_m111639_MethodInfo,
	&IList_1_get_Item_m111635_MethodInfo,
	&IList_1_set_Item_m111636_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14777_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14779_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14778_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14777_il2cpp_TypeInfo,
	&IEnumerable_1_t14779_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14778_0_0_0;
extern Il2CppType IList_1_t14778_1_0_0;
struct IList_1_t14778;
extern TypeInfo IList_1_t14778_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14778_GenericClass;
extern CustomAttributesCache IList_1_t3845__CustomAttributeCache;
TypeInfo IList_1_t14778_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14778_MethodInfos/* methods */
	, IList_1_t14778_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14778_il2cpp_TypeInfo/* element_class */
	, IList_1_t14778_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3845__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14778_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14778_0_0_0/* byval_arg */
	, &IList_1_t14778_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14778_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t805_il2cpp_TypeInfo;

// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"


// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UILineInfo>
extern MethodInfo IList_1_get_Item_m4344_MethodInfo;
extern MethodInfo IList_1_set_Item_m111640_MethodInfo;
static PropertyInfo IList_1_t805____Item_PropertyInfo = 
{
	&IList_1_t805_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m4344_MethodInfo/* get */
	, &IList_1_set_Item_m111640_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t805_PropertyInfos[] =
{
	&IList_1_t805____Item_PropertyInfo,
	NULL
};
extern Il2CppType UILineInfo_t806_0_0_0;
static ParameterInfo IList_1_t805_IList_1_IndexOf_m111641_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UILineInfo_t806_0_0_0},
};
extern TypeInfo IList_1_t805_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_UILineInfo_t806 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111641_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t805_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_UILineInfo_t806/* invoker_method */
	, IList_1_t805_IList_1_IndexOf_m111641_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType UILineInfo_t806_0_0_0;
static ParameterInfo IList_1_t805_IList_1_Insert_m111642_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UILineInfo_t806_0_0_0},
};
extern TypeInfo IList_1_t805_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_UILineInfo_t806 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111642_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t805_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_UILineInfo_t806/* invoker_method */
	, IList_1_t805_IList_1_Insert_m111642_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t805_IList_1_RemoveAt_m111643_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t805_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111643_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t805_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t805_IList_1_RemoveAt_m111643_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t805_IList_1_get_Item_m4344_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t805_il2cpp_TypeInfo;
extern Il2CppType UILineInfo_t806_0_0_0;
extern void* RuntimeInvoker_UILineInfo_t806_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m4344_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t805_il2cpp_TypeInfo/* declaring_type */
	, &UILineInfo_t806_0_0_0/* return_type */
	, RuntimeInvoker_UILineInfo_t806_Int32_t63/* invoker_method */
	, IList_1_t805_IList_1_get_Item_m4344_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType UILineInfo_t806_0_0_0;
static ParameterInfo IList_1_t805_IList_1_set_Item_m111640_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UILineInfo_t806_0_0_0},
};
extern TypeInfo IList_1_t805_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_UILineInfo_t806 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111640_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t805_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_UILineInfo_t806/* invoker_method */
	, IList_1_t805_IList_1_set_Item_m111640_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t805_MethodInfos[] =
{
	&IList_1_IndexOf_m111641_MethodInfo,
	&IList_1_Insert_m111642_MethodInfo,
	&IList_1_RemoveAt_m111643_MethodInfo,
	&IList_1_get_Item_m4344_MethodInfo,
	&IList_1_set_Item_m111640_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t809_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t11744_il2cpp_TypeInfo;
static TypeInfo* IList_1_t805_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t809_il2cpp_TypeInfo,
	&IEnumerable_1_t11744_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t805_0_0_0;
extern Il2CppType IList_1_t805_1_0_0;
struct IList_1_t805;
extern TypeInfo IList_1_t805_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t805_GenericClass;
extern CustomAttributesCache IList_1_t3845__CustomAttributeCache;
TypeInfo IList_1_t805_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t805_MethodInfos/* methods */
	, IList_1_t805_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t805_il2cpp_TypeInfo/* element_class */
	, IList_1_t805_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3845__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t805_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t805_0_0_0/* byval_arg */
	, &IList_1_t805_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t805_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t809_il2cpp_TypeInfo;

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
extern MethodInfo ICollection_1_get_Count_m4364_MethodInfo;
static PropertyInfo ICollection_1_t809____Count_PropertyInfo = 
{
	&ICollection_1_t809_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m4364_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111644_MethodInfo;
static PropertyInfo ICollection_1_t809____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t809_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111644_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t809_PropertyInfos[] =
{
	&ICollection_1_t809____Count_PropertyInfo,
	&ICollection_1_t809____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t809_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m4364_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t809_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t809_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111644_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t809_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UILineInfo_t806_0_0_0;
static ParameterInfo ICollection_1_t809_ICollection_1_Add_m111645_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UILineInfo_t806_0_0_0},
};
extern TypeInfo ICollection_1_t809_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_UILineInfo_t806 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Add(T)
MethodInfo ICollection_1_Add_m111645_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t809_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_UILineInfo_t806/* invoker_method */
	, ICollection_1_t809_ICollection_1_Add_m111645_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t809_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Clear()
MethodInfo ICollection_1_Clear_m111646_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t809_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UILineInfo_t806_0_0_0;
static ParameterInfo ICollection_1_t809_ICollection_1_Contains_m111647_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UILineInfo_t806_0_0_0},
};
extern TypeInfo ICollection_1_t809_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_UILineInfo_t806 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m111647_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t809_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_UILineInfo_t806/* invoker_method */
	, ICollection_1_t809_ICollection_1_Contains_m111647_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UILineInfoU5BU5D_t2581_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t809_ICollection_1_CopyTo_m111648_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UILineInfoU5BU5D_t2581_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t809_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111648_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t809_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t809_ICollection_1_CopyTo_m111648_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UILineInfo_t806_0_0_0;
static ParameterInfo ICollection_1_t809_ICollection_1_Remove_m111649_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UILineInfo_t806_0_0_0},
};
extern TypeInfo ICollection_1_t809_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_UILineInfo_t806 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m111649_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t809_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_UILineInfo_t806/* invoker_method */
	, ICollection_1_t809_ICollection_1_Remove_m111649_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t809_MethodInfos[] =
{
	&ICollection_1_get_Count_m4364_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111644_MethodInfo,
	&ICollection_1_Add_m111645_MethodInfo,
	&ICollection_1_Clear_m111646_MethodInfo,
	&ICollection_1_Contains_m111647_MethodInfo,
	&ICollection_1_CopyTo_m111648_MethodInfo,
	&ICollection_1_Remove_m111649_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t11744_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t809_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t11744_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t809_0_0_0;
extern Il2CppType ICollection_1_t809_1_0_0;
struct ICollection_1_t809;
extern TypeInfo ICollection_1_t809_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t809_GenericClass;
TypeInfo ICollection_1_t809_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t809_MethodInfos/* methods */
	, ICollection_1_t809_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t809_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t809_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t809_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t809_0_0_0/* byval_arg */
	, &ICollection_1_t809_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t809_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t11744_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
extern TypeInfo IEnumerable_1_t11744_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t11745_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111650_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t11744_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t11745_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t11744_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111650_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t11744_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t11744_0_0_0;
extern Il2CppType IEnumerable_1_t11744_1_0_0;
struct IEnumerable_1_t11744;
extern TypeInfo IEnumerable_1_t11744_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t11744_GenericClass;
TypeInfo IEnumerable_1_t11744_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t11744_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t11744_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t11744_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t11744_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t11744_0_0_0/* byval_arg */
	, &IEnumerable_1_t11744_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t11744_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t11745_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
extern MethodInfo IEnumerator_1_get_Current_m111651_MethodInfo;
static PropertyInfo IEnumerator_1_t11745____Current_PropertyInfo = 
{
	&IEnumerator_1_t11745_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111651_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t11745_PropertyInfos[] =
{
	&IEnumerator_1_t11745____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t11745_il2cpp_TypeInfo;
extern Il2CppType UILineInfo_t806_0_0_0;
extern void* RuntimeInvoker_UILineInfo_t806 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111651_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t11745_il2cpp_TypeInfo/* declaring_type */
	, &UILineInfo_t806_0_0_0/* return_type */
	, RuntimeInvoker_UILineInfo_t806/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t11745_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111651_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t11745_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t11745_0_0_0;
extern Il2CppType IEnumerator_1_t11745_1_0_0;
struct IEnumerator_1_t11745;
extern TypeInfo IEnumerator_1_t11745_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t11745_GenericClass;
TypeInfo IEnumerator_1_t11745_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t11745_MethodInfos/* methods */
	, IEnumerator_1_t11745_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t11745_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t11745_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t11745_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t11745_0_0_0/* byval_arg */
	, &IEnumerator_1_t11745_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t11745_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_342.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5548_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_342MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5548_il2cpp_TypeInfo;
extern TypeInfo UILineInfo_t806_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26061_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5142_MethodInfo;
extern MethodInfo Array_get_Length_m7860_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUILineInfo_t806_m94256_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UILineInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UILineInfo>(System.Int32)
 UILineInfo_t806  Array_InternalArray__get_Item_TisUILineInfo_t806_m94256 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisUILineInfo_t806_m94256_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26056_MethodInfo;
 void InternalEnumerator_1__ctor_m26056 (InternalEnumerator_1_t5548 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26057_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26057 (InternalEnumerator_1_t5548 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26058_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26058 (InternalEnumerator_1_t5548 * __this, MethodInfo* method){
	{
		UILineInfo_t806  L_0 = InternalEnumerator_1_get_Current_m26061(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26061_MethodInfo);
		UILineInfo_t806  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UILineInfo_t806_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26059_MethodInfo;
 void InternalEnumerator_1_Dispose_m26059 (InternalEnumerator_1_t5548 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26060_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26060 (InternalEnumerator_1_t5548 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7860(L_1, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		__this->___idx = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m26061_MethodInfo;
 UILineInfo_t806  InternalEnumerator_1_get_Current_m26061 (InternalEnumerator_1_t5548 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_1, (String_t*) &_stringLiteral2292, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t935 * L_3 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_3, (String_t*) &_stringLiteral2293, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7860(L_5, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		UILineInfo_t806  L_8 = Array_InternalArray__get_Item_TisUILineInfo_t806_m94256(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUILineInfo_t806_m94256_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5548____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5548_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5548, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5548____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5548_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5548, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5548_FieldInfos[] =
{
	&InternalEnumerator_1_t5548____array_FieldInfo,
	&InternalEnumerator_1_t5548____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26058_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5548____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5548_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26058_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26061_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5548____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5548_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26061_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5548_PropertyInfos[] =
{
	&InternalEnumerator_1_t5548____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5548____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5548_InternalEnumerator_1__ctor_m26056_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5548_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26056_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26056/* method */
	, &InternalEnumerator_1_t5548_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5548_InternalEnumerator_1__ctor_m26056_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5548_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26057_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26057/* method */
	, &InternalEnumerator_1_t5548_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5548_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26058_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26058/* method */
	, &InternalEnumerator_1_t5548_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5548_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26059_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26059/* method */
	, &InternalEnumerator_1_t5548_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5548_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26060_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26060/* method */
	, &InternalEnumerator_1_t5548_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5548_il2cpp_TypeInfo;
extern Il2CppType UILineInfo_t806_0_0_0;
extern void* RuntimeInvoker_UILineInfo_t806 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26061_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26061/* method */
	, &InternalEnumerator_1_t5548_il2cpp_TypeInfo/* declaring_type */
	, &UILineInfo_t806_0_0_0/* return_type */
	, RuntimeInvoker_UILineInfo_t806/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t5548_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26056_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26057_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26058_MethodInfo,
	&InternalEnumerator_1_Dispose_m26059_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26060_MethodInfo,
	&InternalEnumerator_1_get_Current_m26061_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26058_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26060_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26057_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26059_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26061_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5548_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26058_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26060_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26057_MethodInfo,
	&InternalEnumerator_1_Dispose_m26059_MethodInfo,
	&InternalEnumerator_1_get_Current_m26061_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t11745_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5548_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t11745_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t11745_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5548_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t11745_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5548_0_0_0;
extern Il2CppType InternalEnumerator_1_t5548_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5548_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5548_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5548_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5548_MethodInfos/* methods */
	, InternalEnumerator_1_t5548_PropertyInfos/* properties */
	, InternalEnumerator_1_t5548_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5548_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5548_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5548_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5548_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5548_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5548_1_0_0/* this_arg */
	, InternalEnumerator_1_t5548_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5548_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5548)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t807_il2cpp_TypeInfo;

// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"


// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UICharInfo>
extern MethodInfo IList_1_get_Item_m4348_MethodInfo;
extern MethodInfo IList_1_set_Item_m111652_MethodInfo;
static PropertyInfo IList_1_t807____Item_PropertyInfo = 
{
	&IList_1_t807_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m4348_MethodInfo/* get */
	, &IList_1_set_Item_m111652_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t807_PropertyInfos[] =
{
	&IList_1_t807____Item_PropertyInfo,
	NULL
};
extern Il2CppType UICharInfo_t808_0_0_0;
static ParameterInfo IList_1_t807_IList_1_IndexOf_m111653_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UICharInfo_t808_0_0_0},
};
extern TypeInfo IList_1_t807_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_UICharInfo_t808 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111653_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t807_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_UICharInfo_t808/* invoker_method */
	, IList_1_t807_IList_1_IndexOf_m111653_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType UICharInfo_t808_0_0_0;
static ParameterInfo IList_1_t807_IList_1_Insert_m111654_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UICharInfo_t808_0_0_0},
};
extern TypeInfo IList_1_t807_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_UICharInfo_t808 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111654_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t807_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_UICharInfo_t808/* invoker_method */
	, IList_1_t807_IList_1_Insert_m111654_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t807_IList_1_RemoveAt_m111655_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t807_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111655_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t807_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t807_IList_1_RemoveAt_m111655_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t807_IList_1_get_Item_m4348_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t807_il2cpp_TypeInfo;
extern Il2CppType UICharInfo_t808_0_0_0;
extern void* RuntimeInvoker_UICharInfo_t808_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m4348_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t807_il2cpp_TypeInfo/* declaring_type */
	, &UICharInfo_t808_0_0_0/* return_type */
	, RuntimeInvoker_UICharInfo_t808_Int32_t63/* invoker_method */
	, IList_1_t807_IList_1_get_Item_m4348_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType UICharInfo_t808_0_0_0;
static ParameterInfo IList_1_t807_IList_1_set_Item_m111652_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UICharInfo_t808_0_0_0},
};
extern TypeInfo IList_1_t807_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_UICharInfo_t808 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111652_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t807_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_UICharInfo_t808/* invoker_method */
	, IList_1_t807_IList_1_set_Item_m111652_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t807_MethodInfos[] =
{
	&IList_1_IndexOf_m111653_MethodInfo,
	&IList_1_Insert_m111654_MethodInfo,
	&IList_1_RemoveAt_m111655_MethodInfo,
	&IList_1_get_Item_m4348_MethodInfo,
	&IList_1_set_Item_m111652_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t11734_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t11732_il2cpp_TypeInfo;
static TypeInfo* IList_1_t807_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t11734_il2cpp_TypeInfo,
	&IEnumerable_1_t11732_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t807_0_0_0;
extern Il2CppType IList_1_t807_1_0_0;
struct IList_1_t807;
extern TypeInfo IList_1_t807_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t807_GenericClass;
extern CustomAttributesCache IList_1_t3845__CustomAttributeCache;
TypeInfo IList_1_t807_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t807_MethodInfos/* methods */
	, IList_1_t807_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t807_il2cpp_TypeInfo/* element_class */
	, IList_1_t807_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3845__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t807_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t807_0_0_0/* byval_arg */
	, &IList_1_t807_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t807_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t11734_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
extern MethodInfo ICollection_1_get_Count_m111656_MethodInfo;
static PropertyInfo ICollection_1_t11734____Count_PropertyInfo = 
{
	&ICollection_1_t11734_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111656_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111657_MethodInfo;
static PropertyInfo ICollection_1_t11734____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t11734_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111657_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t11734_PropertyInfos[] =
{
	&ICollection_1_t11734____Count_PropertyInfo,
	&ICollection_1_t11734____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t11734_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m111656_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t11734_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t11734_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111657_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t11734_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UICharInfo_t808_0_0_0;
static ParameterInfo ICollection_1_t11734_ICollection_1_Add_m111658_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UICharInfo_t808_0_0_0},
};
extern TypeInfo ICollection_1_t11734_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_UICharInfo_t808 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Add(T)
MethodInfo ICollection_1_Add_m111658_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t11734_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_UICharInfo_t808/* invoker_method */
	, ICollection_1_t11734_ICollection_1_Add_m111658_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t11734_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Clear()
MethodInfo ICollection_1_Clear_m111659_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t11734_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UICharInfo_t808_0_0_0;
static ParameterInfo ICollection_1_t11734_ICollection_1_Contains_m111660_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UICharInfo_t808_0_0_0},
};
extern TypeInfo ICollection_1_t11734_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_UICharInfo_t808 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m111660_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t11734_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_UICharInfo_t808/* invoker_method */
	, ICollection_1_t11734_ICollection_1_Contains_m111660_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UICharInfoU5BU5D_t2580_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t11734_ICollection_1_CopyTo_m111661_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UICharInfoU5BU5D_t2580_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t11734_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111661_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t11734_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t11734_ICollection_1_CopyTo_m111661_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UICharInfo_t808_0_0_0;
static ParameterInfo ICollection_1_t11734_ICollection_1_Remove_m111662_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UICharInfo_t808_0_0_0},
};
extern TypeInfo ICollection_1_t11734_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_UICharInfo_t808 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m111662_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t11734_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_UICharInfo_t808/* invoker_method */
	, ICollection_1_t11734_ICollection_1_Remove_m111662_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t11734_MethodInfos[] =
{
	&ICollection_1_get_Count_m111656_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111657_MethodInfo,
	&ICollection_1_Add_m111658_MethodInfo,
	&ICollection_1_Clear_m111659_MethodInfo,
	&ICollection_1_Contains_m111660_MethodInfo,
	&ICollection_1_CopyTo_m111661_MethodInfo,
	&ICollection_1_Remove_m111662_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t11732_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t11734_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t11732_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t11734_0_0_0;
extern Il2CppType ICollection_1_t11734_1_0_0;
struct ICollection_1_t11734;
extern TypeInfo ICollection_1_t11734_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t11734_GenericClass;
TypeInfo ICollection_1_t11734_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t11734_MethodInfos/* methods */
	, ICollection_1_t11734_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t11734_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t11734_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t11734_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t11734_0_0_0/* byval_arg */
	, &ICollection_1_t11734_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t11734_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t11732_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
extern TypeInfo IEnumerable_1_t11732_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t11733_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111663_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t11732_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t11733_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t11732_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111663_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t11732_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t11732_0_0_0;
extern Il2CppType IEnumerable_1_t11732_1_0_0;
struct IEnumerable_1_t11732;
extern TypeInfo IEnumerable_1_t11732_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t11732_GenericClass;
TypeInfo IEnumerable_1_t11732_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t11732_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t11732_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t11732_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t11732_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t11732_0_0_0/* byval_arg */
	, &IEnumerable_1_t11732_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t11732_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t11733_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
extern MethodInfo IEnumerator_1_get_Current_m111664_MethodInfo;
static PropertyInfo IEnumerator_1_t11733____Current_PropertyInfo = 
{
	&IEnumerator_1_t11733_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111664_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t11733_PropertyInfos[] =
{
	&IEnumerator_1_t11733____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t11733_il2cpp_TypeInfo;
extern Il2CppType UICharInfo_t808_0_0_0;
extern void* RuntimeInvoker_UICharInfo_t808 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111664_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t11733_il2cpp_TypeInfo/* declaring_type */
	, &UICharInfo_t808_0_0_0/* return_type */
	, RuntimeInvoker_UICharInfo_t808/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t11733_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111664_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t11733_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t11733_0_0_0;
extern Il2CppType IEnumerator_1_t11733_1_0_0;
struct IEnumerator_1_t11733;
extern TypeInfo IEnumerator_1_t11733_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t11733_GenericClass;
TypeInfo IEnumerator_1_t11733_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t11733_MethodInfos/* methods */
	, IEnumerator_1_t11733_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t11733_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t11733_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t11733_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t11733_0_0_0/* byval_arg */
	, &IEnumerator_1_t11733_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t11733_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_343.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5549_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_343MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5549_il2cpp_TypeInfo;
extern TypeInfo UICharInfo_t808_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26067_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5142_MethodInfo;
extern MethodInfo Array_get_Length_m7860_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUICharInfo_t808_m94267_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UICharInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UICharInfo>(System.Int32)
 UICharInfo_t808  Array_InternalArray__get_Item_TisUICharInfo_t808_m94267 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisUICharInfo_t808_m94267_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26062_MethodInfo;
 void InternalEnumerator_1__ctor_m26062 (InternalEnumerator_1_t5549 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26063_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26063 (InternalEnumerator_1_t5549 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26064_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26064 (InternalEnumerator_1_t5549 * __this, MethodInfo* method){
	{
		UICharInfo_t808  L_0 = InternalEnumerator_1_get_Current_m26067(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26067_MethodInfo);
		UICharInfo_t808  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UICharInfo_t808_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26065_MethodInfo;
 void InternalEnumerator_1_Dispose_m26065 (InternalEnumerator_1_t5549 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26066_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26066 (InternalEnumerator_1_t5549 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7860(L_1, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		__this->___idx = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m26067_MethodInfo;
 UICharInfo_t808  InternalEnumerator_1_get_Current_m26067 (InternalEnumerator_1_t5549 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_1, (String_t*) &_stringLiteral2292, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t935 * L_3 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_3, (String_t*) &_stringLiteral2293, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7860(L_5, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		UICharInfo_t808  L_8 = Array_InternalArray__get_Item_TisUICharInfo_t808_m94267(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUICharInfo_t808_m94267_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5549____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5549_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5549, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5549____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5549_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5549, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5549_FieldInfos[] =
{
	&InternalEnumerator_1_t5549____array_FieldInfo,
	&InternalEnumerator_1_t5549____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26064_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5549____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5549_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26064_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26067_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5549____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5549_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26067_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5549_PropertyInfos[] =
{
	&InternalEnumerator_1_t5549____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5549____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5549_InternalEnumerator_1__ctor_m26062_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5549_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26062_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26062/* method */
	, &InternalEnumerator_1_t5549_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5549_InternalEnumerator_1__ctor_m26062_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5549_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26063_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26063/* method */
	, &InternalEnumerator_1_t5549_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5549_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26064_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26064/* method */
	, &InternalEnumerator_1_t5549_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5549_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26065_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26065/* method */
	, &InternalEnumerator_1_t5549_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5549_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26066_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26066/* method */
	, &InternalEnumerator_1_t5549_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5549_il2cpp_TypeInfo;
extern Il2CppType UICharInfo_t808_0_0_0;
extern void* RuntimeInvoker_UICharInfo_t808 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26067_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26067/* method */
	, &InternalEnumerator_1_t5549_il2cpp_TypeInfo/* declaring_type */
	, &UICharInfo_t808_0_0_0/* return_type */
	, RuntimeInvoker_UICharInfo_t808/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t5549_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26062_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26063_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26064_MethodInfo,
	&InternalEnumerator_1_Dispose_m26065_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26066_MethodInfo,
	&InternalEnumerator_1_get_Current_m26067_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26064_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26066_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26063_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26065_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26067_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5549_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26064_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26066_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26063_MethodInfo,
	&InternalEnumerator_1_Dispose_m26065_MethodInfo,
	&InternalEnumerator_1_get_Current_m26067_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t11733_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5549_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t11733_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t11733_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5549_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t11733_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5549_0_0_0;
extern Il2CppType InternalEnumerator_1_t5549_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5549_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5549_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5549_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5549_MethodInfos/* methods */
	, InternalEnumerator_1_t5549_PropertyInfos/* properties */
	, InternalEnumerator_1_t5549_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5549_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5549_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5549_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5549_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5549_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5549_1_0_0/* this_arg */
	, InternalEnumerator_1_t5549_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5549_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5549)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.Events.UnityEvent`1<System.String>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEvent_1_t674_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent`1<System.String>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_1MethodDeclarations.h"

// UnityEngine.Events.UnityAction`1<System.String>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_135.h"
// UnityEngine.Events.InvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_129.h"
extern TypeInfo ObjectU5BU5D_t5_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo UnityEvent_1_t674_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t291_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t803_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_129MethodDeclarations.h"
extern Il2CppType String_t_0_0_0;
extern MethodInfo UnityEventBase__ctor_m9014_MethodInfo;
extern MethodInfo UnityEvent_1_GetDelegate_m4306_MethodInfo;
extern MethodInfo UnityEventBase_AddCall_m9019_MethodInfo;
extern MethodInfo Delegate_get_Target_m9170_MethodInfo;
extern MethodInfo Delegate_get_Method_m9168_MethodInfo;
extern MethodInfo UnityEventBase_RemoveListener_m9020_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m385_MethodInfo;
extern MethodInfo UnityEventBase_GetValidMethodInfo_m9022_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m4307_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m4308_MethodInfo;
extern MethodInfo UnityEventBase_Invoke_m9021_MethodInfo;


// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.String>::FindMethod_Impl(System.String,System.Object)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
// Metadata Definition UnityEngine.Events.UnityEvent`1<System.String>
extern Il2CppType ObjectU5BU5D_t5_0_0_33;
FieldInfo UnityEvent_1_t674____m_InvokeArray_FieldInfo = 
{
	"m_InvokeArray"/* name */
	, &ObjectU5BU5D_t5_0_0_33/* type */
	, &UnityEvent_1_t674_il2cpp_TypeInfo/* parent */
	, offsetof(UnityEvent_1_t674, ___m_InvokeArray)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UnityEvent_1_t674_FieldInfos[] =
{
	&UnityEvent_1_t674____m_InvokeArray_FieldInfo,
	NULL
};
extern TypeInfo UnityEvent_1_t674_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
MethodInfo UnityEvent_1__ctor_m4303_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityEvent_1__ctor_m23608_gshared/* method */
	, &UnityEvent_1_t674_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UnityAction_1_t5550_0_0_0;
static ParameterInfo UnityEvent_1_t674_UnityEvent_1_AddListener_m26068_ParameterInfos[] = 
{
	{"call", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t5550_0_0_0},
};
extern TypeInfo UnityEvent_1_t674_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
MethodInfo UnityEvent_1_AddListener_m26068_MethodInfo = 
{
	"AddListener"/* name */
	, (methodPointerType)&UnityEvent_1_AddListener_m23610_gshared/* method */
	, &UnityEvent_1_t674_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityEvent_1_t674_UnityEvent_1_AddListener_m26068_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UnityAction_1_t5550_0_0_0;
static ParameterInfo UnityEvent_1_t674_UnityEvent_1_RemoveListener_m26069_ParameterInfos[] = 
{
	{"call", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t5550_0_0_0},
};
extern TypeInfo UnityEvent_1_t674_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
MethodInfo UnityEvent_1_RemoveListener_m26069_MethodInfo = 
{
	"RemoveListener"/* name */
	, (methodPointerType)&UnityEvent_1_RemoveListener_m23612_gshared/* method */
	, &UnityEvent_1_t674_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityEvent_1_t674_UnityEvent_1_RemoveListener_m26069_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityEvent_1_t674_UnityEvent_1_FindMethod_Impl_m4304_ParameterInfos[] = 
{
	{"name", 0, 134217728, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"targetObj", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityEvent_1_t674_il2cpp_TypeInfo;
extern Il2CppType MethodInfo_t292_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.String>::FindMethod_Impl(System.String,System.Object)
MethodInfo UnityEvent_1_FindMethod_Impl_m4304_MethodInfo = 
{
	"FindMethod_Impl"/* name */
	, (methodPointerType)&UnityEvent_1_FindMethod_Impl_m23613_gshared/* method */
	, &UnityEvent_1_t674_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t292_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, UnityEvent_1_t674_UnityEvent_1_FindMethod_Impl_m4304_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
static ParameterInfo UnityEvent_1_t674_UnityEvent_1_GetDelegate_m4305_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo UnityEvent_1_t674_il2cpp_TypeInfo;
extern Il2CppType BaseInvokableCall_t2624_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(System.Object,System.Reflection.MethodInfo)
MethodInfo UnityEvent_1_GetDelegate_m4305_MethodInfo = 
{
	"GetDelegate"/* name */
	, (methodPointerType)&UnityEvent_1_GetDelegate_m23614_gshared/* method */
	, &UnityEvent_1_t674_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t2624_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, UnityEvent_1_t674_UnityEvent_1_GetDelegate_m4305_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 195/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UnityAction_1_t5550_0_0_0;
static ParameterInfo UnityEvent_1_t674_UnityEvent_1_GetDelegate_m4306_ParameterInfos[] = 
{
	{"action", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t5550_0_0_0},
};
extern TypeInfo UnityEvent_1_t674_il2cpp_TypeInfo;
extern Il2CppType BaseInvokableCall_t2624_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
MethodInfo UnityEvent_1_GetDelegate_m4306_MethodInfo = 
{
	"GetDelegate"/* name */
	, (methodPointerType)&UnityEvent_1_GetDelegate_m23615_gshared/* method */
	, &UnityEvent_1_t674_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t2624_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, UnityEvent_1_t674_UnityEvent_1_GetDelegate_m4306_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo UnityEvent_1_t674_UnityEvent_1_Invoke_m4361_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern TypeInfo UnityEvent_1_t674_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
MethodInfo UnityEvent_1_Invoke_m4361_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityEvent_1_Invoke_m23616_gshared/* method */
	, &UnityEvent_1_t674_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityEvent_1_t674_UnityEvent_1_Invoke_m4361_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* UnityEvent_1_t674_MethodInfos[] =
{
	&UnityEvent_1__ctor_m4303_MethodInfo,
	&UnityEvent_1_AddListener_m26068_MethodInfo,
	&UnityEvent_1_RemoveListener_m26069_MethodInfo,
	&UnityEvent_1_FindMethod_Impl_m4304_MethodInfo,
	&UnityEvent_1_GetDelegate_m4305_MethodInfo,
	&UnityEvent_1_GetDelegate_m4306_MethodInfo,
	&UnityEvent_1_Invoke_m4361_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo UnityEventBase_ToString_m4014_MethodInfo;
extern MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m4015_MethodInfo;
extern MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m4016_MethodInfo;
extern MethodInfo UnityEvent_1_FindMethod_Impl_m4304_MethodInfo;
extern MethodInfo UnityEvent_1_GetDelegate_m4305_MethodInfo;
static MethodInfo* UnityEvent_1_t674_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&UnityEventBase_ToString_m4014_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m4015_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m4016_MethodInfo,
	&UnityEvent_1_FindMethod_Impl_m4304_MethodInfo,
	&UnityEvent_1_GetDelegate_m4305_MethodInfo,
};
extern TypeInfo ISerializationCallbackReceiver_t764_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityEvent_1_t674_InterfacesOffsets[] = 
{
	{ &ISerializationCallbackReceiver_t764_il2cpp_TypeInfo, 4},
};
extern MethodInfo UnityEvent_1_GetDelegate_m4306_MethodInfo;
extern Il2CppType String_t_0_0_0;
extern TypeInfo InvokableCall_1_t803_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1__ctor_m4307_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m4308_MethodInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
static void* UnityEvent_1_t674_RGCTXData[6] = 
{
	&UnityEvent_1_GetDelegate_m4306_MethodInfo,
	(void*)&String_t_0_0_0,
	&InvokableCall_1_t803_il2cpp_TypeInfo,
	&InvokableCall_1__ctor_m4307_MethodInfo,
	&InvokableCall_1__ctor_m4308_MethodInfo,
	&String_t_il2cpp_TypeInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityEvent_1_t674_0_0_0;
extern Il2CppType UnityEvent_1_t674_1_0_0;
extern TypeInfo UnityEventBase_t2633_il2cpp_TypeInfo;
struct UnityEvent_1_t674;
extern TypeInfo UnityEvent_1_t674_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityEvent_1_t674_GenericClass;
TypeInfo UnityEvent_1_t674_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEvent`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEvent_1_t674_MethodInfos/* methods */
	, NULL/* properties */
	, UnityEvent_1_t674_FieldInfos/* fields */
	, NULL/* events */
	, &UnityEventBase_t2633_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityEvent_1_t674_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityEvent_1_t674_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityEvent_1_t674_il2cpp_TypeInfo/* cast_class */
	, &UnityEvent_1_t674_0_0_0/* byval_arg */
	, &UnityEvent_1_t674_1_0_0/* this_arg */
	, UnityEvent_1_t674_InterfacesOffsets/* interface_offsets */
	, &UnityEvent_1_t674_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, UnityEvent_1_t674_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityEvent_1_t674)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056897/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t5550_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<System.String>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_135MethodDeclarations.h"



// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<System.String>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.String>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<System.String>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<System.String>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t39_0_0_0;
static ParameterInfo UnityAction_1_t5550_UnityAction_1__ctor_m26070_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t39_0_0_0},
};
extern TypeInfo UnityAction_1_t5550_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_IntPtr_t39 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m26070_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m16522_gshared/* method */
	, &UnityAction_1_t5550_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_IntPtr_t39/* invoker_method */
	, UnityAction_1_t5550_UnityAction_1__ctor_m26070_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo UnityAction_1_t5550_UnityAction_1_Invoke_m26071_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern TypeInfo UnityAction_1_t5550_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<System.String>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m26071_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m16523_gshared/* method */
	, &UnityAction_1_t5550_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityAction_1_t5550_UnityAction_1_Invoke_m26071_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType AsyncCallback_t35_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t5550_UnityAction_1_BeginInvoke_m26072_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t35_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t5550_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t34_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.String>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m26072_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m16524_gshared/* method */
	, &UnityAction_1_t5550_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t34_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t5550_UnityAction_1_BeginInvoke_m26072_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t34_0_0_0;
static ParameterInfo UnityAction_1_t5550_UnityAction_1_EndInvoke_m26073_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t34_0_0_0},
};
extern TypeInfo UnityAction_1_t5550_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<System.String>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m26073_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m16525_gshared/* method */
	, &UnityAction_1_t5550_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityAction_1_t5550_UnityAction_1_EndInvoke_m26073_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* UnityAction_1_t5550_MethodInfos[] =
{
	&UnityAction_1__ctor_m26070_MethodInfo,
	&UnityAction_1_Invoke_m26071_MethodInfo,
	&UnityAction_1_BeginInvoke_m26072_MethodInfo,
	&UnityAction_1_EndInvoke_m26073_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m469_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m470_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m471_MethodInfo;
extern MethodInfo MulticastDelegate_DynamicInvokeImpl_m472_MethodInfo;
extern MethodInfo Delegate_Clone_m473_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m471_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m474_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m475_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m476_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m26071_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m26072_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m26073_MethodInfo;
static MethodInfo* UnityAction_1_t5550_VTable[] =
{
	&MulticastDelegate_Equals_m469_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&MulticastDelegate_GetHashCode_m470_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&MulticastDelegate_GetObjectData_m471_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m472_MethodInfo,
	&Delegate_Clone_m473_MethodInfo,
	&MulticastDelegate_GetObjectData_m471_MethodInfo,
	&MulticastDelegate_GetInvocationList_m474_MethodInfo,
	&MulticastDelegate_CombineImpl_m475_MethodInfo,
	&MulticastDelegate_RemoveImpl_m476_MethodInfo,
	&UnityAction_1_Invoke_m26071_MethodInfo,
	&UnityAction_1_BeginInvoke_m26072_MethodInfo,
	&UnityAction_1_EndInvoke_m26073_MethodInfo,
};
extern TypeInfo ICloneable_t84_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t85_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t5550_InterfacesOffsets[] = 
{
	{ &ICloneable_t84_il2cpp_TypeInfo, 4},
	{ &ISerializable_t85_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t5550_0_0_0;
extern Il2CppType UnityAction_1_t5550_1_0_0;
extern TypeInfo MulticastDelegate_t38_il2cpp_TypeInfo;
struct UnityAction_1_t5550;
extern TypeInfo UnityAction_1_t5550_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t5550_GenericClass;
TypeInfo UnityAction_1_t5550_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t5550_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t38_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t5550_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t5550_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t5550_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t5550_0_0_0/* byval_arg */
	, &UnityAction_1_t5550_1_0_0/* this_arg */
	, UnityAction_1_t5550_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t5550_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t5550)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_1_t803_il2cpp_TypeInfo;

extern TypeInfo InvokableCall_1_t803_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t5550_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t401_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo Void_t40_il2cpp_TypeInfo;
extern Il2CppType UnityAction_1_t5550_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m8993_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m385_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m9174_MethodInfo;
extern MethodInfo Delegate_Combine_m4230_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m8992_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1970_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisString_t_m94277_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m8994_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m26071_MethodInfo;
extern MethodInfo Delegate_get_Target_m9170_MethodInfo;
extern MethodInfo Delegate_get_Method_m9168_MethodInfo;
struct BaseInvokableCall_t2624;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.String>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.String>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisString_t_m94277(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m90272_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisString_t_m94277_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<System.String>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<System.String>
extern Il2CppType UnityAction_1_t5550_0_0_1;
FieldInfo InvokableCall_1_t803____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t5550_0_0_1/* type */
	, &InvokableCall_1_t803_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t803, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t803_FieldInfos[] =
{
	&InvokableCall_1_t803____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
static ParameterInfo InvokableCall_1_t803_InvokableCall_1__ctor_m4307_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo InvokableCall_1_t803_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m4307_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m16518_gshared/* method */
	, &InvokableCall_1_t803_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t803_InvokableCall_1__ctor_m4307_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UnityAction_1_t5550_0_0_0;
static ParameterInfo InvokableCall_1_t803_InvokableCall_1__ctor_m4308_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t5550_0_0_0},
};
extern TypeInfo InvokableCall_1_t803_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m4308_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m16519_gshared/* method */
	, &InvokableCall_1_t803_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InvokableCall_1_t803_InvokableCall_1__ctor_m4308_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t5_0_0_0;
static ParameterInfo InvokableCall_1_t803_InvokableCall_1_Invoke_m26074_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t5_0_0_0},
};
extern TypeInfo InvokableCall_1_t803_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m26074_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m16520_gshared/* method */
	, &InvokableCall_1_t803_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InvokableCall_1_t803_InvokableCall_1_Invoke_m26074_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
static ParameterInfo InvokableCall_1_t803_InvokableCall_1_Find_m26075_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo InvokableCall_1_t803_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<System.String>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m26075_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m16521_gshared/* method */
	, &InvokableCall_1_t803_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t803_InvokableCall_1_Find_m26075_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InvokableCall_1_t803_MethodInfos[] =
{
	&InvokableCall_1__ctor_m4307_MethodInfo,
	&InvokableCall_1__ctor_m4308_MethodInfo,
	&InvokableCall_1_Invoke_m26074_MethodInfo,
	&InvokableCall_1_Find_m26075_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m26074_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m26075_MethodInfo;
static MethodInfo* InvokableCall_1_t803_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&InvokableCall_1_Invoke_m26074_MethodInfo,
	&InvokableCall_1_Find_m26075_MethodInfo,
};
extern Il2CppType UnityAction_1_t5550_0_0_0;
extern TypeInfo UnityAction_1_t5550_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisString_t_m94277_MethodInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m26071_MethodInfo;
static void* InvokableCall_1_t803_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t5550_0_0_0,
	&UnityAction_1_t5550_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisString_t_m94277_MethodInfo,
	&String_t_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m26071_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t803_0_0_0;
extern Il2CppType InvokableCall_1_t803_1_0_0;
extern TypeInfo BaseInvokableCall_t2624_il2cpp_TypeInfo;
struct InvokableCall_1_t803;
extern TypeInfo InvokableCall_1_t803_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t803_GenericClass;
TypeInfo InvokableCall_1_t803_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t803_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t803_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t2624_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t803_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t803_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t803_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t803_0_0_0/* byval_arg */
	, &InvokableCall_1_t803_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t803_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t803_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t803)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13108_il2cpp_TypeInfo;

// UnityEngine.UI.InputField/InputType
#include "UnityEngine_UI_UnityEngine_UI_InputField_InputType.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/InputType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/InputType>
extern MethodInfo IEnumerator_1_get_Current_m111665_MethodInfo;
static PropertyInfo IEnumerator_1_t13108____Current_PropertyInfo = 
{
	&IEnumerator_1_t13108_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111665_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13108_PropertyInfos[] =
{
	&IEnumerator_1_t13108____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t13108_il2cpp_TypeInfo;
extern Il2CppType InputType_t670_0_0_0;
extern void* RuntimeInvoker_InputType_t670 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/InputType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111665_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13108_il2cpp_TypeInfo/* declaring_type */
	, &InputType_t670_0_0_0/* return_type */
	, RuntimeInvoker_InputType_t670/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t13108_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111665_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t13108_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13108_0_0_0;
extern Il2CppType IEnumerator_1_t13108_1_0_0;
struct IEnumerator_1_t13108;
extern TypeInfo IEnumerator_1_t13108_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t13108_GenericClass;
TypeInfo IEnumerator_1_t13108_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13108_MethodInfos/* methods */
	, IEnumerator_1_t13108_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13108_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13108_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13108_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13108_0_0_0/* byval_arg */
	, &IEnumerator_1_t13108_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13108_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_344.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5551_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_344MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5551_il2cpp_TypeInfo;
extern TypeInfo InputType_t670_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26081_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5142_MethodInfo;
extern MethodInfo Array_get_Length_m7860_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisInputType_t670_m94279_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/InputType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/InputType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisInputType_t670_m94279 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisInputType_t670_m94279_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26076_MethodInfo;
 void InternalEnumerator_1__ctor_m26076 (InternalEnumerator_1_t5551 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26077_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26077 (InternalEnumerator_1_t5551 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26078_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26078 (InternalEnumerator_1_t5551 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26081(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26081_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&InputType_t670_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26079_MethodInfo;
 void InternalEnumerator_1_Dispose_m26079 (InternalEnumerator_1_t5551 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26080_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26080 (InternalEnumerator_1_t5551 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7860(L_1, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		__this->___idx = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m26081_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26081 (InternalEnumerator_1_t5551 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_1, (String_t*) &_stringLiteral2292, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t935 * L_3 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_3, (String_t*) &_stringLiteral2293, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7860(L_5, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisInputType_t670_m94279(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisInputType_t670_m94279_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5551____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5551_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5551, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5551____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5551_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5551, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5551_FieldInfos[] =
{
	&InternalEnumerator_1_t5551____array_FieldInfo,
	&InternalEnumerator_1_t5551____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26078_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5551____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5551_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26078_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26081_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5551____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5551_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26081_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5551_PropertyInfos[] =
{
	&InternalEnumerator_1_t5551____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5551____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5551_InternalEnumerator_1__ctor_m26076_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5551_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26076_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26076/* method */
	, &InternalEnumerator_1_t5551_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5551_InternalEnumerator_1__ctor_m26076_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5551_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26077_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26077/* method */
	, &InternalEnumerator_1_t5551_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5551_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26078_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26078/* method */
	, &InternalEnumerator_1_t5551_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5551_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26079_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26079/* method */
	, &InternalEnumerator_1_t5551_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5551_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26080_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26080/* method */
	, &InternalEnumerator_1_t5551_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5551_il2cpp_TypeInfo;
extern Il2CppType InputType_t670_0_0_0;
extern void* RuntimeInvoker_InputType_t670 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26081_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26081/* method */
	, &InternalEnumerator_1_t5551_il2cpp_TypeInfo/* declaring_type */
	, &InputType_t670_0_0_0/* return_type */
	, RuntimeInvoker_InputType_t670/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t5551_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26076_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26077_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26078_MethodInfo,
	&InternalEnumerator_1_Dispose_m26079_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26080_MethodInfo,
	&InternalEnumerator_1_get_Current_m26081_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26078_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26080_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26077_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26079_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26081_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5551_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26078_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26080_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26077_MethodInfo,
	&InternalEnumerator_1_Dispose_m26079_MethodInfo,
	&InternalEnumerator_1_get_Current_m26081_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13108_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5551_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t13108_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13108_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5551_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13108_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5551_0_0_0;
extern Il2CppType InternalEnumerator_1_t5551_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5551_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5551_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5551_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5551_MethodInfos/* methods */
	, InternalEnumerator_1_t5551_PropertyInfos/* properties */
	, InternalEnumerator_1_t5551_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5551_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5551_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5551_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5551_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5551_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5551_1_0_0/* this_arg */
	, InternalEnumerator_1_t5551_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5551_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5551)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14780_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>
extern MethodInfo ICollection_1_get_Count_m111666_MethodInfo;
static PropertyInfo ICollection_1_t14780____Count_PropertyInfo = 
{
	&ICollection_1_t14780_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111666_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111667_MethodInfo;
static PropertyInfo ICollection_1_t14780____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14780_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111667_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14780_PropertyInfos[] =
{
	&ICollection_1_t14780____Count_PropertyInfo,
	&ICollection_1_t14780____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14780_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::get_Count()
MethodInfo ICollection_1_get_Count_m111666_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14780_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14780_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111667_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14780_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType InputType_t670_0_0_0;
static ParameterInfo ICollection_1_t14780_ICollection_1_Add_m111668_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InputType_t670_0_0_0},
};
extern TypeInfo ICollection_1_t14780_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::Add(T)
MethodInfo ICollection_1_Add_m111668_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14780_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14780_ICollection_1_Add_m111668_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14780_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::Clear()
MethodInfo ICollection_1_Clear_m111669_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14780_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType InputType_t670_0_0_0;
static ParameterInfo ICollection_1_t14780_ICollection_1_Contains_m111670_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InputType_t670_0_0_0},
};
extern TypeInfo ICollection_1_t14780_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::Contains(T)
MethodInfo ICollection_1_Contains_m111670_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14780_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14780_ICollection_1_Contains_m111670_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType InputTypeU5BU5D_t12740_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14780_ICollection_1_CopyTo_m111671_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &InputTypeU5BU5D_t12740_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14780_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111671_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14780_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14780_ICollection_1_CopyTo_m111671_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType InputType_t670_0_0_0;
static ParameterInfo ICollection_1_t14780_ICollection_1_Remove_m111672_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InputType_t670_0_0_0},
};
extern TypeInfo ICollection_1_t14780_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::Remove(T)
MethodInfo ICollection_1_Remove_m111672_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14780_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14780_ICollection_1_Remove_m111672_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t14780_MethodInfos[] =
{
	&ICollection_1_get_Count_m111666_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111667_MethodInfo,
	&ICollection_1_Add_m111668_MethodInfo,
	&ICollection_1_Clear_m111669_MethodInfo,
	&ICollection_1_Contains_m111670_MethodInfo,
	&ICollection_1_CopyTo_m111671_MethodInfo,
	&ICollection_1_Remove_m111672_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14782_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14780_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14782_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14780_0_0_0;
extern Il2CppType ICollection_1_t14780_1_0_0;
struct ICollection_1_t14780;
extern TypeInfo ICollection_1_t14780_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14780_GenericClass;
TypeInfo ICollection_1_t14780_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14780_MethodInfos/* methods */
	, ICollection_1_t14780_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14780_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14780_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14780_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14780_0_0_0/* byval_arg */
	, &ICollection_1_t14780_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14780_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t14782_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/InputType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/InputType>
extern TypeInfo IEnumerable_1_t14782_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13108_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/InputType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111673_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14782_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13108_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t14782_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111673_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14782_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14782_0_0_0;
extern Il2CppType IEnumerable_1_t14782_1_0_0;
struct IEnumerable_1_t14782;
extern TypeInfo IEnumerable_1_t14782_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14782_GenericClass;
TypeInfo IEnumerable_1_t14782_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14782_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14782_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14782_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14782_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14782_0_0_0/* byval_arg */
	, &IEnumerable_1_t14782_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14782_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14781_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>
extern MethodInfo IList_1_get_Item_m111674_MethodInfo;
extern MethodInfo IList_1_set_Item_m111675_MethodInfo;
static PropertyInfo IList_1_t14781____Item_PropertyInfo = 
{
	&IList_1_t14781_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111674_MethodInfo/* get */
	, &IList_1_set_Item_m111675_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14781_PropertyInfos[] =
{
	&IList_1_t14781____Item_PropertyInfo,
	NULL
};
extern Il2CppType InputType_t670_0_0_0;
static ParameterInfo IList_1_t14781_IList_1_IndexOf_m111676_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InputType_t670_0_0_0},
};
extern TypeInfo IList_1_t14781_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111676_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14781_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14781_IList_1_IndexOf_m111676_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType InputType_t670_0_0_0;
static ParameterInfo IList_1_t14781_IList_1_Insert_m111677_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &InputType_t670_0_0_0},
};
extern TypeInfo IList_1_t14781_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111677_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14781_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14781_IList_1_Insert_m111677_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14781_IList_1_RemoveAt_m111678_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14781_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111678_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14781_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14781_IList_1_RemoveAt_m111678_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14781_IList_1_get_Item_m111674_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14781_il2cpp_TypeInfo;
extern Il2CppType InputType_t670_0_0_0;
extern void* RuntimeInvoker_InputType_t670_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111674_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14781_il2cpp_TypeInfo/* declaring_type */
	, &InputType_t670_0_0_0/* return_type */
	, RuntimeInvoker_InputType_t670_Int32_t63/* invoker_method */
	, IList_1_t14781_IList_1_get_Item_m111674_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType InputType_t670_0_0_0;
static ParameterInfo IList_1_t14781_IList_1_set_Item_m111675_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &InputType_t670_0_0_0},
};
extern TypeInfo IList_1_t14781_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111675_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14781_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14781_IList_1_set_Item_m111675_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t14781_MethodInfos[] =
{
	&IList_1_IndexOf_m111676_MethodInfo,
	&IList_1_Insert_m111677_MethodInfo,
	&IList_1_RemoveAt_m111678_MethodInfo,
	&IList_1_get_Item_m111674_MethodInfo,
	&IList_1_set_Item_m111675_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14780_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14782_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14781_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14780_il2cpp_TypeInfo,
	&IEnumerable_1_t14782_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14781_0_0_0;
extern Il2CppType IList_1_t14781_1_0_0;
struct IList_1_t14781;
extern TypeInfo IList_1_t14781_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14781_GenericClass;
extern CustomAttributesCache IList_1_t3845__CustomAttributeCache;
TypeInfo IList_1_t14781_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14781_MethodInfos/* methods */
	, IList_1_t14781_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14781_il2cpp_TypeInfo/* element_class */
	, IList_1_t14781_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3845__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14781_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14781_0_0_0/* byval_arg */
	, &IList_1_t14781_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14781_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13109_il2cpp_TypeInfo;

// UnityEngine.UI.InputField/CharacterValidation
#include "UnityEngine_UI_UnityEngine_UI_InputField_CharacterValidation.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>
extern MethodInfo IEnumerator_1_get_Current_m111679_MethodInfo;
static PropertyInfo IEnumerator_1_t13109____Current_PropertyInfo = 
{
	&IEnumerator_1_t13109_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111679_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13109_PropertyInfos[] =
{
	&IEnumerator_1_t13109____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t13109_il2cpp_TypeInfo;
extern Il2CppType CharacterValidation_t671_0_0_0;
extern void* RuntimeInvoker_CharacterValidation_t671 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111679_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13109_il2cpp_TypeInfo/* declaring_type */
	, &CharacterValidation_t671_0_0_0/* return_type */
	, RuntimeInvoker_CharacterValidation_t671/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t13109_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111679_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t13109_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13109_0_0_0;
extern Il2CppType IEnumerator_1_t13109_1_0_0;
struct IEnumerator_1_t13109;
extern TypeInfo IEnumerator_1_t13109_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t13109_GenericClass;
TypeInfo IEnumerator_1_t13109_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13109_MethodInfos/* methods */
	, IEnumerator_1_t13109_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13109_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13109_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13109_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13109_0_0_0/* byval_arg */
	, &IEnumerator_1_t13109_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13109_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_345.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5552_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_345MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5552_il2cpp_TypeInfo;
extern TypeInfo CharacterValidation_t671_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26087_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5142_MethodInfo;
extern MethodInfo Array_get_Length_m7860_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCharacterValidation_t671_m94290_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/CharacterValidation>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/CharacterValidation>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCharacterValidation_t671_m94290 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisCharacterValidation_t671_m94290_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26082_MethodInfo;
 void InternalEnumerator_1__ctor_m26082 (InternalEnumerator_1_t5552 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26083_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26083 (InternalEnumerator_1_t5552 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26084_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26084 (InternalEnumerator_1_t5552 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26087(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26087_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CharacterValidation_t671_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26085_MethodInfo;
 void InternalEnumerator_1_Dispose_m26085 (InternalEnumerator_1_t5552 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26086_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26086 (InternalEnumerator_1_t5552 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7860(L_1, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		__this->___idx = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m26087_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26087 (InternalEnumerator_1_t5552 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_1, (String_t*) &_stringLiteral2292, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t935 * L_3 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_3, (String_t*) &_stringLiteral2293, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7860(L_5, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisCharacterValidation_t671_m94290(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCharacterValidation_t671_m94290_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5552____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5552_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5552, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5552____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5552_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5552, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5552_FieldInfos[] =
{
	&InternalEnumerator_1_t5552____array_FieldInfo,
	&InternalEnumerator_1_t5552____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26084_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5552____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5552_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26084_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26087_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5552____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5552_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26087_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5552_PropertyInfos[] =
{
	&InternalEnumerator_1_t5552____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5552____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5552_InternalEnumerator_1__ctor_m26082_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5552_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26082_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26082/* method */
	, &InternalEnumerator_1_t5552_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5552_InternalEnumerator_1__ctor_m26082_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5552_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26083_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26083/* method */
	, &InternalEnumerator_1_t5552_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5552_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26084_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26084/* method */
	, &InternalEnumerator_1_t5552_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5552_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26085_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26085/* method */
	, &InternalEnumerator_1_t5552_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5552_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26086_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26086/* method */
	, &InternalEnumerator_1_t5552_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5552_il2cpp_TypeInfo;
extern Il2CppType CharacterValidation_t671_0_0_0;
extern void* RuntimeInvoker_CharacterValidation_t671 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26087_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26087/* method */
	, &InternalEnumerator_1_t5552_il2cpp_TypeInfo/* declaring_type */
	, &CharacterValidation_t671_0_0_0/* return_type */
	, RuntimeInvoker_CharacterValidation_t671/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t5552_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26082_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26083_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26084_MethodInfo,
	&InternalEnumerator_1_Dispose_m26085_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26086_MethodInfo,
	&InternalEnumerator_1_get_Current_m26087_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26084_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26086_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26083_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26085_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26087_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5552_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26084_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26086_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26083_MethodInfo,
	&InternalEnumerator_1_Dispose_m26085_MethodInfo,
	&InternalEnumerator_1_get_Current_m26087_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13109_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5552_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t13109_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13109_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5552_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13109_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5552_0_0_0;
extern Il2CppType InternalEnumerator_1_t5552_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5552_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5552_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5552_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5552_MethodInfos/* methods */
	, InternalEnumerator_1_t5552_PropertyInfos/* properties */
	, InternalEnumerator_1_t5552_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5552_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5552_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5552_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5552_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5552_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5552_1_0_0/* this_arg */
	, InternalEnumerator_1_t5552_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5552_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5552)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14783_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>
extern MethodInfo ICollection_1_get_Count_m111680_MethodInfo;
static PropertyInfo ICollection_1_t14783____Count_PropertyInfo = 
{
	&ICollection_1_t14783_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111680_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111681_MethodInfo;
static PropertyInfo ICollection_1_t14783____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14783_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111681_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14783_PropertyInfos[] =
{
	&ICollection_1_t14783____Count_PropertyInfo,
	&ICollection_1_t14783____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14783_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::get_Count()
MethodInfo ICollection_1_get_Count_m111680_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14783_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14783_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111681_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14783_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType CharacterValidation_t671_0_0_0;
static ParameterInfo ICollection_1_t14783_ICollection_1_Add_m111682_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CharacterValidation_t671_0_0_0},
};
extern TypeInfo ICollection_1_t14783_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::Add(T)
MethodInfo ICollection_1_Add_m111682_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14783_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14783_ICollection_1_Add_m111682_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14783_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::Clear()
MethodInfo ICollection_1_Clear_m111683_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14783_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType CharacterValidation_t671_0_0_0;
static ParameterInfo ICollection_1_t14783_ICollection_1_Contains_m111684_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CharacterValidation_t671_0_0_0},
};
extern TypeInfo ICollection_1_t14783_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::Contains(T)
MethodInfo ICollection_1_Contains_m111684_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14783_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14783_ICollection_1_Contains_m111684_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType CharacterValidationU5BU5D_t12741_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14783_ICollection_1_CopyTo_m111685_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CharacterValidationU5BU5D_t12741_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14783_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111685_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14783_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14783_ICollection_1_CopyTo_m111685_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType CharacterValidation_t671_0_0_0;
static ParameterInfo ICollection_1_t14783_ICollection_1_Remove_m111686_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CharacterValidation_t671_0_0_0},
};
extern TypeInfo ICollection_1_t14783_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::Remove(T)
MethodInfo ICollection_1_Remove_m111686_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14783_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14783_ICollection_1_Remove_m111686_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t14783_MethodInfos[] =
{
	&ICollection_1_get_Count_m111680_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111681_MethodInfo,
	&ICollection_1_Add_m111682_MethodInfo,
	&ICollection_1_Clear_m111683_MethodInfo,
	&ICollection_1_Contains_m111684_MethodInfo,
	&ICollection_1_CopyTo_m111685_MethodInfo,
	&ICollection_1_Remove_m111686_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14785_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14783_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14785_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14783_0_0_0;
extern Il2CppType ICollection_1_t14783_1_0_0;
struct ICollection_1_t14783;
extern TypeInfo ICollection_1_t14783_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14783_GenericClass;
TypeInfo ICollection_1_t14783_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14783_MethodInfos/* methods */
	, ICollection_1_t14783_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14783_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14783_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14783_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14783_0_0_0/* byval_arg */
	, &ICollection_1_t14783_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14783_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t14785_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/CharacterValidation>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/CharacterValidation>
extern TypeInfo IEnumerable_1_t14785_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13109_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/CharacterValidation>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111687_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14785_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13109_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t14785_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111687_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14785_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14785_0_0_0;
extern Il2CppType IEnumerable_1_t14785_1_0_0;
struct IEnumerable_1_t14785;
extern TypeInfo IEnumerable_1_t14785_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14785_GenericClass;
TypeInfo IEnumerable_1_t14785_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14785_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14785_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14785_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14785_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14785_0_0_0/* byval_arg */
	, &IEnumerable_1_t14785_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14785_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14784_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>
extern MethodInfo IList_1_get_Item_m111688_MethodInfo;
extern MethodInfo IList_1_set_Item_m111689_MethodInfo;
static PropertyInfo IList_1_t14784____Item_PropertyInfo = 
{
	&IList_1_t14784_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111688_MethodInfo/* get */
	, &IList_1_set_Item_m111689_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14784_PropertyInfos[] =
{
	&IList_1_t14784____Item_PropertyInfo,
	NULL
};
extern Il2CppType CharacterValidation_t671_0_0_0;
static ParameterInfo IList_1_t14784_IList_1_IndexOf_m111690_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CharacterValidation_t671_0_0_0},
};
extern TypeInfo IList_1_t14784_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111690_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14784_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14784_IList_1_IndexOf_m111690_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType CharacterValidation_t671_0_0_0;
static ParameterInfo IList_1_t14784_IList_1_Insert_m111691_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CharacterValidation_t671_0_0_0},
};
extern TypeInfo IList_1_t14784_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111691_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14784_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14784_IList_1_Insert_m111691_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14784_IList_1_RemoveAt_m111692_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14784_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111692_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14784_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14784_IList_1_RemoveAt_m111692_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14784_IList_1_get_Item_m111688_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14784_il2cpp_TypeInfo;
extern Il2CppType CharacterValidation_t671_0_0_0;
extern void* RuntimeInvoker_CharacterValidation_t671_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111688_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14784_il2cpp_TypeInfo/* declaring_type */
	, &CharacterValidation_t671_0_0_0/* return_type */
	, RuntimeInvoker_CharacterValidation_t671_Int32_t63/* invoker_method */
	, IList_1_t14784_IList_1_get_Item_m111688_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType CharacterValidation_t671_0_0_0;
static ParameterInfo IList_1_t14784_IList_1_set_Item_m111689_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CharacterValidation_t671_0_0_0},
};
extern TypeInfo IList_1_t14784_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111689_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14784_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14784_IList_1_set_Item_m111689_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t14784_MethodInfos[] =
{
	&IList_1_IndexOf_m111690_MethodInfo,
	&IList_1_Insert_m111691_MethodInfo,
	&IList_1_RemoveAt_m111692_MethodInfo,
	&IList_1_get_Item_m111688_MethodInfo,
	&IList_1_set_Item_m111689_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14783_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14785_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14784_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14783_il2cpp_TypeInfo,
	&IEnumerable_1_t14785_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14784_0_0_0;
extern Il2CppType IList_1_t14784_1_0_0;
struct IList_1_t14784;
extern TypeInfo IList_1_t14784_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14784_GenericClass;
extern CustomAttributesCache IList_1_t3845__CustomAttributeCache;
TypeInfo IList_1_t14784_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14784_MethodInfos/* methods */
	, IList_1_t14784_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14784_il2cpp_TypeInfo/* element_class */
	, IList_1_t14784_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3845__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14784_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14784_0_0_0/* byval_arg */
	, &IList_1_t14784_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14784_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13110_il2cpp_TypeInfo;

// UnityEngine.UI.InputField/LineType
#include "UnityEngine_UI_UnityEngine_UI_InputField_LineType.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/LineType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/LineType>
extern MethodInfo IEnumerator_1_get_Current_m111693_MethodInfo;
static PropertyInfo IEnumerator_1_t13110____Current_PropertyInfo = 
{
	&IEnumerator_1_t13110_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111693_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13110_PropertyInfos[] =
{
	&IEnumerator_1_t13110____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t13110_il2cpp_TypeInfo;
extern Il2CppType LineType_t672_0_0_0;
extern void* RuntimeInvoker_LineType_t672 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/LineType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111693_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13110_il2cpp_TypeInfo/* declaring_type */
	, &LineType_t672_0_0_0/* return_type */
	, RuntimeInvoker_LineType_t672/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t13110_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111693_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t13110_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13110_0_0_0;
extern Il2CppType IEnumerator_1_t13110_1_0_0;
struct IEnumerator_1_t13110;
extern TypeInfo IEnumerator_1_t13110_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t13110_GenericClass;
TypeInfo IEnumerator_1_t13110_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13110_MethodInfos/* methods */
	, IEnumerator_1_t13110_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13110_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13110_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13110_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13110_0_0_0/* byval_arg */
	, &IEnumerator_1_t13110_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13110_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_346.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5553_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_346MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5553_il2cpp_TypeInfo;
extern TypeInfo LineType_t672_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26093_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5142_MethodInfo;
extern MethodInfo Array_get_Length_m7860_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisLineType_t672_m94301_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/LineType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/LineType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisLineType_t672_m94301 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisLineType_t672_m94301_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26088_MethodInfo;
 void InternalEnumerator_1__ctor_m26088 (InternalEnumerator_1_t5553 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26089_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26089 (InternalEnumerator_1_t5553 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26090_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26090 (InternalEnumerator_1_t5553 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26093(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26093_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&LineType_t672_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26091_MethodInfo;
 void InternalEnumerator_1_Dispose_m26091 (InternalEnumerator_1_t5553 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26092_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26092 (InternalEnumerator_1_t5553 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7860(L_1, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		__this->___idx = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m26093_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26093 (InternalEnumerator_1_t5553 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_1, (String_t*) &_stringLiteral2292, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t935 * L_3 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_3, (String_t*) &_stringLiteral2293, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7860(L_5, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisLineType_t672_m94301(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisLineType_t672_m94301_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5553____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5553_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5553, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5553____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5553_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5553, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5553_FieldInfos[] =
{
	&InternalEnumerator_1_t5553____array_FieldInfo,
	&InternalEnumerator_1_t5553____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26090_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5553____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5553_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26090_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26093_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5553____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5553_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26093_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5553_PropertyInfos[] =
{
	&InternalEnumerator_1_t5553____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5553____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5553_InternalEnumerator_1__ctor_m26088_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5553_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26088_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26088/* method */
	, &InternalEnumerator_1_t5553_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5553_InternalEnumerator_1__ctor_m26088_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5553_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26089_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26089/* method */
	, &InternalEnumerator_1_t5553_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5553_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26090_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26090/* method */
	, &InternalEnumerator_1_t5553_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5553_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26091_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26091/* method */
	, &InternalEnumerator_1_t5553_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5553_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26092_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26092/* method */
	, &InternalEnumerator_1_t5553_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5553_il2cpp_TypeInfo;
extern Il2CppType LineType_t672_0_0_0;
extern void* RuntimeInvoker_LineType_t672 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26093_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26093/* method */
	, &InternalEnumerator_1_t5553_il2cpp_TypeInfo/* declaring_type */
	, &LineType_t672_0_0_0/* return_type */
	, RuntimeInvoker_LineType_t672/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t5553_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26088_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26089_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26090_MethodInfo,
	&InternalEnumerator_1_Dispose_m26091_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26092_MethodInfo,
	&InternalEnumerator_1_get_Current_m26093_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26090_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26092_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26089_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26091_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26093_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5553_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26090_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26092_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26089_MethodInfo,
	&InternalEnumerator_1_Dispose_m26091_MethodInfo,
	&InternalEnumerator_1_get_Current_m26093_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13110_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5553_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t13110_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13110_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5553_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13110_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5553_0_0_0;
extern Il2CppType InternalEnumerator_1_t5553_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5553_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5553_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5553_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5553_MethodInfos/* methods */
	, InternalEnumerator_1_t5553_PropertyInfos/* properties */
	, InternalEnumerator_1_t5553_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5553_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5553_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5553_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5553_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5553_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5553_1_0_0/* this_arg */
	, InternalEnumerator_1_t5553_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5553_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5553)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14786_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>
extern MethodInfo ICollection_1_get_Count_m111694_MethodInfo;
static PropertyInfo ICollection_1_t14786____Count_PropertyInfo = 
{
	&ICollection_1_t14786_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111694_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111695_MethodInfo;
static PropertyInfo ICollection_1_t14786____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14786_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111695_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14786_PropertyInfos[] =
{
	&ICollection_1_t14786____Count_PropertyInfo,
	&ICollection_1_t14786____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14786_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::get_Count()
MethodInfo ICollection_1_get_Count_m111694_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14786_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14786_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111695_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14786_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType LineType_t672_0_0_0;
static ParameterInfo ICollection_1_t14786_ICollection_1_Add_m111696_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LineType_t672_0_0_0},
};
extern TypeInfo ICollection_1_t14786_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::Add(T)
MethodInfo ICollection_1_Add_m111696_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14786_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14786_ICollection_1_Add_m111696_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14786_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::Clear()
MethodInfo ICollection_1_Clear_m111697_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14786_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType LineType_t672_0_0_0;
static ParameterInfo ICollection_1_t14786_ICollection_1_Contains_m111698_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LineType_t672_0_0_0},
};
extern TypeInfo ICollection_1_t14786_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::Contains(T)
MethodInfo ICollection_1_Contains_m111698_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14786_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14786_ICollection_1_Contains_m111698_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType LineTypeU5BU5D_t12742_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14786_ICollection_1_CopyTo_m111699_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &LineTypeU5BU5D_t12742_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14786_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111699_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14786_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14786_ICollection_1_CopyTo_m111699_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType LineType_t672_0_0_0;
static ParameterInfo ICollection_1_t14786_ICollection_1_Remove_m111700_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LineType_t672_0_0_0},
};
extern TypeInfo ICollection_1_t14786_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::Remove(T)
MethodInfo ICollection_1_Remove_m111700_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14786_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14786_ICollection_1_Remove_m111700_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t14786_MethodInfos[] =
{
	&ICollection_1_get_Count_m111694_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111695_MethodInfo,
	&ICollection_1_Add_m111696_MethodInfo,
	&ICollection_1_Clear_m111697_MethodInfo,
	&ICollection_1_Contains_m111698_MethodInfo,
	&ICollection_1_CopyTo_m111699_MethodInfo,
	&ICollection_1_Remove_m111700_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14788_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14786_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14788_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14786_0_0_0;
extern Il2CppType ICollection_1_t14786_1_0_0;
struct ICollection_1_t14786;
extern TypeInfo ICollection_1_t14786_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14786_GenericClass;
TypeInfo ICollection_1_t14786_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14786_MethodInfos/* methods */
	, ICollection_1_t14786_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14786_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14786_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14786_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14786_0_0_0/* byval_arg */
	, &ICollection_1_t14786_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14786_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t14788_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/LineType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/LineType>
extern TypeInfo IEnumerable_1_t14788_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13110_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/LineType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111701_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14788_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13110_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t14788_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111701_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14788_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14788_0_0_0;
extern Il2CppType IEnumerable_1_t14788_1_0_0;
struct IEnumerable_1_t14788;
extern TypeInfo IEnumerable_1_t14788_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14788_GenericClass;
TypeInfo IEnumerable_1_t14788_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14788_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14788_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14788_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14788_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14788_0_0_0/* byval_arg */
	, &IEnumerable_1_t14788_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14788_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14787_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>
extern MethodInfo IList_1_get_Item_m111702_MethodInfo;
extern MethodInfo IList_1_set_Item_m111703_MethodInfo;
static PropertyInfo IList_1_t14787____Item_PropertyInfo = 
{
	&IList_1_t14787_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111702_MethodInfo/* get */
	, &IList_1_set_Item_m111703_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14787_PropertyInfos[] =
{
	&IList_1_t14787____Item_PropertyInfo,
	NULL
};
extern Il2CppType LineType_t672_0_0_0;
static ParameterInfo IList_1_t14787_IList_1_IndexOf_m111704_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LineType_t672_0_0_0},
};
extern TypeInfo IList_1_t14787_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111704_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14787_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14787_IList_1_IndexOf_m111704_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType LineType_t672_0_0_0;
static ParameterInfo IList_1_t14787_IList_1_Insert_m111705_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &LineType_t672_0_0_0},
};
extern TypeInfo IList_1_t14787_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111705_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14787_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14787_IList_1_Insert_m111705_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14787_IList_1_RemoveAt_m111706_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14787_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111706_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14787_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14787_IList_1_RemoveAt_m111706_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14787_IList_1_get_Item_m111702_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14787_il2cpp_TypeInfo;
extern Il2CppType LineType_t672_0_0_0;
extern void* RuntimeInvoker_LineType_t672_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111702_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14787_il2cpp_TypeInfo/* declaring_type */
	, &LineType_t672_0_0_0/* return_type */
	, RuntimeInvoker_LineType_t672_Int32_t63/* invoker_method */
	, IList_1_t14787_IList_1_get_Item_m111702_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType LineType_t672_0_0_0;
static ParameterInfo IList_1_t14787_IList_1_set_Item_m111703_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &LineType_t672_0_0_0},
};
extern TypeInfo IList_1_t14787_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111703_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14787_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14787_IList_1_set_Item_m111703_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t14787_MethodInfos[] =
{
	&IList_1_IndexOf_m111704_MethodInfo,
	&IList_1_Insert_m111705_MethodInfo,
	&IList_1_RemoveAt_m111706_MethodInfo,
	&IList_1_get_Item_m111702_MethodInfo,
	&IList_1_set_Item_m111703_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14786_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14788_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14787_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14786_il2cpp_TypeInfo,
	&IEnumerable_1_t14788_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14787_0_0_0;
extern Il2CppType IList_1_t14787_1_0_0;
struct IList_1_t14787;
extern TypeInfo IList_1_t14787_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14787_GenericClass;
extern CustomAttributesCache IList_1_t3845__CustomAttributeCache;
TypeInfo IList_1_t14787_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14787_MethodInfos/* methods */
	, IList_1_t14787_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14787_il2cpp_TypeInfo/* element_class */
	, IList_1_t14787_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3845__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14787_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14787_0_0_0/* byval_arg */
	, &IList_1_t14787_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14787_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13111_il2cpp_TypeInfo;

// UnityEngine.UI.InputField/EditState
#include "UnityEngine_UI_UnityEngine_UI_InputField_EditState.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/EditState>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/EditState>
extern MethodInfo IEnumerator_1_get_Current_m111707_MethodInfo;
static PropertyInfo IEnumerator_1_t13111____Current_PropertyInfo = 
{
	&IEnumerator_1_t13111_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111707_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13111_PropertyInfos[] =
{
	&IEnumerator_1_t13111____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t13111_il2cpp_TypeInfo;
extern Il2CppType EditState_t676_0_0_0;
extern void* RuntimeInvoker_EditState_t676 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/EditState>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111707_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13111_il2cpp_TypeInfo/* declaring_type */
	, &EditState_t676_0_0_0/* return_type */
	, RuntimeInvoker_EditState_t676/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t13111_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111707_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t13111_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13111_0_0_0;
extern Il2CppType IEnumerator_1_t13111_1_0_0;
struct IEnumerator_1_t13111;
extern TypeInfo IEnumerator_1_t13111_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t13111_GenericClass;
TypeInfo IEnumerator_1_t13111_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13111_MethodInfos/* methods */
	, IEnumerator_1_t13111_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13111_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13111_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13111_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13111_0_0_0/* byval_arg */
	, &IEnumerator_1_t13111_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13111_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_347.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5554_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_347MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5554_il2cpp_TypeInfo;
extern TypeInfo EditState_t676_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26099_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5142_MethodInfo;
extern MethodInfo Array_get_Length_m7860_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisEditState_t676_m94312_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/EditState>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/EditState>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisEditState_t676_m94312 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisEditState_t676_m94312_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26094_MethodInfo;
 void InternalEnumerator_1__ctor_m26094 (InternalEnumerator_1_t5554 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26095_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26095 (InternalEnumerator_1_t5554 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26096_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26096 (InternalEnumerator_1_t5554 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26099(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26099_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&EditState_t676_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26097_MethodInfo;
 void InternalEnumerator_1_Dispose_m26097 (InternalEnumerator_1_t5554 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26098_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26098 (InternalEnumerator_1_t5554 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7860(L_1, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		__this->___idx = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m26099_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26099 (InternalEnumerator_1_t5554 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_1, (String_t*) &_stringLiteral2292, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t935 * L_3 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_3, (String_t*) &_stringLiteral2293, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7860(L_5, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisEditState_t676_m94312(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisEditState_t676_m94312_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5554____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5554_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5554, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5554____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5554_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5554, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5554_FieldInfos[] =
{
	&InternalEnumerator_1_t5554____array_FieldInfo,
	&InternalEnumerator_1_t5554____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26096_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5554____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5554_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26096_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26099_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5554____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5554_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26099_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5554_PropertyInfos[] =
{
	&InternalEnumerator_1_t5554____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5554____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5554_InternalEnumerator_1__ctor_m26094_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5554_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26094_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26094/* method */
	, &InternalEnumerator_1_t5554_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5554_InternalEnumerator_1__ctor_m26094_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5554_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26095_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26095/* method */
	, &InternalEnumerator_1_t5554_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5554_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26096_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26096/* method */
	, &InternalEnumerator_1_t5554_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5554_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26097_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26097/* method */
	, &InternalEnumerator_1_t5554_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5554_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26098_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26098/* method */
	, &InternalEnumerator_1_t5554_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5554_il2cpp_TypeInfo;
extern Il2CppType EditState_t676_0_0_0;
extern void* RuntimeInvoker_EditState_t676 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26099_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26099/* method */
	, &InternalEnumerator_1_t5554_il2cpp_TypeInfo/* declaring_type */
	, &EditState_t676_0_0_0/* return_type */
	, RuntimeInvoker_EditState_t676/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t5554_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26094_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26095_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26096_MethodInfo,
	&InternalEnumerator_1_Dispose_m26097_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26098_MethodInfo,
	&InternalEnumerator_1_get_Current_m26099_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26096_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26098_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26095_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26097_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26099_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5554_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26096_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26098_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26095_MethodInfo,
	&InternalEnumerator_1_Dispose_m26097_MethodInfo,
	&InternalEnumerator_1_get_Current_m26099_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13111_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5554_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t13111_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13111_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5554_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13111_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5554_0_0_0;
extern Il2CppType InternalEnumerator_1_t5554_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5554_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5554_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5554_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5554_MethodInfos/* methods */
	, InternalEnumerator_1_t5554_PropertyInfos/* properties */
	, InternalEnumerator_1_t5554_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5554_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5554_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5554_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5554_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5554_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5554_1_0_0/* this_arg */
	, InternalEnumerator_1_t5554_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5554_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5554)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14789_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>
extern MethodInfo ICollection_1_get_Count_m111708_MethodInfo;
static PropertyInfo ICollection_1_t14789____Count_PropertyInfo = 
{
	&ICollection_1_t14789_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111708_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111709_MethodInfo;
static PropertyInfo ICollection_1_t14789____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14789_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111709_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14789_PropertyInfos[] =
{
	&ICollection_1_t14789____Count_PropertyInfo,
	&ICollection_1_t14789____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14789_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::get_Count()
MethodInfo ICollection_1_get_Count_m111708_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14789_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14789_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111709_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14789_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType EditState_t676_0_0_0;
static ParameterInfo ICollection_1_t14789_ICollection_1_Add_m111710_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EditState_t676_0_0_0},
};
extern TypeInfo ICollection_1_t14789_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::Add(T)
MethodInfo ICollection_1_Add_m111710_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14789_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14789_ICollection_1_Add_m111710_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14789_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::Clear()
MethodInfo ICollection_1_Clear_m111711_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14789_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType EditState_t676_0_0_0;
static ParameterInfo ICollection_1_t14789_ICollection_1_Contains_m111712_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EditState_t676_0_0_0},
};
extern TypeInfo ICollection_1_t14789_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::Contains(T)
MethodInfo ICollection_1_Contains_m111712_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14789_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14789_ICollection_1_Contains_m111712_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType EditStateU5BU5D_t12743_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14789_ICollection_1_CopyTo_m111713_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &EditStateU5BU5D_t12743_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14789_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111713_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14789_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14789_ICollection_1_CopyTo_m111713_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType EditState_t676_0_0_0;
static ParameterInfo ICollection_1_t14789_ICollection_1_Remove_m111714_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EditState_t676_0_0_0},
};
extern TypeInfo ICollection_1_t14789_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::Remove(T)
MethodInfo ICollection_1_Remove_m111714_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14789_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14789_ICollection_1_Remove_m111714_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t14789_MethodInfos[] =
{
	&ICollection_1_get_Count_m111708_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111709_MethodInfo,
	&ICollection_1_Add_m111710_MethodInfo,
	&ICollection_1_Clear_m111711_MethodInfo,
	&ICollection_1_Contains_m111712_MethodInfo,
	&ICollection_1_CopyTo_m111713_MethodInfo,
	&ICollection_1_Remove_m111714_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14791_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14789_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14791_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14789_0_0_0;
extern Il2CppType ICollection_1_t14789_1_0_0;
struct ICollection_1_t14789;
extern TypeInfo ICollection_1_t14789_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14789_GenericClass;
TypeInfo ICollection_1_t14789_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14789_MethodInfos/* methods */
	, ICollection_1_t14789_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14789_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14789_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14789_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14789_0_0_0/* byval_arg */
	, &ICollection_1_t14789_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14789_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t14791_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/EditState>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/EditState>
extern TypeInfo IEnumerable_1_t14791_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13111_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/EditState>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111715_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14791_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13111_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t14791_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111715_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14791_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14791_0_0_0;
extern Il2CppType IEnumerable_1_t14791_1_0_0;
struct IEnumerable_1_t14791;
extern TypeInfo IEnumerable_1_t14791_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14791_GenericClass;
TypeInfo IEnumerable_1_t14791_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14791_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14791_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14791_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14791_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14791_0_0_0/* byval_arg */
	, &IEnumerable_1_t14791_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14791_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14790_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>
extern MethodInfo IList_1_get_Item_m111716_MethodInfo;
extern MethodInfo IList_1_set_Item_m111717_MethodInfo;
static PropertyInfo IList_1_t14790____Item_PropertyInfo = 
{
	&IList_1_t14790_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111716_MethodInfo/* get */
	, &IList_1_set_Item_m111717_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14790_PropertyInfos[] =
{
	&IList_1_t14790____Item_PropertyInfo,
	NULL
};
extern Il2CppType EditState_t676_0_0_0;
static ParameterInfo IList_1_t14790_IList_1_IndexOf_m111718_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EditState_t676_0_0_0},
};
extern TypeInfo IList_1_t14790_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111718_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14790_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14790_IList_1_IndexOf_m111718_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType EditState_t676_0_0_0;
static ParameterInfo IList_1_t14790_IList_1_Insert_m111719_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &EditState_t676_0_0_0},
};
extern TypeInfo IList_1_t14790_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111719_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14790_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14790_IList_1_Insert_m111719_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14790_IList_1_RemoveAt_m111720_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14790_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111720_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14790_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14790_IList_1_RemoveAt_m111720_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14790_IList_1_get_Item_m111716_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14790_il2cpp_TypeInfo;
extern Il2CppType EditState_t676_0_0_0;
extern void* RuntimeInvoker_EditState_t676_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111716_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14790_il2cpp_TypeInfo/* declaring_type */
	, &EditState_t676_0_0_0/* return_type */
	, RuntimeInvoker_EditState_t676_Int32_t63/* invoker_method */
	, IList_1_t14790_IList_1_get_Item_m111716_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType EditState_t676_0_0_0;
static ParameterInfo IList_1_t14790_IList_1_set_Item_m111717_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &EditState_t676_0_0_0},
};
extern TypeInfo IList_1_t14790_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111717_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14790_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14790_IList_1_set_Item_m111717_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t14790_MethodInfos[] =
{
	&IList_1_IndexOf_m111718_MethodInfo,
	&IList_1_Insert_m111719_MethodInfo,
	&IList_1_RemoveAt_m111720_MethodInfo,
	&IList_1_get_Item_m111716_MethodInfo,
	&IList_1_set_Item_m111717_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14789_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14791_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14790_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14789_il2cpp_TypeInfo,
	&IEnumerable_1_t14791_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14790_0_0_0;
extern Il2CppType IList_1_t14790_1_0_0;
struct IList_1_t14790;
extern TypeInfo IList_1_t14790_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14790_GenericClass;
extern CustomAttributesCache IList_1_t3845__CustomAttributeCache;
TypeInfo IList_1_t14790_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14790_MethodInfos/* methods */
	, IList_1_t14790_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14790_il2cpp_TypeInfo/* element_class */
	, IList_1_t14790_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3845__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14790_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14790_0_0_0/* byval_arg */
	, &IList_1_t14790_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14790_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.MaskableGraphic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_131.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t5555_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.MaskableGraphic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_131MethodDeclarations.h"

// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_130.h"
extern TypeInfo ObjectU5BU5D_t5_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t5555_il2cpp_TypeInfo;
extern TypeInfo MaskableGraphic_t666_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t5556_il2cpp_TypeInfo;
extern TypeInfo Void_t40_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_130MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m26102_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m26104_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.MaskableGraphic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.MaskableGraphic>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.MaskableGraphic>
extern Il2CppType ObjectU5BU5D_t5_0_0_33;
FieldInfo CachedInvokableCall_1_t5555____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t5_0_0_33/* type */
	, &CachedInvokableCall_1_t5555_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t5555, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t5555_FieldInfos[] =
{
	&CachedInvokableCall_1_t5555____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t111_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
extern Il2CppType MaskableGraphic_t666_0_0_0;
static ParameterInfo CachedInvokableCall_1_t5555_CachedInvokableCall_1__ctor_m26100_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t111_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &MaskableGraphic_t666_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t5555_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.MaskableGraphic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m26100_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m16515_gshared/* method */
	, &CachedInvokableCall_1_t5555_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t5555_CachedInvokableCall_1__ctor_m26100_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t5_0_0_0;
static ParameterInfo CachedInvokableCall_1_t5555_CachedInvokableCall_1_Invoke_m26101_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t5_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t5555_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.MaskableGraphic>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m26101_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m16517_gshared/* method */
	, &CachedInvokableCall_1_t5555_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, CachedInvokableCall_1_t5555_CachedInvokableCall_1_Invoke_m26101_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CachedInvokableCall_1_t5555_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m26100_MethodInfo,
	&CachedInvokableCall_1_Invoke_m26101_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m26101_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m26105_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t5555_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&CachedInvokableCall_1_Invoke_m26101_MethodInfo,
	&InvokableCall_1_Find_m26105_MethodInfo,
};
extern Il2CppType UnityAction_1_t5557_0_0_0;
extern TypeInfo UnityAction_1_t5557_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMaskableGraphic_t666_m94322_MethodInfo;
extern TypeInfo MaskableGraphic_t666_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m26107_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m26102_MethodInfo;
extern TypeInfo MaskableGraphic_t666_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m26104_MethodInfo;
static void* CachedInvokableCall_1_t5555_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t5557_0_0_0,
	&UnityAction_1_t5557_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMaskableGraphic_t666_m94322_MethodInfo,
	&MaskableGraphic_t666_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m26107_MethodInfo,
	&InvokableCall_1__ctor_m26102_MethodInfo,
	&MaskableGraphic_t666_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m26104_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t5555_0_0_0;
extern Il2CppType CachedInvokableCall_1_t5555_1_0_0;
extern TypeInfo InvokableCall_1_t5556_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t5555;
extern TypeInfo CachedInvokableCall_1_t5555_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t5555_GenericClass;
TypeInfo CachedInvokableCall_1_t5555_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t5555_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t5555_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t5556_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t5555_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t5555_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t5555_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t5555_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t5555_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t5555_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t5555_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t5555)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_1_t5556_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_136.h"
extern TypeInfo InvokableCall_1_t5556_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t5557_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t401_il2cpp_TypeInfo;
extern TypeInfo MaskableGraphic_t666_il2cpp_TypeInfo;
extern TypeInfo Void_t40_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_136MethodDeclarations.h"
extern Il2CppType UnityAction_1_t5557_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m8993_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m385_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m9174_MethodInfo;
extern MethodInfo Delegate_Combine_m4230_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m8992_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1970_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMaskableGraphic_t666_m94322_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m8994_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m26107_MethodInfo;
extern MethodInfo Delegate_get_Target_m9170_MethodInfo;
extern MethodInfo Delegate_get_Method_m9168_MethodInfo;
struct BaseInvokableCall_t2624;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.UI.MaskableGraphic>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.UI.MaskableGraphic>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisMaskableGraphic_t666_m94322(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m90272_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMaskableGraphic_t666_m94322_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>
extern Il2CppType UnityAction_1_t5557_0_0_1;
FieldInfo InvokableCall_1_t5556____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t5557_0_0_1/* type */
	, &InvokableCall_1_t5556_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t5556, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t5556_FieldInfos[] =
{
	&InvokableCall_1_t5556____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
static ParameterInfo InvokableCall_1_t5556_InvokableCall_1__ctor_m26102_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo InvokableCall_1_t5556_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m26102_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m16518_gshared/* method */
	, &InvokableCall_1_t5556_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t5556_InvokableCall_1__ctor_m26102_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UnityAction_1_t5557_0_0_0;
static ParameterInfo InvokableCall_1_t5556_InvokableCall_1__ctor_m26103_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t5557_0_0_0},
};
extern TypeInfo InvokableCall_1_t5556_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m26103_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m16519_gshared/* method */
	, &InvokableCall_1_t5556_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InvokableCall_1_t5556_InvokableCall_1__ctor_m26103_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t5_0_0_0;
static ParameterInfo InvokableCall_1_t5556_InvokableCall_1_Invoke_m26104_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t5_0_0_0},
};
extern TypeInfo InvokableCall_1_t5556_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m26104_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m16520_gshared/* method */
	, &InvokableCall_1_t5556_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InvokableCall_1_t5556_InvokableCall_1_Invoke_m26104_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
static ParameterInfo InvokableCall_1_t5556_InvokableCall_1_Find_m26105_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo InvokableCall_1_t5556_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m26105_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m16521_gshared/* method */
	, &InvokableCall_1_t5556_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t5556_InvokableCall_1_Find_m26105_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InvokableCall_1_t5556_MethodInfos[] =
{
	&InvokableCall_1__ctor_m26102_MethodInfo,
	&InvokableCall_1__ctor_m26103_MethodInfo,
	&InvokableCall_1_Invoke_m26104_MethodInfo,
	&InvokableCall_1_Find_m26105_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m26104_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m26105_MethodInfo;
static MethodInfo* InvokableCall_1_t5556_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&InvokableCall_1_Invoke_m26104_MethodInfo,
	&InvokableCall_1_Find_m26105_MethodInfo,
};
extern Il2CppType UnityAction_1_t5557_0_0_0;
extern TypeInfo UnityAction_1_t5557_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMaskableGraphic_t666_m94322_MethodInfo;
extern TypeInfo MaskableGraphic_t666_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m26107_MethodInfo;
static void* InvokableCall_1_t5556_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t5557_0_0_0,
	&UnityAction_1_t5557_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMaskableGraphic_t666_m94322_MethodInfo,
	&MaskableGraphic_t666_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m26107_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t5556_0_0_0;
extern Il2CppType InvokableCall_1_t5556_1_0_0;
extern TypeInfo BaseInvokableCall_t2624_il2cpp_TypeInfo;
struct InvokableCall_1_t5556;
extern TypeInfo InvokableCall_1_t5556_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t5556_GenericClass;
TypeInfo InvokableCall_1_t5556_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t5556_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t5556_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t2624_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t5556_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t5556_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t5556_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t5556_0_0_0/* byval_arg */
	, &InvokableCall_1_t5556_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t5556_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t5556_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t5556)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t5557_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t39_0_0_0;
static ParameterInfo UnityAction_1_t5557_UnityAction_1__ctor_m26106_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t39_0_0_0},
};
extern TypeInfo UnityAction_1_t5557_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_IntPtr_t39 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m26106_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m16522_gshared/* method */
	, &UnityAction_1_t5557_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_IntPtr_t39/* invoker_method */
	, UnityAction_1_t5557_UnityAction_1__ctor_m26106_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType MaskableGraphic_t666_0_0_0;
static ParameterInfo UnityAction_1_t5557_UnityAction_1_Invoke_m26107_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MaskableGraphic_t666_0_0_0},
};
extern TypeInfo UnityAction_1_t5557_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m26107_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m16523_gshared/* method */
	, &UnityAction_1_t5557_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityAction_1_t5557_UnityAction_1_Invoke_m26107_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType MaskableGraphic_t666_0_0_0;
extern Il2CppType AsyncCallback_t35_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t5557_UnityAction_1_BeginInvoke_m26108_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MaskableGraphic_t666_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t35_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t5557_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t34_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m26108_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m16524_gshared/* method */
	, &UnityAction_1_t5557_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t34_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t5557_UnityAction_1_BeginInvoke_m26108_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t34_0_0_0;
static ParameterInfo UnityAction_1_t5557_UnityAction_1_EndInvoke_m26109_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t34_0_0_0},
};
extern TypeInfo UnityAction_1_t5557_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m26109_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m16525_gshared/* method */
	, &UnityAction_1_t5557_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityAction_1_t5557_UnityAction_1_EndInvoke_m26109_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* UnityAction_1_t5557_MethodInfos[] =
{
	&UnityAction_1__ctor_m26106_MethodInfo,
	&UnityAction_1_Invoke_m26107_MethodInfo,
	&UnityAction_1_BeginInvoke_m26108_MethodInfo,
	&UnityAction_1_EndInvoke_m26109_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m469_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m470_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m471_MethodInfo;
extern MethodInfo MulticastDelegate_DynamicInvokeImpl_m472_MethodInfo;
extern MethodInfo Delegate_Clone_m473_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m471_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m474_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m475_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m476_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m26107_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m26108_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m26109_MethodInfo;
static MethodInfo* UnityAction_1_t5557_VTable[] =
{
	&MulticastDelegate_Equals_m469_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&MulticastDelegate_GetHashCode_m470_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&MulticastDelegate_GetObjectData_m471_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m472_MethodInfo,
	&Delegate_Clone_m473_MethodInfo,
	&MulticastDelegate_GetObjectData_m471_MethodInfo,
	&MulticastDelegate_GetInvocationList_m474_MethodInfo,
	&MulticastDelegate_CombineImpl_m475_MethodInfo,
	&MulticastDelegate_RemoveImpl_m476_MethodInfo,
	&UnityAction_1_Invoke_m26107_MethodInfo,
	&UnityAction_1_BeginInvoke_m26108_MethodInfo,
	&UnityAction_1_EndInvoke_m26109_MethodInfo,
};
extern TypeInfo ICloneable_t84_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t85_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t5557_InterfacesOffsets[] = 
{
	{ &ICloneable_t84_il2cpp_TypeInfo, 4},
	{ &ISerializable_t85_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t5557_0_0_0;
extern Il2CppType UnityAction_1_t5557_1_0_0;
extern TypeInfo MulticastDelegate_t38_il2cpp_TypeInfo;
struct UnityAction_1_t5557;
extern TypeInfo UnityAction_1_t5557_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t5557_GenericClass;
TypeInfo UnityAction_1_t5557_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t5557_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t38_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t5557_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t5557_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t5557_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t5557_0_0_0/* byval_arg */
	, &UnityAction_1_t5557_1_0_0/* this_arg */
	, UnityAction_1_t5557_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t5557_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t5557)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13112_il2cpp_TypeInfo;

// UnityEngine.UI.Navigation/Mode
#include "UnityEngine_UI_UnityEngine_UI_Navigation_Mode.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Navigation/Mode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Navigation/Mode>
extern MethodInfo IEnumerator_1_get_Current_m111721_MethodInfo;
static PropertyInfo IEnumerator_1_t13112____Current_PropertyInfo = 
{
	&IEnumerator_1_t13112_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111721_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13112_PropertyInfos[] =
{
	&IEnumerator_1_t13112____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t13112_il2cpp_TypeInfo;
extern Il2CppType Mode_t685_0_0_0;
extern void* RuntimeInvoker_Mode_t685 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Navigation/Mode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111721_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13112_il2cpp_TypeInfo/* declaring_type */
	, &Mode_t685_0_0_0/* return_type */
	, RuntimeInvoker_Mode_t685/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t13112_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111721_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t13112_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13112_0_0_0;
extern Il2CppType IEnumerator_1_t13112_1_0_0;
struct IEnumerator_1_t13112;
extern TypeInfo IEnumerator_1_t13112_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t13112_GenericClass;
TypeInfo IEnumerator_1_t13112_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13112_MethodInfos/* methods */
	, IEnumerator_1_t13112_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13112_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13112_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13112_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13112_0_0_0/* byval_arg */
	, &IEnumerator_1_t13112_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13112_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_348.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5558_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_348MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5558_il2cpp_TypeInfo;
extern TypeInfo Mode_t685_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26115_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5142_MethodInfo;
extern MethodInfo Array_get_Length_m7860_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMode_t685_m94324_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Navigation/Mode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Navigation/Mode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMode_t685_m94324 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisMode_t685_m94324_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26110_MethodInfo;
 void InternalEnumerator_1__ctor_m26110 (InternalEnumerator_1_t5558 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26111_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26111 (InternalEnumerator_1_t5558 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26112_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26112 (InternalEnumerator_1_t5558 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26115(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26115_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Mode_t685_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26113_MethodInfo;
 void InternalEnumerator_1_Dispose_m26113 (InternalEnumerator_1_t5558 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26114_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26114 (InternalEnumerator_1_t5558 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7860(L_1, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		__this->___idx = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m26115_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26115 (InternalEnumerator_1_t5558 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_1, (String_t*) &_stringLiteral2292, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t935 * L_3 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5142(L_3, (String_t*) &_stringLiteral2293, /*hidden argument*/&InvalidOperationException__ctor_m5142_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7860(L_5, /*hidden argument*/&Array_get_Length_m7860_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisMode_t685_m94324(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMode_t685_m94324_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5558____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5558_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5558, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5558____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5558_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5558, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5558_FieldInfos[] =
{
	&InternalEnumerator_1_t5558____array_FieldInfo,
	&InternalEnumerator_1_t5558____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26112_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5558____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5558_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26112_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26115_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5558____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5558_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26115_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5558_PropertyInfos[] =
{
	&InternalEnumerator_1_t5558____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5558____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5558_InternalEnumerator_1__ctor_m26110_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5558_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26110_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26110/* method */
	, &InternalEnumerator_1_t5558_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5558_InternalEnumerator_1__ctor_m26110_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5558_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26111_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26111/* method */
	, &InternalEnumerator_1_t5558_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5558_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26112_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26112/* method */
	, &InternalEnumerator_1_t5558_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5558_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26113_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26113/* method */
	, &InternalEnumerator_1_t5558_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5558_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26114_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26114/* method */
	, &InternalEnumerator_1_t5558_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5558_il2cpp_TypeInfo;
extern Il2CppType Mode_t685_0_0_0;
extern void* RuntimeInvoker_Mode_t685 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26115_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26115/* method */
	, &InternalEnumerator_1_t5558_il2cpp_TypeInfo/* declaring_type */
	, &Mode_t685_0_0_0/* return_type */
	, RuntimeInvoker_Mode_t685/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t5558_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26110_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26111_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26112_MethodInfo,
	&InternalEnumerator_1_Dispose_m26113_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26114_MethodInfo,
	&InternalEnumerator_1_get_Current_m26115_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26112_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26114_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26111_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26113_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26115_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5558_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26112_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26114_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26111_MethodInfo,
	&InternalEnumerator_1_Dispose_m26113_MethodInfo,
	&InternalEnumerator_1_get_Current_m26115_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13112_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5558_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t13112_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13112_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5558_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13112_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5558_0_0_0;
extern Il2CppType InternalEnumerator_1_t5558_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5558_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5558_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5558_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5558_MethodInfos/* methods */
	, InternalEnumerator_1_t5558_PropertyInfos/* properties */
	, InternalEnumerator_1_t5558_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5558_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5558_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5558_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5558_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5558_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5558_1_0_0/* this_arg */
	, InternalEnumerator_1_t5558_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5558_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5558)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14792_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>
extern MethodInfo ICollection_1_get_Count_m111722_MethodInfo;
static PropertyInfo ICollection_1_t14792____Count_PropertyInfo = 
{
	&ICollection_1_t14792_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111722_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111723_MethodInfo;
static PropertyInfo ICollection_1_t14792____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14792_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111723_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14792_PropertyInfos[] =
{
	&ICollection_1_t14792____Count_PropertyInfo,
	&ICollection_1_t14792____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14792_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::get_Count()
MethodInfo ICollection_1_get_Count_m111722_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14792_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14792_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111723_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14792_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Mode_t685_0_0_0;
static ParameterInfo ICollection_1_t14792_ICollection_1_Add_m111724_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mode_t685_0_0_0},
};
extern TypeInfo ICollection_1_t14792_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::Add(T)
MethodInfo ICollection_1_Add_m111724_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14792_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14792_ICollection_1_Add_m111724_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14792_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::Clear()
MethodInfo ICollection_1_Clear_m111725_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14792_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Mode_t685_0_0_0;
static ParameterInfo ICollection_1_t14792_ICollection_1_Contains_m111726_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mode_t685_0_0_0},
};
extern TypeInfo ICollection_1_t14792_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::Contains(T)
MethodInfo ICollection_1_Contains_m111726_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14792_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14792_ICollection_1_Contains_m111726_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ModeU5BU5D_t12744_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14792_ICollection_1_CopyTo_m111727_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ModeU5BU5D_t12744_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14792_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111727_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14792_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14792_ICollection_1_CopyTo_m111727_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Mode_t685_0_0_0;
static ParameterInfo ICollection_1_t14792_ICollection_1_Remove_m111728_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mode_t685_0_0_0},
};
extern TypeInfo ICollection_1_t14792_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::Remove(T)
MethodInfo ICollection_1_Remove_m111728_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14792_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14792_ICollection_1_Remove_m111728_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t14792_MethodInfos[] =
{
	&ICollection_1_get_Count_m111722_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111723_MethodInfo,
	&ICollection_1_Add_m111724_MethodInfo,
	&ICollection_1_Clear_m111725_MethodInfo,
	&ICollection_1_Contains_m111726_MethodInfo,
	&ICollection_1_CopyTo_m111727_MethodInfo,
	&ICollection_1_Remove_m111728_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14794_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14792_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14794_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14792_0_0_0;
extern Il2CppType ICollection_1_t14792_1_0_0;
struct ICollection_1_t14792;
extern TypeInfo ICollection_1_t14792_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14792_GenericClass;
TypeInfo ICollection_1_t14792_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14792_MethodInfos/* methods */
	, ICollection_1_t14792_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14792_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14792_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14792_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14792_0_0_0/* byval_arg */
	, &ICollection_1_t14792_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14792_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t14794_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Navigation/Mode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Navigation/Mode>
extern TypeInfo IEnumerable_1_t14794_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13112_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Navigation/Mode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111729_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14794_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13112_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t14794_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111729_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14794_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14794_0_0_0;
extern Il2CppType IEnumerable_1_t14794_1_0_0;
struct IEnumerable_1_t14794;
extern TypeInfo IEnumerable_1_t14794_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14794_GenericClass;
TypeInfo IEnumerable_1_t14794_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14794_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14794_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14794_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14794_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14794_0_0_0/* byval_arg */
	, &IEnumerable_1_t14794_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14794_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14793_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>
extern MethodInfo IList_1_get_Item_m111730_MethodInfo;
extern MethodInfo IList_1_set_Item_m111731_MethodInfo;
static PropertyInfo IList_1_t14793____Item_PropertyInfo = 
{
	&IList_1_t14793_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111730_MethodInfo/* get */
	, &IList_1_set_Item_m111731_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14793_PropertyInfos[] =
{
	&IList_1_t14793____Item_PropertyInfo,
	NULL
};
extern Il2CppType Mode_t685_0_0_0;
static ParameterInfo IList_1_t14793_IList_1_IndexOf_m111732_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mode_t685_0_0_0},
};
extern TypeInfo IList_1_t14793_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111732_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14793_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14793_IList_1_IndexOf_m111732_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Mode_t685_0_0_0;
static ParameterInfo IList_1_t14793_IList_1_Insert_m111733_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Mode_t685_0_0_0},
};
extern TypeInfo IList_1_t14793_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111733_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14793_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14793_IList_1_Insert_m111733_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14793_IList_1_RemoveAt_m111734_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14793_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111734_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14793_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14793_IList_1_RemoveAt_m111734_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14793_IList_1_get_Item_m111730_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14793_il2cpp_TypeInfo;
extern Il2CppType Mode_t685_0_0_0;
extern void* RuntimeInvoker_Mode_t685_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111730_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14793_il2cpp_TypeInfo/* declaring_type */
	, &Mode_t685_0_0_0/* return_type */
	, RuntimeInvoker_Mode_t685_Int32_t63/* invoker_method */
	, IList_1_t14793_IList_1_get_Item_m111730_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Mode_t685_0_0_0;
static ParameterInfo IList_1_t14793_IList_1_set_Item_m111731_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Mode_t685_0_0_0},
};
extern TypeInfo IList_1_t14793_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111731_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14793_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14793_IList_1_set_Item_m111731_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t14793_MethodInfos[] =
{
	&IList_1_IndexOf_m111732_MethodInfo,
	&IList_1_Insert_m111733_MethodInfo,
	&IList_1_RemoveAt_m111734_MethodInfo,
	&IList_1_get_Item_m111730_MethodInfo,
	&IList_1_set_Item_m111731_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14792_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14794_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14793_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14792_il2cpp_TypeInfo,
	&IEnumerable_1_t14794_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14793_0_0_0;
extern Il2CppType IList_1_t14793_1_0_0;
struct IList_1_t14793;
extern TypeInfo IList_1_t14793_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14793_GenericClass;
extern CustomAttributesCache IList_1_t3845__CustomAttributeCache;
TypeInfo IList_1_t14793_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14793_MethodInfos/* methods */
	, IList_1_t14793_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14793_il2cpp_TypeInfo/* element_class */
	, IList_1_t14793_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3845__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14793_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14793_0_0_0/* byval_arg */
	, &IList_1_t14793_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14793_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13113_il2cpp_TypeInfo;

// UnityEngine.UI.RawImage
#include "UnityEngine_UI_UnityEngine_UI_RawImage.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.RawImage>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.RawImage>
extern MethodInfo IEnumerator_1_get_Current_m111735_MethodInfo;
static PropertyInfo IEnumerator_1_t13113____Current_PropertyInfo = 
{
	&IEnumerator_1_t13113_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111735_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13113_PropertyInfos[] =
{
	&IEnumerator_1_t13113____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t13113_il2cpp_TypeInfo;
extern Il2CppType RawImage_t687_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.RawImage>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111735_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13113_il2cpp_TypeInfo/* declaring_type */
	, &RawImage_t687_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t13113_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111735_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t13113_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13113_0_0_0;
extern Il2CppType IEnumerator_1_t13113_1_0_0;
struct IEnumerator_1_t13113;
extern TypeInfo IEnumerator_1_t13113_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t13113_GenericClass;
TypeInfo IEnumerator_1_t13113_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13113_MethodInfos/* methods */
	, IEnumerator_1_t13113_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13113_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13113_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13113_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13113_0_0_0/* byval_arg */
	, &IEnumerator_1_t13113_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13113_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_349.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5559_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_349MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5559_il2cpp_TypeInfo;
extern TypeInfo RawImage_t687_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26121_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5142_MethodInfo;
extern MethodInfo Array_get_Length_m7860_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisRawImage_t687_m94335_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.RawImage>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.RawImage>(System.Int32)
#define Array_InternalArray__get_Item_TisRawImage_t687_m94335(__this, p0, method) (RawImage_t687 *)Array_InternalArray__get_Item_TisObject_t_m89686_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisRawImage_t687_m94335_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5559____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5559_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5559, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5559____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5559_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5559, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5559_FieldInfos[] =
{
	&InternalEnumerator_1_t5559____array_FieldInfo,
	&InternalEnumerator_1_t5559____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26118_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5559____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5559_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26118_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26121_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5559____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5559_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26121_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5559_PropertyInfos[] =
{
	&InternalEnumerator_1_t5559____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5559____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5559_InternalEnumerator_1__ctor_m26116_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5559_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26116_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m15494_gshared/* method */
	, &InternalEnumerator_1_t5559_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5559_InternalEnumerator_1__ctor_m26116_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5559_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26117_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m15495_gshared/* method */
	, &InternalEnumerator_1_t5559_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5559_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26118_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15496_gshared/* method */
	, &InternalEnumerator_1_t5559_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5559_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26119_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m15497_gshared/* method */
	, &InternalEnumerator_1_t5559_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5559_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26120_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m15498_gshared/* method */
	, &InternalEnumerator_1_t5559_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t5559_il2cpp_TypeInfo;
extern Il2CppType RawImage_t687_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26121_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m15499_gshared/* method */
	, &InternalEnumerator_1_t5559_il2cpp_TypeInfo/* declaring_type */
	, &RawImage_t687_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t5559_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26116_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26117_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26118_MethodInfo,
	&InternalEnumerator_1_Dispose_m26119_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26120_MethodInfo,
	&InternalEnumerator_1_get_Current_m26121_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26118_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26120_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26117_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26119_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26121_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5559_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26118_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26120_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26117_MethodInfo,
	&InternalEnumerator_1_Dispose_m26119_MethodInfo,
	&InternalEnumerator_1_get_Current_m26121_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13113_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5559_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t13113_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13113_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5559_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13113_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m26121_MethodInfo;
extern TypeInfo RawImage_t687_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisRawImage_t687_m94335_MethodInfo;
static void* InternalEnumerator_1_t5559_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26121_MethodInfo,
	&RawImage_t687_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisRawImage_t687_m94335_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5559_0_0_0;
extern Il2CppType InternalEnumerator_1_t5559_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5559_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5559_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5559_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5559_MethodInfos/* methods */
	, InternalEnumerator_1_t5559_PropertyInfos/* properties */
	, InternalEnumerator_1_t5559_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5559_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5559_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5559_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5559_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5559_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5559_1_0_0/* this_arg */
	, InternalEnumerator_1_t5559_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5559_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t5559_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5559)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14795_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>
extern MethodInfo ICollection_1_get_Count_m111736_MethodInfo;
static PropertyInfo ICollection_1_t14795____Count_PropertyInfo = 
{
	&ICollection_1_t14795_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111736_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111737_MethodInfo;
static PropertyInfo ICollection_1_t14795____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14795_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111737_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14795_PropertyInfos[] =
{
	&ICollection_1_t14795____Count_PropertyInfo,
	&ICollection_1_t14795____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14795_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::get_Count()
MethodInfo ICollection_1_get_Count_m111736_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14795_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14795_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111737_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14795_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType RawImage_t687_0_0_0;
static ParameterInfo ICollection_1_t14795_ICollection_1_Add_m111738_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RawImage_t687_0_0_0},
};
extern TypeInfo ICollection_1_t14795_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::Add(T)
MethodInfo ICollection_1_Add_m111738_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14795_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, ICollection_1_t14795_ICollection_1_Add_m111738_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t14795_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::Clear()
MethodInfo ICollection_1_Clear_m111739_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14795_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType RawImage_t687_0_0_0;
static ParameterInfo ICollection_1_t14795_ICollection_1_Contains_m111740_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RawImage_t687_0_0_0},
};
extern TypeInfo ICollection_1_t14795_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::Contains(T)
MethodInfo ICollection_1_Contains_m111740_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14795_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t14795_ICollection_1_Contains_m111740_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType RawImageU5BU5D_t12745_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14795_ICollection_1_CopyTo_m111741_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &RawImageU5BU5D_t12745_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14795_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111741_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14795_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14795_ICollection_1_CopyTo_m111741_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType RawImage_t687_0_0_0;
static ParameterInfo ICollection_1_t14795_ICollection_1_Remove_m111742_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RawImage_t687_0_0_0},
};
extern TypeInfo ICollection_1_t14795_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::Remove(T)
MethodInfo ICollection_1_Remove_m111742_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14795_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t14795_ICollection_1_Remove_m111742_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t14795_MethodInfos[] =
{
	&ICollection_1_get_Count_m111736_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111737_MethodInfo,
	&ICollection_1_Add_m111738_MethodInfo,
	&ICollection_1_Clear_m111739_MethodInfo,
	&ICollection_1_Contains_m111740_MethodInfo,
	&ICollection_1_CopyTo_m111741_MethodInfo,
	&ICollection_1_Remove_m111742_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14797_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14795_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14797_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14795_0_0_0;
extern Il2CppType ICollection_1_t14795_1_0_0;
struct ICollection_1_t14795;
extern TypeInfo ICollection_1_t14795_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14795_GenericClass;
TypeInfo ICollection_1_t14795_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14795_MethodInfos/* methods */
	, ICollection_1_t14795_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14795_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14795_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14795_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14795_0_0_0/* byval_arg */
	, &ICollection_1_t14795_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14795_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t14797_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.RawImage>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.RawImage>
extern TypeInfo IEnumerable_1_t14797_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13113_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.RawImage>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111743_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14797_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13113_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t14797_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111743_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14797_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14797_0_0_0;
extern Il2CppType IEnumerable_1_t14797_1_0_0;
struct IEnumerable_1_t14797;
extern TypeInfo IEnumerable_1_t14797_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14797_GenericClass;
TypeInfo IEnumerable_1_t14797_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14797_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14797_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14797_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14797_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14797_0_0_0/* byval_arg */
	, &IEnumerable_1_t14797_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14797_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14796_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>
extern MethodInfo IList_1_get_Item_m111744_MethodInfo;
extern MethodInfo IList_1_set_Item_m111745_MethodInfo;
static PropertyInfo IList_1_t14796____Item_PropertyInfo = 
{
	&IList_1_t14796_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111744_MethodInfo/* get */
	, &IList_1_set_Item_m111745_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14796_PropertyInfos[] =
{
	&IList_1_t14796____Item_PropertyInfo,
	NULL
};
extern Il2CppType RawImage_t687_0_0_0;
static ParameterInfo IList_1_t14796_IList_1_IndexOf_m111746_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RawImage_t687_0_0_0},
};
extern TypeInfo IList_1_t14796_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111746_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14796_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t14796_IList_1_IndexOf_m111746_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType RawImage_t687_0_0_0;
static ParameterInfo IList_1_t14796_IList_1_Insert_m111747_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &RawImage_t687_0_0_0},
};
extern TypeInfo IList_1_t14796_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111747_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14796_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Object_t/* invoker_method */
	, IList_1_t14796_IList_1_Insert_m111747_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14796_IList_1_RemoveAt_m111748_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14796_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111748_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14796_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14796_IList_1_RemoveAt_m111748_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t14796_IList_1_get_Item_m111744_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14796_il2cpp_TypeInfo;
extern Il2CppType RawImage_t687_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111744_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14796_il2cpp_TypeInfo/* declaring_type */
	, &RawImage_t687_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t14796_IList_1_get_Item_m111744_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType RawImage_t687_0_0_0;
static ParameterInfo IList_1_t14796_IList_1_set_Item_m111745_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &RawImage_t687_0_0_0},
};
extern TypeInfo IList_1_t14796_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111745_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14796_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Object_t/* invoker_method */
	, IList_1_t14796_IList_1_set_Item_m111745_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t14796_MethodInfos[] =
{
	&IList_1_IndexOf_m111746_MethodInfo,
	&IList_1_Insert_m111747_MethodInfo,
	&IList_1_RemoveAt_m111748_MethodInfo,
	&IList_1_get_Item_m111744_MethodInfo,
	&IList_1_set_Item_m111745_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14795_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14797_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14796_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14795_il2cpp_TypeInfo,
	&IEnumerable_1_t14797_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14796_0_0_0;
extern Il2CppType IList_1_t14796_1_0_0;
struct IList_1_t14796;
extern TypeInfo IList_1_t14796_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14796_GenericClass;
extern CustomAttributesCache IList_1_t3845__CustomAttributeCache;
TypeInfo IList_1_t14796_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14796_MethodInfos/* methods */
	, IList_1_t14796_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14796_il2cpp_TypeInfo/* element_class */
	, IList_1_t14796_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3845__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14796_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14796_0_0_0/* byval_arg */
	, &IList_1_t14796_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14796_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.RawImage>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_132.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t5560_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.RawImage>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_132MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_131.h"
extern TypeInfo ObjectU5BU5D_t5_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t5560_il2cpp_TypeInfo;
extern TypeInfo RawImage_t687_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t5561_il2cpp_TypeInfo;
extern TypeInfo Void_t40_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_131MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m26124_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m26126_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.RawImage>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.RawImage>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.RawImage>
extern Il2CppType ObjectU5BU5D_t5_0_0_33;
FieldInfo CachedInvokableCall_1_t5560____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t5_0_0_33/* type */
	, &CachedInvokableCall_1_t5560_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t5560, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t5560_FieldInfos[] =
{
	&CachedInvokableCall_1_t5560____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t111_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
extern Il2CppType RawImage_t687_0_0_0;
static ParameterInfo CachedInvokableCall_1_t5560_CachedInvokableCall_1__ctor_m26122_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t111_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &RawImage_t687_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t5560_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.RawImage>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m26122_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m16515_gshared/* method */
	, &CachedInvokableCall_1_t5560_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t5560_CachedInvokableCall_1__ctor_m26122_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t5_0_0_0;
static ParameterInfo CachedInvokableCall_1_t5560_CachedInvokableCall_1_Invoke_m26123_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t5_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t5560_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.RawImage>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m26123_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m16517_gshared/* method */
	, &CachedInvokableCall_1_t5560_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, CachedInvokableCall_1_t5560_CachedInvokableCall_1_Invoke_m26123_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CachedInvokableCall_1_t5560_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m26122_MethodInfo,
	&CachedInvokableCall_1_Invoke_m26123_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m26123_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m26127_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t5560_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&CachedInvokableCall_1_Invoke_m26123_MethodInfo,
	&InvokableCall_1_Find_m26127_MethodInfo,
};
extern Il2CppType UnityAction_1_t5562_0_0_0;
extern TypeInfo UnityAction_1_t5562_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisRawImage_t687_m94345_MethodInfo;
extern TypeInfo RawImage_t687_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m26129_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m26124_MethodInfo;
extern TypeInfo RawImage_t687_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m26126_MethodInfo;
static void* CachedInvokableCall_1_t5560_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t5562_0_0_0,
	&UnityAction_1_t5562_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisRawImage_t687_m94345_MethodInfo,
	&RawImage_t687_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m26129_MethodInfo,
	&InvokableCall_1__ctor_m26124_MethodInfo,
	&RawImage_t687_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m26126_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t5560_0_0_0;
extern Il2CppType CachedInvokableCall_1_t5560_1_0_0;
extern TypeInfo InvokableCall_1_t5561_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t5560;
extern TypeInfo CachedInvokableCall_1_t5560_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t5560_GenericClass;
TypeInfo CachedInvokableCall_1_t5560_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t5560_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t5560_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t5561_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t5560_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t5560_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t5560_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t5560_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t5560_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t5560_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t5560_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t5560)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_1_t5561_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<UnityEngine.UI.RawImage>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_137.h"
extern TypeInfo InvokableCall_1_t5561_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t5562_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t401_il2cpp_TypeInfo;
extern TypeInfo RawImage_t687_il2cpp_TypeInfo;
extern TypeInfo Void_t40_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.UI.RawImage>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_137MethodDeclarations.h"
extern Il2CppType UnityAction_1_t5562_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m8993_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m385_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m9174_MethodInfo;
extern MethodInfo Delegate_Combine_m4230_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m8992_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1970_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisRawImage_t687_m94345_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m8994_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m26129_MethodInfo;
extern MethodInfo Delegate_get_Target_m9170_MethodInfo;
extern MethodInfo Delegate_get_Method_m9168_MethodInfo;
struct BaseInvokableCall_t2624;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.UI.RawImage>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.UI.RawImage>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisRawImage_t687_m94345(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m90272_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisRawImage_t687_m94345_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>
extern Il2CppType UnityAction_1_t5562_0_0_1;
FieldInfo InvokableCall_1_t5561____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t5562_0_0_1/* type */
	, &InvokableCall_1_t5561_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t5561, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t5561_FieldInfos[] =
{
	&InvokableCall_1_t5561____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
static ParameterInfo InvokableCall_1_t5561_InvokableCall_1__ctor_m26124_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo InvokableCall_1_t5561_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m26124_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m16518_gshared/* method */
	, &InvokableCall_1_t5561_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t5561_InvokableCall_1__ctor_m26124_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UnityAction_1_t5562_0_0_0;
static ParameterInfo InvokableCall_1_t5561_InvokableCall_1__ctor_m26125_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t5562_0_0_0},
};
extern TypeInfo InvokableCall_1_t5561_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m26125_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m16519_gshared/* method */
	, &InvokableCall_1_t5561_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InvokableCall_1_t5561_InvokableCall_1__ctor_m26125_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t5_0_0_0;
static ParameterInfo InvokableCall_1_t5561_InvokableCall_1_Invoke_m26126_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t5_0_0_0},
};
extern TypeInfo InvokableCall_1_t5561_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m26126_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m16520_gshared/* method */
	, &InvokableCall_1_t5561_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InvokableCall_1_t5561_InvokableCall_1_Invoke_m26126_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
static ParameterInfo InvokableCall_1_t5561_InvokableCall_1_Find_m26127_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo InvokableCall_1_t5561_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m26127_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m16521_gshared/* method */
	, &InvokableCall_1_t5561_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t5561_InvokableCall_1_Find_m26127_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InvokableCall_1_t5561_MethodInfos[] =
{
	&InvokableCall_1__ctor_m26124_MethodInfo,
	&InvokableCall_1__ctor_m26125_MethodInfo,
	&InvokableCall_1_Invoke_m26126_MethodInfo,
	&InvokableCall_1_Find_m26127_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m26126_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m26127_MethodInfo;
static MethodInfo* InvokableCall_1_t5561_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&InvokableCall_1_Invoke_m26126_MethodInfo,
	&InvokableCall_1_Find_m26127_MethodInfo,
};
extern Il2CppType UnityAction_1_t5562_0_0_0;
extern TypeInfo UnityAction_1_t5562_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisRawImage_t687_m94345_MethodInfo;
extern TypeInfo RawImage_t687_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m26129_MethodInfo;
static void* InvokableCall_1_t5561_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t5562_0_0_0,
	&UnityAction_1_t5562_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisRawImage_t687_m94345_MethodInfo,
	&RawImage_t687_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m26129_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t5561_0_0_0;
extern Il2CppType InvokableCall_1_t5561_1_0_0;
extern TypeInfo BaseInvokableCall_t2624_il2cpp_TypeInfo;
struct InvokableCall_1_t5561;
extern TypeInfo InvokableCall_1_t5561_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t5561_GenericClass;
TypeInfo InvokableCall_1_t5561_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t5561_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t5561_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t2624_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t5561_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t5561_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t5561_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t5561_0_0_0/* byval_arg */
	, &InvokableCall_1_t5561_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t5561_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t5561_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t5561)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
