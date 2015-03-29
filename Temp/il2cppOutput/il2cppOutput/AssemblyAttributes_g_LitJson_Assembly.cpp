#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo RuntimeCompatibilityAttribute_t113_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
extern MethodInfo RuntimeCompatibilityAttribute__ctor_m652_MethodInfo;
extern TypeInfo CLSCompliantAttribute_t980_il2cpp_TypeInfo;
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttribute.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttributeMethodDeclarations.h"
extern MethodInfo CLSCompliantAttribute__ctor_m5306_MethodInfo;
extern TypeInfo AssemblyTitleAttribute_t844_il2cpp_TypeInfo;
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"
extern MethodInfo AssemblyTitleAttribute__ctor_m4598_MethodInfo;
extern TypeInfo AssemblyDescriptionAttribute_t845_il2cpp_TypeInfo;
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"
extern MethodInfo AssemblyDescriptionAttribute__ctor_m4599_MethodInfo;
extern TypeInfo AssemblyConfigurationAttribute_t846_il2cpp_TypeInfo;
// System.Reflection.AssemblyConfigurationAttribute
#include "mscorlib_System_Reflection_AssemblyConfigurationAttribute.h"
// System.Reflection.AssemblyConfigurationAttribute
#include "mscorlib_System_Reflection_AssemblyConfigurationAttributeMethodDeclarations.h"
extern MethodInfo AssemblyConfigurationAttribute__ctor_m4600_MethodInfo;
extern TypeInfo AssemblyCompanyAttribute_t847_il2cpp_TypeInfo;
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"
extern MethodInfo AssemblyCompanyAttribute__ctor_m4601_MethodInfo;
extern TypeInfo AssemblyProductAttribute_t848_il2cpp_TypeInfo;
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
extern MethodInfo AssemblyProductAttribute__ctor_m4602_MethodInfo;
extern TypeInfo AssemblyCopyrightAttribute_t849_il2cpp_TypeInfo;
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"
extern MethodInfo AssemblyCopyrightAttribute__ctor_m4603_MethodInfo;
extern TypeInfo AssemblyTrademarkAttribute_t853_il2cpp_TypeInfo;
// System.Reflection.AssemblyTrademarkAttribute
#include "mscorlib_System_Reflection_AssemblyTrademarkAttribute.h"
// System.Reflection.AssemblyTrademarkAttribute
#include "mscorlib_System_Reflection_AssemblyTrademarkAttributeMethodDeclarations.h"
extern MethodInfo AssemblyTrademarkAttribute__ctor_m4607_MethodInfo;
void g_LitJson_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		RuntimeCompatibilityAttribute_t113 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t113 *)il2cpp_codegen_object_new (&RuntimeCompatibilityAttribute_t113_il2cpp_TypeInfo);
		RuntimeCompatibilityAttribute__ctor_m652(tmp, &RuntimeCompatibilityAttribute__ctor_m652_MethodInfo);
		extern MethodInfo RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m653_MethodInfo;
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m653(tmp, true, &RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m653_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t980 * tmp;
		tmp = (CLSCompliantAttribute_t980 *)il2cpp_codegen_object_new (&CLSCompliantAttribute_t980_il2cpp_TypeInfo);
		CLSCompliantAttribute__ctor_m5306(tmp, true, &CLSCompliantAttribute__ctor_m5306_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t844 * tmp;
		tmp = (AssemblyTitleAttribute_t844 *)il2cpp_codegen_object_new (&AssemblyTitleAttribute_t844_il2cpp_TypeInfo);
		AssemblyTitleAttribute__ctor_m4598(tmp, il2cpp_codegen_string_new_wrapper("LitJson"), &AssemblyTitleAttribute__ctor_m4598_MethodInfo);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t845 * tmp;
		tmp = (AssemblyDescriptionAttribute_t845 *)il2cpp_codegen_object_new (&AssemblyDescriptionAttribute_t845_il2cpp_TypeInfo);
		AssemblyDescriptionAttribute__ctor_m4599(tmp, il2cpp_codegen_string_new_wrapper("LitJSON library"), &AssemblyDescriptionAttribute__ctor_m4599_MethodInfo);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		AssemblyConfigurationAttribute_t846 * tmp;
		tmp = (AssemblyConfigurationAttribute_t846 *)il2cpp_codegen_object_new (&AssemblyConfigurationAttribute_t846_il2cpp_TypeInfo);
		AssemblyConfigurationAttribute__ctor_m4600(tmp, il2cpp_codegen_string_new_wrapper(""), &AssemblyConfigurationAttribute__ctor_m4600_MethodInfo);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t847 * tmp;
		tmp = (AssemblyCompanyAttribute_t847 *)il2cpp_codegen_object_new (&AssemblyCompanyAttribute_t847_il2cpp_TypeInfo);
		AssemblyCompanyAttribute__ctor_m4601(tmp, il2cpp_codegen_string_new_wrapper(""), &AssemblyCompanyAttribute__ctor_m4601_MethodInfo);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t848 * tmp;
		tmp = (AssemblyProductAttribute_t848 *)il2cpp_codegen_object_new (&AssemblyProductAttribute_t848_il2cpp_TypeInfo);
		AssemblyProductAttribute__ctor_m4602(tmp, il2cpp_codegen_string_new_wrapper("LitJSON"), &AssemblyProductAttribute__ctor_m4602_MethodInfo);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCopyrightAttribute_t849 * tmp;
		tmp = (AssemblyCopyrightAttribute_t849 *)il2cpp_codegen_object_new (&AssemblyCopyrightAttribute_t849_il2cpp_TypeInfo);
		AssemblyCopyrightAttribute__ctor_m4603(tmp, il2cpp_codegen_string_new_wrapper("The authors disclaim copyright to this source code"), &AssemblyCopyrightAttribute__ctor_m4603_MethodInfo);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTrademarkAttribute_t853 * tmp;
		tmp = (AssemblyTrademarkAttribute_t853 *)il2cpp_codegen_object_new (&AssemblyTrademarkAttribute_t853_il2cpp_TypeInfo);
		AssemblyTrademarkAttribute__ctor_m4607(tmp, il2cpp_codegen_string_new_wrapper(""), &AssemblyTrademarkAttribute__ctor_m4607_MethodInfo);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_LitJson_Assembly__CustomAttributeCache = {
9,
NULL,
&g_LitJson_Assembly_CustomAttributesCacheGenerator
};
