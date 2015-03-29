#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.UriParser
#include "System_System_UriParser.h"
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
extern TypeInfo UriParser_t2825_il2cpp_TypeInfo;
// System.UriParser
#include "System_System_UriParserMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.String
#include "mscorlib_System_String.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
// System.Uri
#include "System_System_Uri.h"
// System.UriFormatException
#include "System_System_UriFormatException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.DefaultUriParser
#include "System_System_DefaultUriParser.h"
// System.GenericUriParser
#include "System_System_GenericUriParser.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
extern TypeInfo UriParser_t2825_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Regex_t1028_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo UriFormatException_t2829_il2cpp_TypeInfo;
extern TypeInfo Hashtable_t48_il2cpp_TypeInfo;
extern TypeInfo DefaultUriParser_t2824_il2cpp_TypeInfo;
extern TypeInfo Uri_t80_il2cpp_TypeInfo;
extern TypeInfo GenericUriParser_t2826_il2cpp_TypeInfo;
extern TypeInfo Void_t40_il2cpp_TypeInfo;
extern TypeInfo Int32_t63_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t872_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.UriFormatException
#include "System_System_UriFormatExceptionMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.DefaultUriParser
#include "System_System_DefaultUriParserMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
extern MethodInfo Object__ctor_m361_MethodInfo;
extern MethodInfo Regex__ctor_m6327_MethodInfo;
extern MethodInfo Uri_get_Scheme_m9704_MethodInfo;
extern MethodInfo String_op_Inequality_m637_MethodInfo;
extern MethodInfo UriFormatException__ctor_m9749_MethodInfo;
extern MethodInfo Hashtable__ctor_m6935_MethodInfo;
extern MethodInfo DefaultUriParser__ctor_m9695_MethodInfo;
extern MethodInfo UriParser_InternalRegister_m9760_MethodInfo;
extern MethodInfo Monitor_Enter_m2402_MethodInfo;
extern MethodInfo Monitor_Exit_m2405_MethodInfo;
extern MethodInfo UriParser_set_SchemeName_m9756_MethodInfo;
extern MethodInfo UriParser_set_DefaultPort_m9758_MethodInfo;
extern MethodInfo Hashtable_Add_m491_MethodInfo;
extern MethodInfo UriParser_OnRegister_m9755_MethodInfo;
extern MethodInfo UriParser_CreateDefaults_m9759_MethodInfo;
extern MethodInfo CultureInfo_get_InvariantCulture_m4723_MethodInfo;
extern MethodInfo String_ToLower_m9973_MethodInfo;
extern MethodInfo Hashtable_get_Item_m489_MethodInfo;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.UriParser::.ctor()
extern MethodInfo UriParser__ctor_m9752_MethodInfo;
 void UriParser__ctor_m9752 (UriParser_t2825 * __this, MethodInfo* method){
	{
		Object__ctor_m361(__this, /*hidden argument*/&Object__ctor_m361_MethodInfo);
		return;
	}
}
// System.Void System.UriParser::.cctor()
extern MethodInfo UriParser__cctor_m9753_MethodInfo;
 void UriParser__cctor_m9753 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo));
		Object__ctor_m361(L_0, /*hidden argument*/&Object__ctor_m361_MethodInfo);
		((UriParser_t2825_StaticFields*)InitializedTypeInfo(&UriParser_t2825_il2cpp_TypeInfo)->static_fields)->___lock_object = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Regex_t1028_il2cpp_TypeInfo));
		Regex_t1028 * L_1 = (Regex_t1028 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Regex_t1028_il2cpp_TypeInfo));
		Regex__ctor_m6327(L_1, (String_t*) &_stringLiteral2058, /*hidden argument*/&Regex__ctor_m6327_MethodInfo);
		((UriParser_t2825_StaticFields*)InitializedTypeInfo(&UriParser_t2825_il2cpp_TypeInfo)->static_fields)->___uri_regex = L_1;
		Regex_t1028 * L_2 = (Regex_t1028 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Regex_t1028_il2cpp_TypeInfo));
		Regex__ctor_m6327(L_2, (String_t*) &_stringLiteral2059, /*hidden argument*/&Regex__ctor_m6327_MethodInfo);
		((UriParser_t2825_StaticFields*)InitializedTypeInfo(&UriParser_t2825_il2cpp_TypeInfo)->static_fields)->___auth_regex = L_2;
		return;
	}
}
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern MethodInfo UriParser_InitializeAndValidate_m9754_MethodInfo;
 void UriParser_InitializeAndValidate_m9754 (UriParser_t2825 * __this, Uri_t80 * ___uri, UriFormatException_t2829 ** ___parsingError, MethodInfo* method){
	{
		NullCheck(___uri);
		String_t* L_0 = Uri_get_Scheme_m9704(___uri, /*hidden argument*/&Uri_get_Scheme_m9704_MethodInfo);
		String_t* L_1 = (__this->___scheme_name);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_2 = String_op_Inequality_m637(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&String_op_Inequality_m637_MethodInfo);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_3 = (__this->___scheme_name);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_4 = String_op_Inequality_m637(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral855, /*hidden argument*/&String_op_Inequality_m637_MethodInfo);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		UriFormatException_t2829 * L_5 = (UriFormatException_t2829 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UriFormatException_t2829_il2cpp_TypeInfo));
		UriFormatException__ctor_m9749(L_5, (String_t*) &_stringLiteral2060, /*hidden argument*/&UriFormatException__ctor_m9749_MethodInfo);
		*((Object_t **)(___parsingError)) = (Object_t *)L_5;
		goto IL_003f;
	}

IL_003c:
	{
		*((Object_t **)(___parsingError)) = (Object_t *)NULL;
	}

