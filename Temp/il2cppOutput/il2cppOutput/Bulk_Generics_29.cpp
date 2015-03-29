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
extern TypeInfo IList_1_t14752_il2cpp_TypeInfo;

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
extern MethodInfo IList_1_get_Item_m111512_MethodInfo;
extern MethodInfo IList_1_set_Item_m111513_MethodInfo;
static PropertyInfo IList_1_t14752____Item_PropertyInfo = 
{
	&IList_1_t14752_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111512_MethodInfo/* get */
	, &IList_1_set_Item_m111513_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14752_PropertyInfos[] =
{
	&IList_1_t14752____Item_PropertyInfo,
	NULL
};
extern Il2CppType ISerializationCallbackReceiver_t764_0_0_0;
static ParameterInfo IList_1_t14752_IList_1_IndexOf_m111514_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ISerializationCallbackReceiver_t764_0_0_0},
};
extern TypeInfo IList_1_t14752_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.ISerializationCallbackReceiver>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111514_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14752_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t14752_IList_1_IndexOf_m111514_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14752_IList_1_Insert_m111515_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ISerializationCallbackReceiver_t764_0_0_0},
};
extern TypeInfo IList_1_t14752_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.ISerializationCallbackReceiver>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111515_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14752_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Object_t/* invoker_method */
	, IList_1_t14752_IList_1_Insert_m111515_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14752_IList_1_RemoveAt_m111516_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14752_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.ISerializationCallbackReceiver>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111516_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14752_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14752_IList_1_RemoveAt_m111516_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14752_IList_1_get_Item_m111512_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14752_il2cpp_TypeInfo;
extern Il2CppType ISerializationCallbackReceiver_t764_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.ISerializationCallbackReceiver>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111512_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14752_il2cpp_TypeInfo/* declaring_type */
	, &ISerializationCallbackReceiver_t764_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t14752_IList_1_get_Item_m111512_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14752_IList_1_set_Item_m111513_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ISerializationCallbackReceiver_t764_0_0_0},
};
extern TypeInfo IList_1_t14752_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.ISerializationCallbackReceiver>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111513_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14752_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Object_t/* invoker_method */
	, IList_1_t14752_IList_1_set_Item_m111513_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t14752_MethodInfos[] =
{
	&IList_1_IndexOf_m111514_MethodInfo,
	&IList_1_Insert_m111515_MethodInfo,
	&IList_1_RemoveAt_m111516_MethodInfo,
	&IList_1_get_Item_m111512_MethodInfo,
	&IList_1_set_Item_m111513_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14751_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14753_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14752_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14751_il2cpp_TypeInfo,
	&IEnumerable_1_t14753_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14752_0_0_0;
extern Il2CppType IList_1_t14752_1_0_0;
struct IList_1_t14752;
extern TypeInfo IList_1_t14752_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14752_GenericClass;
extern CustomAttributesCache IList_1_t3846__CustomAttributeCache;
TypeInfo IList_1_t14752_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14752_MethodInfos/* methods */
	, IList_1_t14752_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14752_il2cpp_TypeInfo/* element_class */
	, IList_1_t14752_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3846__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14752_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14752_0_0_0/* byval_arg */
	, &IList_1_t14752_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14752_GenericClass/* generic_class */
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
extern TypeInfo CachedInvokableCall_1_t5534_il2cpp_TypeInfo;
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
extern TypeInfo CachedInvokableCall_1_t5534_il2cpp_TypeInfo;
extern TypeInfo Image_t665_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t5535_il2cpp_TypeInfo;
extern TypeInfo Void_t40_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_127MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m25987_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m25989_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Image>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Image>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Image>
extern Il2CppType ObjectU5BU5D_t5_0_0_33;
FieldInfo CachedInvokableCall_1_t5534____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t5_0_0_33/* type */
	, &CachedInvokableCall_1_t5534_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t5534, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t5534_FieldInfos[] =
{
	&CachedInvokableCall_1_t5534____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t111_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
extern Il2CppType Image_t665_0_0_0;
static ParameterInfo CachedInvokableCall_1_t5534_CachedInvokableCall_1__ctor_m25985_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t111_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &Image_t665_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t5534_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Image>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m25985_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m16518_gshared/* method */
	, &CachedInvokableCall_1_t5534_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t5534_CachedInvokableCall_1__ctor_m25985_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t5534_CachedInvokableCall_1_Invoke_m25986_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t5_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t5534_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Image>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m25986_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m16520_gshared/* method */
	, &CachedInvokableCall_1_t5534_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, CachedInvokableCall_1_t5534_CachedInvokableCall_1_Invoke_m25986_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t5534_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m25985_MethodInfo,
	&CachedInvokableCall_1_Invoke_m25986_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m25986_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m25990_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t5534_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&CachedInvokableCall_1_Invoke_m25986_MethodInfo,
	&InvokableCall_1_Find_m25990_MethodInfo,
};
extern Il2CppType UnityAction_1_t5536_0_0_0;
extern TypeInfo UnityAction_1_t5536_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisImage_t665_m94157_MethodInfo;
extern TypeInfo Image_t665_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m25992_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m25987_MethodInfo;
extern TypeInfo Image_t665_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m25989_MethodInfo;
static void* CachedInvokableCall_1_t5534_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t5536_0_0_0,
	&UnityAction_1_t5536_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisImage_t665_m94157_MethodInfo,
	&Image_t665_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m25992_MethodInfo,
	&InvokableCall_1__ctor_m25987_MethodInfo,
	&Image_t665_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m25989_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t5534_0_0_0;
extern Il2CppType CachedInvokableCall_1_t5534_1_0_0;
extern TypeInfo InvokableCall_1_t5535_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t5534;
extern TypeInfo CachedInvokableCall_1_t5534_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t5534_GenericClass;
TypeInfo CachedInvokableCall_1_t5534_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t5534_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t5534_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t5535_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t5534_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t5534_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t5534_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t5534_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t5534_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t5534_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t5534_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t5534)/* instance_size */
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
extern TypeInfo InvokableCall_1_t5535_il2cpp_TypeInfo;

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
extern TypeInfo InvokableCall_1_t5535_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t5536_il2cpp_TypeInfo;
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
extern Il2CppType UnityAction_1_t5536_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m8996_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m385_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m9178_MethodInfo;
extern MethodInfo Delegate_Combine_m4232_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m8995_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1970_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisImage_t665_m94157_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m8997_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m25992_MethodInfo;
extern MethodInfo Delegate_get_Target_m9174_MethodInfo;
extern MethodInfo Delegate_get_Method_m9172_MethodInfo;
struct BaseInvokableCall_t2625;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
struct BaseInvokableCall_t2625;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
 void BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m90275_gshared (Object_t * __this/* static, unused */, Object_t * p0, MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m90275(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m90275_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.UI.Image>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.UI.Image>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisImage_t665_m94157(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m90275_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisImage_t665_m94157_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>
extern Il2CppType UnityAction_1_t5536_0_0_1;
FieldInfo InvokableCall_1_t5535____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t5536_0_0_1/* type */
	, &InvokableCall_1_t5535_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t5535, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t5535_FieldInfos[] =
{
	&InvokableCall_1_t5535____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
static ParameterInfo InvokableCall_1_t5535_InvokableCall_1__ctor_m25987_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo InvokableCall_1_t5535_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m25987_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m16521_gshared/* method */
	, &InvokableCall_1_t5535_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t5535_InvokableCall_1__ctor_m25987_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t5536_0_0_0;
static ParameterInfo InvokableCall_1_t5535_InvokableCall_1__ctor_m25988_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t5536_0_0_0},
};
extern TypeInfo InvokableCall_1_t5535_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m25988_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m16522_gshared/* method */
	, &InvokableCall_1_t5535_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InvokableCall_1_t5535_InvokableCall_1__ctor_m25988_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t5535_InvokableCall_1_Invoke_m25989_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t5_0_0_0},
};
extern TypeInfo InvokableCall_1_t5535_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m25989_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m16523_gshared/* method */
	, &InvokableCall_1_t5535_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InvokableCall_1_t5535_InvokableCall_1_Invoke_m25989_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t5535_InvokableCall_1_Find_m25990_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo InvokableCall_1_t5535_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Image>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m25990_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m16524_gshared/* method */
	, &InvokableCall_1_t5535_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t5535_InvokableCall_1_Find_m25990_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t5535_MethodInfos[] =
{
	&InvokableCall_1__ctor_m25987_MethodInfo,
	&InvokableCall_1__ctor_m25988_MethodInfo,
	&InvokableCall_1_Invoke_m25989_MethodInfo,
	&InvokableCall_1_Find_m25990_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m25989_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m25990_MethodInfo;
static MethodInfo* InvokableCall_1_t5535_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&InvokableCall_1_Invoke_m25989_MethodInfo,
	&InvokableCall_1_Find_m25990_MethodInfo,
};
extern Il2CppType UnityAction_1_t5536_0_0_0;
extern TypeInfo UnityAction_1_t5536_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisImage_t665_m94157_MethodInfo;
extern TypeInfo Image_t665_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m25992_MethodInfo;
static void* InvokableCall_1_t5535_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t5536_0_0_0,
	&UnityAction_1_t5536_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisImage_t665_m94157_MethodInfo,
	&Image_t665_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m25992_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t5535_0_0_0;
