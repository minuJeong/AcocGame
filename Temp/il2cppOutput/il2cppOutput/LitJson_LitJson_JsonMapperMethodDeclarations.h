#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.JsonMapper
struct JsonMapper_t536;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Object
struct Object_t;
// LitJson.JsonReader
struct JsonReader_t912;
// LitJson.IJsonWrapper
struct IJsonWrapper_t889;
// LitJson.WrapperFactory
struct WrapperFactory_t902;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t907;
// LitJson.ImporterFunc
struct ImporterFunc_t900;
// LitJson.JsonWriter
struct JsonWriter_t885;
// System.String
struct String_t;
// LitJson.JsonData
struct JsonData_t537;
// System.IO.TextReader
struct TextReader_t877;

// System.Void LitJson.JsonMapper::.ctor()
 void JsonMapper__ctor_m4940 (JsonMapper_t536 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::.cctor()
 void JsonMapper__cctor_m4941 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddArrayMetadata(System.Type)
 void JsonMapper_AddArrayMetadata_m4942 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddObjectMetadata(System.Type)
 void JsonMapper_AddObjectMetadata_m4943 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddTypeProperties(System.Type)
 void JsonMapper_AddTypeProperties_m4944 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo LitJson.JsonMapper::GetConvOp(System.Type,System.Type)
 MethodInfo_t292 * JsonMapper_GetConvOp_m4945 (Object_t * __this/* static, unused */, Type_t * ___t1, Type_t * ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::ReadValue(System.Type,LitJson.JsonReader)
 Object_t * JsonMapper_ReadValue_m4946 (Object_t * __this/* static, unused */, Type_t * ___inst_type, JsonReader_t912 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
 Object_t * JsonMapper_ReadValue_m4947 (Object_t * __this/* static, unused */, WrapperFactory_t902 * ___factory, JsonReader_t912 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::ReadSkip(LitJson.JsonReader)
 void JsonMapper_ReadSkip_m4948 (Object_t * __this/* static, unused */, JsonReader_t912 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
 void JsonMapper_RegisterBaseExporters_m4949 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
 void JsonMapper_RegisterBaseImporters_m4950 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
 void JsonMapper_RegisterImporter_m4951 (Object_t * __this/* static, unused */, Object_t* ___table, Type_t * ___json_type, Type_t * ___value_type, ImporterFunc_t900 * ___importer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::WriteValue(System.Object,LitJson.JsonWriter,System.Boolean,System.Int32)
 void JsonMapper_WriteValue_m4952 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t885 * ___writer, bool ___writer_is_private, int32_t ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonMapper::ToJson(System.Object)
 String_t* JsonMapper_ToJson_m4953 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::ToJson(System.Object,LitJson.JsonWriter)
 void JsonMapper_ToJson_m4954 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t885 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(LitJson.JsonReader)
 JsonData_t537 * JsonMapper_ToObject_m4955 (Object_t * __this/* static, unused */, JsonReader_t912 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.IO.TextReader)
 JsonData_t537 * JsonMapper_ToObject_m4956 (Object_t * __this/* static, unused */, TextReader_t877 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.String)
 JsonData_t537 * JsonMapper_ToObject_m2781 (Object_t * __this/* static, unused */, String_t* ___json, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,LitJson.JsonReader)
 Object_t * JsonMapper_ToWrapper_m4957 (Object_t * __this/* static, unused */, WrapperFactory_t902 * ___factory, JsonReader_t912 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
 Object_t * JsonMapper_ToWrapper_m4958 (Object_t * __this/* static, unused */, WrapperFactory_t902 * ___factory, String_t* ___json, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::UnregisterExporters()
 void JsonMapper_UnregisterExporters_m4959 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::UnregisterImporters()
 void JsonMapper_UnregisterImporters_m4960 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ReadSkip>m__0()
 Object_t * JsonMapper_U3CReadSkipU3Em__0_m4961 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__1(System.Object,LitJson.JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__1_m4962 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t885 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__2(System.Object,LitJson.JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__2_m4963 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t885 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__3(System.Object,LitJson.JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__3_m4964 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t885 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__4(System.Object,LitJson.JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__4_m4965 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t885 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__5(System.Object,LitJson.JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__5_m4966 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t885 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__6(System.Object,LitJson.JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__6_m4967 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t885 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__7(System.Object,LitJson.JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__7_m4968 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t885 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__8(System.Object,LitJson.JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__8_m4969 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t885 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__9(System.Object,LitJson.JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__9_m4970 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t885 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__A(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__A_m4971 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__B(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__B_m4972 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__C(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__C_m4973 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__D(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__D_m4974 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__E(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__E_m4975 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__F(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__F_m4976 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__10(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__10_m4977 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__11(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__11_m4978 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__12(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__12_m4979 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__13(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__13_m4980 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__14(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__14_m4981 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__15(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__15_m4982 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__16()
 Object_t * JsonMapper_U3CToObjectU3Em__16_m4983 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__17()
 Object_t * JsonMapper_U3CToObjectU3Em__17_m4984 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__18()
 Object_t * JsonMapper_U3CToObjectU3Em__18_m4985 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
