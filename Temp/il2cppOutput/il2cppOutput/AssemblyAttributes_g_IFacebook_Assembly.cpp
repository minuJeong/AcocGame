#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo FBBuildVersionAttribute_t426_il2cpp_TypeInfo;
// Facebook.FBBuildVersionAttribute
#include "IFacebook_Facebook_FBBuildVersionAttribute.h"
// Facebook.FBBuildVersionAttribute
#include "IFacebook_Facebook_FBBuildVersionAttributeMethodDeclarations.h"
extern MethodInfo FBBuildVersionAttribute__ctor_m4630_MethodInfo;
extern TypeInfo RuntimeCompatibilityAttribute_t113_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
extern MethodInfo RuntimeCompatibilityAttribute__ctor_m652_MethodInfo;
void g_IFacebook_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FBBuildVersionAttribute_t426 * tmp;
		tmp = (FBBuildVersionAttribute_t426 *)il2cpp_codegen_object_new (&FBBuildVersionAttribute_t426_il2cpp_TypeInfo);
		FBBuildVersionAttribute__ctor_m4630(tmp, il2cpp_codegen_string_new_wrapper("6.0.0"), il2cpp_codegen_string_new_wrapper("140805.da738911cf62c00"), &FBBuildVersionAttribute__ctor_m4630_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t113 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t113 *)il2cpp_codegen_object_new (&RuntimeCompatibilityAttribute_t113_il2cpp_TypeInfo);
		RuntimeCompatibilityAttribute__ctor_m652(tmp, &RuntimeCompatibilityAttribute__ctor_m652_MethodInfo);
		extern MethodInfo RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m653_MethodInfo;
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m653(tmp, true, &RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m653_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_IFacebook_Assembly__CustomAttributeCache = {
2,
NULL,
&g_IFacebook_Assembly_CustomAttributesCacheGenerator
};