extern Il2CppType InvokableCall_1_t5535_1_0_0;
extern TypeInfo BaseInvokableCall_t2625_il2cpp_TypeInfo;
struct InvokableCall_1_t5535;
extern TypeInfo InvokableCall_1_t5535_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t5535_GenericClass;
TypeInfo InvokableCall_1_t5535_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t5535_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t5535_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t2625_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t5535_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t5535_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t5535_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t5535_0_0_0/* byval_arg */
	, &InvokableCall_1_t5535_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t5535_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t5535_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t5535)/* instance_size */
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
extern TypeInfo UnityAction_1_t5536_il2cpp_TypeInfo;

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
static ParameterInfo UnityAction_1_t5536_UnityAction_1__ctor_m25991_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t39_0_0_0},
};
extern TypeInfo UnityAction_1_t5536_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_IntPtr_t39 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.Image>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m25991_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m16525_gshared/* method */
	, &UnityAction_1_t5536_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_IntPtr_t39/* invoker_method */
	, UnityAction_1_t5536_UnityAction_1__ctor_m25991_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t5536_UnityAction_1_Invoke_m25992_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &Image_t665_0_0_0},
};
extern TypeInfo UnityAction_1_t5536_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.Image>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m25992_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m16526_gshared/* method */
	, &UnityAction_1_t5536_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityAction_1_t5536_UnityAction_1_Invoke_m25992_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t5536_UnityAction_1_BeginInvoke_m25993_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &Image_t665_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t35_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t5536_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t34_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.UI.Image>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m25993_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m16527_gshared/* method */
	, &UnityAction_1_t5536_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t34_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t5536_UnityAction_1_BeginInvoke_m25993_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t5536_UnityAction_1_EndInvoke_m25994_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t34_0_0_0},
};
extern TypeInfo UnityAction_1_t5536_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.Image>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m25994_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m16528_gshared/* method */
	, &UnityAction_1_t5536_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityAction_1_t5536_UnityAction_1_EndInvoke_m25994_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t5536_MethodInfos[] =
{
	&UnityAction_1__ctor_m25991_MethodInfo,
	&UnityAction_1_Invoke_m25992_MethodInfo,
	&UnityAction_1_BeginInvoke_m25993_MethodInfo,
	&UnityAction_1_EndInvoke_m25994_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m25992_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m25993_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m25994_MethodInfo;
static MethodInfo* UnityAction_1_t5536_VTable[] =
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
	&UnityAction_1_Invoke_m25992_MethodInfo,
	&UnityAction_1_BeginInvoke_m25993_MethodInfo,
	&UnityAction_1_EndInvoke_m25994_MethodInfo,
};
extern TypeInfo ICloneable_t84_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t85_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t5536_InterfacesOffsets[] = 
{
	{ &ICloneable_t84_il2cpp_TypeInfo, 4},
	{ &ISerializable_t85_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t5536_0_0_0;
extern Il2CppType UnityAction_1_t5536_1_0_0;
extern TypeInfo MulticastDelegate_t38_il2cpp_TypeInfo;
struct UnityAction_1_t5536;
extern TypeInfo UnityAction_1_t5536_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t5536_GenericClass;
TypeInfo UnityAction_1_t5536_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t5536_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t38_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t5536_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t5536_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t5536_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t5536_0_0_0/* byval_arg */
	, &UnityAction_1_t5536_1_0_0/* this_arg */
	, UnityAction_1_t5536_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t5536_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t5536)/* instance_size */
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
extern TypeInfo IEnumerator_1_t13100_il2cpp_TypeInfo;

// UnityEngine.UI.Image/Type
#include "UnityEngine_UI_UnityEngine_UI_Image_Type.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Type>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Type>
extern MethodInfo IEnumerator_1_get_Current_m111517_MethodInfo;
static PropertyInfo IEnumerator_1_t13100____Current_PropertyInfo = 
{
	&IEnumerator_1_t13100_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111517_MethodInfo/* get */
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
extern Il2CppType Type_t657_0_0_0;
extern void* RuntimeInvoker_Type_t657 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Type>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111517_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13100_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerator_1_t13100_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111517_MethodInfo,
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
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_333.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5537_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_333MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo InternalEnumerator_1_t5537_il2cpp_TypeInfo;
extern TypeInfo Type_t657_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m26000_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5144_MethodInfo;
extern MethodInfo Array_get_Length_m7862_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisType_t657_m94159_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/Type>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/Type>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisType_t657_m94159 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisType_t657_m94159_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25995_MethodInfo;
 void InternalEnumerator_1__ctor_m25995 (InternalEnumerator_1_t5537 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25996_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25996 (InternalEnumerator_1_t5537 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25997_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25997 (InternalEnumerator_1_t5537 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26000(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26000_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Type_t657_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25998_MethodInfo;
 void InternalEnumerator_1_Dispose_m25998 (InternalEnumerator_1_t5537 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25999_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25999 (InternalEnumerator_1_t5537 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m7862(L_1, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
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
extern MethodInfo InternalEnumerator_1_get_Current_m26000_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26000 (InternalEnumerator_1_t5537 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5144(L_1, (String_t*) &_stringLiteral2294, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
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
		InvalidOperationException__ctor_m5144(L_3, (String_t*) &_stringLiteral2295, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7862(L_5, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisType_t657_m94159(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisType_t657_m94159_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25997_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5537____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5537_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25997_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26000_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5537____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5537_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26000_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t5537_InternalEnumerator_1__ctor_m25995_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5537_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25995_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25995/* method */
	, &InternalEnumerator_1_t5537_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5537_InternalEnumerator_1__ctor_m25995_ParameterInfos/* parameters */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25996_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25996/* method */
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
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25997_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25997/* method */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25998_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25998/* method */
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
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25999_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25999/* method */
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
extern Il2CppType Type_t657_0_0_0;
extern void* RuntimeInvoker_Type_t657 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Type>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26000_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26000/* method */
	, &InternalEnumerator_1_t5537_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* InternalEnumerator_1_t5537_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25995_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25996_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25997_MethodInfo,
	&InternalEnumerator_1_Dispose_m25998_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25999_MethodInfo,
	&InternalEnumerator_1_get_Current_m26000_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25997_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m25999_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25996_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25998_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26000_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5537_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25997_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25999_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25996_MethodInfo,
	&InternalEnumerator_1_Dispose_m25998_MethodInfo,
	&InternalEnumerator_1_get_Current_m26000_MethodInfo,
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
extern TypeInfo ICollection_1_t14754_il2cpp_TypeInfo;

#include "UnityEngine.UI_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>
extern MethodInfo ICollection_1_get_Count_m111518_MethodInfo;
static PropertyInfo ICollection_1_t14754____Count_PropertyInfo = 
{
	&ICollection_1_t14754_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111518_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111519_MethodInfo;
static PropertyInfo ICollection_1_t14754____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14754_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111519_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14754_PropertyInfos[] =
{
	&ICollection_1_t14754____Count_PropertyInfo,
	&ICollection_1_t14754____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14754_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::get_Count()
MethodInfo ICollection_1_get_Count_m111518_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14754_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t14754_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111519_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14754_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14754_ICollection_1_Add_m111520_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Type_t657_0_0_0},
};
extern TypeInfo ICollection_1_t14754_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::Add(T)
MethodInfo ICollection_1_Add_m111520_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14754_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14754_ICollection_1_Add_m111520_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t14754_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::Clear()
MethodInfo ICollection_1_Clear_m111521_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14754_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14754_ICollection_1_Contains_m111522_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Type_t657_0_0_0},
};
extern TypeInfo ICollection_1_t14754_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::Contains(T)
MethodInfo ICollection_1_Contains_m111522_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14754_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14754_ICollection_1_Contains_m111522_ParameterInfos/* parameters */
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
extern Il2CppType TypeU5BU5D_t12733_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14754_ICollection_1_CopyTo_m111523_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TypeU5BU5D_t12733_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14754_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111523_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14754_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14754_ICollection_1_CopyTo_m111523_ParameterInfos/* parameters */
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
static ParameterInfo ICollection_1_t14754_ICollection_1_Remove_m111524_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Type_t657_0_0_0},
};
extern TypeInfo ICollection_1_t14754_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Type>::Remove(T)
MethodInfo ICollection_1_Remove_m111524_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14754_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14754_ICollection_1_Remove_m111524_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t14754_MethodInfos[] =
{
	&ICollection_1_get_Count_m111518_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111519_MethodInfo,
	&ICollection_1_Add_m111520_MethodInfo,
	&ICollection_1_Clear_m111521_MethodInfo,
	&ICollection_1_Contains_m111522_MethodInfo,
	&ICollection_1_CopyTo_m111523_MethodInfo,
	&ICollection_1_Remove_m111524_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14756_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14754_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14756_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14754_0_0_0;
extern Il2CppType ICollection_1_t14754_1_0_0;
struct ICollection_1_t14754;
extern TypeInfo ICollection_1_t14754_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14754_GenericClass;
TypeInfo ICollection_1_t14754_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14754_MethodInfos/* methods */
	, ICollection_1_t14754_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14754_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14754_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14754_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14754_0_0_0/* byval_arg */
	, &ICollection_1_t14754_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14754_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t14756_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Type>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Type>
extern TypeInfo IEnumerable_1_t14756_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13100_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Type>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111525_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14756_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerable_1_t14756_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111525_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14756_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14756_0_0_0;
extern Il2CppType IEnumerable_1_t14756_1_0_0;
struct IEnumerable_1_t14756;
extern TypeInfo IEnumerable_1_t14756_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14756_GenericClass;
TypeInfo IEnumerable_1_t14756_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14756_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14756_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14756_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14756_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14756_0_0_0/* byval_arg */
	, &IEnumerable_1_t14756_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14756_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14755_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>
extern MethodInfo IList_1_get_Item_m111526_MethodInfo;
extern MethodInfo IList_1_set_Item_m111527_MethodInfo;
static PropertyInfo IList_1_t14755____Item_PropertyInfo = 
{
	&IList_1_t14755_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111526_MethodInfo/* get */
	, &IList_1_set_Item_m111527_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14755_PropertyInfos[] =
{
	&IList_1_t14755____Item_PropertyInfo,
	NULL
};
extern Il2CppType Type_t657_0_0_0;
static ParameterInfo IList_1_t14755_IList_1_IndexOf_m111528_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Type_t657_0_0_0},
};
extern TypeInfo IList_1_t14755_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111528_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14755_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14755_IList_1_IndexOf_m111528_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14755_IList_1_Insert_m111529_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Type_t657_0_0_0},
};
extern TypeInfo IList_1_t14755_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111529_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14755_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14755_IList_1_Insert_m111529_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14755_IList_1_RemoveAt_m111530_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14755_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111530_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14755_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14755_IList_1_RemoveAt_m111530_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14755_IList_1_get_Item_m111526_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14755_il2cpp_TypeInfo;
extern Il2CppType Type_t657_0_0_0;
extern void* RuntimeInvoker_Type_t657_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111526_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14755_il2cpp_TypeInfo/* declaring_type */
	, &Type_t657_0_0_0/* return_type */
	, RuntimeInvoker_Type_t657_Int32_t63/* invoker_method */
	, IList_1_t14755_IList_1_get_Item_m111526_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14755_IList_1_set_Item_m111527_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Type_t657_0_0_0},
};
extern TypeInfo IList_1_t14755_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Type>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111527_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14755_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14755_IList_1_set_Item_m111527_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t14755_MethodInfos[] =
{
	&IList_1_IndexOf_m111528_MethodInfo,
	&IList_1_Insert_m111529_MethodInfo,
	&IList_1_RemoveAt_m111530_MethodInfo,
	&IList_1_get_Item_m111526_MethodInfo,
	&IList_1_set_Item_m111527_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14754_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14756_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14755_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14754_il2cpp_TypeInfo,
	&IEnumerable_1_t14756_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14755_0_0_0;
extern Il2CppType IList_1_t14755_1_0_0;
struct IList_1_t14755;
extern TypeInfo IList_1_t14755_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14755_GenericClass;
extern CustomAttributesCache IList_1_t3846__CustomAttributeCache;
TypeInfo IList_1_t14755_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14755_MethodInfos/* methods */
	, IList_1_t14755_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14755_il2cpp_TypeInfo/* element_class */
	, IList_1_t14755_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3846__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14755_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14755_0_0_0/* byval_arg */
	, &IList_1_t14755_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14755_GenericClass/* generic_class */
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

// UnityEngine.UI.Image/FillMethod
#include "UnityEngine_UI_UnityEngine_UI_Image_FillMethod.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/FillMethod>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/FillMethod>
extern MethodInfo IEnumerator_1_get_Current_m111531_MethodInfo;
static PropertyInfo IEnumerator_1_t13101____Current_PropertyInfo = 
{
	&IEnumerator_1_t13101_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111531_MethodInfo/* get */
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
extern Il2CppType FillMethod_t658_0_0_0;
extern void* RuntimeInvoker_FillMethod_t658 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/FillMethod>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111531_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13101_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerator_1_t13101_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111531_MethodInfo,
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
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_334.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5538_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_334MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5538_il2cpp_TypeInfo;
extern TypeInfo FillMethod_t658_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26006_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5144_MethodInfo;
extern MethodInfo Array_get_Length_m7862_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFillMethod_t658_m94170_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/FillMethod>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/FillMethod>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisFillMethod_t658_m94170 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisFillMethod_t658_m94170_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26001_MethodInfo;
 void InternalEnumerator_1__ctor_m26001 (InternalEnumerator_1_t5538 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26002_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26002 (InternalEnumerator_1_t5538 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26003_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26003 (InternalEnumerator_1_t5538 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26006(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26006_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&FillMethod_t658_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26004_MethodInfo;
 void InternalEnumerator_1_Dispose_m26004 (InternalEnumerator_1_t5538 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26005_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26005 (InternalEnumerator_1_t5538 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m7862(L_1, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
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
extern MethodInfo InternalEnumerator_1_get_Current_m26006_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26006 (InternalEnumerator_1_t5538 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5144(L_1, (String_t*) &_stringLiteral2294, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
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
		InvalidOperationException__ctor_m5144(L_3, (String_t*) &_stringLiteral2295, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7862(L_5, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisFillMethod_t658_m94170(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisFillMethod_t658_m94170_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26003_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5538____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5538_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26003_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26006_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5538____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5538_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26006_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t5538_InternalEnumerator_1__ctor_m26001_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5538_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26001_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26001/* method */
	, &InternalEnumerator_1_t5538_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5538_InternalEnumerator_1__ctor_m26001_ParameterInfos/* parameters */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26002_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26002/* method */
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
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26003_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26003/* method */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26004_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26004/* method */
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
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26005_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26005/* method */
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
extern Il2CppType FillMethod_t658_0_0_0;
extern void* RuntimeInvoker_FillMethod_t658 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/FillMethod>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26006_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26006/* method */
	, &InternalEnumerator_1_t5538_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* InternalEnumerator_1_t5538_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26001_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26002_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26003_MethodInfo,
	&InternalEnumerator_1_Dispose_m26004_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26005_MethodInfo,
	&InternalEnumerator_1_get_Current_m26006_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26003_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26005_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26002_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26004_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26006_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5538_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26003_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26005_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26002_MethodInfo,
	&InternalEnumerator_1_Dispose_m26004_MethodInfo,
	&InternalEnumerator_1_get_Current_m26006_MethodInfo,
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
extern TypeInfo ICollection_1_t14757_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>
extern MethodInfo ICollection_1_get_Count_m111532_MethodInfo;
static PropertyInfo ICollection_1_t14757____Count_PropertyInfo = 
{
	&ICollection_1_t14757_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111532_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111533_MethodInfo;
static PropertyInfo ICollection_1_t14757____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14757_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111533_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14757_PropertyInfos[] =
{
	&ICollection_1_t14757____Count_PropertyInfo,
	&ICollection_1_t14757____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14757_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::get_Count()
MethodInfo ICollection_1_get_Count_m111532_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14757_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t14757_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111533_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14757_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14757_ICollection_1_Add_m111534_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FillMethod_t658_0_0_0},
};
extern TypeInfo ICollection_1_t14757_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::Add(T)
MethodInfo ICollection_1_Add_m111534_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14757_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14757_ICollection_1_Add_m111534_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t14757_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::Clear()
MethodInfo ICollection_1_Clear_m111535_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14757_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14757_ICollection_1_Contains_m111536_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FillMethod_t658_0_0_0},
};
extern TypeInfo ICollection_1_t14757_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::Contains(T)
MethodInfo ICollection_1_Contains_m111536_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14757_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14757_ICollection_1_Contains_m111536_ParameterInfos/* parameters */
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
extern Il2CppType FillMethodU5BU5D_t12734_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14757_ICollection_1_CopyTo_m111537_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FillMethodU5BU5D_t12734_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14757_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111537_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14757_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14757_ICollection_1_CopyTo_m111537_ParameterInfos/* parameters */
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
static ParameterInfo ICollection_1_t14757_ICollection_1_Remove_m111538_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FillMethod_t658_0_0_0},
};
extern TypeInfo ICollection_1_t14757_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/FillMethod>::Remove(T)
MethodInfo ICollection_1_Remove_m111538_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14757_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14757_ICollection_1_Remove_m111538_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t14757_MethodInfos[] =
{
	&ICollection_1_get_Count_m111532_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111533_MethodInfo,
	&ICollection_1_Add_m111534_MethodInfo,
	&ICollection_1_Clear_m111535_MethodInfo,
	&ICollection_1_Contains_m111536_MethodInfo,
	&ICollection_1_CopyTo_m111537_MethodInfo,
	&ICollection_1_Remove_m111538_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14759_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14757_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14759_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14757_0_0_0;
extern Il2CppType ICollection_1_t14757_1_0_0;
struct ICollection_1_t14757;
extern TypeInfo ICollection_1_t14757_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14757_GenericClass;
TypeInfo ICollection_1_t14757_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14757_MethodInfos/* methods */
	, ICollection_1_t14757_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14757_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14757_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14757_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14757_0_0_0/* byval_arg */
	, &ICollection_1_t14757_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14757_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t14759_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/FillMethod>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/FillMethod>
extern TypeInfo IEnumerable_1_t14759_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13101_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/FillMethod>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111539_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14759_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerable_1_t14759_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111539_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14759_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14759_0_0_0;
extern Il2CppType IEnumerable_1_t14759_1_0_0;
struct IEnumerable_1_t14759;
extern TypeInfo IEnumerable_1_t14759_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14759_GenericClass;
TypeInfo IEnumerable_1_t14759_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14759_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14759_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14759_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14759_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14759_0_0_0/* byval_arg */
	, &IEnumerable_1_t14759_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14759_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14758_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>
extern MethodInfo IList_1_get_Item_m111540_MethodInfo;
extern MethodInfo IList_1_set_Item_m111541_MethodInfo;
static PropertyInfo IList_1_t14758____Item_PropertyInfo = 
{
	&IList_1_t14758_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111540_MethodInfo/* get */
	, &IList_1_set_Item_m111541_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14758_PropertyInfos[] =
{
	&IList_1_t14758____Item_PropertyInfo,
	NULL
};
extern Il2CppType FillMethod_t658_0_0_0;
static ParameterInfo IList_1_t14758_IList_1_IndexOf_m111542_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FillMethod_t658_0_0_0},
};
extern TypeInfo IList_1_t14758_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111542_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14758_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14758_IList_1_IndexOf_m111542_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14758_IList_1_Insert_m111543_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FillMethod_t658_0_0_0},
};
extern TypeInfo IList_1_t14758_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111543_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14758_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14758_IList_1_Insert_m111543_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14758_IList_1_RemoveAt_m111544_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14758_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111544_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14758_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14758_IList_1_RemoveAt_m111544_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14758_IList_1_get_Item_m111540_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14758_il2cpp_TypeInfo;
extern Il2CppType FillMethod_t658_0_0_0;
extern void* RuntimeInvoker_FillMethod_t658_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111540_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14758_il2cpp_TypeInfo/* declaring_type */
	, &FillMethod_t658_0_0_0/* return_type */
	, RuntimeInvoker_FillMethod_t658_Int32_t63/* invoker_method */
	, IList_1_t14758_IList_1_get_Item_m111540_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14758_IList_1_set_Item_m111541_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FillMethod_t658_0_0_0},
};
extern TypeInfo IList_1_t14758_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/FillMethod>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111541_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14758_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14758_IList_1_set_Item_m111541_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t14758_MethodInfos[] =
{
	&IList_1_IndexOf_m111542_MethodInfo,
	&IList_1_Insert_m111543_MethodInfo,
	&IList_1_RemoveAt_m111544_MethodInfo,
	&IList_1_get_Item_m111540_MethodInfo,
	&IList_1_set_Item_m111541_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14757_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14759_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14758_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14757_il2cpp_TypeInfo,
	&IEnumerable_1_t14759_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14758_0_0_0;
extern Il2CppType IList_1_t14758_1_0_0;
struct IList_1_t14758;
extern TypeInfo IList_1_t14758_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14758_GenericClass;
extern CustomAttributesCache IList_1_t3846__CustomAttributeCache;
TypeInfo IList_1_t14758_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14758_MethodInfos/* methods */
	, IList_1_t14758_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14758_il2cpp_TypeInfo/* element_class */
	, IList_1_t14758_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3846__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14758_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14758_0_0_0/* byval_arg */
	, &IList_1_t14758_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14758_GenericClass/* generic_class */
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

// UnityEngine.UI.Image/OriginHorizontal
#include "UnityEngine_UI_UnityEngine_UI_Image_OriginHorizontal.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>
extern MethodInfo IEnumerator_1_get_Current_m111545_MethodInfo;
static PropertyInfo IEnumerator_1_t13102____Current_PropertyInfo = 
{
	&IEnumerator_1_t13102_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111545_MethodInfo/* get */
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
extern Il2CppType OriginHorizontal_t659_0_0_0;
extern void* RuntimeInvoker_OriginHorizontal_t659 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111545_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13102_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerator_1_t13102_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111545_MethodInfo,
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
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_335.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5539_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_335MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5539_il2cpp_TypeInfo;
extern TypeInfo OriginHorizontal_t659_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26012_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5144_MethodInfo;
extern MethodInfo Array_get_Length_m7862_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOriginHorizontal_t659_m94181_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/OriginHorizontal>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/OriginHorizontal>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisOriginHorizontal_t659_m94181 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisOriginHorizontal_t659_m94181_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26007_MethodInfo;
 void InternalEnumerator_1__ctor_m26007 (InternalEnumerator_1_t5539 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26008_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26008 (InternalEnumerator_1_t5539 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26009_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26009 (InternalEnumerator_1_t5539 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26012(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26012_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&OriginHorizontal_t659_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26010_MethodInfo;
 void InternalEnumerator_1_Dispose_m26010 (InternalEnumerator_1_t5539 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26011_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26011 (InternalEnumerator_1_t5539 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m7862(L_1, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
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
extern MethodInfo InternalEnumerator_1_get_Current_m26012_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26012 (InternalEnumerator_1_t5539 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5144(L_1, (String_t*) &_stringLiteral2294, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
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
		InvalidOperationException__ctor_m5144(L_3, (String_t*) &_stringLiteral2295, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7862(L_5, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisOriginHorizontal_t659_m94181(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisOriginHorizontal_t659_m94181_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26009_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5539____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5539_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26009_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26012_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5539____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5539_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26012_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t5539_InternalEnumerator_1__ctor_m26007_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5539_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26007_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26007/* method */
	, &InternalEnumerator_1_t5539_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5539_InternalEnumerator_1__ctor_m26007_ParameterInfos/* parameters */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26008_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26008/* method */
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
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26009_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26009/* method */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26010_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26010/* method */
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
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26011_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26011/* method */
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
extern Il2CppType OriginHorizontal_t659_0_0_0;
extern void* RuntimeInvoker_OriginHorizontal_t659 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginHorizontal>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26012_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26012/* method */
	, &InternalEnumerator_1_t5539_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* InternalEnumerator_1_t5539_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26007_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26008_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26009_MethodInfo,
	&InternalEnumerator_1_Dispose_m26010_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26011_MethodInfo,
	&InternalEnumerator_1_get_Current_m26012_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26009_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26011_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26008_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26010_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26012_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5539_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26009_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26011_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26008_MethodInfo,
	&InternalEnumerator_1_Dispose_m26010_MethodInfo,
	&InternalEnumerator_1_get_Current_m26012_MethodInfo,
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
extern TypeInfo ICollection_1_t14760_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>
extern MethodInfo ICollection_1_get_Count_m111546_MethodInfo;
static PropertyInfo ICollection_1_t14760____Count_PropertyInfo = 
{
	&ICollection_1_t14760_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111546_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111547_MethodInfo;
static PropertyInfo ICollection_1_t14760____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14760_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111547_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14760_PropertyInfos[] =
{
	&ICollection_1_t14760____Count_PropertyInfo,
	&ICollection_1_t14760____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14760_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::get_Count()
MethodInfo ICollection_1_get_Count_m111546_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14760_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t14760_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111547_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14760_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14760_ICollection_1_Add_m111548_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OriginHorizontal_t659_0_0_0},
};
extern TypeInfo ICollection_1_t14760_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::Add(T)
MethodInfo ICollection_1_Add_m111548_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14760_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14760_ICollection_1_Add_m111548_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t14760_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::Clear()
MethodInfo ICollection_1_Clear_m111549_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14760_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14760_ICollection_1_Contains_m111550_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OriginHorizontal_t659_0_0_0},
};
extern TypeInfo ICollection_1_t14760_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::Contains(T)
MethodInfo ICollection_1_Contains_m111550_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14760_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14760_ICollection_1_Contains_m111550_ParameterInfos/* parameters */
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
extern Il2CppType OriginHorizontalU5BU5D_t12735_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14760_ICollection_1_CopyTo_m111551_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OriginHorizontalU5BU5D_t12735_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14760_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111551_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14760_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14760_ICollection_1_CopyTo_m111551_ParameterInfos/* parameters */
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
static ParameterInfo ICollection_1_t14760_ICollection_1_Remove_m111552_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OriginHorizontal_t659_0_0_0},
};
extern TypeInfo ICollection_1_t14760_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginHorizontal>::Remove(T)
MethodInfo ICollection_1_Remove_m111552_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14760_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14760_ICollection_1_Remove_m111552_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t14760_MethodInfos[] =
{
	&ICollection_1_get_Count_m111546_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111547_MethodInfo,
	&ICollection_1_Add_m111548_MethodInfo,
	&ICollection_1_Clear_m111549_MethodInfo,
	&ICollection_1_Contains_m111550_MethodInfo,
	&ICollection_1_CopyTo_m111551_MethodInfo,
	&ICollection_1_Remove_m111552_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14762_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14760_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14762_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14760_0_0_0;
extern Il2CppType ICollection_1_t14760_1_0_0;
struct ICollection_1_t14760;
extern TypeInfo ICollection_1_t14760_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14760_GenericClass;
TypeInfo ICollection_1_t14760_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14760_MethodInfos/* methods */
	, ICollection_1_t14760_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14760_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14760_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14760_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14760_0_0_0/* byval_arg */
	, &ICollection_1_t14760_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14760_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t14762_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/OriginHorizontal>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/OriginHorizontal>
extern TypeInfo IEnumerable_1_t14762_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13102_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/OriginHorizontal>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111553_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14762_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerable_1_t14762_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111553_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14762_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14762_0_0_0;
extern Il2CppType IEnumerable_1_t14762_1_0_0;
struct IEnumerable_1_t14762;
extern TypeInfo IEnumerable_1_t14762_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14762_GenericClass;
TypeInfo IEnumerable_1_t14762_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14762_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14762_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14762_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14762_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14762_0_0_0/* byval_arg */
	, &IEnumerable_1_t14762_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14762_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14761_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>
extern MethodInfo IList_1_get_Item_m111554_MethodInfo;
extern MethodInfo IList_1_set_Item_m111555_MethodInfo;
static PropertyInfo IList_1_t14761____Item_PropertyInfo = 
{
	&IList_1_t14761_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111554_MethodInfo/* get */
	, &IList_1_set_Item_m111555_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14761_PropertyInfos[] =
{
	&IList_1_t14761____Item_PropertyInfo,
	NULL
};
extern Il2CppType OriginHorizontal_t659_0_0_0;
static ParameterInfo IList_1_t14761_IList_1_IndexOf_m111556_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OriginHorizontal_t659_0_0_0},
};
extern TypeInfo IList_1_t14761_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111556_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14761_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14761_IList_1_IndexOf_m111556_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14761_IList_1_Insert_m111557_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OriginHorizontal_t659_0_0_0},
};
extern TypeInfo IList_1_t14761_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111557_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14761_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14761_IList_1_Insert_m111557_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14761_IList_1_RemoveAt_m111558_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14761_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111558_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14761_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14761_IList_1_RemoveAt_m111558_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14761_IList_1_get_Item_m111554_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14761_il2cpp_TypeInfo;
extern Il2CppType OriginHorizontal_t659_0_0_0;
extern void* RuntimeInvoker_OriginHorizontal_t659_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111554_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14761_il2cpp_TypeInfo/* declaring_type */
	, &OriginHorizontal_t659_0_0_0/* return_type */
	, RuntimeInvoker_OriginHorizontal_t659_Int32_t63/* invoker_method */
	, IList_1_t14761_IList_1_get_Item_m111554_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14761_IList_1_set_Item_m111555_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OriginHorizontal_t659_0_0_0},
};
extern TypeInfo IList_1_t14761_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginHorizontal>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111555_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14761_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14761_IList_1_set_Item_m111555_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t14761_MethodInfos[] =
{
	&IList_1_IndexOf_m111556_MethodInfo,
	&IList_1_Insert_m111557_MethodInfo,
	&IList_1_RemoveAt_m111558_MethodInfo,
	&IList_1_get_Item_m111554_MethodInfo,
	&IList_1_set_Item_m111555_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14760_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14762_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14761_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14760_il2cpp_TypeInfo,
	&IEnumerable_1_t14762_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14761_0_0_0;
extern Il2CppType IList_1_t14761_1_0_0;
struct IList_1_t14761;
extern TypeInfo IList_1_t14761_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14761_GenericClass;
extern CustomAttributesCache IList_1_t3846__CustomAttributeCache;
TypeInfo IList_1_t14761_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14761_MethodInfos/* methods */
	, IList_1_t14761_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14761_il2cpp_TypeInfo/* element_class */
	, IList_1_t14761_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3846__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14761_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14761_0_0_0/* byval_arg */
	, &IList_1_t14761_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14761_GenericClass/* generic_class */
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

// UnityEngine.UI.Image/OriginVertical
#include "UnityEngine_UI_UnityEngine_UI_Image_OriginVertical.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/OriginVertical>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/OriginVertical>
extern MethodInfo IEnumerator_1_get_Current_m111559_MethodInfo;
static PropertyInfo IEnumerator_1_t13103____Current_PropertyInfo = 
{
	&IEnumerator_1_t13103_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111559_MethodInfo/* get */
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
extern Il2CppType OriginVertical_t660_0_0_0;
extern void* RuntimeInvoker_OriginVertical_t660 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/OriginVertical>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111559_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13103_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerator_1_t13103_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111559_MethodInfo,
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
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_336.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5540_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_336MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5540_il2cpp_TypeInfo;
extern TypeInfo OriginVertical_t660_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26018_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5144_MethodInfo;
extern MethodInfo Array_get_Length_m7862_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOriginVertical_t660_m94192_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/OriginVertical>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/OriginVertical>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisOriginVertical_t660_m94192 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisOriginVertical_t660_m94192_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26013_MethodInfo;
 void InternalEnumerator_1__ctor_m26013 (InternalEnumerator_1_t5540 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26014_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26014 (InternalEnumerator_1_t5540 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26015_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26015 (InternalEnumerator_1_t5540 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26018(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26018_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&OriginVertical_t660_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26016_MethodInfo;
 void InternalEnumerator_1_Dispose_m26016 (InternalEnumerator_1_t5540 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26017_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26017 (InternalEnumerator_1_t5540 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m7862(L_1, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
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
extern MethodInfo InternalEnumerator_1_get_Current_m26018_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26018 (InternalEnumerator_1_t5540 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5144(L_1, (String_t*) &_stringLiteral2294, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
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
		InvalidOperationException__ctor_m5144(L_3, (String_t*) &_stringLiteral2295, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7862(L_5, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisOriginVertical_t660_m94192(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisOriginVertical_t660_m94192_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26015_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5540____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5540_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26015_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26018_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5540____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5540_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26018_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t5540_InternalEnumerator_1__ctor_m26013_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5540_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26013_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26013/* method */
	, &InternalEnumerator_1_t5540_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5540_InternalEnumerator_1__ctor_m26013_ParameterInfos/* parameters */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26014_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26014/* method */
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
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26015_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26015/* method */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26016_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26016/* method */
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
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26017_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26017/* method */
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
extern Il2CppType OriginVertical_t660_0_0_0;
extern void* RuntimeInvoker_OriginVertical_t660 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/OriginVertical>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26018_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26018/* method */
	, &InternalEnumerator_1_t5540_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* InternalEnumerator_1_t5540_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26013_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26014_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26015_MethodInfo,
	&InternalEnumerator_1_Dispose_m26016_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26017_MethodInfo,
	&InternalEnumerator_1_get_Current_m26018_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26015_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26017_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26014_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26016_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26018_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5540_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26015_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26017_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26014_MethodInfo,
	&InternalEnumerator_1_Dispose_m26016_MethodInfo,
	&InternalEnumerator_1_get_Current_m26018_MethodInfo,
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
extern TypeInfo ICollection_1_t14763_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>
extern MethodInfo ICollection_1_get_Count_m111560_MethodInfo;
static PropertyInfo ICollection_1_t14763____Count_PropertyInfo = 
{
	&ICollection_1_t14763_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111560_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111561_MethodInfo;
static PropertyInfo ICollection_1_t14763____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14763_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111561_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14763_PropertyInfos[] =
{
	&ICollection_1_t14763____Count_PropertyInfo,
	&ICollection_1_t14763____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14763_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::get_Count()
MethodInfo ICollection_1_get_Count_m111560_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14763_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t14763_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111561_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14763_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14763_ICollection_1_Add_m111562_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OriginVertical_t660_0_0_0},
};
extern TypeInfo ICollection_1_t14763_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::Add(T)
MethodInfo ICollection_1_Add_m111562_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14763_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14763_ICollection_1_Add_m111562_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t14763_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::Clear()
MethodInfo ICollection_1_Clear_m111563_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14763_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14763_ICollection_1_Contains_m111564_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OriginVertical_t660_0_0_0},
};
extern TypeInfo ICollection_1_t14763_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::Contains(T)
MethodInfo ICollection_1_Contains_m111564_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14763_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14763_ICollection_1_Contains_m111564_ParameterInfos/* parameters */
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
extern Il2CppType OriginVerticalU5BU5D_t12736_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14763_ICollection_1_CopyTo_m111565_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OriginVerticalU5BU5D_t12736_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14763_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111565_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14763_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14763_ICollection_1_CopyTo_m111565_ParameterInfos/* parameters */
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
static ParameterInfo ICollection_1_t14763_ICollection_1_Remove_m111566_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OriginVertical_t660_0_0_0},
};
extern TypeInfo ICollection_1_t14763_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/OriginVertical>::Remove(T)
MethodInfo ICollection_1_Remove_m111566_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14763_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14763_ICollection_1_Remove_m111566_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t14763_MethodInfos[] =
{
	&ICollection_1_get_Count_m111560_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111561_MethodInfo,
	&ICollection_1_Add_m111562_MethodInfo,
	&ICollection_1_Clear_m111563_MethodInfo,
	&ICollection_1_Contains_m111564_MethodInfo,
	&ICollection_1_CopyTo_m111565_MethodInfo,
	&ICollection_1_Remove_m111566_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14765_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14763_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14765_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14763_0_0_0;
extern Il2CppType ICollection_1_t14763_1_0_0;
struct ICollection_1_t14763;
extern TypeInfo ICollection_1_t14763_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14763_GenericClass;
TypeInfo ICollection_1_t14763_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14763_MethodInfos/* methods */
	, ICollection_1_t14763_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14763_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14763_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14763_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14763_0_0_0/* byval_arg */
	, &ICollection_1_t14763_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14763_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t14765_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/OriginVertical>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/OriginVertical>
extern TypeInfo IEnumerable_1_t14765_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13103_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/OriginVertical>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111567_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14765_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerable_1_t14765_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111567_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14765_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14765_0_0_0;
extern Il2CppType IEnumerable_1_t14765_1_0_0;
struct IEnumerable_1_t14765;
extern TypeInfo IEnumerable_1_t14765_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14765_GenericClass;
TypeInfo IEnumerable_1_t14765_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14765_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14765_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14765_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14765_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14765_0_0_0/* byval_arg */
	, &IEnumerable_1_t14765_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14765_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14764_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>
extern MethodInfo IList_1_get_Item_m111568_MethodInfo;
extern MethodInfo IList_1_set_Item_m111569_MethodInfo;
static PropertyInfo IList_1_t14764____Item_PropertyInfo = 
{
	&IList_1_t14764_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111568_MethodInfo/* get */
	, &IList_1_set_Item_m111569_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14764_PropertyInfos[] =
{
	&IList_1_t14764____Item_PropertyInfo,
	NULL
};
extern Il2CppType OriginVertical_t660_0_0_0;
static ParameterInfo IList_1_t14764_IList_1_IndexOf_m111570_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OriginVertical_t660_0_0_0},
};
extern TypeInfo IList_1_t14764_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111570_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14764_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14764_IList_1_IndexOf_m111570_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14764_IList_1_Insert_m111571_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OriginVertical_t660_0_0_0},
};
extern TypeInfo IList_1_t14764_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111571_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14764_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14764_IList_1_Insert_m111571_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14764_IList_1_RemoveAt_m111572_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14764_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111572_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14764_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14764_IList_1_RemoveAt_m111572_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14764_IList_1_get_Item_m111568_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14764_il2cpp_TypeInfo;
extern Il2CppType OriginVertical_t660_0_0_0;
extern void* RuntimeInvoker_OriginVertical_t660_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111568_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14764_il2cpp_TypeInfo/* declaring_type */
	, &OriginVertical_t660_0_0_0/* return_type */
	, RuntimeInvoker_OriginVertical_t660_Int32_t63/* invoker_method */
	, IList_1_t14764_IList_1_get_Item_m111568_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14764_IList_1_set_Item_m111569_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OriginVertical_t660_0_0_0},
};
extern TypeInfo IList_1_t14764_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/OriginVertical>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111569_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14764_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14764_IList_1_set_Item_m111569_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t14764_MethodInfos[] =
{
	&IList_1_IndexOf_m111570_MethodInfo,
	&IList_1_Insert_m111571_MethodInfo,
	&IList_1_RemoveAt_m111572_MethodInfo,
	&IList_1_get_Item_m111568_MethodInfo,
	&IList_1_set_Item_m111569_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14763_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14765_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14764_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14763_il2cpp_TypeInfo,
	&IEnumerable_1_t14765_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14764_0_0_0;
extern Il2CppType IList_1_t14764_1_0_0;
struct IList_1_t14764;
extern TypeInfo IList_1_t14764_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14764_GenericClass;
extern CustomAttributesCache IList_1_t3846__CustomAttributeCache;
TypeInfo IList_1_t14764_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14764_MethodInfos/* methods */
	, IList_1_t14764_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14764_il2cpp_TypeInfo/* element_class */
	, IList_1_t14764_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3846__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14764_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14764_0_0_0/* byval_arg */
	, &IList_1_t14764_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14764_GenericClass/* generic_class */
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

// UnityEngine.UI.Image/Origin90
#include "UnityEngine_UI_UnityEngine_UI_Image_Origin90.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Origin90>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Origin90>
extern MethodInfo IEnumerator_1_get_Current_m111573_MethodInfo;
static PropertyInfo IEnumerator_1_t13104____Current_PropertyInfo = 
{
	&IEnumerator_1_t13104_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111573_MethodInfo/* get */
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
extern Il2CppType Origin90_t661_0_0_0;
extern void* RuntimeInvoker_Origin90_t661 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Origin90>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111573_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13104_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerator_1_t13104_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111573_MethodInfo,
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
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_337.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5541_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_337MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5541_il2cpp_TypeInfo;
extern TypeInfo Origin90_t661_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26024_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5144_MethodInfo;
extern MethodInfo Array_get_Length_m7862_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOrigin90_t661_m94203_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/Origin90>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/Origin90>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisOrigin90_t661_m94203 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisOrigin90_t661_m94203_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26019_MethodInfo;
 void InternalEnumerator_1__ctor_m26019 (InternalEnumerator_1_t5541 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26020_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26020 (InternalEnumerator_1_t5541 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26021_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26021 (InternalEnumerator_1_t5541 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26024(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26024_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Origin90_t661_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26022_MethodInfo;
 void InternalEnumerator_1_Dispose_m26022 (InternalEnumerator_1_t5541 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26023_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26023 (InternalEnumerator_1_t5541 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m7862(L_1, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
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
extern MethodInfo InternalEnumerator_1_get_Current_m26024_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26024 (InternalEnumerator_1_t5541 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5144(L_1, (String_t*) &_stringLiteral2294, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
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
		InvalidOperationException__ctor_m5144(L_3, (String_t*) &_stringLiteral2295, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7862(L_5, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisOrigin90_t661_m94203(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisOrigin90_t661_m94203_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26021_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5541____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5541_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26021_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26024_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5541____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5541_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26024_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t5541_InternalEnumerator_1__ctor_m26019_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5541_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26019_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26019/* method */
	, &InternalEnumerator_1_t5541_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5541_InternalEnumerator_1__ctor_m26019_ParameterInfos/* parameters */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26020_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26020/* method */
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
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26021_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26021/* method */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26022_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26022/* method */
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
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26023_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26023/* method */
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
extern Il2CppType Origin90_t661_0_0_0;
extern void* RuntimeInvoker_Origin90_t661 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin90>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26024_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26024/* method */
	, &InternalEnumerator_1_t5541_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* InternalEnumerator_1_t5541_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26019_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26020_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26021_MethodInfo,
	&InternalEnumerator_1_Dispose_m26022_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26023_MethodInfo,
	&InternalEnumerator_1_get_Current_m26024_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26021_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26023_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26020_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26022_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26024_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5541_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26021_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26023_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26020_MethodInfo,
	&InternalEnumerator_1_Dispose_m26022_MethodInfo,
	&InternalEnumerator_1_get_Current_m26024_MethodInfo,
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
extern TypeInfo ICollection_1_t14766_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>
extern MethodInfo ICollection_1_get_Count_m111574_MethodInfo;
static PropertyInfo ICollection_1_t14766____Count_PropertyInfo = 
{
	&ICollection_1_t14766_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111574_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111575_MethodInfo;
static PropertyInfo ICollection_1_t14766____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14766_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111575_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14766_PropertyInfos[] =
{
	&ICollection_1_t14766____Count_PropertyInfo,
	&ICollection_1_t14766____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14766_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::get_Count()
MethodInfo ICollection_1_get_Count_m111574_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14766_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t14766_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111575_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14766_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14766_ICollection_1_Add_m111576_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin90_t661_0_0_0},
};
extern TypeInfo ICollection_1_t14766_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::Add(T)
MethodInfo ICollection_1_Add_m111576_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14766_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14766_ICollection_1_Add_m111576_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t14766_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::Clear()
MethodInfo ICollection_1_Clear_m111577_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14766_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14766_ICollection_1_Contains_m111578_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin90_t661_0_0_0},
};
extern TypeInfo ICollection_1_t14766_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::Contains(T)
MethodInfo ICollection_1_Contains_m111578_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14766_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14766_ICollection_1_Contains_m111578_ParameterInfos/* parameters */
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
extern Il2CppType Origin90U5BU5D_t12737_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14766_ICollection_1_CopyTo_m111579_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Origin90U5BU5D_t12737_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14766_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111579_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14766_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14766_ICollection_1_CopyTo_m111579_ParameterInfos/* parameters */
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
static ParameterInfo ICollection_1_t14766_ICollection_1_Remove_m111580_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin90_t661_0_0_0},
};
extern TypeInfo ICollection_1_t14766_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin90>::Remove(T)
MethodInfo ICollection_1_Remove_m111580_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14766_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14766_ICollection_1_Remove_m111580_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t14766_MethodInfos[] =
{
	&ICollection_1_get_Count_m111574_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111575_MethodInfo,
	&ICollection_1_Add_m111576_MethodInfo,
	&ICollection_1_Clear_m111577_MethodInfo,
	&ICollection_1_Contains_m111578_MethodInfo,
	&ICollection_1_CopyTo_m111579_MethodInfo,
	&ICollection_1_Remove_m111580_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14768_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14766_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14768_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14766_0_0_0;
extern Il2CppType ICollection_1_t14766_1_0_0;
struct ICollection_1_t14766;
extern TypeInfo ICollection_1_t14766_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14766_GenericClass;
TypeInfo ICollection_1_t14766_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14766_MethodInfos/* methods */
	, ICollection_1_t14766_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14766_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14766_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14766_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14766_0_0_0/* byval_arg */
	, &ICollection_1_t14766_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14766_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t14768_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Origin90>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Origin90>
extern TypeInfo IEnumerable_1_t14768_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13104_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Origin90>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111581_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14768_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerable_1_t14768_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111581_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14768_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14768_0_0_0;
extern Il2CppType IEnumerable_1_t14768_1_0_0;
struct IEnumerable_1_t14768;
extern TypeInfo IEnumerable_1_t14768_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14768_GenericClass;
TypeInfo IEnumerable_1_t14768_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14768_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14768_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14768_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14768_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14768_0_0_0/* byval_arg */
	, &IEnumerable_1_t14768_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14768_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14767_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>
extern MethodInfo IList_1_get_Item_m111582_MethodInfo;
extern MethodInfo IList_1_set_Item_m111583_MethodInfo;
static PropertyInfo IList_1_t14767____Item_PropertyInfo = 
{
	&IList_1_t14767_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111582_MethodInfo/* get */
	, &IList_1_set_Item_m111583_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14767_PropertyInfos[] =
{
	&IList_1_t14767____Item_PropertyInfo,
	NULL
};
extern Il2CppType Origin90_t661_0_0_0;
static ParameterInfo IList_1_t14767_IList_1_IndexOf_m111584_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin90_t661_0_0_0},
};
extern TypeInfo IList_1_t14767_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111584_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14767_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14767_IList_1_IndexOf_m111584_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14767_IList_1_Insert_m111585_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Origin90_t661_0_0_0},
};
extern TypeInfo IList_1_t14767_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111585_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14767_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14767_IList_1_Insert_m111585_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14767_IList_1_RemoveAt_m111586_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14767_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111586_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14767_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14767_IList_1_RemoveAt_m111586_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14767_IList_1_get_Item_m111582_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14767_il2cpp_TypeInfo;
extern Il2CppType Origin90_t661_0_0_0;
extern void* RuntimeInvoker_Origin90_t661_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111582_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14767_il2cpp_TypeInfo/* declaring_type */
	, &Origin90_t661_0_0_0/* return_type */
	, RuntimeInvoker_Origin90_t661_Int32_t63/* invoker_method */
	, IList_1_t14767_IList_1_get_Item_m111582_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14767_IList_1_set_Item_m111583_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Origin90_t661_0_0_0},
};
extern TypeInfo IList_1_t14767_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin90>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111583_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14767_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14767_IList_1_set_Item_m111583_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t14767_MethodInfos[] =
{
	&IList_1_IndexOf_m111584_MethodInfo,
	&IList_1_Insert_m111585_MethodInfo,
	&IList_1_RemoveAt_m111586_MethodInfo,
	&IList_1_get_Item_m111582_MethodInfo,
	&IList_1_set_Item_m111583_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14766_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14768_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14767_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14766_il2cpp_TypeInfo,
	&IEnumerable_1_t14768_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14767_0_0_0;
extern Il2CppType IList_1_t14767_1_0_0;
struct IList_1_t14767;
extern TypeInfo IList_1_t14767_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14767_GenericClass;
extern CustomAttributesCache IList_1_t3846__CustomAttributeCache;
TypeInfo IList_1_t14767_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14767_MethodInfos/* methods */
	, IList_1_t14767_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14767_il2cpp_TypeInfo/* element_class */
	, IList_1_t14767_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3846__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14767_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14767_0_0_0/* byval_arg */
	, &IList_1_t14767_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14767_GenericClass/* generic_class */
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

// UnityEngine.UI.Image/Origin180
#include "UnityEngine_UI_UnityEngine_UI_Image_Origin180.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Origin180>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Origin180>
extern MethodInfo IEnumerator_1_get_Current_m111587_MethodInfo;
static PropertyInfo IEnumerator_1_t13105____Current_PropertyInfo = 
{
	&IEnumerator_1_t13105_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111587_MethodInfo/* get */
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
extern Il2CppType Origin180_t662_0_0_0;
extern void* RuntimeInvoker_Origin180_t662 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Origin180>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111587_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13105_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerator_1_t13105_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111587_MethodInfo,
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
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_338.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5542_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_338MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5542_il2cpp_TypeInfo;
extern TypeInfo Origin180_t662_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26030_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5144_MethodInfo;
extern MethodInfo Array_get_Length_m7862_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOrigin180_t662_m94214_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/Origin180>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/Origin180>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisOrigin180_t662_m94214 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisOrigin180_t662_m94214_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26025_MethodInfo;
 void InternalEnumerator_1__ctor_m26025 (InternalEnumerator_1_t5542 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26026_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26026 (InternalEnumerator_1_t5542 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26027_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26027 (InternalEnumerator_1_t5542 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26030(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26030_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Origin180_t662_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26028_MethodInfo;
 void InternalEnumerator_1_Dispose_m26028 (InternalEnumerator_1_t5542 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26029_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26029 (InternalEnumerator_1_t5542 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m7862(L_1, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
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
extern MethodInfo InternalEnumerator_1_get_Current_m26030_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26030 (InternalEnumerator_1_t5542 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5144(L_1, (String_t*) &_stringLiteral2294, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
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
		InvalidOperationException__ctor_m5144(L_3, (String_t*) &_stringLiteral2295, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7862(L_5, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisOrigin180_t662_m94214(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisOrigin180_t662_m94214_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26027_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5542____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5542_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26027_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26030_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5542____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5542_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26030_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t5542_InternalEnumerator_1__ctor_m26025_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5542_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26025_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26025/* method */
	, &InternalEnumerator_1_t5542_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5542_InternalEnumerator_1__ctor_m26025_ParameterInfos/* parameters */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26026_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26026/* method */
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
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26027_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26027/* method */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26028_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26028/* method */
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
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26029_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26029/* method */
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
extern Il2CppType Origin180_t662_0_0_0;
extern void* RuntimeInvoker_Origin180_t662 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin180>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26030_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26030/* method */
	, &InternalEnumerator_1_t5542_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* InternalEnumerator_1_t5542_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26025_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26026_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26027_MethodInfo,
	&InternalEnumerator_1_Dispose_m26028_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26029_MethodInfo,
	&InternalEnumerator_1_get_Current_m26030_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26027_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26029_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26026_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26028_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26030_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5542_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26027_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26029_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26026_MethodInfo,
	&InternalEnumerator_1_Dispose_m26028_MethodInfo,
	&InternalEnumerator_1_get_Current_m26030_MethodInfo,
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
extern TypeInfo ICollection_1_t14769_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>
extern MethodInfo ICollection_1_get_Count_m111588_MethodInfo;
static PropertyInfo ICollection_1_t14769____Count_PropertyInfo = 
{
	&ICollection_1_t14769_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111588_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111589_MethodInfo;
static PropertyInfo ICollection_1_t14769____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14769_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111589_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14769_PropertyInfos[] =
{
	&ICollection_1_t14769____Count_PropertyInfo,
	&ICollection_1_t14769____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14769_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::get_Count()
MethodInfo ICollection_1_get_Count_m111588_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14769_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t14769_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111589_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14769_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14769_ICollection_1_Add_m111590_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin180_t662_0_0_0},
};
extern TypeInfo ICollection_1_t14769_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::Add(T)
MethodInfo ICollection_1_Add_m111590_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14769_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14769_ICollection_1_Add_m111590_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t14769_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::Clear()
MethodInfo ICollection_1_Clear_m111591_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14769_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14769_ICollection_1_Contains_m111592_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin180_t662_0_0_0},
};
extern TypeInfo ICollection_1_t14769_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::Contains(T)
MethodInfo ICollection_1_Contains_m111592_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14769_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14769_ICollection_1_Contains_m111592_ParameterInfos/* parameters */
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
extern Il2CppType Origin180U5BU5D_t12738_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14769_ICollection_1_CopyTo_m111593_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Origin180U5BU5D_t12738_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14769_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111593_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14769_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14769_ICollection_1_CopyTo_m111593_ParameterInfos/* parameters */
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
static ParameterInfo ICollection_1_t14769_ICollection_1_Remove_m111594_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin180_t662_0_0_0},
};
extern TypeInfo ICollection_1_t14769_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin180>::Remove(T)
MethodInfo ICollection_1_Remove_m111594_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14769_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14769_ICollection_1_Remove_m111594_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t14769_MethodInfos[] =
{
	&ICollection_1_get_Count_m111588_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111589_MethodInfo,
	&ICollection_1_Add_m111590_MethodInfo,
	&ICollection_1_Clear_m111591_MethodInfo,
	&ICollection_1_Contains_m111592_MethodInfo,
	&ICollection_1_CopyTo_m111593_MethodInfo,
	&ICollection_1_Remove_m111594_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14771_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14769_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14771_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14769_0_0_0;
extern Il2CppType ICollection_1_t14769_1_0_0;
struct ICollection_1_t14769;
extern TypeInfo ICollection_1_t14769_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14769_GenericClass;
TypeInfo ICollection_1_t14769_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14769_MethodInfos/* methods */
	, ICollection_1_t14769_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14769_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14769_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14769_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14769_0_0_0/* byval_arg */
	, &ICollection_1_t14769_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14769_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t14771_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Origin180>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Origin180>
extern TypeInfo IEnumerable_1_t14771_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13105_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Origin180>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111595_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14771_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerable_1_t14771_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111595_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14771_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14771_0_0_0;
extern Il2CppType IEnumerable_1_t14771_1_0_0;
struct IEnumerable_1_t14771;
extern TypeInfo IEnumerable_1_t14771_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14771_GenericClass;
TypeInfo IEnumerable_1_t14771_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14771_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14771_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14771_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14771_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14771_0_0_0/* byval_arg */
	, &IEnumerable_1_t14771_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14771_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14770_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>
extern MethodInfo IList_1_get_Item_m111596_MethodInfo;
extern MethodInfo IList_1_set_Item_m111597_MethodInfo;
static PropertyInfo IList_1_t14770____Item_PropertyInfo = 
{
	&IList_1_t14770_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111596_MethodInfo/* get */
	, &IList_1_set_Item_m111597_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14770_PropertyInfos[] =
{
	&IList_1_t14770____Item_PropertyInfo,
	NULL
};
extern Il2CppType Origin180_t662_0_0_0;
static ParameterInfo IList_1_t14770_IList_1_IndexOf_m111598_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin180_t662_0_0_0},
};
extern TypeInfo IList_1_t14770_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111598_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14770_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14770_IList_1_IndexOf_m111598_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14770_IList_1_Insert_m111599_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Origin180_t662_0_0_0},
};
extern TypeInfo IList_1_t14770_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111599_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14770_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14770_IList_1_Insert_m111599_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14770_IList_1_RemoveAt_m111600_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14770_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111600_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14770_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14770_IList_1_RemoveAt_m111600_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14770_IList_1_get_Item_m111596_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14770_il2cpp_TypeInfo;
extern Il2CppType Origin180_t662_0_0_0;
extern void* RuntimeInvoker_Origin180_t662_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111596_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14770_il2cpp_TypeInfo/* declaring_type */
	, &Origin180_t662_0_0_0/* return_type */
	, RuntimeInvoker_Origin180_t662_Int32_t63/* invoker_method */
	, IList_1_t14770_IList_1_get_Item_m111596_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14770_IList_1_set_Item_m111597_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Origin180_t662_0_0_0},
};
extern TypeInfo IList_1_t14770_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin180>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111597_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14770_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14770_IList_1_set_Item_m111597_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t14770_MethodInfos[] =
{
	&IList_1_IndexOf_m111598_MethodInfo,
	&IList_1_Insert_m111599_MethodInfo,
	&IList_1_RemoveAt_m111600_MethodInfo,
	&IList_1_get_Item_m111596_MethodInfo,
	&IList_1_set_Item_m111597_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14769_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14771_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14770_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14769_il2cpp_TypeInfo,
	&IEnumerable_1_t14771_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14770_0_0_0;
extern Il2CppType IList_1_t14770_1_0_0;
struct IList_1_t14770;
extern TypeInfo IList_1_t14770_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14770_GenericClass;
extern CustomAttributesCache IList_1_t3846__CustomAttributeCache;
TypeInfo IList_1_t14770_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14770_MethodInfos/* methods */
	, IList_1_t14770_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14770_il2cpp_TypeInfo/* element_class */
	, IList_1_t14770_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3846__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14770_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14770_0_0_0/* byval_arg */
	, &IList_1_t14770_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14770_GenericClass/* generic_class */
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

// UnityEngine.UI.Image/Origin360
#include "UnityEngine_UI_UnityEngine_UI_Image_Origin360.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Origin360>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Origin360>
extern MethodInfo IEnumerator_1_get_Current_m111601_MethodInfo;
static PropertyInfo IEnumerator_1_t13106____Current_PropertyInfo = 
{
	&IEnumerator_1_t13106_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111601_MethodInfo/* get */
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
extern Il2CppType Origin360_t663_0_0_0;
extern void* RuntimeInvoker_Origin360_t663 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image/Origin360>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111601_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13106_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerator_1_t13106_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111601_MethodInfo,
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
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_339.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5543_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_339MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5543_il2cpp_TypeInfo;
extern TypeInfo Origin360_t663_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26036_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5144_MethodInfo;
extern MethodInfo Array_get_Length_m7862_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOrigin360_t663_m94225_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/Origin360>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Image/Origin360>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisOrigin360_t663_m94225 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisOrigin360_t663_m94225_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26031_MethodInfo;
 void InternalEnumerator_1__ctor_m26031 (InternalEnumerator_1_t5543 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26032_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26032 (InternalEnumerator_1_t5543 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26033_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26033 (InternalEnumerator_1_t5543 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26036(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26036_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Origin360_t663_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26034_MethodInfo;
 void InternalEnumerator_1_Dispose_m26034 (InternalEnumerator_1_t5543 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26035_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26035 (InternalEnumerator_1_t5543 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m7862(L_1, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
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
extern MethodInfo InternalEnumerator_1_get_Current_m26036_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26036 (InternalEnumerator_1_t5543 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5144(L_1, (String_t*) &_stringLiteral2294, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
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
		InvalidOperationException__ctor_m5144(L_3, (String_t*) &_stringLiteral2295, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7862(L_5, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisOrigin360_t663_m94225(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisOrigin360_t663_m94225_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26033_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5543____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5543_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26033_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26036_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5543____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5543_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26036_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t5543_InternalEnumerator_1__ctor_m26031_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5543_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26031_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26031/* method */
	, &InternalEnumerator_1_t5543_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5543_InternalEnumerator_1__ctor_m26031_ParameterInfos/* parameters */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26032_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26032/* method */
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
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26033_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26033/* method */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26034_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26034/* method */
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
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26035_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26035/* method */
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
extern Il2CppType Origin360_t663_0_0_0;
extern void* RuntimeInvoker_Origin360_t663 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Image/Origin360>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26036_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26036/* method */
	, &InternalEnumerator_1_t5543_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* InternalEnumerator_1_t5543_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26031_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26032_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26033_MethodInfo,
	&InternalEnumerator_1_Dispose_m26034_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26035_MethodInfo,
	&InternalEnumerator_1_get_Current_m26036_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26033_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26035_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26032_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26034_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26036_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5543_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26033_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26035_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26032_MethodInfo,
	&InternalEnumerator_1_Dispose_m26034_MethodInfo,
	&InternalEnumerator_1_get_Current_m26036_MethodInfo,
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
	, NULL/* rgctx_data */
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
extern TypeInfo ICollection_1_t14772_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>
extern MethodInfo ICollection_1_get_Count_m111602_MethodInfo;
static PropertyInfo ICollection_1_t14772____Count_PropertyInfo = 
{
	&ICollection_1_t14772_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111602_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111603_MethodInfo;
static PropertyInfo ICollection_1_t14772____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14772_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111603_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14772_PropertyInfos[] =
{
	&ICollection_1_t14772____Count_PropertyInfo,
	&ICollection_1_t14772____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14772_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::get_Count()
MethodInfo ICollection_1_get_Count_m111602_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14772_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t14772_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111603_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14772_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14772_ICollection_1_Add_m111604_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin360_t663_0_0_0},
};
extern TypeInfo ICollection_1_t14772_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::Add(T)
MethodInfo ICollection_1_Add_m111604_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14772_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14772_ICollection_1_Add_m111604_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t14772_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::Clear()
MethodInfo ICollection_1_Clear_m111605_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14772_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14772_ICollection_1_Contains_m111606_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin360_t663_0_0_0},
};
extern TypeInfo ICollection_1_t14772_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::Contains(T)
MethodInfo ICollection_1_Contains_m111606_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14772_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14772_ICollection_1_Contains_m111606_ParameterInfos/* parameters */
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
extern Il2CppType Origin360U5BU5D_t12739_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14772_ICollection_1_CopyTo_m111607_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Origin360U5BU5D_t12739_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14772_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111607_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14772_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14772_ICollection_1_CopyTo_m111607_ParameterInfos/* parameters */
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
static ParameterInfo ICollection_1_t14772_ICollection_1_Remove_m111608_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin360_t663_0_0_0},
};
extern TypeInfo ICollection_1_t14772_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Image/Origin360>::Remove(T)
MethodInfo ICollection_1_Remove_m111608_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14772_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14772_ICollection_1_Remove_m111608_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t14772_MethodInfos[] =
{
	&ICollection_1_get_Count_m111602_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111603_MethodInfo,
	&ICollection_1_Add_m111604_MethodInfo,
	&ICollection_1_Clear_m111605_MethodInfo,
	&ICollection_1_Contains_m111606_MethodInfo,
	&ICollection_1_CopyTo_m111607_MethodInfo,
	&ICollection_1_Remove_m111608_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14774_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14772_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14774_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14772_0_0_0;
extern Il2CppType ICollection_1_t14772_1_0_0;
struct ICollection_1_t14772;
extern TypeInfo ICollection_1_t14772_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14772_GenericClass;
TypeInfo ICollection_1_t14772_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14772_MethodInfos/* methods */
	, ICollection_1_t14772_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14772_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14772_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14772_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14772_0_0_0/* byval_arg */
	, &ICollection_1_t14772_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14772_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t14774_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Origin360>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Origin360>
extern TypeInfo IEnumerable_1_t14774_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13106_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image/Origin360>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111609_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14774_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerable_1_t14774_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111609_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14774_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14774_0_0_0;
extern Il2CppType IEnumerable_1_t14774_1_0_0;
struct IEnumerable_1_t14774;
extern TypeInfo IEnumerable_1_t14774_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14774_GenericClass;
TypeInfo IEnumerable_1_t14774_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14774_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14774_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14774_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14774_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14774_0_0_0/* byval_arg */
	, &IEnumerable_1_t14774_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14774_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14773_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>
extern MethodInfo IList_1_get_Item_m111610_MethodInfo;
extern MethodInfo IList_1_set_Item_m111611_MethodInfo;
static PropertyInfo IList_1_t14773____Item_PropertyInfo = 
{
	&IList_1_t14773_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111610_MethodInfo/* get */
	, &IList_1_set_Item_m111611_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14773_PropertyInfos[] =
{
	&IList_1_t14773____Item_PropertyInfo,
	NULL
};
extern Il2CppType Origin360_t663_0_0_0;
static ParameterInfo IList_1_t14773_IList_1_IndexOf_m111612_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Origin360_t663_0_0_0},
};
extern TypeInfo IList_1_t14773_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111612_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14773_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14773_IList_1_IndexOf_m111612_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14773_IList_1_Insert_m111613_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Origin360_t663_0_0_0},
};
extern TypeInfo IList_1_t14773_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111613_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14773_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14773_IList_1_Insert_m111613_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14773_IList_1_RemoveAt_m111614_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14773_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111614_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14773_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14773_IList_1_RemoveAt_m111614_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14773_IList_1_get_Item_m111610_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14773_il2cpp_TypeInfo;
extern Il2CppType Origin360_t663_0_0_0;
extern void* RuntimeInvoker_Origin360_t663_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111610_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14773_il2cpp_TypeInfo/* declaring_type */
	, &Origin360_t663_0_0_0/* return_type */
	, RuntimeInvoker_Origin360_t663_Int32_t63/* invoker_method */
	, IList_1_t14773_IList_1_get_Item_m111610_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14773_IList_1_set_Item_m111611_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Origin360_t663_0_0_0},
};
extern TypeInfo IList_1_t14773_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Image/Origin360>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111611_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14773_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14773_IList_1_set_Item_m111611_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t14773_MethodInfos[] =
{
	&IList_1_IndexOf_m111612_MethodInfo,
	&IList_1_Insert_m111613_MethodInfo,
	&IList_1_RemoveAt_m111614_MethodInfo,
	&IList_1_get_Item_m111610_MethodInfo,
	&IList_1_set_Item_m111611_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14772_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14774_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14773_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14772_il2cpp_TypeInfo,
	&IEnumerable_1_t14774_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14773_0_0_0;
extern Il2CppType IList_1_t14773_1_0_0;
struct IList_1_t14773;
extern TypeInfo IList_1_t14773_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14773_GenericClass;
extern CustomAttributesCache IList_1_t3846__CustomAttributeCache;
TypeInfo IList_1_t14773_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14773_MethodInfos/* methods */
	, IList_1_t14773_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14773_il2cpp_TypeInfo/* element_class */
	, IList_1_t14773_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3846__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14773_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14773_0_0_0/* byval_arg */
	, &IList_1_t14773_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14773_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13107_il2cpp_TypeInfo;

// UnityEngine.UI.InputField
#include "UnityEngine_UI_UnityEngine_UI_InputField.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField>
extern MethodInfo IEnumerator_1_get_Current_m111615_MethodInfo;
static PropertyInfo IEnumerator_1_t13107____Current_PropertyInfo = 
{
	&IEnumerator_1_t13107_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111615_MethodInfo/* get */
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
extern Il2CppType InputField_t538_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111615_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13107_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerator_1_t13107_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111615_MethodInfo,
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
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_340.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5544_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_340MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5544_il2cpp_TypeInfo;
extern TypeInfo InputField_t538_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26042_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5144_MethodInfo;
extern MethodInfo Array_get_Length_m7862_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisInputField_t538_m94236_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m89689_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m89689(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m89689_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField>(System.Int32)
#define Array_InternalArray__get_Item_TisInputField_t538_m94236(__this, p0, method) (InputField_t538 *)Array_InternalArray__get_Item_TisObject_t_m89689_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisInputField_t538_m94236_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5544____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5544_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5544, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5544____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5544_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5544, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5544_FieldInfos[] =
{
	&InternalEnumerator_1_t5544____array_FieldInfo,
	&InternalEnumerator_1_t5544____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26039_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5544____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5544_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26039_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26042_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5544____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5544_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26042_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5544_PropertyInfos[] =
{
	&InternalEnumerator_1_t5544____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5544____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5544_InternalEnumerator_1__ctor_m26037_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5544_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26037_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m15497_gshared/* method */
	, &InternalEnumerator_1_t5544_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5544_InternalEnumerator_1__ctor_m26037_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t5544_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26038_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m15498_gshared/* method */
	, &InternalEnumerator_1_t5544_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t5544_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26039_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15499_gshared/* method */
	, &InternalEnumerator_1_t5544_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t5544_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26040_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m15500_gshared/* method */
	, &InternalEnumerator_1_t5544_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t5544_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26041_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m15501_gshared/* method */
	, &InternalEnumerator_1_t5544_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t5544_il2cpp_TypeInfo;
extern Il2CppType InputField_t538_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26042_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m15502_gshared/* method */
	, &InternalEnumerator_1_t5544_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* InternalEnumerator_1_t5544_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26037_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26038_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26039_MethodInfo,
	&InternalEnumerator_1_Dispose_m26040_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26041_MethodInfo,
	&InternalEnumerator_1_get_Current_m26042_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26039_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26041_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26038_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26040_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26042_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5544_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26039_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26041_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26038_MethodInfo,
	&InternalEnumerator_1_Dispose_m26040_MethodInfo,
	&InternalEnumerator_1_get_Current_m26042_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13107_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5544_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t13107_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13107_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5544_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13107_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m26042_MethodInfo;
extern TypeInfo InputField_t538_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisInputField_t538_m94236_MethodInfo;
static void* InternalEnumerator_1_t5544_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26042_MethodInfo,
	&InputField_t538_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisInputField_t538_m94236_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5544_0_0_0;
extern Il2CppType InternalEnumerator_1_t5544_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5544_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5544_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5544_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5544_MethodInfos/* methods */
	, InternalEnumerator_1_t5544_PropertyInfos/* properties */
	, InternalEnumerator_1_t5544_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5544_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5544_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5544_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5544_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5544_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5544_1_0_0/* this_arg */
	, InternalEnumerator_1_t5544_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5544_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t5544_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5544)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14775_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>
extern MethodInfo ICollection_1_get_Count_m111616_MethodInfo;
static PropertyInfo ICollection_1_t14775____Count_PropertyInfo = 
{
	&ICollection_1_t14775_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111616_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111617_MethodInfo;
static PropertyInfo ICollection_1_t14775____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14775_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111617_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14775_PropertyInfos[] =
{
	&ICollection_1_t14775____Count_PropertyInfo,
	&ICollection_1_t14775____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14775_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::get_Count()
MethodInfo ICollection_1_get_Count_m111616_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14775_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t14775_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111617_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14775_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14775_ICollection_1_Add_m111618_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InputField_t538_0_0_0},
};
extern TypeInfo ICollection_1_t14775_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::Add(T)
MethodInfo ICollection_1_Add_m111618_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14775_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, ICollection_1_t14775_ICollection_1_Add_m111618_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t14775_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::Clear()
MethodInfo ICollection_1_Clear_m111619_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14775_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14775_ICollection_1_Contains_m111620_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InputField_t538_0_0_0},
};
extern TypeInfo ICollection_1_t14775_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::Contains(T)
MethodInfo ICollection_1_Contains_m111620_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14775_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t14775_ICollection_1_Contains_m111620_ParameterInfos/* parameters */
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
extern Il2CppType InputFieldU5BU5D_t12740_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14775_ICollection_1_CopyTo_m111621_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &InputFieldU5BU5D_t12740_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14775_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111621_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14775_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14775_ICollection_1_CopyTo_m111621_ParameterInfos/* parameters */
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
static ParameterInfo ICollection_1_t14775_ICollection_1_Remove_m111622_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InputField_t538_0_0_0},
};
extern TypeInfo ICollection_1_t14775_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField>::Remove(T)
MethodInfo ICollection_1_Remove_m111622_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14775_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t14775_ICollection_1_Remove_m111622_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t14775_MethodInfos[] =
{
	&ICollection_1_get_Count_m111616_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111617_MethodInfo,
	&ICollection_1_Add_m111618_MethodInfo,
	&ICollection_1_Clear_m111619_MethodInfo,
	&ICollection_1_Contains_m111620_MethodInfo,
	&ICollection_1_CopyTo_m111621_MethodInfo,
	&ICollection_1_Remove_m111622_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14777_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14775_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14777_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14775_0_0_0;
extern Il2CppType ICollection_1_t14775_1_0_0;
struct ICollection_1_t14775;
extern TypeInfo ICollection_1_t14775_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14775_GenericClass;
TypeInfo ICollection_1_t14775_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14775_MethodInfos/* methods */
	, ICollection_1_t14775_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14775_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14775_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14775_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14775_0_0_0/* byval_arg */
	, &ICollection_1_t14775_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14775_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t14777_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField>
extern TypeInfo IEnumerable_1_t14777_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13107_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111623_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14777_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerable_1_t14777_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111623_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14777_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14777_0_0_0;
extern Il2CppType IEnumerable_1_t14777_1_0_0;
struct IEnumerable_1_t14777;
extern TypeInfo IEnumerable_1_t14777_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14777_GenericClass;
TypeInfo IEnumerable_1_t14777_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14777_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14777_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14777_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14777_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14777_0_0_0/* byval_arg */
	, &IEnumerable_1_t14777_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14777_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14776_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.InputField>
extern MethodInfo IList_1_get_Item_m111624_MethodInfo;
extern MethodInfo IList_1_set_Item_m111625_MethodInfo;
static PropertyInfo IList_1_t14776____Item_PropertyInfo = 
{
	&IList_1_t14776_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111624_MethodInfo/* get */
	, &IList_1_set_Item_m111625_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14776_PropertyInfos[] =
{
	&IList_1_t14776____Item_PropertyInfo,
	NULL
};
extern Il2CppType InputField_t538_0_0_0;
static ParameterInfo IList_1_t14776_IList_1_IndexOf_m111626_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InputField_t538_0_0_0},
};
extern TypeInfo IList_1_t14776_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111626_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14776_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t14776_IList_1_IndexOf_m111626_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14776_IList_1_Insert_m111627_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &InputField_t538_0_0_0},
};
extern TypeInfo IList_1_t14776_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111627_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14776_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Object_t/* invoker_method */
	, IList_1_t14776_IList_1_Insert_m111627_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14776_IList_1_RemoveAt_m111628_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14776_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111628_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14776_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14776_IList_1_RemoveAt_m111628_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14776_IList_1_get_Item_m111624_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14776_il2cpp_TypeInfo;
extern Il2CppType InputField_t538_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111624_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14776_il2cpp_TypeInfo/* declaring_type */
	, &InputField_t538_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t14776_IList_1_get_Item_m111624_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14776_IList_1_set_Item_m111625_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &InputField_t538_0_0_0},
};
extern TypeInfo IList_1_t14776_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111625_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14776_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Object_t/* invoker_method */
	, IList_1_t14776_IList_1_set_Item_m111625_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t14776_MethodInfos[] =
{
	&IList_1_IndexOf_m111626_MethodInfo,
	&IList_1_Insert_m111627_MethodInfo,
	&IList_1_RemoveAt_m111628_MethodInfo,
	&IList_1_get_Item_m111624_MethodInfo,
	&IList_1_set_Item_m111625_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14775_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14777_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14776_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14775_il2cpp_TypeInfo,
	&IEnumerable_1_t14777_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14776_0_0_0;
extern Il2CppType IList_1_t14776_1_0_0;
struct IList_1_t14776;
extern TypeInfo IList_1_t14776_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14776_GenericClass;
extern CustomAttributesCache IList_1_t3846__CustomAttributeCache;
TypeInfo IList_1_t14776_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14776_MethodInfos/* methods */
	, IList_1_t14776_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14776_il2cpp_TypeInfo/* element_class */
	, IList_1_t14776_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3846__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14776_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14776_0_0_0/* byval_arg */
	, &IList_1_t14776_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14776_GenericClass/* generic_class */
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
extern TypeInfo CachedInvokableCall_1_t5545_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.InputField>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_130MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_128.h"
extern TypeInfo ObjectU5BU5D_t5_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t5545_il2cpp_TypeInfo;
extern TypeInfo InputField_t538_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t5546_il2cpp_TypeInfo;
extern TypeInfo Void_t40_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_128MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m26045_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m26047_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.InputField>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.InputField>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.InputField>
extern Il2CppType ObjectU5BU5D_t5_0_0_33;
FieldInfo CachedInvokableCall_1_t5545____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t5_0_0_33/* type */
	, &CachedInvokableCall_1_t5545_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t5545, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t5545_FieldInfos[] =
{
	&CachedInvokableCall_1_t5545____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t111_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
extern Il2CppType InputField_t538_0_0_0;
static ParameterInfo CachedInvokableCall_1_t5545_CachedInvokableCall_1__ctor_m26043_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t111_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &InputField_t538_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t5545_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.InputField>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m26043_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m16518_gshared/* method */
	, &CachedInvokableCall_1_t5545_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t5545_CachedInvokableCall_1__ctor_m26043_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t5545_CachedInvokableCall_1_Invoke_m26044_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t5_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t5545_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.InputField>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m26044_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m16520_gshared/* method */
	, &CachedInvokableCall_1_t5545_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, CachedInvokableCall_1_t5545_CachedInvokableCall_1_Invoke_m26044_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t5545_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m26043_MethodInfo,
	&CachedInvokableCall_1_Invoke_m26044_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m26044_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m26048_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t5545_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&CachedInvokableCall_1_Invoke_m26044_MethodInfo,
	&InvokableCall_1_Find_m26048_MethodInfo,
};
extern Il2CppType UnityAction_1_t5547_0_0_0;
extern TypeInfo UnityAction_1_t5547_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisInputField_t538_m94246_MethodInfo;
extern TypeInfo InputField_t538_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m26050_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m26045_MethodInfo;
extern TypeInfo InputField_t538_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m26047_MethodInfo;
static void* CachedInvokableCall_1_t5545_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t5547_0_0_0,
	&UnityAction_1_t5547_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisInputField_t538_m94246_MethodInfo,
	&InputField_t538_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m26050_MethodInfo,
	&InvokableCall_1__ctor_m26045_MethodInfo,
	&InputField_t538_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m26047_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t5545_0_0_0;
extern Il2CppType CachedInvokableCall_1_t5545_1_0_0;
extern TypeInfo InvokableCall_1_t5546_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t5545;
extern TypeInfo CachedInvokableCall_1_t5545_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t5545_GenericClass;
TypeInfo CachedInvokableCall_1_t5545_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t5545_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t5545_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t5546_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t5545_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t5545_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t5545_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t5545_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t5545_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t5545_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t5545_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t5545)/* instance_size */
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
extern TypeInfo InvokableCall_1_t5546_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_134.h"
extern TypeInfo InvokableCall_1_t5546_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t5547_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t401_il2cpp_TypeInfo;
extern TypeInfo InputField_t538_il2cpp_TypeInfo;
extern TypeInfo Void_t40_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_134MethodDeclarations.h"
extern Il2CppType UnityAction_1_t5547_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m8996_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m385_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m9178_MethodInfo;
extern MethodInfo Delegate_Combine_m4232_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m8995_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1970_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisInputField_t538_m94246_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m8997_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m26050_MethodInfo;
extern MethodInfo Delegate_get_Target_m9174_MethodInfo;
extern MethodInfo Delegate_get_Method_m9172_MethodInfo;
struct BaseInvokableCall_t2625;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.UI.InputField>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.UI.InputField>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisInputField_t538_m94246(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m90275_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisInputField_t538_m94246_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>
extern Il2CppType UnityAction_1_t5547_0_0_1;
FieldInfo InvokableCall_1_t5546____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t5547_0_0_1/* type */
	, &InvokableCall_1_t5546_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t5546, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t5546_FieldInfos[] =
{
	&InvokableCall_1_t5546____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
static ParameterInfo InvokableCall_1_t5546_InvokableCall_1__ctor_m26045_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo InvokableCall_1_t5546_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m26045_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m16521_gshared/* method */
	, &InvokableCall_1_t5546_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t5546_InvokableCall_1__ctor_m26045_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t5547_0_0_0;
static ParameterInfo InvokableCall_1_t5546_InvokableCall_1__ctor_m26046_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t5547_0_0_0},
};
extern TypeInfo InvokableCall_1_t5546_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m26046_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m16522_gshared/* method */
	, &InvokableCall_1_t5546_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InvokableCall_1_t5546_InvokableCall_1__ctor_m26046_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t5546_InvokableCall_1_Invoke_m26047_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t5_0_0_0},
};
extern TypeInfo InvokableCall_1_t5546_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m26047_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m16523_gshared/* method */
	, &InvokableCall_1_t5546_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InvokableCall_1_t5546_InvokableCall_1_Invoke_m26047_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t5546_InvokableCall_1_Find_m26048_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo InvokableCall_1_t5546_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.UI.InputField>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m26048_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m16524_gshared/* method */
	, &InvokableCall_1_t5546_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t5546_InvokableCall_1_Find_m26048_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t5546_MethodInfos[] =
{
	&InvokableCall_1__ctor_m26045_MethodInfo,
	&InvokableCall_1__ctor_m26046_MethodInfo,
	&InvokableCall_1_Invoke_m26047_MethodInfo,
	&InvokableCall_1_Find_m26048_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m26047_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m26048_MethodInfo;
static MethodInfo* InvokableCall_1_t5546_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&InvokableCall_1_Invoke_m26047_MethodInfo,
	&InvokableCall_1_Find_m26048_MethodInfo,
};
extern Il2CppType UnityAction_1_t5547_0_0_0;
extern TypeInfo UnityAction_1_t5547_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisInputField_t538_m94246_MethodInfo;
extern TypeInfo InputField_t538_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m26050_MethodInfo;
static void* InvokableCall_1_t5546_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t5547_0_0_0,
	&UnityAction_1_t5547_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisInputField_t538_m94246_MethodInfo,
	&InputField_t538_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m26050_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t5546_0_0_0;
extern Il2CppType InvokableCall_1_t5546_1_0_0;
extern TypeInfo BaseInvokableCall_t2625_il2cpp_TypeInfo;
struct InvokableCall_1_t5546;
extern TypeInfo InvokableCall_1_t5546_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t5546_GenericClass;
TypeInfo InvokableCall_1_t5546_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t5546_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t5546_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t2625_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t5546_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t5546_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t5546_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t5546_0_0_0/* byval_arg */
	, &InvokableCall_1_t5546_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t5546_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t5546_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t5546)/* instance_size */
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
extern TypeInfo UnityAction_1_t5547_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t39_0_0_0;
static ParameterInfo UnityAction_1_t5547_UnityAction_1__ctor_m26049_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t39_0_0_0},
};
extern TypeInfo UnityAction_1_t5547_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_IntPtr_t39 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m26049_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m16525_gshared/* method */
	, &UnityAction_1_t5547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_IntPtr_t39/* invoker_method */
	, UnityAction_1_t5547_UnityAction_1__ctor_m26049_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t5547_UnityAction_1_Invoke_m26050_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &InputField_t538_0_0_0},
};
extern TypeInfo UnityAction_1_t5547_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m26050_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m16526_gshared/* method */
	, &UnityAction_1_t5547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityAction_1_t5547_UnityAction_1_Invoke_m26050_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t5547_UnityAction_1_BeginInvoke_m26051_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &InputField_t538_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t35_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t5547_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t34_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m26051_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m16527_gshared/* method */
	, &UnityAction_1_t5547_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t34_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t5547_UnityAction_1_BeginInvoke_m26051_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t5547_UnityAction_1_EndInvoke_m26052_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t34_0_0_0},
};
extern TypeInfo UnityAction_1_t5547_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.InputField>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m26052_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m16528_gshared/* method */
	, &UnityAction_1_t5547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityAction_1_t5547_UnityAction_1_EndInvoke_m26052_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t5547_MethodInfos[] =
{
	&UnityAction_1__ctor_m26049_MethodInfo,
	&UnityAction_1_Invoke_m26050_MethodInfo,
	&UnityAction_1_BeginInvoke_m26051_MethodInfo,
	&UnityAction_1_EndInvoke_m26052_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m26050_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m26051_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m26052_MethodInfo;
static MethodInfo* UnityAction_1_t5547_VTable[] =
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
	&UnityAction_1_Invoke_m26050_MethodInfo,
	&UnityAction_1_BeginInvoke_m26051_MethodInfo,
	&UnityAction_1_EndInvoke_m26052_MethodInfo,
};
extern TypeInfo ICloneable_t84_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t85_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t5547_InterfacesOffsets[] = 
{
	{ &ICloneable_t84_il2cpp_TypeInfo, 4},
	{ &ISerializable_t85_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t5547_0_0_0;
extern Il2CppType UnityAction_1_t5547_1_0_0;
extern TypeInfo MulticastDelegate_t38_il2cpp_TypeInfo;
struct UnityAction_1_t5547;
extern TypeInfo UnityAction_1_t5547_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t5547_GenericClass;
TypeInfo UnityAction_1_t5547_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t5547_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t38_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t5547_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t5547_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t5547_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t5547_0_0_0/* byval_arg */
	, &UnityAction_1_t5547_1_0_0/* this_arg */
	, UnityAction_1_t5547_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t5547_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t5547)/* instance_size */
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
extern TypeInfo IEnumerator_1_t13108_il2cpp_TypeInfo;

// UnityEngine.UI.InputField/ContentType
#include "UnityEngine_UI_UnityEngine_UI_InputField_ContentType.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/ContentType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/ContentType>
extern MethodInfo IEnumerator_1_get_Current_m111629_MethodInfo;
static PropertyInfo IEnumerator_1_t13108____Current_PropertyInfo = 
{
	&IEnumerator_1_t13108_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111629_MethodInfo/* get */
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
extern Il2CppType ContentType_t669_0_0_0;
extern void* RuntimeInvoker_ContentType_t669 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/ContentType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111629_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13108_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerator_1_t13108_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111629_MethodInfo,
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
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_341.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5548_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_341MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5548_il2cpp_TypeInfo;
extern TypeInfo ContentType_t669_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26058_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5144_MethodInfo;
extern MethodInfo Array_get_Length_m7862_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContentType_t669_m94248_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/ContentType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/ContentType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisContentType_t669_m94248 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisContentType_t669_m94248_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26053_MethodInfo;
 void InternalEnumerator_1__ctor_m26053 (InternalEnumerator_1_t5548 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26054_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26054 (InternalEnumerator_1_t5548 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26055_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26055 (InternalEnumerator_1_t5548 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26058(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26058_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ContentType_t669_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26056_MethodInfo;
 void InternalEnumerator_1_Dispose_m26056 (InternalEnumerator_1_t5548 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26057_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26057 (InternalEnumerator_1_t5548 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m7862(L_1, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
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
extern MethodInfo InternalEnumerator_1_get_Current_m26058_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26058 (InternalEnumerator_1_t5548 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5144(L_1, (String_t*) &_stringLiteral2294, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
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
		InvalidOperationException__ctor_m5144(L_3, (String_t*) &_stringLiteral2295, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7862(L_5, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisContentType_t669_m94248(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisContentType_t669_m94248_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26055_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5548____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5548_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26055_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26058_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5548____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5548_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26058_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t5548_InternalEnumerator_1__ctor_m26053_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5548_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26053_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26053/* method */
	, &InternalEnumerator_1_t5548_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5548_InternalEnumerator_1__ctor_m26053_ParameterInfos/* parameters */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26054_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26054/* method */
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
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26055_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26055/* method */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26056_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26056/* method */
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
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26057_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26057/* method */
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
extern Il2CppType ContentType_t669_0_0_0;
extern void* RuntimeInvoker_ContentType_t669 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26058_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26058/* method */
	, &InternalEnumerator_1_t5548_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* InternalEnumerator_1_t5548_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26053_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26054_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26055_MethodInfo,
	&InternalEnumerator_1_Dispose_m26056_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26057_MethodInfo,
	&InternalEnumerator_1_get_Current_m26058_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26055_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26057_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26054_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26056_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26058_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5548_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26055_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26057_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26054_MethodInfo,
	&InternalEnumerator_1_Dispose_m26056_MethodInfo,
	&InternalEnumerator_1_get_Current_m26058_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13108_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5548_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t13108_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13108_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5548_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13108_il2cpp_TypeInfo, 8},
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
extern TypeInfo ICollection_1_t14778_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>
extern MethodInfo ICollection_1_get_Count_m111630_MethodInfo;
static PropertyInfo ICollection_1_t14778____Count_PropertyInfo = 
{
	&ICollection_1_t14778_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111630_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111631_MethodInfo;
static PropertyInfo ICollection_1_t14778____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14778_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111631_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14778_PropertyInfos[] =
{
	&ICollection_1_t14778____Count_PropertyInfo,
	&ICollection_1_t14778____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14778_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::get_Count()
MethodInfo ICollection_1_get_Count_m111630_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14778_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t14778_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111631_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14778_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14778_ICollection_1_Add_m111632_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContentType_t669_0_0_0},
};
extern TypeInfo ICollection_1_t14778_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::Add(T)
MethodInfo ICollection_1_Add_m111632_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14778_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14778_ICollection_1_Add_m111632_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t14778_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::Clear()
MethodInfo ICollection_1_Clear_m111633_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14778_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14778_ICollection_1_Contains_m111634_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContentType_t669_0_0_0},
};
extern TypeInfo ICollection_1_t14778_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::Contains(T)
MethodInfo ICollection_1_Contains_m111634_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14778_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14778_ICollection_1_Contains_m111634_ParameterInfos/* parameters */
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
static ParameterInfo ICollection_1_t14778_ICollection_1_CopyTo_m111635_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ContentTypeU5BU5D_t683_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14778_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111635_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14778_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14778_ICollection_1_CopyTo_m111635_ParameterInfos/* parameters */
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
static ParameterInfo ICollection_1_t14778_ICollection_1_Remove_m111636_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContentType_t669_0_0_0},
};
extern TypeInfo ICollection_1_t14778_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/ContentType>::Remove(T)
MethodInfo ICollection_1_Remove_m111636_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14778_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14778_ICollection_1_Remove_m111636_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t14778_MethodInfos[] =
{
	&ICollection_1_get_Count_m111630_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111631_MethodInfo,
	&ICollection_1_Add_m111632_MethodInfo,
	&ICollection_1_Clear_m111633_MethodInfo,
	&ICollection_1_Contains_m111634_MethodInfo,
	&ICollection_1_CopyTo_m111635_MethodInfo,
	&ICollection_1_Remove_m111636_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14780_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14778_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14780_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14778_0_0_0;
extern Il2CppType ICollection_1_t14778_1_0_0;
struct ICollection_1_t14778;
extern TypeInfo ICollection_1_t14778_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14778_GenericClass;
TypeInfo ICollection_1_t14778_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14778_MethodInfos/* methods */
	, ICollection_1_t14778_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14778_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14778_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14778_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14778_0_0_0/* byval_arg */
	, &ICollection_1_t14778_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14778_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t14780_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/ContentType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/ContentType>
extern TypeInfo IEnumerable_1_t14780_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13108_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/ContentType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111637_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14780_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerable_1_t14780_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111637_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14780_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14780_0_0_0;
extern Il2CppType IEnumerable_1_t14780_1_0_0;
struct IEnumerable_1_t14780;
extern TypeInfo IEnumerable_1_t14780_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14780_GenericClass;
TypeInfo IEnumerable_1_t14780_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14780_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14780_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14780_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14780_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14780_0_0_0/* byval_arg */
	, &IEnumerable_1_t14780_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14780_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14779_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>
extern MethodInfo IList_1_get_Item_m111638_MethodInfo;
extern MethodInfo IList_1_set_Item_m111639_MethodInfo;
static PropertyInfo IList_1_t14779____Item_PropertyInfo = 
{
	&IList_1_t14779_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111638_MethodInfo/* get */
	, &IList_1_set_Item_m111639_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14779_PropertyInfos[] =
{
	&IList_1_t14779____Item_PropertyInfo,
	NULL
};
extern Il2CppType ContentType_t669_0_0_0;
static ParameterInfo IList_1_t14779_IList_1_IndexOf_m111640_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContentType_t669_0_0_0},
};
extern TypeInfo IList_1_t14779_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111640_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14779_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14779_IList_1_IndexOf_m111640_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14779_IList_1_Insert_m111641_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ContentType_t669_0_0_0},
};
extern TypeInfo IList_1_t14779_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111641_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14779_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14779_IList_1_Insert_m111641_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14779_IList_1_RemoveAt_m111642_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14779_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111642_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14779_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14779_IList_1_RemoveAt_m111642_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14779_IList_1_get_Item_m111638_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14779_il2cpp_TypeInfo;
extern Il2CppType ContentType_t669_0_0_0;
extern void* RuntimeInvoker_ContentType_t669_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111638_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14779_il2cpp_TypeInfo/* declaring_type */
	, &ContentType_t669_0_0_0/* return_type */
	, RuntimeInvoker_ContentType_t669_Int32_t63/* invoker_method */
	, IList_1_t14779_IList_1_get_Item_m111638_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14779_IList_1_set_Item_m111639_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ContentType_t669_0_0_0},
};
extern TypeInfo IList_1_t14779_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/ContentType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111639_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14779_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14779_IList_1_set_Item_m111639_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t14779_MethodInfos[] =
{
	&IList_1_IndexOf_m111640_MethodInfo,
	&IList_1_Insert_m111641_MethodInfo,
	&IList_1_RemoveAt_m111642_MethodInfo,
	&IList_1_get_Item_m111638_MethodInfo,
	&IList_1_set_Item_m111639_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14778_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14780_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14779_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14778_il2cpp_TypeInfo,
	&IEnumerable_1_t14780_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14779_0_0_0;
extern Il2CppType IList_1_t14779_1_0_0;
struct IList_1_t14779;
extern TypeInfo IList_1_t14779_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14779_GenericClass;
extern CustomAttributesCache IList_1_t3846__CustomAttributeCache;
TypeInfo IList_1_t14779_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14779_MethodInfos/* methods */
	, IList_1_t14779_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14779_il2cpp_TypeInfo/* element_class */
	, IList_1_t14779_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3846__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14779_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14779_0_0_0/* byval_arg */
	, &IList_1_t14779_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14779_GenericClass/* generic_class */
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
extern MethodInfo IList_1_get_Item_m4346_MethodInfo;
extern MethodInfo IList_1_set_Item_m111643_MethodInfo;
static PropertyInfo IList_1_t805____Item_PropertyInfo = 
{
	&IList_1_t805_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m4346_MethodInfo/* get */
	, &IList_1_set_Item_m111643_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t805_PropertyInfos[] =
{
	&IList_1_t805____Item_PropertyInfo,
	NULL
};
extern Il2CppType UILineInfo_t806_0_0_0;
static ParameterInfo IList_1_t805_IList_1_IndexOf_m111644_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UILineInfo_t806_0_0_0},
};
extern TypeInfo IList_1_t805_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_UILineInfo_t806 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111644_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t805_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_UILineInfo_t806/* invoker_method */
	, IList_1_t805_IList_1_IndexOf_m111644_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t805_IList_1_Insert_m111645_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UILineInfo_t806_0_0_0},
};
extern TypeInfo IList_1_t805_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_UILineInfo_t806 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111645_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t805_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_UILineInfo_t806/* invoker_method */
	, IList_1_t805_IList_1_Insert_m111645_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t805_IList_1_RemoveAt_m111646_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t805_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111646_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t805_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t805_IList_1_RemoveAt_m111646_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t805_IList_1_get_Item_m4346_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t805_il2cpp_TypeInfo;
extern Il2CppType UILineInfo_t806_0_0_0;
extern void* RuntimeInvoker_UILineInfo_t806_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m4346_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t805_il2cpp_TypeInfo/* declaring_type */
	, &UILineInfo_t806_0_0_0/* return_type */
	, RuntimeInvoker_UILineInfo_t806_Int32_t63/* invoker_method */
	, IList_1_t805_IList_1_get_Item_m4346_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t805_IList_1_set_Item_m111643_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UILineInfo_t806_0_0_0},
};
extern TypeInfo IList_1_t805_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_UILineInfo_t806 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111643_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t805_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_UILineInfo_t806/* invoker_method */
	, IList_1_t805_IList_1_set_Item_m111643_ParameterInfos/* parameters */
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
	&IList_1_IndexOf_m111644_MethodInfo,
	&IList_1_Insert_m111645_MethodInfo,
	&IList_1_RemoveAt_m111646_MethodInfo,
	&IList_1_get_Item_m4346_MethodInfo,
	&IList_1_set_Item_m111643_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t809_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t11745_il2cpp_TypeInfo;
static TypeInfo* IList_1_t805_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t809_il2cpp_TypeInfo,
	&IEnumerable_1_t11745_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t805_0_0_0;
extern Il2CppType IList_1_t805_1_0_0;
struct IList_1_t805;
extern TypeInfo IList_1_t805_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t805_GenericClass;
extern CustomAttributesCache IList_1_t3846__CustomAttributeCache;
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
	, &IList_1_t3846__CustomAttributeCache/* custom_attributes_cache */
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
extern MethodInfo ICollection_1_get_Count_m4366_MethodInfo;
static PropertyInfo ICollection_1_t809____Count_PropertyInfo = 
{
	&ICollection_1_t809_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m4366_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111647_MethodInfo;
static PropertyInfo ICollection_1_t809____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t809_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111647_MethodInfo/* get */
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
MethodInfo ICollection_1_get_Count_m4366_MethodInfo = 
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
MethodInfo ICollection_1_get_IsReadOnly_m111647_MethodInfo = 
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
static ParameterInfo ICollection_1_t809_ICollection_1_Add_m111648_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UILineInfo_t806_0_0_0},
};
extern TypeInfo ICollection_1_t809_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_UILineInfo_t806 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Add(T)
MethodInfo ICollection_1_Add_m111648_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t809_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_UILineInfo_t806/* invoker_method */
	, ICollection_1_t809_ICollection_1_Add_m111648_ParameterInfos/* parameters */
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
MethodInfo ICollection_1_Clear_m111649_MethodInfo = 
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
static ParameterInfo ICollection_1_t809_ICollection_1_Contains_m111650_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UILineInfo_t806_0_0_0},
};
extern TypeInfo ICollection_1_t809_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_UILineInfo_t806 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m111650_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t809_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_UILineInfo_t806/* invoker_method */
	, ICollection_1_t809_ICollection_1_Contains_m111650_ParameterInfos/* parameters */
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
extern Il2CppType UILineInfoU5BU5D_t2582_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t809_ICollection_1_CopyTo_m111651_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UILineInfoU5BU5D_t2582_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t809_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111651_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t809_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t809_ICollection_1_CopyTo_m111651_ParameterInfos/* parameters */
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
static ParameterInfo ICollection_1_t809_ICollection_1_Remove_m111652_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UILineInfo_t806_0_0_0},
};
extern TypeInfo ICollection_1_t809_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_UILineInfo_t806 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m111652_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t809_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_UILineInfo_t806/* invoker_method */
	, ICollection_1_t809_ICollection_1_Remove_m111652_ParameterInfos/* parameters */
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
	&ICollection_1_get_Count_m4366_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111647_MethodInfo,
	&ICollection_1_Add_m111648_MethodInfo,
	&ICollection_1_Clear_m111649_MethodInfo,
	&ICollection_1_Contains_m111650_MethodInfo,
	&ICollection_1_CopyTo_m111651_MethodInfo,
	&ICollection_1_Remove_m111652_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t11745_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t809_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t11745_il2cpp_TypeInfo,
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
extern TypeInfo IEnumerable_1_t11745_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
extern TypeInfo IEnumerable_1_t11745_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t11746_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111653_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t11745_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t11746_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t11745_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111653_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t11745_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t11745_0_0_0;
extern Il2CppType IEnumerable_1_t11745_1_0_0;
struct IEnumerable_1_t11745;
extern TypeInfo IEnumerable_1_t11745_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t11745_GenericClass;
TypeInfo IEnumerable_1_t11745_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t11745_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t11745_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t11745_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t11745_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t11745_0_0_0/* byval_arg */
	, &IEnumerable_1_t11745_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t11745_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t11746_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
extern MethodInfo IEnumerator_1_get_Current_m111654_MethodInfo;
static PropertyInfo IEnumerator_1_t11746____Current_PropertyInfo = 
{
	&IEnumerator_1_t11746_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111654_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t11746_PropertyInfos[] =
{
	&IEnumerator_1_t11746____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t11746_il2cpp_TypeInfo;
extern Il2CppType UILineInfo_t806_0_0_0;
extern void* RuntimeInvoker_UILineInfo_t806 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111654_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t11746_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerator_1_t11746_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111654_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t11746_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t11746_0_0_0;
extern Il2CppType IEnumerator_1_t11746_1_0_0;
struct IEnumerator_1_t11746;
extern TypeInfo IEnumerator_1_t11746_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t11746_GenericClass;
TypeInfo IEnumerator_1_t11746_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t11746_MethodInfos/* methods */
	, IEnumerator_1_t11746_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t11746_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t11746_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t11746_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t11746_0_0_0/* byval_arg */
	, &IEnumerator_1_t11746_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t11746_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t5549_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_342MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5549_il2cpp_TypeInfo;
extern TypeInfo UILineInfo_t806_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26064_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5144_MethodInfo;
extern MethodInfo Array_get_Length_m7862_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUILineInfo_t806_m94259_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UILineInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UILineInfo>(System.Int32)
 UILineInfo_t806  Array_InternalArray__get_Item_TisUILineInfo_t806_m94259 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisUILineInfo_t806_m94259_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26059_MethodInfo;
 void InternalEnumerator_1__ctor_m26059 (InternalEnumerator_1_t5549 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26060_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26060 (InternalEnumerator_1_t5549 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26061_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26061 (InternalEnumerator_1_t5549 * __this, MethodInfo* method){
	{
		UILineInfo_t806  L_0 = InternalEnumerator_1_get_Current_m26064(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26064_MethodInfo);
		UILineInfo_t806  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UILineInfo_t806_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26062_MethodInfo;
 void InternalEnumerator_1_Dispose_m26062 (InternalEnumerator_1_t5549 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26063_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26063 (InternalEnumerator_1_t5549 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m7862(L_1, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
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
extern MethodInfo InternalEnumerator_1_get_Current_m26064_MethodInfo;
 UILineInfo_t806  InternalEnumerator_1_get_Current_m26064 (InternalEnumerator_1_t5549 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5144(L_1, (String_t*) &_stringLiteral2294, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
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
		InvalidOperationException__ctor_m5144(L_3, (String_t*) &_stringLiteral2295, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7862(L_5, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		UILineInfo_t806  L_8 = Array_InternalArray__get_Item_TisUILineInfo_t806_m94259(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUILineInfo_t806_m94259_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26061_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5549____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5549_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26061_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26064_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5549____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5549_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26064_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t5549_InternalEnumerator_1__ctor_m26059_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5549_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26059_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26059/* method */
	, &InternalEnumerator_1_t5549_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5549_InternalEnumerator_1__ctor_m26059_ParameterInfos/* parameters */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26060_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26060/* method */
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
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26061_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26061/* method */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26062_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26062/* method */
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
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26063_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26063/* method */
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
extern Il2CppType UILineInfo_t806_0_0_0;
extern void* RuntimeInvoker_UILineInfo_t806 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26064_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26064/* method */
	, &InternalEnumerator_1_t5549_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* InternalEnumerator_1_t5549_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26059_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26060_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26061_MethodInfo,
	&InternalEnumerator_1_Dispose_m26062_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26063_MethodInfo,
	&InternalEnumerator_1_get_Current_m26064_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26061_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26063_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26060_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26062_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26064_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5549_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26061_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26063_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26060_MethodInfo,
	&InternalEnumerator_1_Dispose_m26062_MethodInfo,
	&InternalEnumerator_1_get_Current_m26064_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t11746_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5549_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t11746_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t11746_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5549_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t11746_il2cpp_TypeInfo, 8},
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
extern MethodInfo IList_1_get_Item_m4350_MethodInfo;
extern MethodInfo IList_1_set_Item_m111655_MethodInfo;
static PropertyInfo IList_1_t807____Item_PropertyInfo = 
{
	&IList_1_t807_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m4350_MethodInfo/* get */
	, &IList_1_set_Item_m111655_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t807_PropertyInfos[] =
{
	&IList_1_t807____Item_PropertyInfo,
	NULL
};
extern Il2CppType UICharInfo_t808_0_0_0;
static ParameterInfo IList_1_t807_IList_1_IndexOf_m111656_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UICharInfo_t808_0_0_0},
};
extern TypeInfo IList_1_t807_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_UICharInfo_t808 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111656_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t807_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_UICharInfo_t808/* invoker_method */
	, IList_1_t807_IList_1_IndexOf_m111656_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t807_IList_1_Insert_m111657_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UICharInfo_t808_0_0_0},
};
extern TypeInfo IList_1_t807_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_UICharInfo_t808 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111657_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t807_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_UICharInfo_t808/* invoker_method */
	, IList_1_t807_IList_1_Insert_m111657_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t807_IList_1_RemoveAt_m111658_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t807_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111658_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t807_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t807_IList_1_RemoveAt_m111658_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t807_IList_1_get_Item_m4350_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t807_il2cpp_TypeInfo;
extern Il2CppType UICharInfo_t808_0_0_0;
extern void* RuntimeInvoker_UICharInfo_t808_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m4350_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t807_il2cpp_TypeInfo/* declaring_type */
	, &UICharInfo_t808_0_0_0/* return_type */
	, RuntimeInvoker_UICharInfo_t808_Int32_t63/* invoker_method */
	, IList_1_t807_IList_1_get_Item_m4350_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t807_IList_1_set_Item_m111655_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UICharInfo_t808_0_0_0},
};
extern TypeInfo IList_1_t807_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_UICharInfo_t808 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111655_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t807_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_UICharInfo_t808/* invoker_method */
	, IList_1_t807_IList_1_set_Item_m111655_ParameterInfos/* parameters */
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
	&IList_1_IndexOf_m111656_MethodInfo,
	&IList_1_Insert_m111657_MethodInfo,
	&IList_1_RemoveAt_m111658_MethodInfo,
	&IList_1_get_Item_m4350_MethodInfo,
	&IList_1_set_Item_m111655_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t11735_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t11733_il2cpp_TypeInfo;
static TypeInfo* IList_1_t807_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t11735_il2cpp_TypeInfo,
	&IEnumerable_1_t11733_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t807_0_0_0;
extern Il2CppType IList_1_t807_1_0_0;
struct IList_1_t807;
extern TypeInfo IList_1_t807_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t807_GenericClass;
extern CustomAttributesCache IList_1_t3846__CustomAttributeCache;
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
	, &IList_1_t3846__CustomAttributeCache/* custom_attributes_cache */
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
extern TypeInfo ICollection_1_t11735_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
extern MethodInfo ICollection_1_get_Count_m111659_MethodInfo;
static PropertyInfo ICollection_1_t11735____Count_PropertyInfo = 
{
	&ICollection_1_t11735_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111659_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111660_MethodInfo;
static PropertyInfo ICollection_1_t11735____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t11735_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111660_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t11735_PropertyInfos[] =
{
	&ICollection_1_t11735____Count_PropertyInfo,
	&ICollection_1_t11735____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t11735_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m111659_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t11735_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t11735_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111660_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t11735_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t11735_ICollection_1_Add_m111661_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UICharInfo_t808_0_0_0},
};
extern TypeInfo ICollection_1_t11735_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_UICharInfo_t808 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Add(T)
MethodInfo ICollection_1_Add_m111661_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t11735_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_UICharInfo_t808/* invoker_method */
	, ICollection_1_t11735_ICollection_1_Add_m111661_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t11735_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Clear()
MethodInfo ICollection_1_Clear_m111662_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t11735_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t11735_ICollection_1_Contains_m111663_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UICharInfo_t808_0_0_0},
};
extern TypeInfo ICollection_1_t11735_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_UICharInfo_t808 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m111663_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t11735_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_UICharInfo_t808/* invoker_method */
	, ICollection_1_t11735_ICollection_1_Contains_m111663_ParameterInfos/* parameters */
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
extern Il2CppType UICharInfoU5BU5D_t2581_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t11735_ICollection_1_CopyTo_m111664_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UICharInfoU5BU5D_t2581_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t11735_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111664_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t11735_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t11735_ICollection_1_CopyTo_m111664_ParameterInfos/* parameters */
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
static ParameterInfo ICollection_1_t11735_ICollection_1_Remove_m111665_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UICharInfo_t808_0_0_0},
};
extern TypeInfo ICollection_1_t11735_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_UICharInfo_t808 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m111665_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t11735_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_UICharInfo_t808/* invoker_method */
	, ICollection_1_t11735_ICollection_1_Remove_m111665_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t11735_MethodInfos[] =
{
	&ICollection_1_get_Count_m111659_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111660_MethodInfo,
	&ICollection_1_Add_m111661_MethodInfo,
	&ICollection_1_Clear_m111662_MethodInfo,
	&ICollection_1_Contains_m111663_MethodInfo,
	&ICollection_1_CopyTo_m111664_MethodInfo,
	&ICollection_1_Remove_m111665_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t11733_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t11735_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t11733_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t11735_0_0_0;
extern Il2CppType ICollection_1_t11735_1_0_0;
struct ICollection_1_t11735;
extern TypeInfo ICollection_1_t11735_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t11735_GenericClass;
TypeInfo ICollection_1_t11735_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t11735_MethodInfos/* methods */
	, ICollection_1_t11735_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t11735_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t11735_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t11735_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t11735_0_0_0/* byval_arg */
	, &ICollection_1_t11735_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t11735_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t11733_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
extern TypeInfo IEnumerable_1_t11733_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t11734_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111666_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t11733_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t11734_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t11733_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111666_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t11733_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t11733_0_0_0;
extern Il2CppType IEnumerable_1_t11733_1_0_0;
struct IEnumerable_1_t11733;
extern TypeInfo IEnumerable_1_t11733_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t11733_GenericClass;
TypeInfo IEnumerable_1_t11733_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t11733_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t11733_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t11733_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t11733_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t11733_0_0_0/* byval_arg */
	, &IEnumerable_1_t11733_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t11733_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t11734_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
extern MethodInfo IEnumerator_1_get_Current_m111667_MethodInfo;
static PropertyInfo IEnumerator_1_t11734____Current_PropertyInfo = 
{
	&IEnumerator_1_t11734_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111667_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t11734_PropertyInfos[] =
{
	&IEnumerator_1_t11734____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t11734_il2cpp_TypeInfo;
extern Il2CppType UICharInfo_t808_0_0_0;
extern void* RuntimeInvoker_UICharInfo_t808 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111667_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t11734_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerator_1_t11734_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111667_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t11734_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t11734_0_0_0;
extern Il2CppType IEnumerator_1_t11734_1_0_0;
struct IEnumerator_1_t11734;
extern TypeInfo IEnumerator_1_t11734_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t11734_GenericClass;
TypeInfo IEnumerator_1_t11734_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t11734_MethodInfos/* methods */
	, IEnumerator_1_t11734_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t11734_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t11734_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t11734_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t11734_0_0_0/* byval_arg */
	, &IEnumerator_1_t11734_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t11734_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t5550_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_343MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5550_il2cpp_TypeInfo;
extern TypeInfo UICharInfo_t808_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26070_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5144_MethodInfo;
extern MethodInfo Array_get_Length_m7862_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUICharInfo_t808_m94270_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UICharInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UICharInfo>(System.Int32)
 UICharInfo_t808  Array_InternalArray__get_Item_TisUICharInfo_t808_m94270 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisUICharInfo_t808_m94270_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26065_MethodInfo;
 void InternalEnumerator_1__ctor_m26065 (InternalEnumerator_1_t5550 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26066_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26066 (InternalEnumerator_1_t5550 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26067_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26067 (InternalEnumerator_1_t5550 * __this, MethodInfo* method){
	{
		UICharInfo_t808  L_0 = InternalEnumerator_1_get_Current_m26070(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26070_MethodInfo);
		UICharInfo_t808  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UICharInfo_t808_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26068_MethodInfo;
 void InternalEnumerator_1_Dispose_m26068 (InternalEnumerator_1_t5550 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26069_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26069 (InternalEnumerator_1_t5550 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m7862(L_1, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
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
extern MethodInfo InternalEnumerator_1_get_Current_m26070_MethodInfo;
 UICharInfo_t808  InternalEnumerator_1_get_Current_m26070 (InternalEnumerator_1_t5550 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5144(L_1, (String_t*) &_stringLiteral2294, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
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
		InvalidOperationException__ctor_m5144(L_3, (String_t*) &_stringLiteral2295, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7862(L_5, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		UICharInfo_t808  L_8 = Array_InternalArray__get_Item_TisUICharInfo_t808_m94270(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUICharInfo_t808_m94270_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5550____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5550_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5550, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5550____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5550_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5550, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5550_FieldInfos[] =
{
	&InternalEnumerator_1_t5550____array_FieldInfo,
	&InternalEnumerator_1_t5550____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26067_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5550____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5550_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26067_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26070_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5550____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5550_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26070_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5550_PropertyInfos[] =
{
	&InternalEnumerator_1_t5550____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5550____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5550_InternalEnumerator_1__ctor_m26065_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5550_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26065_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26065/* method */
	, &InternalEnumerator_1_t5550_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5550_InternalEnumerator_1__ctor_m26065_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t5550_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26066_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26066/* method */
	, &InternalEnumerator_1_t5550_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t5550_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26067_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26067/* method */
	, &InternalEnumerator_1_t5550_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t5550_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26068_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26068/* method */
	, &InternalEnumerator_1_t5550_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t5550_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26069_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26069/* method */
	, &InternalEnumerator_1_t5550_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t5550_il2cpp_TypeInfo;
extern Il2CppType UICharInfo_t808_0_0_0;
extern void* RuntimeInvoker_UICharInfo_t808 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26070_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26070/* method */
	, &InternalEnumerator_1_t5550_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* InternalEnumerator_1_t5550_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26065_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26066_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26067_MethodInfo,
	&InternalEnumerator_1_Dispose_m26068_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26069_MethodInfo,
	&InternalEnumerator_1_get_Current_m26070_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26067_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26069_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26066_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26068_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26070_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5550_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26067_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26069_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26066_MethodInfo,
	&InternalEnumerator_1_Dispose_m26068_MethodInfo,
	&InternalEnumerator_1_get_Current_m26070_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t11734_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5550_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t11734_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t11734_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5550_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t11734_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5550_0_0_0;
extern Il2CppType InternalEnumerator_1_t5550_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5550_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5550_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5550_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5550_MethodInfos/* methods */
	, InternalEnumerator_1_t5550_PropertyInfos/* properties */
	, InternalEnumerator_1_t5550_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5550_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5550_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5550_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5550_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5550_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5550_1_0_0/* this_arg */
	, InternalEnumerator_1_t5550_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5550_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5550)+ sizeof (Il2CppObject)/* instance_size */
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
extern MethodInfo UnityEventBase__ctor_m9017_MethodInfo;
extern MethodInfo UnityEvent_1_GetDelegate_m4308_MethodInfo;
extern MethodInfo UnityEventBase_AddCall_m9022_MethodInfo;
extern MethodInfo Delegate_get_Target_m9174_MethodInfo;
extern MethodInfo Delegate_get_Method_m9172_MethodInfo;
extern MethodInfo UnityEventBase_RemoveListener_m9023_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m385_MethodInfo;
extern MethodInfo UnityEventBase_GetValidMethodInfo_m9025_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m4309_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m4310_MethodInfo;
extern MethodInfo UnityEventBase_Invoke_m9024_MethodInfo;


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
MethodInfo UnityEvent_1__ctor_m4305_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityEvent_1__ctor_m23611_gshared/* method */
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
extern Il2CppType UnityAction_1_t5551_0_0_0;
static ParameterInfo UnityEvent_1_t674_UnityEvent_1_AddListener_m26071_ParameterInfos[] = 
{
	{"call", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t5551_0_0_0},
};
extern TypeInfo UnityEvent_1_t674_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
MethodInfo UnityEvent_1_AddListener_m26071_MethodInfo = 
{
	"AddListener"/* name */
	, (methodPointerType)&UnityEvent_1_AddListener_m23613_gshared/* method */
	, &UnityEvent_1_t674_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityEvent_1_t674_UnityEvent_1_AddListener_m26071_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t5551_0_0_0;
static ParameterInfo UnityEvent_1_t674_UnityEvent_1_RemoveListener_m26072_ParameterInfos[] = 
{
	{"call", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t5551_0_0_0},
};
extern TypeInfo UnityEvent_1_t674_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
MethodInfo UnityEvent_1_RemoveListener_m26072_MethodInfo = 
{
	"RemoveListener"/* name */
	, (methodPointerType)&UnityEvent_1_RemoveListener_m23615_gshared/* method */
	, &UnityEvent_1_t674_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityEvent_1_t674_UnityEvent_1_RemoveListener_m26072_ParameterInfos/* parameters */
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
static ParameterInfo UnityEvent_1_t674_UnityEvent_1_FindMethod_Impl_m4306_ParameterInfos[] = 
{
	{"name", 0, 134217728, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"targetObj", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityEvent_1_t674_il2cpp_TypeInfo;
extern Il2CppType MethodInfo_t292_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.String>::FindMethod_Impl(System.String,System.Object)
MethodInfo UnityEvent_1_FindMethod_Impl_m4306_MethodInfo = 
{
	"FindMethod_Impl"/* name */
	, (methodPointerType)&UnityEvent_1_FindMethod_Impl_m23616_gshared/* method */
	, &UnityEvent_1_t674_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t292_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, UnityEvent_1_t674_UnityEvent_1_FindMethod_Impl_m4306_ParameterInfos/* parameters */
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
static ParameterInfo UnityEvent_1_t674_UnityEvent_1_GetDelegate_m4307_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo UnityEvent_1_t674_il2cpp_TypeInfo;
extern Il2CppType BaseInvokableCall_t2625_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(System.Object,System.Reflection.MethodInfo)
MethodInfo UnityEvent_1_GetDelegate_m4307_MethodInfo = 
{
	"GetDelegate"/* name */
	, (methodPointerType)&UnityEvent_1_GetDelegate_m23617_gshared/* method */
	, &UnityEvent_1_t674_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t2625_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, UnityEvent_1_t674_UnityEvent_1_GetDelegate_m4307_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t5551_0_0_0;
static ParameterInfo UnityEvent_1_t674_UnityEvent_1_GetDelegate_m4308_ParameterInfos[] = 
{
	{"action", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t5551_0_0_0},
};
extern TypeInfo UnityEvent_1_t674_il2cpp_TypeInfo;
extern Il2CppType BaseInvokableCall_t2625_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
MethodInfo UnityEvent_1_GetDelegate_m4308_MethodInfo = 
{
	"GetDelegate"/* name */
	, (methodPointerType)&UnityEvent_1_GetDelegate_m23618_gshared/* method */
	, &UnityEvent_1_t674_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t2625_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, UnityEvent_1_t674_UnityEvent_1_GetDelegate_m4308_ParameterInfos/* parameters */
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
static ParameterInfo UnityEvent_1_t674_UnityEvent_1_Invoke_m4363_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern TypeInfo UnityEvent_1_t674_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
MethodInfo UnityEvent_1_Invoke_m4363_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityEvent_1_Invoke_m23619_gshared/* method */
	, &UnityEvent_1_t674_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityEvent_1_t674_UnityEvent_1_Invoke_m4363_ParameterInfos/* parameters */
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
	&UnityEvent_1__ctor_m4305_MethodInfo,
	&UnityEvent_1_AddListener_m26071_MethodInfo,
	&UnityEvent_1_RemoveListener_m26072_MethodInfo,
	&UnityEvent_1_FindMethod_Impl_m4306_MethodInfo,
	&UnityEvent_1_GetDelegate_m4307_MethodInfo,
	&UnityEvent_1_GetDelegate_m4308_MethodInfo,
	&UnityEvent_1_Invoke_m4363_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo UnityEventBase_ToString_m4016_MethodInfo;
extern MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m4017_MethodInfo;
extern MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m4018_MethodInfo;
extern MethodInfo UnityEvent_1_FindMethod_Impl_m4306_MethodInfo;
extern MethodInfo UnityEvent_1_GetDelegate_m4307_MethodInfo;
static MethodInfo* UnityEvent_1_t674_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&UnityEventBase_ToString_m4016_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m4017_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m4018_MethodInfo,
	&UnityEvent_1_FindMethod_Impl_m4306_MethodInfo,
	&UnityEvent_1_GetDelegate_m4307_MethodInfo,
};
extern TypeInfo ISerializationCallbackReceiver_t764_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityEvent_1_t674_InterfacesOffsets[] = 
{
	{ &ISerializationCallbackReceiver_t764_il2cpp_TypeInfo, 4},
};
extern MethodInfo UnityEvent_1_GetDelegate_m4308_MethodInfo;
extern Il2CppType String_t_0_0_0;
extern TypeInfo InvokableCall_1_t803_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1__ctor_m4309_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m4310_MethodInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
static void* UnityEvent_1_t674_RGCTXData[6] = 
{
	&UnityEvent_1_GetDelegate_m4308_MethodInfo,
	(void*)&String_t_0_0_0,
	&InvokableCall_1_t803_il2cpp_TypeInfo,
	&InvokableCall_1__ctor_m4309_MethodInfo,
	&InvokableCall_1__ctor_m4310_MethodInfo,
	&String_t_il2cpp_TypeInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityEvent_1_t674_0_0_0;
extern Il2CppType UnityEvent_1_t674_1_0_0;
extern TypeInfo UnityEventBase_t2634_il2cpp_TypeInfo;
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
	, &UnityEventBase_t2634_il2cpp_TypeInfo/* parent */
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
extern TypeInfo UnityAction_1_t5551_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<System.String>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_135MethodDeclarations.h"



// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<System.String>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.String>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<System.String>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<System.String>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t39_0_0_0;
static ParameterInfo UnityAction_1_t5551_UnityAction_1__ctor_m26073_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t39_0_0_0},
};
extern TypeInfo UnityAction_1_t5551_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_IntPtr_t39 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m26073_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m16525_gshared/* method */
	, &UnityAction_1_t5551_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_IntPtr_t39/* invoker_method */
	, UnityAction_1_t5551_UnityAction_1__ctor_m26073_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t5551_UnityAction_1_Invoke_m26074_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern TypeInfo UnityAction_1_t5551_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<System.String>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m26074_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m16526_gshared/* method */
	, &UnityAction_1_t5551_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityAction_1_t5551_UnityAction_1_Invoke_m26074_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t5551_UnityAction_1_BeginInvoke_m26075_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t35_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t5551_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t34_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.String>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m26075_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m16527_gshared/* method */
	, &UnityAction_1_t5551_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t34_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t5551_UnityAction_1_BeginInvoke_m26075_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t5551_UnityAction_1_EndInvoke_m26076_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t34_0_0_0},
};
extern TypeInfo UnityAction_1_t5551_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<System.String>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m26076_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m16528_gshared/* method */
	, &UnityAction_1_t5551_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityAction_1_t5551_UnityAction_1_EndInvoke_m26076_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t5551_MethodInfos[] =
{
	&UnityAction_1__ctor_m26073_MethodInfo,
	&UnityAction_1_Invoke_m26074_MethodInfo,
	&UnityAction_1_BeginInvoke_m26075_MethodInfo,
	&UnityAction_1_EndInvoke_m26076_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m26074_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m26075_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m26076_MethodInfo;
static MethodInfo* UnityAction_1_t5551_VTable[] =
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
	&UnityAction_1_Invoke_m26074_MethodInfo,
	&UnityAction_1_BeginInvoke_m26075_MethodInfo,
	&UnityAction_1_EndInvoke_m26076_MethodInfo,
};
extern TypeInfo ICloneable_t84_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t85_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t5551_InterfacesOffsets[] = 
{
	{ &ICloneable_t84_il2cpp_TypeInfo, 4},
	{ &ISerializable_t85_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t5551_0_0_0;
extern Il2CppType UnityAction_1_t5551_1_0_0;
extern TypeInfo MulticastDelegate_t38_il2cpp_TypeInfo;
struct UnityAction_1_t5551;
extern TypeInfo UnityAction_1_t5551_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t5551_GenericClass;
TypeInfo UnityAction_1_t5551_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t5551_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t38_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t5551_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t5551_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t5551_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t5551_0_0_0/* byval_arg */
	, &UnityAction_1_t5551_1_0_0/* this_arg */
	, UnityAction_1_t5551_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t5551_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t5551)/* instance_size */
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
extern TypeInfo UnityAction_1_t5551_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t401_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo Void_t40_il2cpp_TypeInfo;
extern Il2CppType UnityAction_1_t5551_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m8996_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m385_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m9178_MethodInfo;
extern MethodInfo Delegate_Combine_m4232_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m8995_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1970_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisString_t_m94280_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m8997_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m26074_MethodInfo;
extern MethodInfo Delegate_get_Target_m9174_MethodInfo;
extern MethodInfo Delegate_get_Method_m9172_MethodInfo;
struct BaseInvokableCall_t2625;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.String>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.String>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisString_t_m94280(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m90275_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisString_t_m94280_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<System.String>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<System.String>
extern Il2CppType UnityAction_1_t5551_0_0_1;
FieldInfo InvokableCall_1_t803____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t5551_0_0_1/* type */
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
static ParameterInfo InvokableCall_1_t803_InvokableCall_1__ctor_m4309_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo InvokableCall_1_t803_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m4309_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m16521_gshared/* method */
	, &InvokableCall_1_t803_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t803_InvokableCall_1__ctor_m4309_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t5551_0_0_0;
static ParameterInfo InvokableCall_1_t803_InvokableCall_1__ctor_m4310_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t5551_0_0_0},
};
extern TypeInfo InvokableCall_1_t803_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m4310_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m16522_gshared/* method */
	, &InvokableCall_1_t803_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InvokableCall_1_t803_InvokableCall_1__ctor_m4310_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t803_InvokableCall_1_Invoke_m26077_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t5_0_0_0},
};
extern TypeInfo InvokableCall_1_t803_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m26077_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m16523_gshared/* method */
	, &InvokableCall_1_t803_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InvokableCall_1_t803_InvokableCall_1_Invoke_m26077_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t803_InvokableCall_1_Find_m26078_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo InvokableCall_1_t803_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<System.String>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m26078_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m16524_gshared/* method */
	, &InvokableCall_1_t803_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t803_InvokableCall_1_Find_m26078_ParameterInfos/* parameters */
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
	&InvokableCall_1__ctor_m4309_MethodInfo,
	&InvokableCall_1__ctor_m4310_MethodInfo,
	&InvokableCall_1_Invoke_m26077_MethodInfo,
	&InvokableCall_1_Find_m26078_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m26077_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m26078_MethodInfo;
static MethodInfo* InvokableCall_1_t803_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&InvokableCall_1_Invoke_m26077_MethodInfo,
	&InvokableCall_1_Find_m26078_MethodInfo,
};
extern Il2CppType UnityAction_1_t5551_0_0_0;
extern TypeInfo UnityAction_1_t5551_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisString_t_m94280_MethodInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m26074_MethodInfo;
static void* InvokableCall_1_t803_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t5551_0_0_0,
	&UnityAction_1_t5551_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisString_t_m94280_MethodInfo,
	&String_t_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m26074_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t803_0_0_0;
extern Il2CppType InvokableCall_1_t803_1_0_0;
extern TypeInfo BaseInvokableCall_t2625_il2cpp_TypeInfo;
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
	, &BaseInvokableCall_t2625_il2cpp_TypeInfo/* parent */
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
extern TypeInfo IEnumerator_1_t13109_il2cpp_TypeInfo;

// UnityEngine.UI.InputField/InputType
#include "UnityEngine_UI_UnityEngine_UI_InputField_InputType.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/InputType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/InputType>
extern MethodInfo IEnumerator_1_get_Current_m111668_MethodInfo;
static PropertyInfo IEnumerator_1_t13109____Current_PropertyInfo = 
{
	&IEnumerator_1_t13109_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111668_MethodInfo/* get */
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
extern Il2CppType InputType_t670_0_0_0;
extern void* RuntimeInvoker_InputType_t670 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/InputType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111668_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13109_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerator_1_t13109_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111668_MethodInfo,
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
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_344.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5552_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_344MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5552_il2cpp_TypeInfo;
extern TypeInfo InputType_t670_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26084_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5144_MethodInfo;
extern MethodInfo Array_get_Length_m7862_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisInputType_t670_m94282_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/InputType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/InputType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisInputType_t670_m94282 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisInputType_t670_m94282_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26079_MethodInfo;
 void InternalEnumerator_1__ctor_m26079 (InternalEnumerator_1_t5552 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26080_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26080 (InternalEnumerator_1_t5552 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26081_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26081 (InternalEnumerator_1_t5552 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26084(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26084_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&InputType_t670_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26082_MethodInfo;
 void InternalEnumerator_1_Dispose_m26082 (InternalEnumerator_1_t5552 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26083_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26083 (InternalEnumerator_1_t5552 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m7862(L_1, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
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
extern MethodInfo InternalEnumerator_1_get_Current_m26084_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26084 (InternalEnumerator_1_t5552 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5144(L_1, (String_t*) &_stringLiteral2294, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
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
		InvalidOperationException__ctor_m5144(L_3, (String_t*) &_stringLiteral2295, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7862(L_5, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisInputType_t670_m94282(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisInputType_t670_m94282_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26081_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5552____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5552_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26081_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26084_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5552____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5552_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26084_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t5552_InternalEnumerator_1__ctor_m26079_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5552_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26079_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26079/* method */
	, &InternalEnumerator_1_t5552_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5552_InternalEnumerator_1__ctor_m26079_ParameterInfos/* parameters */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26080_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26080/* method */
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
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26081_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26081/* method */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26082_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26082/* method */
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
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26083_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26083/* method */
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
extern Il2CppType InputType_t670_0_0_0;
extern void* RuntimeInvoker_InputType_t670 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/InputType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26084_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26084/* method */
	, &InternalEnumerator_1_t5552_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* InternalEnumerator_1_t5552_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26079_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26080_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26081_MethodInfo,
	&InternalEnumerator_1_Dispose_m26082_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26083_MethodInfo,
	&InternalEnumerator_1_get_Current_m26084_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26081_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26083_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26080_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26082_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26084_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5552_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26081_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26083_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26080_MethodInfo,
	&InternalEnumerator_1_Dispose_m26082_MethodInfo,
	&InternalEnumerator_1_get_Current_m26084_MethodInfo,
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
extern TypeInfo ICollection_1_t14781_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>
extern MethodInfo ICollection_1_get_Count_m111669_MethodInfo;
static PropertyInfo ICollection_1_t14781____Count_PropertyInfo = 
{
	&ICollection_1_t14781_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111669_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111670_MethodInfo;
static PropertyInfo ICollection_1_t14781____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14781_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111670_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14781_PropertyInfos[] =
{
	&ICollection_1_t14781____Count_PropertyInfo,
	&ICollection_1_t14781____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14781_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::get_Count()
MethodInfo ICollection_1_get_Count_m111669_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14781_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t14781_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111670_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14781_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14781_ICollection_1_Add_m111671_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InputType_t670_0_0_0},
};
extern TypeInfo ICollection_1_t14781_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::Add(T)
MethodInfo ICollection_1_Add_m111671_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14781_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14781_ICollection_1_Add_m111671_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t14781_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::Clear()
MethodInfo ICollection_1_Clear_m111672_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14781_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14781_ICollection_1_Contains_m111673_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InputType_t670_0_0_0},
};
extern TypeInfo ICollection_1_t14781_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::Contains(T)
MethodInfo ICollection_1_Contains_m111673_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14781_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14781_ICollection_1_Contains_m111673_ParameterInfos/* parameters */
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
extern Il2CppType InputTypeU5BU5D_t12741_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14781_ICollection_1_CopyTo_m111674_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &InputTypeU5BU5D_t12741_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14781_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111674_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14781_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14781_ICollection_1_CopyTo_m111674_ParameterInfos/* parameters */
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
static ParameterInfo ICollection_1_t14781_ICollection_1_Remove_m111675_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InputType_t670_0_0_0},
};
extern TypeInfo ICollection_1_t14781_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/InputType>::Remove(T)
MethodInfo ICollection_1_Remove_m111675_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14781_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14781_ICollection_1_Remove_m111675_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t14781_MethodInfos[] =
{
	&ICollection_1_get_Count_m111669_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111670_MethodInfo,
	&ICollection_1_Add_m111671_MethodInfo,
	&ICollection_1_Clear_m111672_MethodInfo,
	&ICollection_1_Contains_m111673_MethodInfo,
	&ICollection_1_CopyTo_m111674_MethodInfo,
	&ICollection_1_Remove_m111675_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14783_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14781_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14783_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14781_0_0_0;
extern Il2CppType ICollection_1_t14781_1_0_0;
struct ICollection_1_t14781;
extern TypeInfo ICollection_1_t14781_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14781_GenericClass;
TypeInfo ICollection_1_t14781_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14781_MethodInfos/* methods */
	, ICollection_1_t14781_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14781_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14781_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14781_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14781_0_0_0/* byval_arg */
	, &ICollection_1_t14781_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14781_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t14783_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/InputType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/InputType>
extern TypeInfo IEnumerable_1_t14783_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13109_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/InputType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111676_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14783_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerable_1_t14783_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111676_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14783_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14783_0_0_0;
extern Il2CppType IEnumerable_1_t14783_1_0_0;
struct IEnumerable_1_t14783;
extern TypeInfo IEnumerable_1_t14783_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14783_GenericClass;
TypeInfo IEnumerable_1_t14783_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14783_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14783_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14783_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14783_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14783_0_0_0/* byval_arg */
	, &IEnumerable_1_t14783_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14783_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14782_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>
extern MethodInfo IList_1_get_Item_m111677_MethodInfo;
extern MethodInfo IList_1_set_Item_m111678_MethodInfo;
static PropertyInfo IList_1_t14782____Item_PropertyInfo = 
{
	&IList_1_t14782_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111677_MethodInfo/* get */
	, &IList_1_set_Item_m111678_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14782_PropertyInfos[] =
{
	&IList_1_t14782____Item_PropertyInfo,
	NULL
};
extern Il2CppType InputType_t670_0_0_0;
static ParameterInfo IList_1_t14782_IList_1_IndexOf_m111679_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InputType_t670_0_0_0},
};
extern TypeInfo IList_1_t14782_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111679_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14782_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14782_IList_1_IndexOf_m111679_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14782_IList_1_Insert_m111680_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &InputType_t670_0_0_0},
};
extern TypeInfo IList_1_t14782_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111680_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14782_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14782_IList_1_Insert_m111680_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14782_IList_1_RemoveAt_m111681_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14782_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111681_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14782_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14782_IList_1_RemoveAt_m111681_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14782_IList_1_get_Item_m111677_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14782_il2cpp_TypeInfo;
extern Il2CppType InputType_t670_0_0_0;
extern void* RuntimeInvoker_InputType_t670_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111677_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14782_il2cpp_TypeInfo/* declaring_type */
	, &InputType_t670_0_0_0/* return_type */
	, RuntimeInvoker_InputType_t670_Int32_t63/* invoker_method */
	, IList_1_t14782_IList_1_get_Item_m111677_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14782_IList_1_set_Item_m111678_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &InputType_t670_0_0_0},
};
extern TypeInfo IList_1_t14782_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/InputType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111678_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14782_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14782_IList_1_set_Item_m111678_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t14782_MethodInfos[] =
{
	&IList_1_IndexOf_m111679_MethodInfo,
	&IList_1_Insert_m111680_MethodInfo,
	&IList_1_RemoveAt_m111681_MethodInfo,
	&IList_1_get_Item_m111677_MethodInfo,
	&IList_1_set_Item_m111678_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14781_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14783_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14782_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14781_il2cpp_TypeInfo,
	&IEnumerable_1_t14783_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14782_0_0_0;
extern Il2CppType IList_1_t14782_1_0_0;
struct IList_1_t14782;
extern TypeInfo IList_1_t14782_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14782_GenericClass;
extern CustomAttributesCache IList_1_t3846__CustomAttributeCache;
TypeInfo IList_1_t14782_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14782_MethodInfos/* methods */
	, IList_1_t14782_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14782_il2cpp_TypeInfo/* element_class */
	, IList_1_t14782_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3846__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14782_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14782_0_0_0/* byval_arg */
	, &IList_1_t14782_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14782_GenericClass/* generic_class */
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

// UnityEngine.UI.InputField/CharacterValidation
#include "UnityEngine_UI_UnityEngine_UI_InputField_CharacterValidation.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>
extern MethodInfo IEnumerator_1_get_Current_m111682_MethodInfo;
static PropertyInfo IEnumerator_1_t13110____Current_PropertyInfo = 
{
	&IEnumerator_1_t13110_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111682_MethodInfo/* get */
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
extern Il2CppType CharacterValidation_t671_0_0_0;
extern void* RuntimeInvoker_CharacterValidation_t671 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111682_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13110_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerator_1_t13110_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111682_MethodInfo,
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
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_345.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5553_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_345MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5553_il2cpp_TypeInfo;
extern TypeInfo CharacterValidation_t671_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26090_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5144_MethodInfo;
extern MethodInfo Array_get_Length_m7862_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCharacterValidation_t671_m94293_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/CharacterValidation>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/CharacterValidation>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCharacterValidation_t671_m94293 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisCharacterValidation_t671_m94293_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26085_MethodInfo;
 void InternalEnumerator_1__ctor_m26085 (InternalEnumerator_1_t5553 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26086_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26086 (InternalEnumerator_1_t5553 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26087_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26087 (InternalEnumerator_1_t5553 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26090(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26090_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CharacterValidation_t671_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26088_MethodInfo;
 void InternalEnumerator_1_Dispose_m26088 (InternalEnumerator_1_t5553 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26089_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26089 (InternalEnumerator_1_t5553 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m7862(L_1, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
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
extern MethodInfo InternalEnumerator_1_get_Current_m26090_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26090 (InternalEnumerator_1_t5553 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5144(L_1, (String_t*) &_stringLiteral2294, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
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
		InvalidOperationException__ctor_m5144(L_3, (String_t*) &_stringLiteral2295, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7862(L_5, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisCharacterValidation_t671_m94293(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCharacterValidation_t671_m94293_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26087_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5553____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5553_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26087_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26090_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5553____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5553_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26090_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t5553_InternalEnumerator_1__ctor_m26085_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5553_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26085_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26085/* method */
	, &InternalEnumerator_1_t5553_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5553_InternalEnumerator_1__ctor_m26085_ParameterInfos/* parameters */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26086_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26086/* method */
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
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26087_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26087/* method */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26088_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26088/* method */
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
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26089_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26089/* method */
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
extern Il2CppType CharacterValidation_t671_0_0_0;
extern void* RuntimeInvoker_CharacterValidation_t671 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/CharacterValidation>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26090_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26090/* method */
	, &InternalEnumerator_1_t5553_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* InternalEnumerator_1_t5553_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26085_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26086_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26087_MethodInfo,
	&InternalEnumerator_1_Dispose_m26088_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26089_MethodInfo,
	&InternalEnumerator_1_get_Current_m26090_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26087_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26089_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26086_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26088_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26090_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5553_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26087_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26089_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26086_MethodInfo,
	&InternalEnumerator_1_Dispose_m26088_MethodInfo,
	&InternalEnumerator_1_get_Current_m26090_MethodInfo,
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
extern TypeInfo ICollection_1_t14784_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>
extern MethodInfo ICollection_1_get_Count_m111683_MethodInfo;
static PropertyInfo ICollection_1_t14784____Count_PropertyInfo = 
{
	&ICollection_1_t14784_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111683_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111684_MethodInfo;
static PropertyInfo ICollection_1_t14784____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14784_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111684_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14784_PropertyInfos[] =
{
	&ICollection_1_t14784____Count_PropertyInfo,
	&ICollection_1_t14784____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14784_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::get_Count()
MethodInfo ICollection_1_get_Count_m111683_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14784_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t14784_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111684_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14784_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14784_ICollection_1_Add_m111685_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CharacterValidation_t671_0_0_0},
};
extern TypeInfo ICollection_1_t14784_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::Add(T)
MethodInfo ICollection_1_Add_m111685_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14784_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14784_ICollection_1_Add_m111685_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t14784_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::Clear()
MethodInfo ICollection_1_Clear_m111686_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14784_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14784_ICollection_1_Contains_m111687_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CharacterValidation_t671_0_0_0},
};
extern TypeInfo ICollection_1_t14784_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::Contains(T)
MethodInfo ICollection_1_Contains_m111687_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14784_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14784_ICollection_1_Contains_m111687_ParameterInfos/* parameters */
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
extern Il2CppType CharacterValidationU5BU5D_t12742_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14784_ICollection_1_CopyTo_m111688_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CharacterValidationU5BU5D_t12742_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14784_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111688_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14784_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14784_ICollection_1_CopyTo_m111688_ParameterInfos/* parameters */
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
static ParameterInfo ICollection_1_t14784_ICollection_1_Remove_m111689_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CharacterValidation_t671_0_0_0},
};
extern TypeInfo ICollection_1_t14784_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/CharacterValidation>::Remove(T)
MethodInfo ICollection_1_Remove_m111689_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14784_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14784_ICollection_1_Remove_m111689_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t14784_MethodInfos[] =
{
	&ICollection_1_get_Count_m111683_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111684_MethodInfo,
	&ICollection_1_Add_m111685_MethodInfo,
	&ICollection_1_Clear_m111686_MethodInfo,
	&ICollection_1_Contains_m111687_MethodInfo,
	&ICollection_1_CopyTo_m111688_MethodInfo,
	&ICollection_1_Remove_m111689_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14786_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14784_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14786_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14784_0_0_0;
extern Il2CppType ICollection_1_t14784_1_0_0;
struct ICollection_1_t14784;
extern TypeInfo ICollection_1_t14784_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14784_GenericClass;
TypeInfo ICollection_1_t14784_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14784_MethodInfos/* methods */
	, ICollection_1_t14784_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14784_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14784_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14784_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14784_0_0_0/* byval_arg */
	, &ICollection_1_t14784_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14784_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t14786_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/CharacterValidation>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/CharacterValidation>
extern TypeInfo IEnumerable_1_t14786_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13110_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/CharacterValidation>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111690_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14786_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerable_1_t14786_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111690_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14786_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14786_0_0_0;
extern Il2CppType IEnumerable_1_t14786_1_0_0;
struct IEnumerable_1_t14786;
extern TypeInfo IEnumerable_1_t14786_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14786_GenericClass;
TypeInfo IEnumerable_1_t14786_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14786_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14786_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14786_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14786_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14786_0_0_0/* byval_arg */
	, &IEnumerable_1_t14786_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14786_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14785_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>
extern MethodInfo IList_1_get_Item_m111691_MethodInfo;
extern MethodInfo IList_1_set_Item_m111692_MethodInfo;
static PropertyInfo IList_1_t14785____Item_PropertyInfo = 
{
	&IList_1_t14785_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111691_MethodInfo/* get */
	, &IList_1_set_Item_m111692_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14785_PropertyInfos[] =
{
	&IList_1_t14785____Item_PropertyInfo,
	NULL
};
extern Il2CppType CharacterValidation_t671_0_0_0;
static ParameterInfo IList_1_t14785_IList_1_IndexOf_m111693_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CharacterValidation_t671_0_0_0},
};
extern TypeInfo IList_1_t14785_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111693_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14785_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14785_IList_1_IndexOf_m111693_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14785_IList_1_Insert_m111694_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CharacterValidation_t671_0_0_0},
};
extern TypeInfo IList_1_t14785_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111694_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14785_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14785_IList_1_Insert_m111694_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14785_IList_1_RemoveAt_m111695_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14785_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111695_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14785_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14785_IList_1_RemoveAt_m111695_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14785_IList_1_get_Item_m111691_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14785_il2cpp_TypeInfo;
extern Il2CppType CharacterValidation_t671_0_0_0;
extern void* RuntimeInvoker_CharacterValidation_t671_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111691_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14785_il2cpp_TypeInfo/* declaring_type */
	, &CharacterValidation_t671_0_0_0/* return_type */
	, RuntimeInvoker_CharacterValidation_t671_Int32_t63/* invoker_method */
	, IList_1_t14785_IList_1_get_Item_m111691_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14785_IList_1_set_Item_m111692_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CharacterValidation_t671_0_0_0},
};
extern TypeInfo IList_1_t14785_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/CharacterValidation>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111692_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14785_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14785_IList_1_set_Item_m111692_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t14785_MethodInfos[] =
{
	&IList_1_IndexOf_m111693_MethodInfo,
	&IList_1_Insert_m111694_MethodInfo,
	&IList_1_RemoveAt_m111695_MethodInfo,
	&IList_1_get_Item_m111691_MethodInfo,
	&IList_1_set_Item_m111692_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14784_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14786_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14785_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14784_il2cpp_TypeInfo,
	&IEnumerable_1_t14786_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14785_0_0_0;
extern Il2CppType IList_1_t14785_1_0_0;
struct IList_1_t14785;
extern TypeInfo IList_1_t14785_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14785_GenericClass;
extern CustomAttributesCache IList_1_t3846__CustomAttributeCache;
TypeInfo IList_1_t14785_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14785_MethodInfos/* methods */
	, IList_1_t14785_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14785_il2cpp_TypeInfo/* element_class */
	, IList_1_t14785_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3846__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14785_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14785_0_0_0/* byval_arg */
	, &IList_1_t14785_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14785_GenericClass/* generic_class */
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

// UnityEngine.UI.InputField/LineType
#include "UnityEngine_UI_UnityEngine_UI_InputField_LineType.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/LineType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/LineType>
extern MethodInfo IEnumerator_1_get_Current_m111696_MethodInfo;
static PropertyInfo IEnumerator_1_t13111____Current_PropertyInfo = 
{
	&IEnumerator_1_t13111_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111696_MethodInfo/* get */
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
extern Il2CppType LineType_t672_0_0_0;
extern void* RuntimeInvoker_LineType_t672 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/LineType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111696_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13111_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerator_1_t13111_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111696_MethodInfo,
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
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_346.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5554_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_346MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5554_il2cpp_TypeInfo;
extern TypeInfo LineType_t672_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26096_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5144_MethodInfo;
extern MethodInfo Array_get_Length_m7862_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisLineType_t672_m94304_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/LineType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/LineType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisLineType_t672_m94304 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisLineType_t672_m94304_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26091_MethodInfo;
 void InternalEnumerator_1__ctor_m26091 (InternalEnumerator_1_t5554 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26092_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26092 (InternalEnumerator_1_t5554 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26093_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26093 (InternalEnumerator_1_t5554 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26096(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26096_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&LineType_t672_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26094_MethodInfo;
 void InternalEnumerator_1_Dispose_m26094 (InternalEnumerator_1_t5554 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26095_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26095 (InternalEnumerator_1_t5554 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m7862(L_1, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
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
extern MethodInfo InternalEnumerator_1_get_Current_m26096_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26096 (InternalEnumerator_1_t5554 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5144(L_1, (String_t*) &_stringLiteral2294, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
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
		InvalidOperationException__ctor_m5144(L_3, (String_t*) &_stringLiteral2295, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7862(L_5, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisLineType_t672_m94304(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisLineType_t672_m94304_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26093_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5554____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5554_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26093_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26096_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5554____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5554_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26096_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t5554_InternalEnumerator_1__ctor_m26091_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5554_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26091_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26091/* method */
	, &InternalEnumerator_1_t5554_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5554_InternalEnumerator_1__ctor_m26091_ParameterInfos/* parameters */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26092_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26092/* method */
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
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26093_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26093/* method */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26094_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26094/* method */
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
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26095_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26095/* method */
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
extern Il2CppType LineType_t672_0_0_0;
extern void* RuntimeInvoker_LineType_t672 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/LineType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26096_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26096/* method */
	, &InternalEnumerator_1_t5554_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* InternalEnumerator_1_t5554_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26091_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26092_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26093_MethodInfo,
	&InternalEnumerator_1_Dispose_m26094_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26095_MethodInfo,
	&InternalEnumerator_1_get_Current_m26096_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26093_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26095_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26092_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26094_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26096_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5554_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26093_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26095_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26092_MethodInfo,
	&InternalEnumerator_1_Dispose_m26094_MethodInfo,
	&InternalEnumerator_1_get_Current_m26096_MethodInfo,
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
extern TypeInfo ICollection_1_t14787_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>
extern MethodInfo ICollection_1_get_Count_m111697_MethodInfo;
static PropertyInfo ICollection_1_t14787____Count_PropertyInfo = 
{
	&ICollection_1_t14787_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111697_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111698_MethodInfo;
static PropertyInfo ICollection_1_t14787____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14787_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111698_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14787_PropertyInfos[] =
{
	&ICollection_1_t14787____Count_PropertyInfo,
	&ICollection_1_t14787____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14787_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::get_Count()
MethodInfo ICollection_1_get_Count_m111697_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14787_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t14787_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111698_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14787_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14787_ICollection_1_Add_m111699_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LineType_t672_0_0_0},
};
extern TypeInfo ICollection_1_t14787_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::Add(T)
MethodInfo ICollection_1_Add_m111699_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14787_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14787_ICollection_1_Add_m111699_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t14787_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::Clear()
MethodInfo ICollection_1_Clear_m111700_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14787_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14787_ICollection_1_Contains_m111701_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LineType_t672_0_0_0},
};
extern TypeInfo ICollection_1_t14787_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::Contains(T)
MethodInfo ICollection_1_Contains_m111701_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14787_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14787_ICollection_1_Contains_m111701_ParameterInfos/* parameters */
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
extern Il2CppType LineTypeU5BU5D_t12743_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14787_ICollection_1_CopyTo_m111702_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &LineTypeU5BU5D_t12743_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14787_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111702_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14787_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14787_ICollection_1_CopyTo_m111702_ParameterInfos/* parameters */
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
static ParameterInfo ICollection_1_t14787_ICollection_1_Remove_m111703_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LineType_t672_0_0_0},
};
extern TypeInfo ICollection_1_t14787_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/LineType>::Remove(T)
MethodInfo ICollection_1_Remove_m111703_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14787_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14787_ICollection_1_Remove_m111703_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t14787_MethodInfos[] =
{
	&ICollection_1_get_Count_m111697_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111698_MethodInfo,
	&ICollection_1_Add_m111699_MethodInfo,
	&ICollection_1_Clear_m111700_MethodInfo,
	&ICollection_1_Contains_m111701_MethodInfo,
	&ICollection_1_CopyTo_m111702_MethodInfo,
	&ICollection_1_Remove_m111703_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14789_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14787_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14789_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14787_0_0_0;
extern Il2CppType ICollection_1_t14787_1_0_0;
struct ICollection_1_t14787;
extern TypeInfo ICollection_1_t14787_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14787_GenericClass;
TypeInfo ICollection_1_t14787_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14787_MethodInfos/* methods */
	, ICollection_1_t14787_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14787_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14787_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14787_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14787_0_0_0/* byval_arg */
	, &ICollection_1_t14787_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14787_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t14789_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/LineType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/LineType>
extern TypeInfo IEnumerable_1_t14789_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13111_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/LineType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111704_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14789_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerable_1_t14789_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111704_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14789_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14789_0_0_0;
extern Il2CppType IEnumerable_1_t14789_1_0_0;
struct IEnumerable_1_t14789;
extern TypeInfo IEnumerable_1_t14789_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14789_GenericClass;
TypeInfo IEnumerable_1_t14789_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14789_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14789_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14789_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14789_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14789_0_0_0/* byval_arg */
	, &IEnumerable_1_t14789_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14789_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14788_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>
extern MethodInfo IList_1_get_Item_m111705_MethodInfo;
extern MethodInfo IList_1_set_Item_m111706_MethodInfo;
static PropertyInfo IList_1_t14788____Item_PropertyInfo = 
{
	&IList_1_t14788_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111705_MethodInfo/* get */
	, &IList_1_set_Item_m111706_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14788_PropertyInfos[] =
{
	&IList_1_t14788____Item_PropertyInfo,
	NULL
};
extern Il2CppType LineType_t672_0_0_0;
static ParameterInfo IList_1_t14788_IList_1_IndexOf_m111707_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LineType_t672_0_0_0},
};
extern TypeInfo IList_1_t14788_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111707_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14788_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14788_IList_1_IndexOf_m111707_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14788_IList_1_Insert_m111708_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &LineType_t672_0_0_0},
};
extern TypeInfo IList_1_t14788_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111708_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14788_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14788_IList_1_Insert_m111708_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14788_IList_1_RemoveAt_m111709_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14788_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111709_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14788_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14788_IList_1_RemoveAt_m111709_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14788_IList_1_get_Item_m111705_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14788_il2cpp_TypeInfo;
extern Il2CppType LineType_t672_0_0_0;
extern void* RuntimeInvoker_LineType_t672_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111705_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14788_il2cpp_TypeInfo/* declaring_type */
	, &LineType_t672_0_0_0/* return_type */
	, RuntimeInvoker_LineType_t672_Int32_t63/* invoker_method */
	, IList_1_t14788_IList_1_get_Item_m111705_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14788_IList_1_set_Item_m111706_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &LineType_t672_0_0_0},
};
extern TypeInfo IList_1_t14788_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/LineType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111706_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14788_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14788_IList_1_set_Item_m111706_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t14788_MethodInfos[] =
{
	&IList_1_IndexOf_m111707_MethodInfo,
	&IList_1_Insert_m111708_MethodInfo,
	&IList_1_RemoveAt_m111709_MethodInfo,
	&IList_1_get_Item_m111705_MethodInfo,
	&IList_1_set_Item_m111706_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14787_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14789_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14788_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14787_il2cpp_TypeInfo,
	&IEnumerable_1_t14789_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14788_0_0_0;
extern Il2CppType IList_1_t14788_1_0_0;
struct IList_1_t14788;
extern TypeInfo IList_1_t14788_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14788_GenericClass;
extern CustomAttributesCache IList_1_t3846__CustomAttributeCache;
TypeInfo IList_1_t14788_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14788_MethodInfos/* methods */
	, IList_1_t14788_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14788_il2cpp_TypeInfo/* element_class */
	, IList_1_t14788_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3846__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14788_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14788_0_0_0/* byval_arg */
	, &IList_1_t14788_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14788_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13112_il2cpp_TypeInfo;

// UnityEngine.UI.InputField/EditState
#include "UnityEngine_UI_UnityEngine_UI_InputField_EditState.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/EditState>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/EditState>
extern MethodInfo IEnumerator_1_get_Current_m111710_MethodInfo;
static PropertyInfo IEnumerator_1_t13112____Current_PropertyInfo = 
{
	&IEnumerator_1_t13112_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111710_MethodInfo/* get */
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
extern Il2CppType EditState_t676_0_0_0;
extern void* RuntimeInvoker_EditState_t676 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/EditState>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111710_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13112_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerator_1_t13112_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111710_MethodInfo,
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
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_347.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5555_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_347MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5555_il2cpp_TypeInfo;
extern TypeInfo EditState_t676_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26102_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5144_MethodInfo;
extern MethodInfo Array_get_Length_m7862_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisEditState_t676_m94315_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/EditState>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/EditState>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisEditState_t676_m94315 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisEditState_t676_m94315_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26097_MethodInfo;
 void InternalEnumerator_1__ctor_m26097 (InternalEnumerator_1_t5555 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26098_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26098 (InternalEnumerator_1_t5555 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26099_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26099 (InternalEnumerator_1_t5555 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26102(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26102_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&EditState_t676_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26100_MethodInfo;
 void InternalEnumerator_1_Dispose_m26100 (InternalEnumerator_1_t5555 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26101_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26101 (InternalEnumerator_1_t5555 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m7862(L_1, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
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
extern MethodInfo InternalEnumerator_1_get_Current_m26102_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26102 (InternalEnumerator_1_t5555 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5144(L_1, (String_t*) &_stringLiteral2294, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
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
		InvalidOperationException__ctor_m5144(L_3, (String_t*) &_stringLiteral2295, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7862(L_5, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisEditState_t676_m94315(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisEditState_t676_m94315_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5555____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5555_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5555, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5555____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5555_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5555, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5555_FieldInfos[] =
{
	&InternalEnumerator_1_t5555____array_FieldInfo,
	&InternalEnumerator_1_t5555____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26099_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5555____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5555_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26099_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26102_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5555____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5555_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26102_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5555_PropertyInfos[] =
{
	&InternalEnumerator_1_t5555____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5555____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5555_InternalEnumerator_1__ctor_m26097_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5555_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26097_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26097/* method */
	, &InternalEnumerator_1_t5555_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5555_InternalEnumerator_1__ctor_m26097_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t5555_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26098_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26098/* method */
	, &InternalEnumerator_1_t5555_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t5555_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26099_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26099/* method */
	, &InternalEnumerator_1_t5555_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t5555_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26100_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26100/* method */
	, &InternalEnumerator_1_t5555_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t5555_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26101_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26101/* method */
	, &InternalEnumerator_1_t5555_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t5555_il2cpp_TypeInfo;
extern Il2CppType EditState_t676_0_0_0;
extern void* RuntimeInvoker_EditState_t676 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26102_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26102/* method */
	, &InternalEnumerator_1_t5555_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* InternalEnumerator_1_t5555_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26097_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26098_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26099_MethodInfo,
	&InternalEnumerator_1_Dispose_m26100_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26101_MethodInfo,
	&InternalEnumerator_1_get_Current_m26102_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26099_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26101_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26098_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26100_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26102_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5555_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26099_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26101_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26098_MethodInfo,
	&InternalEnumerator_1_Dispose_m26100_MethodInfo,
	&InternalEnumerator_1_get_Current_m26102_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13112_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5555_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t13112_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13112_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5555_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13112_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5555_0_0_0;
extern Il2CppType InternalEnumerator_1_t5555_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5555_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5555_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5555_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5555_MethodInfos/* methods */
	, InternalEnumerator_1_t5555_PropertyInfos/* properties */
	, InternalEnumerator_1_t5555_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5555_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5555_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5555_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5555_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5555_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5555_1_0_0/* this_arg */
	, InternalEnumerator_1_t5555_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5555_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5555)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14790_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>
extern MethodInfo ICollection_1_get_Count_m111711_MethodInfo;
static PropertyInfo ICollection_1_t14790____Count_PropertyInfo = 
{
	&ICollection_1_t14790_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111711_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111712_MethodInfo;
static PropertyInfo ICollection_1_t14790____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14790_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111712_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14790_PropertyInfos[] =
{
	&ICollection_1_t14790____Count_PropertyInfo,
	&ICollection_1_t14790____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14790_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::get_Count()
MethodInfo ICollection_1_get_Count_m111711_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14790_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t14790_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111712_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14790_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14790_ICollection_1_Add_m111713_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EditState_t676_0_0_0},
};
extern TypeInfo ICollection_1_t14790_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::Add(T)
MethodInfo ICollection_1_Add_m111713_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14790_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14790_ICollection_1_Add_m111713_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t14790_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::Clear()
MethodInfo ICollection_1_Clear_m111714_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14790_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14790_ICollection_1_Contains_m111715_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EditState_t676_0_0_0},
};
extern TypeInfo ICollection_1_t14790_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::Contains(T)
MethodInfo ICollection_1_Contains_m111715_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14790_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14790_ICollection_1_Contains_m111715_ParameterInfos/* parameters */
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
extern Il2CppType EditStateU5BU5D_t12744_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14790_ICollection_1_CopyTo_m111716_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &EditStateU5BU5D_t12744_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14790_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111716_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14790_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14790_ICollection_1_CopyTo_m111716_ParameterInfos/* parameters */
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
static ParameterInfo ICollection_1_t14790_ICollection_1_Remove_m111717_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EditState_t676_0_0_0},
};
extern TypeInfo ICollection_1_t14790_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>::Remove(T)
MethodInfo ICollection_1_Remove_m111717_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14790_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14790_ICollection_1_Remove_m111717_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t14790_MethodInfos[] =
{
	&ICollection_1_get_Count_m111711_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111712_MethodInfo,
	&ICollection_1_Add_m111713_MethodInfo,
	&ICollection_1_Clear_m111714_MethodInfo,
	&ICollection_1_Contains_m111715_MethodInfo,
	&ICollection_1_CopyTo_m111716_MethodInfo,
	&ICollection_1_Remove_m111717_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14792_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14790_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14792_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14790_0_0_0;
extern Il2CppType ICollection_1_t14790_1_0_0;
struct ICollection_1_t14790;
extern TypeInfo ICollection_1_t14790_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14790_GenericClass;
TypeInfo ICollection_1_t14790_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14790_MethodInfos/* methods */
	, ICollection_1_t14790_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14790_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14790_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14790_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14790_0_0_0/* byval_arg */
	, &ICollection_1_t14790_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14790_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t14792_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/EditState>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/EditState>
extern TypeInfo IEnumerable_1_t14792_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13112_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/EditState>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111718_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14792_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerable_1_t14792_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111718_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14792_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14792_0_0_0;
extern Il2CppType IEnumerable_1_t14792_1_0_0;
struct IEnumerable_1_t14792;
extern TypeInfo IEnumerable_1_t14792_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14792_GenericClass;
TypeInfo IEnumerable_1_t14792_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14792_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14792_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14792_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14792_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14792_0_0_0/* byval_arg */
	, &IEnumerable_1_t14792_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14792_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14791_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>
extern MethodInfo IList_1_get_Item_m111719_MethodInfo;
extern MethodInfo IList_1_set_Item_m111720_MethodInfo;
static PropertyInfo IList_1_t14791____Item_PropertyInfo = 
{
	&IList_1_t14791_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111719_MethodInfo/* get */
	, &IList_1_set_Item_m111720_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14791_PropertyInfos[] =
{
	&IList_1_t14791____Item_PropertyInfo,
	NULL
};
extern Il2CppType EditState_t676_0_0_0;
static ParameterInfo IList_1_t14791_IList_1_IndexOf_m111721_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EditState_t676_0_0_0},
};
extern TypeInfo IList_1_t14791_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111721_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14791_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14791_IList_1_IndexOf_m111721_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14791_IList_1_Insert_m111722_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &EditState_t676_0_0_0},
};
extern TypeInfo IList_1_t14791_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111722_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14791_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14791_IList_1_Insert_m111722_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14791_IList_1_RemoveAt_m111723_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14791_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111723_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14791_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14791_IList_1_RemoveAt_m111723_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14791_IList_1_get_Item_m111719_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14791_il2cpp_TypeInfo;
extern Il2CppType EditState_t676_0_0_0;
extern void* RuntimeInvoker_EditState_t676_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111719_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14791_il2cpp_TypeInfo/* declaring_type */
	, &EditState_t676_0_0_0/* return_type */
	, RuntimeInvoker_EditState_t676_Int32_t63/* invoker_method */
	, IList_1_t14791_IList_1_get_Item_m111719_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14791_IList_1_set_Item_m111720_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &EditState_t676_0_0_0},
};
extern TypeInfo IList_1_t14791_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111720_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14791_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14791_IList_1_set_Item_m111720_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t14791_MethodInfos[] =
{
	&IList_1_IndexOf_m111721_MethodInfo,
	&IList_1_Insert_m111722_MethodInfo,
	&IList_1_RemoveAt_m111723_MethodInfo,
	&IList_1_get_Item_m111719_MethodInfo,
	&IList_1_set_Item_m111720_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14790_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14792_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14791_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14790_il2cpp_TypeInfo,
	&IEnumerable_1_t14792_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14791_0_0_0;
extern Il2CppType IList_1_t14791_1_0_0;
struct IList_1_t14791;
extern TypeInfo IList_1_t14791_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14791_GenericClass;
extern CustomAttributesCache IList_1_t3846__CustomAttributeCache;
TypeInfo IList_1_t14791_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14791_MethodInfos/* methods */
	, IList_1_t14791_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14791_il2cpp_TypeInfo/* element_class */
	, IList_1_t14791_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3846__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14791_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14791_0_0_0/* byval_arg */
	, &IList_1_t14791_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14791_GenericClass/* generic_class */
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
extern TypeInfo CachedInvokableCall_1_t5556_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.MaskableGraphic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_131MethodDeclarations.h"

// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_130.h"
extern TypeInfo ObjectU5BU5D_t5_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t5556_il2cpp_TypeInfo;
extern TypeInfo MaskableGraphic_t666_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t5557_il2cpp_TypeInfo;
extern TypeInfo Void_t40_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_130MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m26105_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m26107_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.MaskableGraphic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.MaskableGraphic>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.MaskableGraphic>
extern Il2CppType ObjectU5BU5D_t5_0_0_33;
FieldInfo CachedInvokableCall_1_t5556____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t5_0_0_33/* type */
	, &CachedInvokableCall_1_t5556_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t5556, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t5556_FieldInfos[] =
{
	&CachedInvokableCall_1_t5556____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t111_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
extern Il2CppType MaskableGraphic_t666_0_0_0;
static ParameterInfo CachedInvokableCall_1_t5556_CachedInvokableCall_1__ctor_m26103_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t111_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &MaskableGraphic_t666_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t5556_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.MaskableGraphic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m26103_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m16518_gshared/* method */
	, &CachedInvokableCall_1_t5556_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t5556_CachedInvokableCall_1__ctor_m26103_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t5556_CachedInvokableCall_1_Invoke_m26104_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t5_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t5556_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.MaskableGraphic>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m26104_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m16520_gshared/* method */
	, &CachedInvokableCall_1_t5556_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, CachedInvokableCall_1_t5556_CachedInvokableCall_1_Invoke_m26104_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t5556_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m26103_MethodInfo,
	&CachedInvokableCall_1_Invoke_m26104_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m26104_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m26108_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t5556_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&CachedInvokableCall_1_Invoke_m26104_MethodInfo,
	&InvokableCall_1_Find_m26108_MethodInfo,
};
extern Il2CppType UnityAction_1_t5558_0_0_0;
extern TypeInfo UnityAction_1_t5558_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMaskableGraphic_t666_m94325_MethodInfo;
extern TypeInfo MaskableGraphic_t666_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m26110_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m26105_MethodInfo;
extern TypeInfo MaskableGraphic_t666_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m26107_MethodInfo;
static void* CachedInvokableCall_1_t5556_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t5558_0_0_0,
	&UnityAction_1_t5558_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMaskableGraphic_t666_m94325_MethodInfo,
	&MaskableGraphic_t666_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m26110_MethodInfo,
	&InvokableCall_1__ctor_m26105_MethodInfo,
	&MaskableGraphic_t666_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m26107_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t5556_0_0_0;
extern Il2CppType CachedInvokableCall_1_t5556_1_0_0;
extern TypeInfo InvokableCall_1_t5557_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t5556;
extern TypeInfo CachedInvokableCall_1_t5556_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t5556_GenericClass;
TypeInfo CachedInvokableCall_1_t5556_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t5556_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t5556_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t5557_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t5556_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t5556_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t5556_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t5556_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t5556_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t5556_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t5556_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t5556)/* instance_size */
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
extern TypeInfo InvokableCall_1_t5557_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_136.h"
extern TypeInfo InvokableCall_1_t5557_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t5558_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t401_il2cpp_TypeInfo;
extern TypeInfo MaskableGraphic_t666_il2cpp_TypeInfo;
extern TypeInfo Void_t40_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_136MethodDeclarations.h"
extern Il2CppType UnityAction_1_t5558_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m8996_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m385_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m9178_MethodInfo;
extern MethodInfo Delegate_Combine_m4232_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m8995_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1970_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMaskableGraphic_t666_m94325_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m8997_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m26110_MethodInfo;
extern MethodInfo Delegate_get_Target_m9174_MethodInfo;
extern MethodInfo Delegate_get_Method_m9172_MethodInfo;
struct BaseInvokableCall_t2625;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.UI.MaskableGraphic>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.UI.MaskableGraphic>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisMaskableGraphic_t666_m94325(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m90275_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMaskableGraphic_t666_m94325_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>
extern Il2CppType UnityAction_1_t5558_0_0_1;
FieldInfo InvokableCall_1_t5557____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t5558_0_0_1/* type */
	, &InvokableCall_1_t5557_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t5557, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t5557_FieldInfos[] =
{
	&InvokableCall_1_t5557____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
static ParameterInfo InvokableCall_1_t5557_InvokableCall_1__ctor_m26105_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo InvokableCall_1_t5557_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m26105_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m16521_gshared/* method */
	, &InvokableCall_1_t5557_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t5557_InvokableCall_1__ctor_m26105_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t5558_0_0_0;
static ParameterInfo InvokableCall_1_t5557_InvokableCall_1__ctor_m26106_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t5558_0_0_0},
};
extern TypeInfo InvokableCall_1_t5557_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m26106_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m16522_gshared/* method */
	, &InvokableCall_1_t5557_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InvokableCall_1_t5557_InvokableCall_1__ctor_m26106_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t5557_InvokableCall_1_Invoke_m26107_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t5_0_0_0},
};
extern TypeInfo InvokableCall_1_t5557_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m26107_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m16523_gshared/* method */
	, &InvokableCall_1_t5557_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InvokableCall_1_t5557_InvokableCall_1_Invoke_m26107_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t5557_InvokableCall_1_Find_m26108_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo InvokableCall_1_t5557_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m26108_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m16524_gshared/* method */
	, &InvokableCall_1_t5557_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t5557_InvokableCall_1_Find_m26108_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t5557_MethodInfos[] =
{
	&InvokableCall_1__ctor_m26105_MethodInfo,
	&InvokableCall_1__ctor_m26106_MethodInfo,
	&InvokableCall_1_Invoke_m26107_MethodInfo,
	&InvokableCall_1_Find_m26108_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m26107_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m26108_MethodInfo;
static MethodInfo* InvokableCall_1_t5557_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&InvokableCall_1_Invoke_m26107_MethodInfo,
	&InvokableCall_1_Find_m26108_MethodInfo,
};
extern Il2CppType UnityAction_1_t5558_0_0_0;
extern TypeInfo UnityAction_1_t5558_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMaskableGraphic_t666_m94325_MethodInfo;
extern TypeInfo MaskableGraphic_t666_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m26110_MethodInfo;
static void* InvokableCall_1_t5557_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t5558_0_0_0,
	&UnityAction_1_t5558_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMaskableGraphic_t666_m94325_MethodInfo,
	&MaskableGraphic_t666_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m26110_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t5557_0_0_0;
extern Il2CppType InvokableCall_1_t5557_1_0_0;
extern TypeInfo BaseInvokableCall_t2625_il2cpp_TypeInfo;
struct InvokableCall_1_t5557;
extern TypeInfo InvokableCall_1_t5557_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t5557_GenericClass;
TypeInfo InvokableCall_1_t5557_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t5557_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t5557_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t2625_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t5557_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t5557_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t5557_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t5557_0_0_0/* byval_arg */
	, &InvokableCall_1_t5557_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t5557_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t5557_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t5557)/* instance_size */
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
extern TypeInfo UnityAction_1_t5558_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t39_0_0_0;
static ParameterInfo UnityAction_1_t5558_UnityAction_1__ctor_m26109_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t39_0_0_0},
};
extern TypeInfo UnityAction_1_t5558_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_IntPtr_t39 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m26109_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m16525_gshared/* method */
	, &UnityAction_1_t5558_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_IntPtr_t39/* invoker_method */
	, UnityAction_1_t5558_UnityAction_1__ctor_m26109_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t5558_UnityAction_1_Invoke_m26110_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MaskableGraphic_t666_0_0_0},
};
extern TypeInfo UnityAction_1_t5558_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m26110_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m16526_gshared/* method */
	, &UnityAction_1_t5558_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityAction_1_t5558_UnityAction_1_Invoke_m26110_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t5558_UnityAction_1_BeginInvoke_m26111_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MaskableGraphic_t666_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t35_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t5558_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t34_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m26111_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m16527_gshared/* method */
	, &UnityAction_1_t5558_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t34_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t5558_UnityAction_1_BeginInvoke_m26111_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t5558_UnityAction_1_EndInvoke_m26112_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t34_0_0_0},
};
extern TypeInfo UnityAction_1_t5558_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m26112_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m16528_gshared/* method */
	, &UnityAction_1_t5558_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UnityAction_1_t5558_UnityAction_1_EndInvoke_m26112_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t5558_MethodInfos[] =
{
	&UnityAction_1__ctor_m26109_MethodInfo,
	&UnityAction_1_Invoke_m26110_MethodInfo,
	&UnityAction_1_BeginInvoke_m26111_MethodInfo,
	&UnityAction_1_EndInvoke_m26112_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m26110_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m26111_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m26112_MethodInfo;
static MethodInfo* UnityAction_1_t5558_VTable[] =
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
	&UnityAction_1_Invoke_m26110_MethodInfo,
	&UnityAction_1_BeginInvoke_m26111_MethodInfo,
	&UnityAction_1_EndInvoke_m26112_MethodInfo,
};
extern TypeInfo ICloneable_t84_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t85_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t5558_InterfacesOffsets[] = 
{
	{ &ICloneable_t84_il2cpp_TypeInfo, 4},
	{ &ISerializable_t85_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t5558_0_0_0;
extern Il2CppType UnityAction_1_t5558_1_0_0;
extern TypeInfo MulticastDelegate_t38_il2cpp_TypeInfo;
struct UnityAction_1_t5558;
extern TypeInfo UnityAction_1_t5558_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t5558_GenericClass;
TypeInfo UnityAction_1_t5558_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t5558_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t38_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t5558_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t5558_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t5558_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t5558_0_0_0/* byval_arg */
	, &UnityAction_1_t5558_1_0_0/* this_arg */
	, UnityAction_1_t5558_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t5558_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t5558)/* instance_size */
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
extern TypeInfo IEnumerator_1_t13113_il2cpp_TypeInfo;

// UnityEngine.UI.Navigation/Mode
#include "UnityEngine_UI_UnityEngine_UI_Navigation_Mode.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Navigation/Mode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Navigation/Mode>
extern MethodInfo IEnumerator_1_get_Current_m111724_MethodInfo;
static PropertyInfo IEnumerator_1_t13113____Current_PropertyInfo = 
{
	&IEnumerator_1_t13113_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111724_MethodInfo/* get */
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
extern Il2CppType Mode_t685_0_0_0;
extern void* RuntimeInvoker_Mode_t685 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Navigation/Mode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111724_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13113_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerator_1_t13113_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111724_MethodInfo,
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
// System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_348.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5559_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_348MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5559_il2cpp_TypeInfo;
extern TypeInfo Mode_t685_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26118_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5144_MethodInfo;
extern MethodInfo Array_get_Length_m7862_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMode_t685_m94327_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Navigation/Mode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Navigation/Mode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMode_t685_m94327 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisMode_t685_m94327_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26113_MethodInfo;
 void InternalEnumerator_1__ctor_m26113 (InternalEnumerator_1_t5559 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26114_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26114 (InternalEnumerator_1_t5559 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26115_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26115 (InternalEnumerator_1_t5559 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26118(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26118_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Mode_t685_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26116_MethodInfo;
 void InternalEnumerator_1_Dispose_m26116 (InternalEnumerator_1_t5559 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26117_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26117 (InternalEnumerator_1_t5559 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m7862(L_1, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
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
extern MethodInfo InternalEnumerator_1_get_Current_m26118_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m26118 (InternalEnumerator_1_t5559 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t935 * L_1 = (InvalidOperationException_t935 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t935_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5144(L_1, (String_t*) &_stringLiteral2294, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
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
		InvalidOperationException__ctor_m5144(L_3, (String_t*) &_stringLiteral2295, /*hidden argument*/&InvalidOperationException__ctor_m5144_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7862(L_5, /*hidden argument*/&Array_get_Length_m7862_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisMode_t685_m94327(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMode_t685_m94327_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26115_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5559____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5559_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26115_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26118_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5559____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5559_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26118_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t5559_InternalEnumerator_1__ctor_m26113_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5559_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26113_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26113/* method */
	, &InternalEnumerator_1_t5559_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5559_InternalEnumerator_1__ctor_m26113_ParameterInfos/* parameters */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26114_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26114/* method */
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
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26115_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26115/* method */
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
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26116_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26116/* method */
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
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26117_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26117/* method */
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
extern Il2CppType Mode_t685_0_0_0;
extern void* RuntimeInvoker_Mode_t685 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26118_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26118/* method */
	, &InternalEnumerator_1_t5559_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* InternalEnumerator_1_t5559_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26113_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26114_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26115_MethodInfo,
	&InternalEnumerator_1_Dispose_m26116_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26117_MethodInfo,
	&InternalEnumerator_1_get_Current_m26118_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26115_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26117_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26114_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26116_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26118_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5559_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26115_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26117_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26114_MethodInfo,
	&InternalEnumerator_1_Dispose_m26116_MethodInfo,
	&InternalEnumerator_1_get_Current_m26118_MethodInfo,
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
	, NULL/* rgctx_data */
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
extern TypeInfo ICollection_1_t14793_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>
extern MethodInfo ICollection_1_get_Count_m111725_MethodInfo;
static PropertyInfo ICollection_1_t14793____Count_PropertyInfo = 
{
	&ICollection_1_t14793_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111725_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111726_MethodInfo;
static PropertyInfo ICollection_1_t14793____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14793_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111726_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14793_PropertyInfos[] =
{
	&ICollection_1_t14793____Count_PropertyInfo,
	&ICollection_1_t14793____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14793_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::get_Count()
MethodInfo ICollection_1_get_Count_m111725_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14793_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t14793_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111726_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14793_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14793_ICollection_1_Add_m111727_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mode_t685_0_0_0},
};
extern TypeInfo ICollection_1_t14793_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::Add(T)
MethodInfo ICollection_1_Add_m111727_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14793_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, ICollection_1_t14793_ICollection_1_Add_m111727_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t14793_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::Clear()
MethodInfo ICollection_1_Clear_m111728_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14793_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14793_ICollection_1_Contains_m111729_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mode_t685_0_0_0},
};
extern TypeInfo ICollection_1_t14793_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::Contains(T)
MethodInfo ICollection_1_Contains_m111729_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14793_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14793_ICollection_1_Contains_m111729_ParameterInfos/* parameters */
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
extern Il2CppType ModeU5BU5D_t12745_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14793_ICollection_1_CopyTo_m111730_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ModeU5BU5D_t12745_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14793_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111730_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14793_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14793_ICollection_1_CopyTo_m111730_ParameterInfos/* parameters */
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
static ParameterInfo ICollection_1_t14793_ICollection_1_Remove_m111731_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mode_t685_0_0_0},
};
extern TypeInfo ICollection_1_t14793_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>::Remove(T)
MethodInfo ICollection_1_Remove_m111731_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14793_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t14793_ICollection_1_Remove_m111731_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t14793_MethodInfos[] =
{
	&ICollection_1_get_Count_m111725_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111726_MethodInfo,
	&ICollection_1_Add_m111727_MethodInfo,
	&ICollection_1_Clear_m111728_MethodInfo,
	&ICollection_1_Contains_m111729_MethodInfo,
	&ICollection_1_CopyTo_m111730_MethodInfo,
	&ICollection_1_Remove_m111731_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14795_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14793_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14795_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14793_0_0_0;
extern Il2CppType ICollection_1_t14793_1_0_0;
struct ICollection_1_t14793;
extern TypeInfo ICollection_1_t14793_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14793_GenericClass;
TypeInfo ICollection_1_t14793_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14793_MethodInfos/* methods */
	, ICollection_1_t14793_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14793_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14793_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14793_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14793_0_0_0/* byval_arg */
	, &ICollection_1_t14793_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14793_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t14795_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Navigation/Mode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Navigation/Mode>
extern TypeInfo IEnumerable_1_t14795_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13113_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Navigation/Mode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111732_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14795_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerable_1_t14795_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111732_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14795_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14795_0_0_0;
extern Il2CppType IEnumerable_1_t14795_1_0_0;
struct IEnumerable_1_t14795;
extern TypeInfo IEnumerable_1_t14795_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14795_GenericClass;
TypeInfo IEnumerable_1_t14795_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14795_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14795_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14795_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14795_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14795_0_0_0/* byval_arg */
	, &IEnumerable_1_t14795_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14795_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14794_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>
extern MethodInfo IList_1_get_Item_m111733_MethodInfo;
extern MethodInfo IList_1_set_Item_m111734_MethodInfo;
static PropertyInfo IList_1_t14794____Item_PropertyInfo = 
{
	&IList_1_t14794_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111733_MethodInfo/* get */
	, &IList_1_set_Item_m111734_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14794_PropertyInfos[] =
{
	&IList_1_t14794____Item_PropertyInfo,
	NULL
};
extern Il2CppType Mode_t685_0_0_0;
static ParameterInfo IList_1_t14794_IList_1_IndexOf_m111735_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mode_t685_0_0_0},
};
extern TypeInfo IList_1_t14794_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111735_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14794_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14794_IList_1_IndexOf_m111735_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14794_IList_1_Insert_m111736_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Mode_t685_0_0_0},
};
extern TypeInfo IList_1_t14794_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111736_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14794_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14794_IList_1_Insert_m111736_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14794_IList_1_RemoveAt_m111737_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14794_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111737_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14794_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14794_IList_1_RemoveAt_m111737_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14794_IList_1_get_Item_m111733_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14794_il2cpp_TypeInfo;
extern Il2CppType Mode_t685_0_0_0;
extern void* RuntimeInvoker_Mode_t685_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111733_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14794_il2cpp_TypeInfo/* declaring_type */
	, &Mode_t685_0_0_0/* return_type */
	, RuntimeInvoker_Mode_t685_Int32_t63/* invoker_method */
	, IList_1_t14794_IList_1_get_Item_m111733_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14794_IList_1_set_Item_m111734_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Mode_t685_0_0_0},
};
extern TypeInfo IList_1_t14794_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111734_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14794_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t14794_IList_1_set_Item_m111734_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t14794_MethodInfos[] =
{
	&IList_1_IndexOf_m111735_MethodInfo,
	&IList_1_Insert_m111736_MethodInfo,
	&IList_1_RemoveAt_m111737_MethodInfo,
	&IList_1_get_Item_m111733_MethodInfo,
	&IList_1_set_Item_m111734_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14793_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14795_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14794_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14793_il2cpp_TypeInfo,
	&IEnumerable_1_t14795_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14794_0_0_0;
extern Il2CppType IList_1_t14794_1_0_0;
struct IList_1_t14794;
extern TypeInfo IList_1_t14794_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14794_GenericClass;
extern CustomAttributesCache IList_1_t3846__CustomAttributeCache;
TypeInfo IList_1_t14794_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14794_MethodInfos/* methods */
	, IList_1_t14794_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14794_il2cpp_TypeInfo/* element_class */
	, IList_1_t14794_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3846__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14794_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14794_0_0_0/* byval_arg */
	, &IList_1_t14794_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14794_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13114_il2cpp_TypeInfo;

// UnityEngine.UI.RawImage
#include "UnityEngine_UI_UnityEngine_UI_RawImage.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.RawImage>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.RawImage>
extern MethodInfo IEnumerator_1_get_Current_m111738_MethodInfo;
static PropertyInfo IEnumerator_1_t13114____Current_PropertyInfo = 
{
	&IEnumerator_1_t13114_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m111738_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13114_PropertyInfos[] =
{
	&IEnumerator_1_t13114____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t13114_il2cpp_TypeInfo;
extern Il2CppType RawImage_t687_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.RawImage>::get_Current()
MethodInfo IEnumerator_1_get_Current_m111738_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13114_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* IEnumerator_1_t13114_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m111738_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t13114_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13114_0_0_0;
extern Il2CppType IEnumerator_1_t13114_1_0_0;
struct IEnumerator_1_t13114;
extern TypeInfo IEnumerator_1_t13114_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t13114_GenericClass;
TypeInfo IEnumerator_1_t13114_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13114_MethodInfos/* methods */
	, IEnumerator_1_t13114_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13114_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13114_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13114_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13114_0_0_0/* byval_arg */
	, &IEnumerator_1_t13114_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13114_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t5560_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_349MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t5560_il2cpp_TypeInfo;
extern TypeInfo RawImage_t687_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t935_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26124_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5144_MethodInfo;
extern MethodInfo Array_get_Length_m7862_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisRawImage_t687_m94338_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.RawImage>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.RawImage>(System.Int32)
#define Array_InternalArray__get_Item_TisRawImage_t687_m94338(__this, p0, method) (RawImage_t687 *)Array_InternalArray__get_Item_TisObject_t_m89689_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisRawImage_t687_m94338_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5560____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5560_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5560, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t5560____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t5560_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5560, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5560_FieldInfos[] =
{
	&InternalEnumerator_1_t5560____array_FieldInfo,
	&InternalEnumerator_1_t5560____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26121_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5560____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5560_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26121_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m26124_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5560____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5560_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26124_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5560_PropertyInfos[] =
{
	&InternalEnumerator_1_t5560____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5560____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5560_InternalEnumerator_1__ctor_m26119_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t5560_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26119_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m15497_gshared/* method */
	, &InternalEnumerator_1_t5560_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InternalEnumerator_1_t5560_InternalEnumerator_1__ctor_m26119_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t5560_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26120_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m15498_gshared/* method */
	, &InternalEnumerator_1_t5560_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t5560_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26121_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15499_gshared/* method */
	, &InternalEnumerator_1_t5560_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t5560_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26122_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m15500_gshared/* method */
	, &InternalEnumerator_1_t5560_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t5560_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26123_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m15501_gshared/* method */
	, &InternalEnumerator_1_t5560_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t5560_il2cpp_TypeInfo;
extern Il2CppType RawImage_t687_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26124_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m15502_gshared/* method */
	, &InternalEnumerator_1_t5560_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* InternalEnumerator_1_t5560_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26119_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26120_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26121_MethodInfo,
	&InternalEnumerator_1_Dispose_m26122_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26123_MethodInfo,
	&InternalEnumerator_1_get_Current_m26124_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2262_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2263_MethodInfo;
extern MethodInfo ValueType_ToString_m2264_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26121_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26123_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26120_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26122_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26124_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5560_VTable[] =
{
	&ValueType_Equals_m2262_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&ValueType_GetHashCode_m2263_MethodInfo,
	&ValueType_ToString_m2264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26121_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26123_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26120_MethodInfo,
	&InternalEnumerator_1_Dispose_m26122_MethodInfo,
	&InternalEnumerator_1_get_Current_m26124_MethodInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13114_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t5560_InterfacesTypeInfos[] = 
{
	&IEnumerator_t60_il2cpp_TypeInfo,
	&IDisposable_t89_il2cpp_TypeInfo,
	&IEnumerator_1_t13114_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t60_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t89_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13114_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5560_InterfacesOffsets[] = 
{
	{ &IEnumerator_t60_il2cpp_TypeInfo, 4},
	{ &IDisposable_t89_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13114_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m26124_MethodInfo;
extern TypeInfo RawImage_t687_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisRawImage_t687_m94338_MethodInfo;
static void* InternalEnumerator_1_t5560_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26124_MethodInfo,
	&RawImage_t687_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisRawImage_t687_m94338_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5560_0_0_0;
extern Il2CppType InternalEnumerator_1_t5560_1_0_0;
extern TypeInfo ValueType_t454_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t5560_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5560_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5560_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5560_MethodInfos/* methods */
	, InternalEnumerator_1_t5560_PropertyInfos/* properties */
	, InternalEnumerator_1_t5560_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t454_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5560_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5560_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5560_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5560_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5560_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5560_1_0_0/* this_arg */
	, InternalEnumerator_1_t5560_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5560_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t5560_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5560)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14796_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>
extern MethodInfo ICollection_1_get_Count_m111739_MethodInfo;
static PropertyInfo ICollection_1_t14796____Count_PropertyInfo = 
{
	&ICollection_1_t14796_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m111739_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m111740_MethodInfo;
static PropertyInfo ICollection_1_t14796____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14796_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m111740_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14796_PropertyInfos[] =
{
	&ICollection_1_t14796____Count_PropertyInfo,
	&ICollection_1_t14796____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t14796_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::get_Count()
MethodInfo ICollection_1_get_Count_m111739_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14796_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t14796_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m111740_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14796_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14796_ICollection_1_Add_m111741_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RawImage_t687_0_0_0},
};
extern TypeInfo ICollection_1_t14796_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::Add(T)
MethodInfo ICollection_1_Add_m111741_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14796_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, ICollection_1_t14796_ICollection_1_Add_m111741_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t14796_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::Clear()
MethodInfo ICollection_1_Clear_m111742_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14796_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo ICollection_1_t14796_ICollection_1_Contains_m111743_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RawImage_t687_0_0_0},
};
extern TypeInfo ICollection_1_t14796_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::Contains(T)
MethodInfo ICollection_1_Contains_m111743_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14796_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t14796_ICollection_1_Contains_m111743_ParameterInfos/* parameters */
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
extern Il2CppType RawImageU5BU5D_t12746_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t14796_ICollection_1_CopyTo_m111744_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &RawImageU5BU5D_t12746_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo ICollection_1_t14796_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m111744_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14796_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t14796_ICollection_1_CopyTo_m111744_ParameterInfos/* parameters */
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
static ParameterInfo ICollection_1_t14796_ICollection_1_Remove_m111745_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RawImage_t687_0_0_0},
};
extern TypeInfo ICollection_1_t14796_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>::Remove(T)
MethodInfo ICollection_1_Remove_m111745_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14796_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t14796_ICollection_1_Remove_m111745_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t14796_MethodInfos[] =
{
	&ICollection_1_get_Count_m111739_MethodInfo,
	&ICollection_1_get_IsReadOnly_m111740_MethodInfo,
	&ICollection_1_Add_m111741_MethodInfo,
	&ICollection_1_Clear_m111742_MethodInfo,
	&ICollection_1_Contains_m111743_MethodInfo,
	&ICollection_1_CopyTo_m111744_MethodInfo,
	&ICollection_1_Remove_m111745_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14798_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14796_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&IEnumerable_1_t14798_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14796_0_0_0;
extern Il2CppType ICollection_1_t14796_1_0_0;
struct ICollection_1_t14796;
extern TypeInfo ICollection_1_t14796_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t14796_GenericClass;
TypeInfo ICollection_1_t14796_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14796_MethodInfos/* methods */
	, ICollection_1_t14796_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14796_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14796_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14796_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14796_0_0_0/* byval_arg */
	, &ICollection_1_t14796_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14796_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t14798_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.RawImage>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.RawImage>
extern TypeInfo IEnumerable_1_t14798_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t13114_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.RawImage>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m111746_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14798_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13114_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t14798_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m111746_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t14798_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14798_0_0_0;
extern Il2CppType IEnumerable_1_t14798_1_0_0;
struct IEnumerable_1_t14798;
extern TypeInfo IEnumerable_1_t14798_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t14798_GenericClass;
TypeInfo IEnumerable_1_t14798_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14798_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14798_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14798_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14798_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14798_0_0_0/* byval_arg */
	, &IEnumerable_1_t14798_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14798_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14797_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>
extern MethodInfo IList_1_get_Item_m111747_MethodInfo;
extern MethodInfo IList_1_set_Item_m111748_MethodInfo;
static PropertyInfo IList_1_t14797____Item_PropertyInfo = 
{
	&IList_1_t14797_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m111747_MethodInfo/* get */
	, &IList_1_set_Item_m111748_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14797_PropertyInfos[] =
{
	&IList_1_t14797____Item_PropertyInfo,
	NULL
};
extern Il2CppType RawImage_t687_0_0_0;
static ParameterInfo IList_1_t14797_IList_1_IndexOf_m111749_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RawImage_t687_0_0_0},
};
extern TypeInfo IList_1_t14797_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>::IndexOf(T)
MethodInfo IList_1_IndexOf_m111749_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14797_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t14797_IList_1_IndexOf_m111749_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14797_IList_1_Insert_m111750_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &RawImage_t687_0_0_0},
};
extern TypeInfo IList_1_t14797_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m111750_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14797_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Object_t/* invoker_method */
	, IList_1_t14797_IList_1_Insert_m111750_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14797_IList_1_RemoveAt_m111751_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14797_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m111751_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14797_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, IList_1_t14797_IList_1_RemoveAt_m111751_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14797_IList_1_get_Item_m111747_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo IList_1_t14797_il2cpp_TypeInfo;
extern Il2CppType RawImage_t687_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m111747_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14797_il2cpp_TypeInfo/* declaring_type */
	, &RawImage_t687_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t14797_IList_1_get_Item_m111747_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t14797_IList_1_set_Item_m111748_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &RawImage_t687_0_0_0},
};
extern TypeInfo IList_1_t14797_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m111748_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14797_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63_Object_t/* invoker_method */
	, IList_1_t14797_IList_1_set_Item_m111748_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t14797_MethodInfos[] =
{
	&IList_1_IndexOf_m111749_MethodInfo,
	&IList_1_Insert_m111750_MethodInfo,
	&IList_1_RemoveAt_m111751_MethodInfo,
	&IList_1_get_Item_m111747_MethodInfo,
	&IList_1_set_Item_m111748_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t428_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t14796_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14798_il2cpp_TypeInfo;
static TypeInfo* IList_1_t14797_InterfacesTypeInfos[] = 
{
	&IEnumerable_t428_il2cpp_TypeInfo,
	&ICollection_1_t14796_il2cpp_TypeInfo,
	&IEnumerable_1_t14798_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14797_0_0_0;
extern Il2CppType IList_1_t14797_1_0_0;
struct IList_1_t14797;
extern TypeInfo IList_1_t14797_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t14797_GenericClass;
extern CustomAttributesCache IList_1_t3846__CustomAttributeCache;
TypeInfo IList_1_t14797_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14797_MethodInfos/* methods */
	, IList_1_t14797_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14797_il2cpp_TypeInfo/* element_class */
	, IList_1_t14797_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3846__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14797_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14797_0_0_0/* byval_arg */
	, &IList_1_t14797_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14797_GenericClass/* generic_class */
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
extern TypeInfo CachedInvokableCall_1_t5561_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.RawImage>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_132MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_131.h"
extern TypeInfo ObjectU5BU5D_t5_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t5561_il2cpp_TypeInfo;
extern TypeInfo RawImage_t687_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t5562_il2cpp_TypeInfo;
extern TypeInfo Void_t40_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_131MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m26127_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m26129_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.RawImage>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.RawImage>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.RawImage>
extern Il2CppType ObjectU5BU5D_t5_0_0_33;
FieldInfo CachedInvokableCall_1_t5561____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t5_0_0_33/* type */
	, &CachedInvokableCall_1_t5561_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t5561, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t5561_FieldInfos[] =
{
	&CachedInvokableCall_1_t5561____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t111_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
extern Il2CppType RawImage_t687_0_0_0;
static ParameterInfo CachedInvokableCall_1_t5561_CachedInvokableCall_1__ctor_m26125_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t111_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &RawImage_t687_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t5561_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.RawImage>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m26125_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m16518_gshared/* method */
	, &CachedInvokableCall_1_t5561_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t5561_CachedInvokableCall_1__ctor_m26125_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t5561_CachedInvokableCall_1_Invoke_m26126_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t5_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t5561_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.RawImage>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m26126_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m16520_gshared/* method */
	, &CachedInvokableCall_1_t5561_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, CachedInvokableCall_1_t5561_CachedInvokableCall_1_Invoke_m26126_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t5561_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m26125_MethodInfo,
	&CachedInvokableCall_1_Invoke_m26126_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m26126_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m26130_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t5561_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&CachedInvokableCall_1_Invoke_m26126_MethodInfo,
	&InvokableCall_1_Find_m26130_MethodInfo,
};
extern Il2CppType UnityAction_1_t5563_0_0_0;
extern TypeInfo UnityAction_1_t5563_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisRawImage_t687_m94348_MethodInfo;
extern TypeInfo RawImage_t687_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m26132_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m26127_MethodInfo;
extern TypeInfo RawImage_t687_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m26129_MethodInfo;
static void* CachedInvokableCall_1_t5561_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t5563_0_0_0,
	&UnityAction_1_t5563_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisRawImage_t687_m94348_MethodInfo,
	&RawImage_t687_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m26132_MethodInfo,
	&InvokableCall_1__ctor_m26127_MethodInfo,
	&RawImage_t687_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m26129_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t5561_0_0_0;
extern Il2CppType CachedInvokableCall_1_t5561_1_0_0;
extern TypeInfo InvokableCall_1_t5562_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t5561;
extern TypeInfo CachedInvokableCall_1_t5561_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t5561_GenericClass;
TypeInfo CachedInvokableCall_1_t5561_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t5561_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t5561_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t5562_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t5561_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t5561_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t5561_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t5561_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t5561_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t5561_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t5561_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t5561)/* instance_size */
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
extern TypeInfo InvokableCall_1_t5562_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<UnityEngine.UI.RawImage>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_137.h"
extern TypeInfo InvokableCall_1_t5562_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t5563_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t401_il2cpp_TypeInfo;
extern TypeInfo RawImage_t687_il2cpp_TypeInfo;
extern TypeInfo Void_t40_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.UI.RawImage>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_137MethodDeclarations.h"
extern Il2CppType UnityAction_1_t5563_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m8996_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m385_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m9178_MethodInfo;
extern MethodInfo Delegate_Combine_m4232_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m8995_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1970_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisRawImage_t687_m94348_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m8997_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m26132_MethodInfo;
extern MethodInfo Delegate_get_Target_m9174_MethodInfo;
extern MethodInfo Delegate_get_Method_m9172_MethodInfo;
struct BaseInvokableCall_t2625;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.UI.RawImage>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.UI.RawImage>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisRawImage_t687_m94348(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m90275_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisRawImage_t687_m94348_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>
extern Il2CppType UnityAction_1_t5563_0_0_1;
FieldInfo InvokableCall_1_t5562____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t5563_0_0_1/* type */
	, &InvokableCall_1_t5562_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t5562, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t5562_FieldInfos[] =
{
	&InvokableCall_1_t5562____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t292_0_0_0;
static ParameterInfo InvokableCall_1_t5562_InvokableCall_1__ctor_m26127_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo InvokableCall_1_t5562_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m26127_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m16521_gshared/* method */
	, &InvokableCall_1_t5562_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t5562_InvokableCall_1__ctor_m26127_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t5563_0_0_0;
static ParameterInfo InvokableCall_1_t5562_InvokableCall_1__ctor_m26128_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t5563_0_0_0},
};
extern TypeInfo InvokableCall_1_t5562_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m26128_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m16522_gshared/* method */
	, &InvokableCall_1_t5562_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InvokableCall_1_t5562_InvokableCall_1__ctor_m26128_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t5562_InvokableCall_1_Invoke_m26129_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t5_0_0_0},
};
extern TypeInfo InvokableCall_1_t5562_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m26129_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m16523_gshared/* method */
	, &InvokableCall_1_t5562_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, InvokableCall_1_t5562_InvokableCall_1_Invoke_m26129_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t5562_InvokableCall_1_Find_m26130_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t292_0_0_0},
};
extern TypeInfo InvokableCall_1_t5562_il2cpp_TypeInfo;
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m26130_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m16524_gshared/* method */
	, &InvokableCall_1_t5562_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t5562_InvokableCall_1_Find_m26130_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t5562_MethodInfos[] =
{
	&InvokableCall_1__ctor_m26127_MethodInfo,
	&InvokableCall_1__ctor_m26128_MethodInfo,
	&InvokableCall_1_Invoke_m26129_MethodInfo,
	&InvokableCall_1_Find_m26130_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m26129_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m26130_MethodInfo;
static MethodInfo* InvokableCall_1_t5562_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&InvokableCall_1_Invoke_m26129_MethodInfo,
	&InvokableCall_1_Find_m26130_MethodInfo,
};
extern Il2CppType UnityAction_1_t5563_0_0_0;
extern TypeInfo UnityAction_1_t5563_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisRawImage_t687_m94348_MethodInfo;
extern TypeInfo RawImage_t687_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m26132_MethodInfo;
static void* InvokableCall_1_t5562_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t5563_0_0_0,
	&UnityAction_1_t5563_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisRawImage_t687_m94348_MethodInfo,
	&RawImage_t687_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m26132_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t5562_0_0_0;
extern Il2CppType InvokableCall_1_t5562_1_0_0;
extern TypeInfo BaseInvokableCall_t2625_il2cpp_TypeInfo;
struct InvokableCall_1_t5562;
extern TypeInfo InvokableCall_1_t5562_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t5562_GenericClass;
TypeInfo InvokableCall_1_t5562_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t5562_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t5562_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t2625_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t5562_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t5562_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t5562_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t5562_0_0_0/* byval_arg */
	, &InvokableCall_1_t5562_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t5562_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t5562_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t5562)/* instance_size */
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
