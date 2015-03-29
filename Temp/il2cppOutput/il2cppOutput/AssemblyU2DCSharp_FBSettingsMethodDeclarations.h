#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FBSettings
struct FBSettings_t161;
// System.String[]
struct StringU5BU5D_t4;
// System.String
struct String_t;

// System.Void FBSettings::.ctor()
 void FBSettings__ctor_m814 (FBSettings_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBSettings FBSettings::get_Instance()
 FBSettings_t161 * FBSettings_get_Instance_m815 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::SetAppIndex(System.Int32)
 void FBSettings_SetAppIndex_m816 (FBSettings_t161 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FBSettings::get_SelectedAppIndex()
 int32_t FBSettings_get_SelectedAppIndex_m817 (FBSettings_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::SetAppId(System.Int32,System.String)
 void FBSettings_SetAppId_m818 (FBSettings_t161 * __this, int32_t ___index, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] FBSettings::get_AppIds()
 StringU5BU5D_t4* FBSettings_get_AppIds_m819 (FBSettings_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_AppIds(System.String[])
 void FBSettings_set_AppIds_m820 (FBSettings_t161 * __this, StringU5BU5D_t4* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::SetAppLabel(System.Int32,System.String)
 void FBSettings_SetAppLabel_m821 (FBSettings_t161 * __this, int32_t ___index, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] FBSettings::get_AppLabels()
 StringU5BU5D_t4* FBSettings_get_AppLabels_m822 (FBSettings_t161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_AppLabels(System.String[])
 void FBSettings_set_AppLabels_m823 (FBSettings_t161 * __this, StringU5BU5D_t4* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] FBSettings::get_AllAppIds()
 StringU5BU5D_t4* FBSettings_get_AllAppIds_m824 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBSettings::get_AppId()
 String_t* FBSettings_get_AppId_m825 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_IsValidAppId()
 bool FBSettings_get_IsValidAppId_m826 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_Cookie()
 bool FBSettings_get_Cookie_m827 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_Cookie(System.Boolean)
 void FBSettings_set_Cookie_m828 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_Logging()
 bool FBSettings_get_Logging_m829 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_Logging(System.Boolean)
 void FBSettings_set_Logging_m830 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_Status()
 bool FBSettings_get_Status_m831 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_Status(System.Boolean)
 void FBSettings_set_Status_m832 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_Xfbml()
 bool FBSettings_get_Xfbml_m833 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_Xfbml(System.Boolean)
 void FBSettings_set_Xfbml_m834 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBSettings::get_IosURLSuffix()
 String_t* FBSettings_get_IosURLSuffix_m835 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_IosURLSuffix(System.String)
 void FBSettings_set_IosURLSuffix_m836 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBSettings::get_ChannelUrl()
 String_t* FBSettings_get_ChannelUrl_m837 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_FrictionlessRequests()
 bool FBSettings_get_FrictionlessRequests_m838 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_FrictionlessRequests(System.Boolean)
 void FBSettings_set_FrictionlessRequests_m839 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::DirtyEditor()
 void FBSettings_DirtyEditor_m840 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
