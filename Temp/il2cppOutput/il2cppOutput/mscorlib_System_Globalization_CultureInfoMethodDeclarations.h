#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.CultureInfo
struct CultureInfo_t872;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_t3220;
// System.Globalization.CompareInfo
struct CompareInfo_t3287;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t870;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t954;
// System.Object
struct Object_t;
// System.Type
struct Type_t;

// System.Void System.Globalization.CultureInfo::.ctor(System.Int32)
 void CultureInfo__ctor_m11867 (CultureInfo_t872 * __this, int32_t ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean)
 void CultureInfo__ctor_m11868 (CultureInfo_t872 * __this, int32_t ___culture, bool ___useUserOverride, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean,System.Boolean)
 void CultureInfo__ctor_m11869 (CultureInfo_t872 * __this, int32_t ___culture, bool ___useUserOverride, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String)
 void CultureInfo__ctor_m4755 (CultureInfo_t872 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String,System.Boolean)
 void CultureInfo__ctor_m11870 (CultureInfo_t872 * __this, String_t* ___name, bool ___useUserOverride, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String,System.Boolean,System.Boolean)
 void CultureInfo__ctor_m11871 (CultureInfo_t872 * __this, String_t* ___name, bool ___useUserOverride, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor()
 void CultureInfo__ctor_m11872 (CultureInfo_t872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.cctor()
 void CultureInfo__cctor_m11873 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
 CultureInfo_t872 * CultureInfo_get_InvariantCulture_m4725 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
 CultureInfo_t872 * CultureInfo_get_CurrentCulture_m11874 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentCulture()
 CultureInfo_t872 * CultureInfo_ConstructCurrentCulture_m11875 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::get_LCID()
 int32_t CultureInfo_get_LCID_m11876 (CultureInfo_t872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_Name()
 String_t* CultureInfo_get_Name_m11877 (CultureInfo_t872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_Parent()
 CultureInfo_t872 * CultureInfo_get_Parent_m11878 (CultureInfo_t872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo()
 TextInfo_t3220 * CultureInfo_get_TextInfo_m11879 (CultureInfo_t872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_IcuName()
 String_t* CultureInfo_get_IcuName_m11880 (CultureInfo_t872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::Equals(System.Object)
 bool CultureInfo_Equals_m11881 (CultureInfo_t872 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::GetHashCode()
 int32_t CultureInfo_GetHashCode_m11882 (CultureInfo_t872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::ToString()
 String_t* CultureInfo_ToString_m11883 (CultureInfo_t872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo()
 CompareInfo_t3287 * CultureInfo_get_CompareInfo_m11884 (CultureInfo_t872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsNeutralCulture()
 bool CultureInfo_get_IsNeutralCulture_m11885 (CultureInfo_t872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::CheckNeutral()
 void CultureInfo_CheckNeutral_m11886 (CultureInfo_t872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat()
 NumberFormatInfo_t870 * CultureInfo_get_NumberFormat_m4756 (CultureInfo_t872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.CultureInfo::get_DateTimeFormat()
 DateTimeFormatInfo_t954 * CultureInfo_get_DateTimeFormat_m11887 (CultureInfo_t872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsReadOnly()
 bool CultureInfo_get_IsReadOnly_m11888 (CultureInfo_t872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.CultureInfo::GetFormat(System.Type)
 Object_t * CultureInfo_GetFormat_m11889 (CultureInfo_t872 * __this, Type_t * ___formatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::Construct()
 void CultureInfo_Construct_m11890 (CultureInfo_t872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromName(System.String)
 bool CultureInfo_ConstructInternalLocaleFromName_m11891 (CultureInfo_t872 * __this, String_t* ___locale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromLcid(System.Int32)
 bool CultureInfo_ConstructInternalLocaleFromLcid_m11892 (CultureInfo_t872 * __this, int32_t ___lcid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromCurrentLocale(System.Globalization.CultureInfo)
 bool CultureInfo_ConstructInternalLocaleFromCurrentLocale_m11893 (Object_t * __this/* static, unused */, CultureInfo_t872 * ___ci, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_lcid(System.Int32)
 bool CultureInfo_construct_internal_locale_from_lcid_m11894 (CultureInfo_t872 * __this, int32_t ___lcid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_name(System.String)
 bool CultureInfo_construct_internal_locale_from_name_m11895 (CultureInfo_t872 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_current_locale(System.Globalization.CultureInfo)
 bool CultureInfo_construct_internal_locale_from_current_locale_m11896 (Object_t * __this/* static, unused */, CultureInfo_t872 * ___ci, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_datetime_format()
 void CultureInfo_construct_datetime_format_m11897 (CultureInfo_t872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_number_format()
 void CultureInfo_construct_number_format_m11898 (CultureInfo_t872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::ConstructInvariant(System.Boolean)
 void CultureInfo_ConstructInvariant_m11899 (CultureInfo_t872 * __this, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::CreateTextInfo(System.Boolean)
 TextInfo_t3220 * CultureInfo_CreateTextInfo_m11900 (CultureInfo_t872 * __this, bool ___readOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::CreateCulture(System.String,System.Boolean)
 CultureInfo_t872 * CultureInfo_CreateCulture_m11901 (Object_t * __this/* static, unused */, String_t* ___name, bool ___reference, MethodInfo* method) IL2CPP_METHOD_ATTR;