IL_003f:
	{
		return;
	}
}
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
extern MethodInfo UriParser_OnRegister_m9755_MethodInfo;
 void UriParser_OnRegister_m9755 (UriParser_t2825 * __this, String_t* ___schemeName, int32_t ___defaultPort, MethodInfo* method){
	{
		return;
	}
}
// System.Void System.UriParser::set_SchemeName(System.String)
extern MethodInfo UriParser_set_SchemeName_m9756_MethodInfo;
 void UriParser_set_SchemeName_m9756 (UriParser_t2825 * __this, String_t* ___value, MethodInfo* method){
	{
		__this->___scheme_name = ___value;
		return;
	}
}
// System.Int32 System.UriParser::get_DefaultPort()
extern MethodInfo UriParser_get_DefaultPort_m9757_MethodInfo;
 int32_t UriParser_get_DefaultPort_m9757 (UriParser_t2825 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___default_port);
		return L_0;
	}
}
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern MethodInfo UriParser_set_DefaultPort_m9758_MethodInfo;
 void UriParser_set_DefaultPort_m9758 (UriParser_t2825 * __this, int32_t ___value, MethodInfo* method){
	{
		__this->___default_port = ___value;
		return;
	}
}
// System.Void System.UriParser::CreateDefaults()
extern MethodInfo UriParser_CreateDefaults_m9759_MethodInfo;
 void UriParser_CreateDefaults_m9759 (Object_t * __this/* static, unused */, MethodInfo* method){
	Hashtable_t48 * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t107 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t107 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UriParser_t2825_il2cpp_TypeInfo));
		if (!(((UriParser_t2825_StaticFields*)InitializedTypeInfo(&UriParser_t2825_il2cpp_TypeInfo)->static_fields)->___table))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t48_il2cpp_TypeInfo));
		Hashtable_t48 * L_0 = (Hashtable_t48 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t48_il2cpp_TypeInfo));
		Hashtable__ctor_m6935(L_0, /*hidden argument*/&Hashtable__ctor_m6935_MethodInfo);
		V_0 = L_0;
		DefaultUriParser_t2824 * L_1 = (DefaultUriParser_t2824 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t2824_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m9695(L_1, /*hidden argument*/&DefaultUriParser__ctor_m9695_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t80_il2cpp_TypeInfo));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UriParser_t2825_il2cpp_TypeInfo));
		UriParser_InternalRegister_m9760(NULL /*static, unused*/, V_0, L_1, (((Uri_t80_StaticFields*)InitializedTypeInfo(&Uri_t80_il2cpp_TypeInfo)->static_fields)->___UriSchemeFile), (-1), /*hidden argument*/&UriParser_InternalRegister_m9760_MethodInfo);
		DefaultUriParser_t2824 * L_2 = (DefaultUriParser_t2824 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t2824_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m9695(L_2, /*hidden argument*/&DefaultUriParser__ctor_m9695_MethodInfo);
		UriParser_InternalRegister_m9760(NULL /*static, unused*/, V_0, L_2, (((Uri_t80_StaticFields*)InitializedTypeInfo(&Uri_t80_il2cpp_TypeInfo)->static_fields)->___UriSchemeFtp), ((int32_t)21), /*hidden argument*/&UriParser_InternalRegister_m9760_MethodInfo);
		DefaultUriParser_t2824 * L_3 = (DefaultUriParser_t2824 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t2824_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m9695(L_3, /*hidden argument*/&DefaultUriParser__ctor_m9695_MethodInfo);
		UriParser_InternalRegister_m9760(NULL /*static, unused*/, V_0, L_3, (((Uri_t80_StaticFields*)InitializedTypeInfo(&Uri_t80_il2cpp_TypeInfo)->static_fields)->___UriSchemeGopher), ((int32_t)70), /*hidden argument*/&UriParser_InternalRegister_m9760_MethodInfo);
		DefaultUriParser_t2824 * L_4 = (DefaultUriParser_t2824 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t2824_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m9695(L_4, /*hidden argument*/&DefaultUriParser__ctor_m9695_MethodInfo);
		UriParser_InternalRegister_m9760(NULL /*static, unused*/, V_0, L_4, (((Uri_t80_StaticFields*)InitializedTypeInfo(&Uri_t80_il2cpp_TypeInfo)->static_fields)->___UriSchemeHttp), ((int32_t)80), /*hidden argument*/&UriParser_InternalRegister_m9760_MethodInfo);
		DefaultUriParser_t2824 * L_5 = (DefaultUriParser_t2824 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t2824_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m9695(L_5, /*hidden argument*/&DefaultUriParser__ctor_m9695_MethodInfo);
		UriParser_InternalRegister_m9760(NULL /*static, unused*/, V_0, L_5, (((Uri_t80_StaticFields*)InitializedTypeInfo(&Uri_t80_il2cpp_TypeInfo)->static_fields)->___UriSchemeHttps), ((int32_t)443), /*hidden argument*/&UriParser_InternalRegister_m9760_MethodInfo);
		DefaultUriParser_t2824 * L_6 = (DefaultUriParser_t2824 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t2824_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m9695(L_6, /*hidden argument*/&DefaultUriParser__ctor_m9695_MethodInfo);
		UriParser_InternalRegister_m9760(NULL /*static, unused*/, V_0, L_6, (((Uri_t80_StaticFields*)InitializedTypeInfo(&Uri_t80_il2cpp_TypeInfo)->static_fields)->___UriSchemeMailto), ((int32_t)25), /*hidden argument*/&UriParser_InternalRegister_m9760_MethodInfo);
		DefaultUriParser_t2824 * L_7 = (DefaultUriParser_t2824 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t2824_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m9695(L_7, /*hidden argument*/&DefaultUriParser__ctor_m9695_MethodInfo);
		UriParser_InternalRegister_m9760(NULL /*static, unused*/, V_0, L_7, (((Uri_t80_StaticFields*)InitializedTypeInfo(&Uri_t80_il2cpp_TypeInfo)->static_fields)->___UriSchemeNetPipe), (-1), /*hidden argument*/&UriParser_InternalRegister_m9760_MethodInfo);
		DefaultUriParser_t2824 * L_8 = (DefaultUriParser_t2824 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t2824_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m9695(L_8, /*hidden argument*/&DefaultUriParser__ctor_m9695_MethodInfo);
		UriParser_InternalRegister_m9760(NULL /*static, unused*/, V_0, L_8, (((Uri_t80_StaticFields*)InitializedTypeInfo(&Uri_t80_il2cpp_TypeInfo)->static_fields)->___UriSchemeNetTcp), (-1), /*hidden argument*/&UriParser_InternalRegister_m9760_MethodInfo);
		DefaultUriParser_t2824 * L_9 = (DefaultUriParser_t2824 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t2824_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m9695(L_9, /*hidden argument*/&DefaultUriParser__ctor_m9695_MethodInfo);
		UriParser_InternalRegister_m9760(NULL /*static, unused*/, V_0, L_9, (((Uri_t80_StaticFields*)InitializedTypeInfo(&Uri_t80_il2cpp_TypeInfo)->static_fields)->___UriSchemeNews), ((int32_t)119), /*hidden argument*/&UriParser_InternalRegister_m9760_MethodInfo);
		DefaultUriParser_t2824 * L_10 = (DefaultUriParser_t2824 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t2824_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m9695(L_10, /*hidden argument*/&DefaultUriParser__ctor_m9695_MethodInfo);
		UriParser_InternalRegister_m9760(NULL /*static, unused*/, V_0, L_10, (((Uri_t80_StaticFields*)InitializedTypeInfo(&Uri_t80_il2cpp_TypeInfo)->static_fields)->___UriSchemeNntp), ((int32_t)119), /*hidden argument*/&UriParser_InternalRegister_m9760_MethodInfo);
		DefaultUriParser_t2824 * L_11 = (DefaultUriParser_t2824 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t2824_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m9695(L_11, /*hidden argument*/&DefaultUriParser__ctor_m9695_MethodInfo);
		UriParser_InternalRegister_m9760(NULL /*static, unused*/, V_0, L_11, (String_t*) &_stringLiteral2061, ((int32_t)389), /*hidden argument*/&UriParser_InternalRegister_m9760_MethodInfo);
		V_1 = (((UriParser_t2825_StaticFields*)InitializedTypeInfo(&UriParser_t2825_il2cpp_TypeInfo)->static_fields)->___lock_object);
		Monitor_Enter_m2402(NULL /*static, unused*/, V_1, /*hidden argument*/&Monitor_Enter_m2402_MethodInfo);
	}

IL_00e6:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UriParser_t2825_il2cpp_TypeInfo));
			if ((((UriParser_t2825_StaticFields*)InitializedTypeInfo(&UriParser_t2825_il2cpp_TypeInfo)->static_fields)->___table))
			{
				goto IL_00fb;
			}
		}

IL_00f0:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UriParser_t2825_il2cpp_TypeInfo));
			((UriParser_t2825_StaticFields*)InitializedTypeInfo(&UriParser_t2825_il2cpp_TypeInfo)->static_fields)->___table = V_0;
			goto IL_00fd;
		}

IL_00fb:
		{
			V_0 = (Hashtable_t48 *)NULL;
		}

IL_00fd:
		{
			// IL_00fd: leave IL_0109
			leaveInstructions[0] = 0x109; // 1
			THROW_SENTINEL(IL_0109);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0102;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t107 *)e.ex;
		goto IL_0102;
	}

IL_0102:
	{ // begin finally (depth: 1)
		Monitor_Exit_m2405(NULL /*static, unused*/, V_1, /*hidden argument*/&Monitor_Exit_m2405_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x109:
				goto IL_0109;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				Exception_t107 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception (_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_0109:
	{
		return;
	}
}
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
extern MethodInfo UriParser_InternalRegister_m9760_MethodInfo;
 void UriParser_InternalRegister_m9760 (Object_t * __this/* static, unused */, Hashtable_t48 * ___table, UriParser_t2825 * ___uriParser, String_t* ___schemeName, int32_t ___defaultPort, MethodInfo* method){
	DefaultUriParser_t2824 * V_0 = {0};
	{
		NullCheck(___uriParser);
		UriParser_set_SchemeName_m9756(___uriParser, ___schemeName, /*hidden argument*/&UriParser_set_SchemeName_m9756_MethodInfo);
		NullCheck(___uriParser);
		UriParser_set_DefaultPort_m9758(___uriParser, ___defaultPort, /*hidden argument*/&UriParser_set_DefaultPort_m9758_MethodInfo);
		if (!((GenericUriParser_t2826 *)IsInst(___uriParser, InitializedTypeInfo(&GenericUriParser_t2826_il2cpp_TypeInfo))))
		{
			goto IL_0026;
		}
	}
	{
		NullCheck(___table);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_Add_m491_MethodInfo, ___table, ___schemeName, ___uriParser);
		goto IL_0042;
	}

IL_0026:
	{
		DefaultUriParser_t2824 * L_0 = (DefaultUriParser_t2824 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t2824_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m9695(L_0, /*hidden argument*/&DefaultUriParser__ctor_m9695_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		UriParser_set_SchemeName_m9756(V_0, ___schemeName, /*hidden argument*/&UriParser_set_SchemeName_m9756_MethodInfo);
		NullCheck(V_0);
		UriParser_set_DefaultPort_m9758(V_0, ___defaultPort, /*hidden argument*/&UriParser_set_DefaultPort_m9758_MethodInfo);
		NullCheck(___table);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_Add_m491_MethodInfo, ___table, ___schemeName, V_0);
	}

IL_0042:
	{
		NullCheck(___uriParser);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(&UriParser_OnRegister_m9755_MethodInfo, ___uriParser, ___schemeName, ___defaultPort);
		return;
	}
}
// System.UriParser System.UriParser::GetParser(System.String)
extern MethodInfo UriParser_GetParser_m9761_MethodInfo;
 UriParser_t2825 * UriParser_GetParser_m9761 (Object_t * __this/* static, unused */, String_t* ___schemeName, MethodInfo* method){
	String_t* V_0 = {0};
	{
		if (___schemeName)
		{
			goto IL_0008;
		}
	}
	{
		return (UriParser_t2825 *)NULL;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UriParser_t2825_il2cpp_TypeInfo));
		UriParser_CreateDefaults_m9759(NULL /*static, unused*/, /*hidden argument*/&UriParser_CreateDefaults_m9759_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t872_il2cpp_TypeInfo));
		CultureInfo_t872 * L_0 = CultureInfo_get_InvariantCulture_m4723(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4723_MethodInfo);
		NullCheck(___schemeName);
		String_t* L_1 = String_ToLower_m9973(___schemeName, L_0, /*hidden argument*/&String_ToLower_m9973_MethodInfo);
		V_0 = L_1;
		NullCheck((((UriParser_t2825_StaticFields*)InitializedTypeInfo(&UriParser_t2825_il2cpp_TypeInfo)->static_fields)->___table));
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&Hashtable_get_Item_m489_MethodInfo, (((UriParser_t2825_StaticFields*)InitializedTypeInfo(&UriParser_t2825_il2cpp_TypeInfo)->static_fields)->___table), V_0);
		return ((UriParser_t2825 *)Castclass(L_2, InitializedTypeInfo(&UriParser_t2825_il2cpp_TypeInfo)));
	}
}
// Metadata Definition System.UriParser
extern Il2CppType Object_t_0_0_17;
FieldInfo UriParser_t2825____lock_object_FieldInfo = 
{
	"lock_object"/* name */
	, &Object_t_0_0_17/* type */
	, &UriParser_t2825_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t2825_StaticFields, ___lock_object)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Hashtable_t48_0_0_17;
FieldInfo UriParser_t2825____table_FieldInfo = 
{
	"table"/* name */
	, &Hashtable_t48_0_0_17/* type */
	, &UriParser_t2825_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t2825_StaticFields, ___table)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_3;
FieldInfo UriParser_t2825____scheme_name_FieldInfo = 
{
	"scheme_name"/* name */
	, &String_t_0_0_3/* type */
	, &UriParser_t2825_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t2825, ___scheme_name)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo UriParser_t2825____default_port_FieldInfo = 
{
	"default_port"/* name */
	, &Int32_t63_0_0_1/* type */
	, &UriParser_t2825_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t2825, ___default_port)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Regex_t1028_0_0_49;
FieldInfo UriParser_t2825____uri_regex_FieldInfo = 
{
	"uri_regex"/* name */
	, &Regex_t1028_0_0_49/* type */
	, &UriParser_t2825_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t2825_StaticFields, ___uri_regex)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Regex_t1028_0_0_49;
FieldInfo UriParser_t2825____auth_regex_FieldInfo = 
{
	"auth_regex"/* name */
	, &Regex_t1028_0_0_49/* type */
	, &UriParser_t2825_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t2825_StaticFields, ___auth_regex)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UriParser_t2825_FieldInfos[] =
{
	&UriParser_t2825____lock_object_FieldInfo,
	&UriParser_t2825____table_FieldInfo,
	&UriParser_t2825____scheme_name_FieldInfo,
	&UriParser_t2825____default_port_FieldInfo,
	&UriParser_t2825____uri_regex_FieldInfo,
	&UriParser_t2825____auth_regex_FieldInfo,
	NULL
};
extern MethodInfo UriParser_set_SchemeName_m9756_MethodInfo;
static PropertyInfo UriParser_t2825____SchemeName_PropertyInfo = 
{
	&UriParser_t2825_il2cpp_TypeInfo/* parent */
	, "SchemeName"/* name */
	, NULL/* get */
	, &UriParser_set_SchemeName_m9756_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo UriParser_get_DefaultPort_m9757_MethodInfo;
extern MethodInfo UriParser_set_DefaultPort_m9758_MethodInfo;
static PropertyInfo UriParser_t2825____DefaultPort_PropertyInfo = 
{
	&UriParser_t2825_il2cpp_TypeInfo/* parent */
	, "DefaultPort"/* name */
	, &UriParser_get_DefaultPort_m9757_MethodInfo/* get */
	, &UriParser_set_DefaultPort_m9758_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* UriParser_t2825_PropertyInfos[] =
{
	&UriParser_t2825____SchemeName_PropertyInfo,
	&UriParser_t2825____DefaultPort_PropertyInfo,
	NULL
};
extern TypeInfo UriParser_t2825_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::.ctor()
MethodInfo UriParser__ctor_m9752_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriParser__ctor_m9752/* method */
	, &UriParser_t2825_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 659/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo UriParser_t2825_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::.cctor()
MethodInfo UriParser__cctor_m9753_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&UriParser__cctor_m9753/* method */
	, &UriParser_t2825_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 660/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Uri_t80_0_0_0;
extern Il2CppType UriFormatException_t2829_1_0_0;
static ParameterInfo UriParser_t2825_UriParser_InitializeAndValidate_m9754_ParameterInfos[] = 
{
	{"uri", 0, 134218447, &EmptyCustomAttributesCache, &Uri_t80_0_0_0},
	{"parsingError", 1, 134218448, &EmptyCustomAttributesCache, &UriFormatException_t2829_1_0_0},
};
extern TypeInfo UriParser_t2825_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_UriFormatExceptionU26_t2867 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
MethodInfo UriParser_InitializeAndValidate_m9754_MethodInfo = 
{
	"InitializeAndValidate"/* name */
	, (methodPointerType)&UriParser_InitializeAndValidate_m9754/* method */
	, &UriParser_t2825_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_UriFormatExceptionU26_t2867/* invoker_method */
	, UriParser_t2825_UriParser_InitializeAndValidate_m9754_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 453/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 661/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo UriParser_t2825_UriParser_OnRegister_m9755_ParameterInfos[] = 
{
	{"schemeName", 0, 134218449, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"defaultPort", 1, 134218450, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo UriParser_t2825_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache UriParser_t2825__CustomAttributeCache_UriParser_OnRegister_m9755;
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
MethodInfo UriParser_OnRegister_m9755_MethodInfo = 
{
	"OnRegister"/* name */
	, (methodPointerType)&UriParser_OnRegister_m9755/* method */
	, &UriParser_t2825_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Int32_t63/* invoker_method */
	, UriParser_t2825_UriParser_OnRegister_m9755_ParameterInfos/* parameters */
	, &UriParser_t2825__CustomAttributeCache_UriParser_OnRegister_m9755/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 662/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo UriParser_t2825_UriParser_set_SchemeName_m9756_ParameterInfos[] = 
{
	{"value", 0, 134218451, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern TypeInfo UriParser_t2825_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::set_SchemeName(System.String)
MethodInfo UriParser_set_SchemeName_m9756_MethodInfo = 
{
	"set_SchemeName"/* name */
	, (methodPointerType)&UriParser_set_SchemeName_m9756/* method */
	, &UriParser_t2825_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, UriParser_t2825_UriParser_set_SchemeName_m9756_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 663/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo UriParser_t2825_il2cpp_TypeInfo;
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.UriParser::get_DefaultPort()
MethodInfo UriParser_get_DefaultPort_m9757_MethodInfo = 
{
	"get_DefaultPort"/* name */
	, (methodPointerType)&UriParser_get_DefaultPort_m9757/* method */
	, &UriParser_t2825_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 664/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo UriParser_t2825_UriParser_set_DefaultPort_m9758_ParameterInfos[] = 
{
	{"value", 0, 134218452, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo UriParser_t2825_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::set_DefaultPort(System.Int32)
MethodInfo UriParser_set_DefaultPort_m9758_MethodInfo = 
{
	"set_DefaultPort"/* name */
	, (methodPointerType)&UriParser_set_DefaultPort_m9758/* method */
	, &UriParser_t2825_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Int32_t63/* invoker_method */
	, UriParser_t2825_UriParser_set_DefaultPort_m9758_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 665/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo UriParser_t2825_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::CreateDefaults()
MethodInfo UriParser_CreateDefaults_m9759_MethodInfo = 
{
	"CreateDefaults"/* name */
	, (methodPointerType)&UriParser_CreateDefaults_m9759/* method */
	, &UriParser_t2825_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 666/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Hashtable_t48_0_0_0;
extern Il2CppType UriParser_t2825_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo UriParser_t2825_UriParser_InternalRegister_m9760_ParameterInfos[] = 
{
	{"table", 0, 134218453, &EmptyCustomAttributesCache, &Hashtable_t48_0_0_0},
	{"uriParser", 1, 134218454, &EmptyCustomAttributesCache, &UriParser_t2825_0_0_0},
	{"schemeName", 2, 134218455, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"defaultPort", 3, 134218456, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern TypeInfo UriParser_t2825_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Object_t_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
MethodInfo UriParser_InternalRegister_m9760_MethodInfo = 
{
	"InternalRegister"/* name */
	, (methodPointerType)&UriParser_InternalRegister_m9760/* method */
	, &UriParser_t2825_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Object_t_Object_t_Int32_t63/* invoker_method */
	, UriParser_t2825_UriParser_InternalRegister_m9760_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 667/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo UriParser_t2825_UriParser_GetParser_m9761_ParameterInfos[] = 
{
	{"schemeName", 0, 134218457, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern TypeInfo UriParser_t2825_il2cpp_TypeInfo;
extern Il2CppType UriParser_t2825_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.UriParser System.UriParser::GetParser(System.String)
MethodInfo UriParser_GetParser_m9761_MethodInfo = 
{
	"GetParser"/* name */
	, (methodPointerType)&UriParser_GetParser_m9761/* method */
	, &UriParser_t2825_il2cpp_TypeInfo/* declaring_type */
	, &UriParser_t2825_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, UriParser_t2825_UriParser_GetParser_m9761_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 668/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* UriParser_t2825_MethodInfos[] =
{
	&UriParser__ctor_m9752_MethodInfo,
	&UriParser__cctor_m9753_MethodInfo,
	&UriParser_InitializeAndValidate_m9754_MethodInfo,
	&UriParser_OnRegister_m9755_MethodInfo,
	&UriParser_set_SchemeName_m9756_MethodInfo,
	&UriParser_get_DefaultPort_m9757_MethodInfo,
	&UriParser_set_DefaultPort_m9758_MethodInfo,
	&UriParser_CreateDefaults_m9759_MethodInfo,
	&UriParser_InternalRegister_m9760_MethodInfo,
	&UriParser_GetParser_m9761_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
extern MethodInfo UriParser_InitializeAndValidate_m9754_MethodInfo;
extern MethodInfo UriParser_OnRegister_m9755_MethodInfo;
static MethodInfo* UriParser_t2825_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&Object_ToString_m371_MethodInfo,
	&UriParser_InitializeAndValidate_m9754_MethodInfo,
	&UriParser_OnRegister_m9755_MethodInfo,
};
extern TypeInfo MonoTODOAttribute_t2740_il2cpp_TypeInfo;
// System.MonoTODOAttribute
#include "System_System_MonoTODOAttribute.h"
// System.MonoTODOAttribute
#include "System_System_MonoTODOAttributeMethodDeclarations.h"
extern MethodInfo MonoTODOAttribute__ctor_m9255_MethodInfo;
void UriParser_t2825_CustomAttributesCacheGenerator_UriParser_OnRegister_m9755(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		MonoTODOAttribute_t2740 * tmp;
		tmp = (MonoTODOAttribute_t2740 *)il2cpp_codegen_object_new (&MonoTODOAttribute_t2740_il2cpp_TypeInfo);
		MonoTODOAttribute__ctor_m9255(tmp, &MonoTODOAttribute__ctor_m9255_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache UriParser_t2825__CustomAttributeCache_UriParser_OnRegister_m9755 = {
1,
NULL,
&UriParser_t2825_CustomAttributesCacheGenerator_UriParser_OnRegister_m9755
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriParser_t2825_0_0_0;
extern Il2CppType UriParser_t2825_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct UriParser_t2825;
extern TypeInfo UriParser_t2825_il2cpp_TypeInfo;
extern CustomAttributesCache UriParser_t2825__CustomAttributeCache_UriParser_OnRegister_m9755;
TypeInfo UriParser_t2825_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriParser"/* name */
	, "System"/* namespaze */
	, UriParser_t2825_MethodInfos/* methods */
	, UriParser_t2825_PropertyInfos/* properties */
	, UriParser_t2825_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UriParser_t2825_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UriParser_t2825_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriParser_t2825_il2cpp_TypeInfo/* cast_class */
	, &UriParser_t2825_0_0_0/* byval_arg */
	, &UriParser_t2825_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriParser_t2825)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(UriParser_t2825_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048705/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 10/* method_count */
	, 2/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.UriPartial
#include "System_System_UriPartial.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UriPartial_t2833_il2cpp_TypeInfo;
// System.UriPartial
#include "System_System_UriPartialMethodDeclarations.h"



// Metadata Definition System.UriPartial
extern Il2CppType Int32_t63_0_0_1542;
FieldInfo UriPartial_t2833____value___FieldInfo = 
{
	"value__"/* name */
	, &Int32_t63_0_0_1542/* type */
	, &UriPartial_t2833_il2cpp_TypeInfo/* parent */
	, offsetof(UriPartial_t2833, ___value__) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriPartial_t2833_0_0_32854;
FieldInfo UriPartial_t2833____Scheme_FieldInfo = 
{
	"Scheme"/* name */
	, &UriPartial_t2833_0_0_32854/* type */
	, &UriPartial_t2833_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriPartial_t2833_0_0_32854;
FieldInfo UriPartial_t2833____Authority_FieldInfo = 
{
	"Authority"/* name */
	, &UriPartial_t2833_0_0_32854/* type */
	, &UriPartial_t2833_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriPartial_t2833_0_0_32854;
FieldInfo UriPartial_t2833____Path_FieldInfo = 
{
	"Path"/* name */
	, &UriPartial_t2833_0_0_32854/* type */
	, &UriPartial_t2833_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriPartial_t2833_0_0_32854;
FieldInfo UriPartial_t2833____Query_FieldInfo = 
{
	"Query"/* name */
	, &UriPartial_t2833_0_0_32854/* type */
	, &UriPartial_t2833_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UriPartial_t2833_FieldInfos[] =
{
	&UriPartial_t2833____value___FieldInfo,
	&UriPartial_t2833____Scheme_FieldInfo,
	&UriPartial_t2833____Authority_FieldInfo,
	&UriPartial_t2833____Path_FieldInfo,
	&UriPartial_t2833____Query_FieldInfo,
	NULL
};
static const int32_t UriPartial_t2833____Scheme_DefaultValueData = 0;
extern Il2CppType Int32_t63_0_0_0;
static Il2CppFieldDefaultValueEntry UriPartial_t2833____Scheme_DefaultValue = 
{
	&UriPartial_t2833____Scheme_FieldInfo/* field */
	, { (char*)&UriPartial_t2833____Scheme_DefaultValueData, &Int32_t63_0_0_0 }/* value */

};
static const int32_t UriPartial_t2833____Authority_DefaultValueData = 1;
extern Il2CppType Int32_t63_0_0_0;
static Il2CppFieldDefaultValueEntry UriPartial_t2833____Authority_DefaultValue = 
{
	&UriPartial_t2833____Authority_FieldInfo/* field */
	, { (char*)&UriPartial_t2833____Authority_DefaultValueData, &Int32_t63_0_0_0 }/* value */

};
static const int32_t UriPartial_t2833____Path_DefaultValueData = 2;
extern Il2CppType Int32_t63_0_0_0;
static Il2CppFieldDefaultValueEntry UriPartial_t2833____Path_DefaultValue = 
{
	&UriPartial_t2833____Path_FieldInfo/* field */
	, { (char*)&UriPartial_t2833____Path_DefaultValueData, &Int32_t63_0_0_0 }/* value */

};
static const int32_t UriPartial_t2833____Query_DefaultValueData = 3;
extern Il2CppType Int32_t63_0_0_0;
static Il2CppFieldDefaultValueEntry UriPartial_t2833____Query_DefaultValue = 
{
	&UriPartial_t2833____Query_FieldInfo/* field */
	, { (char*)&UriPartial_t2833____Query_DefaultValueData, &Int32_t63_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* UriPartial_t2833_FieldDefaultValues[] = 
{
	&UriPartial_t2833____Scheme_DefaultValue,
	&UriPartial_t2833____Authority_DefaultValue,
	&UriPartial_t2833____Path_DefaultValue,
	&UriPartial_t2833____Query_DefaultValue,
	NULL
};
static MethodInfo* UriPartial_t2833_MethodInfos[] =
{
	NULL
};
extern MethodInfo Enum_Equals_m423_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Enum_GetHashCode_m424_MethodInfo;
extern MethodInfo Enum_ToString_m425_MethodInfo;
extern MethodInfo Enum_ToString_m426_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToBoolean_m427_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToByte_m428_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToChar_m429_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDateTime_m430_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDecimal_m431_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDouble_m432_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt16_m433_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt32_m434_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt64_m435_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToSByte_m436_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToSingle_m437_MethodInfo;
extern MethodInfo Enum_ToString_m438_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToType_m439_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt16_m440_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt32_m441_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt64_m442_MethodInfo;
extern MethodInfo Enum_CompareTo_m443_MethodInfo;
extern MethodInfo Enum_GetTypeCode_m444_MethodInfo;
static MethodInfo* UriPartial_t2833_VTable[] =
{
	&Enum_Equals_m423_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Enum_GetHashCode_m424_MethodInfo,
	&Enum_ToString_m425_MethodInfo,
	&Enum_ToString_m426_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m427_MethodInfo,
	&Enum_System_IConvertible_ToByte_m428_MethodInfo,
	&Enum_System_IConvertible_ToChar_m429_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m430_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m431_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m432_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m433_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m434_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m435_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m436_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m437_MethodInfo,
	&Enum_ToString_m438_MethodInfo,
	&Enum_System_IConvertible_ToType_m439_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m440_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m441_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m442_MethodInfo,
	&Enum_CompareTo_m443_MethodInfo,
	&Enum_GetTypeCode_m444_MethodInfo,
};
extern TypeInfo IFormattable_t76_il2cpp_TypeInfo;
extern TypeInfo IConvertible_t77_il2cpp_TypeInfo;
extern TypeInfo IComparable_t78_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UriPartial_t2833_InterfacesOffsets[] = 
{
	{ &IFormattable_t76_il2cpp_TypeInfo, 4},
	{ &IConvertible_t77_il2cpp_TypeInfo, 5},
	{ &IComparable_t78_il2cpp_TypeInfo, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriPartial_t2833_0_0_0;
extern Il2CppType UriPartial_t2833_1_0_0;
extern TypeInfo Enum_t79_il2cpp_TypeInfo;
extern TypeInfo Int32_t63_il2cpp_TypeInfo;
extern TypeInfo Int32_t63_il2cpp_TypeInfo;
TypeInfo UriPartial_t2833_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriPartial"/* name */
	, "System"/* namespaze */
	, UriPartial_t2833_MethodInfos/* methods */
	, NULL/* properties */
	, UriPartial_t2833_FieldInfos/* fields */
	, NULL/* events */
	, &Enum_t79_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Int32_t63_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UriPartial_t2833_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Int32_t63_il2cpp_TypeInfo/* cast_class */
	, &UriPartial_t2833_0_0_0/* byval_arg */
	, &UriPartial_t2833_1_0_0/* this_arg */
	, UriPartial_t2833_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, UriPartial_t2833_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriPartial_t2833)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (int32_t)/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.UriTypeConverter
#include "System_System_UriTypeConverter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UriTypeConverter_t2834_il2cpp_TypeInfo;
// System.UriTypeConverter
#include "System_System_UriTypeConverterMethodDeclarations.h"



// Metadata Definition System.UriTypeConverter
static MethodInfo* UriTypeConverter_t2834_MethodInfos[] =
{
	NULL
};
extern MethodInfo Object_Equals_m368_MethodInfo;
extern MethodInfo Object_Finalize_m369_MethodInfo;
extern MethodInfo Object_GetHashCode_m370_MethodInfo;
extern MethodInfo Object_ToString_m371_MethodInfo;
static MethodInfo* UriTypeConverter_t2834_VTable[] =
{
	&Object_Equals_m368_MethodInfo,
	&Object_Finalize_m369_MethodInfo,
	&Object_GetHashCode_m370_MethodInfo,
	&Object_ToString_m371_MethodInfo,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriTypeConverter_t2834_0_0_0;
extern Il2CppType UriTypeConverter_t2834_1_0_0;
extern TypeInfo TypeConverter_t2749_il2cpp_TypeInfo;
struct UriTypeConverter_t2834;
extern TypeInfo UriTypeConverter_t2834_il2cpp_TypeInfo;
TypeInfo UriTypeConverter_t2834_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriTypeConverter"/* name */
	, "System"/* namespaze */
	, UriTypeConverter_t2834_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &TypeConverter_t2749_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UriTypeConverter_t2834_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UriTypeConverter_t2834_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriTypeConverter_t2834_il2cpp_TypeInfo/* cast_class */
	, &UriTypeConverter_t2834_0_0_0/* byval_arg */
	, &UriTypeConverter_t2834_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriTypeConverter_t2834)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.ComponentModel.PropertyChangedEventHandler
#include "System_System_ComponentModel_PropertyChangedEventHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PropertyChangedEventHandler_t1175_il2cpp_TypeInfo;
// System.ComponentModel.PropertyChangedEventHandler
#include "System_System_ComponentModel_PropertyChangedEventHandlerMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.ComponentModel.PropertyChangedEventArgs
#include "System_System_ComponentModel_PropertyChangedEventArgs.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.ComponentModel.PropertyChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern MethodInfo PropertyChangedEventHandler__ctor_m9762_MethodInfo;
 void PropertyChangedEventHandler__ctor_m9762 (PropertyChangedEventHandler_t1175 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method){
	// runtime
	__this->___method_ptr = (methodPointerType)((MethodInfo*)___method.___m_value)->method;
	__this->___method = ___method;
	__this->___m_target = ___object;
}
// System.Void System.ComponentModel.PropertyChangedEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern MethodInfo PropertyChangedEventHandler_Invoke_m9763_MethodInfo;
 void PropertyChangedEventHandler_Invoke_m9763 (PropertyChangedEventHandler_t1175 * __this, Object_t * ___sender, PropertyChangedEventArgs_t1519 * ___e, MethodInfo* method){
	// runtime
	typedef  void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, PropertyChangedEventArgs_t1519 * ___e, MethodInfo* method);
	if (__this->___prev)
		PropertyChangedEventHandler_Invoke_m9763((PropertyChangedEventHandler_t1175 *)__this->___prev,  ___sender, ___e, method);
	((FunctionPointerType)__this->___method_ptr)(__this->___m_target, ___sender, ___e, (MethodInfo*)(__this->___method.___m_value));
}
void pinvoke_delegate_wrapper_PropertyChangedEventHandler_t1175(Il2CppObject* delegate, Object_t * ___sender, PropertyChangedEventArgs_t1519 * ___e)
{
	typedef void (STDCALL *native_function_ptr_type)(Object_t *, PropertyChangedEventArgs_t1519 *);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled;
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	// Marshaling of parameter '___e' to native representation
	PropertyChangedEventArgs_t1519 * ____e_marshaled;
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.ComponentModel.PropertyChangedEventArgs'."));

	// Native function invocation
	_il2cpp_pinvoke_func(____sender_marshaled, ____e_marshaled);

	// Marshaling cleanup of parameter '___sender' native representation

	// Marshaling cleanup of parameter '___e' native representation

}
// System.IAsyncResult System.ComponentModel.PropertyChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.PropertyChangedEventArgs,System.AsyncCallback,System.Object)
extern MethodInfo PropertyChangedEventHandler_BeginInvoke_m9764_MethodInfo;
 Object_t * PropertyChangedEventHandler_BeginInvoke_m9764 (PropertyChangedEventHandler_t1175 * __this, Object_t * ___sender, PropertyChangedEventArgs_t1519 * ___e, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method){
	// runtime
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.ComponentModel.PropertyChangedEventHandler::EndInvoke(System.IAsyncResult)
extern MethodInfo PropertyChangedEventHandler_EndInvoke_m9765_MethodInfo;
 void PropertyChangedEventHandler_EndInvoke_m9765 (PropertyChangedEventHandler_t1175 * __this, Object_t * ___result, MethodInfo* method){
	// runtime
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// Metadata Definition System.ComponentModel.PropertyChangedEventHandler
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t39_0_0_0;
static ParameterInfo PropertyChangedEventHandler_t1175_PropertyChangedEventHandler__ctor_m9762_ParameterInfos[] = 
{
	{"object", 0, 134218458, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218459, &EmptyCustomAttributesCache, &IntPtr_t39_0_0_0},
};
extern TypeInfo PropertyChangedEventHandler_t1175_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_IntPtr_t39 (MethodInfo* method, void* obj, void** args);
// System.Void System.ComponentModel.PropertyChangedEventHandler::.ctor(System.Object,System.IntPtr)
MethodInfo PropertyChangedEventHandler__ctor_m9762_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PropertyChangedEventHandler__ctor_m9762/* method */
	, &PropertyChangedEventHandler_t1175_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_IntPtr_t39/* invoker_method */
	, PropertyChangedEventHandler_t1175_PropertyChangedEventHandler__ctor_m9762_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 669/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType PropertyChangedEventArgs_t1519_0_0_0;
static ParameterInfo PropertyChangedEventHandler_t1175_PropertyChangedEventHandler_Invoke_m9763_ParameterInfos[] = 
{
	{"sender", 0, 134218460, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"e", 1, 134218461, &EmptyCustomAttributesCache, &PropertyChangedEventArgs_t1519_0_0_0},
};
extern TypeInfo PropertyChangedEventHandler_t1175_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.ComponentModel.PropertyChangedEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangedEventArgs)
MethodInfo PropertyChangedEventHandler_Invoke_m9763_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&PropertyChangedEventHandler_Invoke_m9763/* method */
	, &PropertyChangedEventHandler_t1175_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_Object_t/* invoker_method */
	, PropertyChangedEventHandler_t1175_PropertyChangedEventHandler_Invoke_m9763_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 670/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType PropertyChangedEventArgs_t1519_0_0_0;
extern Il2CppType AsyncCallback_t35_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo PropertyChangedEventHandler_t1175_PropertyChangedEventHandler_BeginInvoke_m9764_ParameterInfos[] = 
{
	{"sender", 0, 134218462, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"e", 1, 134218463, &EmptyCustomAttributesCache, &PropertyChangedEventArgs_t1519_0_0_0},
	{"callback", 2, 134218464, &EmptyCustomAttributesCache, &AsyncCallback_t35_0_0_0},
	{"object", 3, 134218465, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo PropertyChangedEventHandler_t1175_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t34_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.ComponentModel.PropertyChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.PropertyChangedEventArgs,System.AsyncCallback,System.Object)
MethodInfo PropertyChangedEventHandler_BeginInvoke_m9764_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&PropertyChangedEventHandler_BeginInvoke_m9764/* method */
	, &PropertyChangedEventHandler_t1175_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t34_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, PropertyChangedEventHandler_t1175_PropertyChangedEventHandler_BeginInvoke_m9764_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 671/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t34_0_0_0;
static ParameterInfo PropertyChangedEventHandler_t1175_PropertyChangedEventHandler_EndInvoke_m9765_ParameterInfos[] = 
{
	{"result", 0, 134218466, &EmptyCustomAttributesCache, &IAsyncResult_t34_0_0_0},
};
extern TypeInfo PropertyChangedEventHandler_t1175_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.ComponentModel.PropertyChangedEventHandler::EndInvoke(System.IAsyncResult)
MethodInfo PropertyChangedEventHandler_EndInvoke_m9765_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&PropertyChangedEventHandler_EndInvoke_m9765/* method */
	, &PropertyChangedEventHandler_t1175_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t/* invoker_method */
	, PropertyChangedEventHandler_t1175_PropertyChangedEventHandler_EndInvoke_m9765_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 672/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* PropertyChangedEventHandler_t1175_MethodInfos[] =
{
	&PropertyChangedEventHandler__ctor_m9762_MethodInfo,
	&PropertyChangedEventHandler_Invoke_m9763_MethodInfo,
	&PropertyChangedEventHandler_BeginInvoke_m9764_MethodInfo,
	&PropertyChangedEventHandler_EndInvoke_m9765_MethodInfo,
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
extern MethodInfo PropertyChangedEventHandler_Invoke_m9763_MethodInfo;
extern MethodInfo PropertyChangedEventHandler_BeginInvoke_m9764_MethodInfo;
extern MethodInfo PropertyChangedEventHandler_EndInvoke_m9765_MethodInfo;
static MethodInfo* PropertyChangedEventHandler_t1175_VTable[] =
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
	&PropertyChangedEventHandler_Invoke_m9763_MethodInfo,
	&PropertyChangedEventHandler_BeginInvoke_m9764_MethodInfo,
	&PropertyChangedEventHandler_EndInvoke_m9765_MethodInfo,
};
extern TypeInfo ICloneable_t84_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t85_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair PropertyChangedEventHandler_t1175_InterfacesOffsets[] = 
{
	{ &ICloneable_t84_il2cpp_TypeInfo, 4},
	{ &ISerializable_t85_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType PropertyChangedEventHandler_t1175_0_0_0;
extern Il2CppType PropertyChangedEventHandler_t1175_1_0_0;
extern TypeInfo MulticastDelegate_t38_il2cpp_TypeInfo;
struct PropertyChangedEventHandler_t1175;
extern TypeInfo PropertyChangedEventHandler_t1175_il2cpp_TypeInfo;
TypeInfo PropertyChangedEventHandler_t1175_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "PropertyChangedEventHandler"/* name */
	, "System.ComponentModel"/* namespaze */
	, PropertyChangedEventHandler_t1175_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t38_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &PropertyChangedEventHandler_t1175_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, PropertyChangedEventHandler_t1175_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PropertyChangedEventHandler_t1175_il2cpp_TypeInfo/* cast_class */
	, &PropertyChangedEventHandler_t1175_0_0_0/* byval_arg */
	, &PropertyChangedEventHandler_t1175_1_0_0/* this_arg */
	, PropertyChangedEventHandler_t1175_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_PropertyChangedEventHandler_t1175/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PropertyChangedEventHandler_t1175)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
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
	, false/* is_generic */
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
// System.Text.RegularExpressions.MatchEvaluator
#include "System_System_Text_RegularExpressions_MatchEvaluator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MatchEvaluator_t1029_il2cpp_TypeInfo;
// System.Text.RegularExpressions.MatchEvaluator
#include "System_System_Text_RegularExpressions_MatchEvaluatorMethodDeclarations.h"

// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_Match.h"


// System.Void System.Text.RegularExpressions.MatchEvaluator::.ctor(System.Object,System.IntPtr)
extern MethodInfo MatchEvaluator__ctor_m6310_MethodInfo;
 void MatchEvaluator__ctor_m6310 (MatchEvaluator_t1029 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method){
	// runtime
	__this->___method_ptr = (methodPointerType)((MethodInfo*)___method.___m_value)->method;
	__this->___method = ___method;
	__this->___m_target = ___object;
}
// System.String System.Text.RegularExpressions.MatchEvaluator::Invoke(System.Text.RegularExpressions.Match)
extern MethodInfo MatchEvaluator_Invoke_m9766_MethodInfo;
 String_t* MatchEvaluator_Invoke_m9766 (MatchEvaluator_t1029 * __this, Match_t1032 * ___match, MethodInfo* method){
	// runtime
	typedef  String_t* (*FunctionPointerType) (Object_t * __this, Match_t1032 * ___match, MethodInfo* method);
	if (__this->___prev)
		MatchEvaluator_Invoke_m9766((MatchEvaluator_t1029 *)__this->___prev,  ___match, method);
	return ((FunctionPointerType)__this->___method_ptr)(__this->___m_target, ___match, (MethodInfo*)(__this->___method.___m_value));
}
String_t* pinvoke_delegate_wrapper_MatchEvaluator_t1029(Il2CppObject* delegate, Match_t1032 * ___match)
{
	typedef char* (STDCALL *native_function_ptr_type)(Match_t1032 *);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___match' to native representation
	Match_t1032 * ____match_marshaled;
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Text.RegularExpressions.Match'."));

	// Native function invocation and marshaling of return value back from native representation
	char* _return_value = _il2cpp_pinvoke_func(____match_marshaled);
	String_t* __return_value_unmarshaled = { 0 };
	__return_value_unmarshaled = il2cpp_codegen_marshal_string_result(_return_value);
	il2cpp_codegen_marshal_free(_return_value);
	_return_value = NULL;

	// Marshaling cleanup of parameter '___match' native representation

	return __return_value_unmarshaled;
}
// System.IAsyncResult System.Text.RegularExpressions.MatchEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.AsyncCallback,System.Object)
extern MethodInfo MatchEvaluator_BeginInvoke_m9767_MethodInfo;
 Object_t * MatchEvaluator_BeginInvoke_m9767 (MatchEvaluator_t1029 * __this, Match_t1032 * ___match, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method){
	// runtime
	void *__d_args[2] = {0};
	__d_args[0] = ___match;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.String System.Text.RegularExpressions.MatchEvaluator::EndInvoke(System.IAsyncResult)
extern MethodInfo MatchEvaluator_EndInvoke_m9768_MethodInfo;
 String_t* MatchEvaluator_EndInvoke_m9768 (MatchEvaluator_t1029 * __this, Object_t * ___result, MethodInfo* method){
	// runtime
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (String_t*)__result;
}
// Metadata Definition System.Text.RegularExpressions.MatchEvaluator
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t39_0_0_0;
static ParameterInfo MatchEvaluator_t1029_MatchEvaluator__ctor_m6310_ParameterInfos[] = 
{
	{"object", 0, 134218467, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218468, &EmptyCustomAttributesCache, &IntPtr_t39_0_0_0},
};
extern TypeInfo MatchEvaluator_t1029_il2cpp_TypeInfo;
extern Il2CppType Void_t40_0_0_0;
extern void* RuntimeInvoker_Void_t40_Object_t_IntPtr_t39 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.MatchEvaluator::.ctor(System.Object,System.IntPtr)
MethodInfo MatchEvaluator__ctor_m6310_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MatchEvaluator__ctor_m6310/* method */
	, &MatchEvaluator_t1029_il2cpp_TypeInfo/* declaring_type */
	, &Void_t40_0_0_0/* return_type */
	, RuntimeInvoker_Void_t40_Object_t_IntPtr_t39/* invoker_method */
	, MatchEvaluator_t1029_MatchEvaluator__ctor_m6310_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 673/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Match_t1032_0_0_0;
static ParameterInfo MatchEvaluator_t1029_MatchEvaluator_Invoke_m9766_ParameterInfos[] = 
{
	{"match", 0, 134218469, &EmptyCustomAttributesCache, &Match_t1032_0_0_0},
};
extern TypeInfo MatchEvaluator_t1029_il2cpp_TypeInfo;
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.MatchEvaluator::Invoke(System.Text.RegularExpressions.Match)
MethodInfo MatchEvaluator_Invoke_m9766_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&MatchEvaluator_Invoke_m9766/* method */
	, &MatchEvaluator_t1029_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, MatchEvaluator_t1029_MatchEvaluator_Invoke_m9766_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 674/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Match_t1032_0_0_0;
extern Il2CppType AsyncCallback_t35_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo MatchEvaluator_t1029_MatchEvaluator_BeginInvoke_m9767_ParameterInfos[] = 
{
	{"match", 0, 134218470, &EmptyCustomAttributesCache, &Match_t1032_0_0_0},
	{"callback", 1, 134218471, &EmptyCustomAttributesCache, &AsyncCallback_t35_0_0_0},
	{"object", 2, 134218472, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo MatchEvaluator_t1029_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t34_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Text.RegularExpressions.MatchEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.AsyncCallback,System.Object)
MethodInfo MatchEvaluator_BeginInvoke_m9767_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&MatchEvaluator_BeginInvoke_m9767/* method */
	, &MatchEvaluator_t1029_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t34_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, MatchEvaluator_t1029_MatchEvaluator_BeginInvoke_m9767_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 675/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t34_0_0_0;
static ParameterInfo MatchEvaluator_t1029_MatchEvaluator_EndInvoke_m9768_ParameterInfos[] = 
{
	{"result", 0, 134218473, &EmptyCustomAttributesCache, &IAsyncResult_t34_0_0_0},
};
extern TypeInfo MatchEvaluator_t1029_il2cpp_TypeInfo;
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.MatchEvaluator::EndInvoke(System.IAsyncResult)
MethodInfo MatchEvaluator_EndInvoke_m9768_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&MatchEvaluator_EndInvoke_m9768/* method */
	, &MatchEvaluator_t1029_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, MatchEvaluator_t1029_MatchEvaluator_EndInvoke_m9768_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 676/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* MatchEvaluator_t1029_MethodInfos[] =
{
	&MatchEvaluator__ctor_m6310_MethodInfo,
	&MatchEvaluator_Invoke_m9766_MethodInfo,
	&MatchEvaluator_BeginInvoke_m9767_MethodInfo,
	&MatchEvaluator_EndInvoke_m9768_MethodInfo,
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
extern MethodInfo MatchEvaluator_Invoke_m9766_MethodInfo;
extern MethodInfo MatchEvaluator_BeginInvoke_m9767_MethodInfo;
extern MethodInfo MatchEvaluator_EndInvoke_m9768_MethodInfo;
static MethodInfo* MatchEvaluator_t1029_VTable[] =
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
	&MatchEvaluator_Invoke_m9766_MethodInfo,
	&MatchEvaluator_BeginInvoke_m9767_MethodInfo,
	&MatchEvaluator_EndInvoke_m9768_MethodInfo,
};
extern TypeInfo ICloneable_t84_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t85_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair MatchEvaluator_t1029_InterfacesOffsets[] = 
{
	{ &ICloneable_t84_il2cpp_TypeInfo, 4},
	{ &ISerializable_t85_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType MatchEvaluator_t1029_0_0_0;
extern Il2CppType MatchEvaluator_t1029_1_0_0;
extern TypeInfo MulticastDelegate_t38_il2cpp_TypeInfo;
struct MatchEvaluator_t1029;
extern TypeInfo MatchEvaluator_t1029_il2cpp_TypeInfo;
TypeInfo MatchEvaluator_t1029_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "MatchEvaluator"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, MatchEvaluator_t1029_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t38_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &MatchEvaluator_t1029_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, MatchEvaluator_t1029_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &MatchEvaluator_t1029_il2cpp_TypeInfo/* cast_class */
	, &MatchEvaluator_t1029_0_0_0/* byval_arg */
	, &MatchEvaluator_t1029_1_0_0/* this_arg */
	, MatchEvaluator_t1029_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_MatchEvaluator_t1029/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MatchEvaluator_t1029)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
