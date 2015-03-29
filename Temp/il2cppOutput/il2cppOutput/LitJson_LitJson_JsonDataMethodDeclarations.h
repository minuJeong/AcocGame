#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.JsonData
struct JsonData_t537;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t429;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t95;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// LitJson.JsonWriter
struct JsonWriter_t885;
// System.Collections.IDictionary
struct IDictionary_t255;
// System.Collections.IList
struct IList_t869;
// LitJson.IJsonWrapper
struct IJsonWrapper_t889;
// LitJson.JsonType
#include "LitJson_LitJson_JsonType.h"

// System.Void LitJson.JsonData::.ctor()
 void JsonData__ctor_m4809 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Boolean)
 void JsonData__ctor_m4810 (JsonData_t537 * __this, bool ___boolean, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Double)
 void JsonData__ctor_m4811 (JsonData_t537 * __this, double ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Int32)
 void JsonData__ctor_m4812 (JsonData_t537 * __this, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Int64)
 void JsonData__ctor_m4813 (JsonData_t537 * __this, int64_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Object)
 void JsonData__ctor_m4814 (JsonData_t537 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.String)
 void JsonData__ctor_m4815 (JsonData_t537 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.ICollection.get_Count()
 int32_t JsonData_System_Collections_ICollection_get_Count_m4816 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.ICollection.get_IsSynchronized()
 bool JsonData_System_Collections_ICollection_get_IsSynchronized_m4817 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.ICollection.get_SyncRoot()
 Object_t * JsonData_System_Collections_ICollection_get_SyncRoot_m4818 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.get_IsFixedSize()
 bool JsonData_System_Collections_IDictionary_get_IsFixedSize_m4819 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.get_IsReadOnly()
 bool JsonData_System_Collections_IDictionary_get_IsReadOnly_m4820 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonData::System.Collections.IDictionary.get_Keys()
 Object_t * JsonData_System_Collections_IDictionary_get_Keys_m4821 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonData::System.Collections.IDictionary.get_Values()
 Object_t * JsonData_System_Collections_IDictionary_get_Values_m4822 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsArray()
 bool JsonData_LitJson_IJsonWrapper_get_IsArray_m4823 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsBoolean()
 bool JsonData_LitJson_IJsonWrapper_get_IsBoolean_m4824 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsDouble()
 bool JsonData_LitJson_IJsonWrapper_get_IsDouble_m4825 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsInt()
 bool JsonData_LitJson_IJsonWrapper_get_IsInt_m4826 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsLong()
 bool JsonData_LitJson_IJsonWrapper_get_IsLong_m4827 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsObject()
 bool JsonData_LitJson_IJsonWrapper_get_IsObject_m4828 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsString()
 bool JsonData_LitJson_IJsonWrapper_get_IsString_m4829 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsFixedSize()
 bool JsonData_System_Collections_IList_get_IsFixedSize_m4830 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsReadOnly()
 bool JsonData_System_Collections_IList_get_IsReadOnly_m4831 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * JsonData_System_Collections_IDictionary_get_Item_m4832 (JsonData_t537 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void JsonData_System_Collections_IDictionary_set_Item_m4833 (JsonData_t537 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.get_Item(System.Int32)
 Object_t * JsonData_System_Collections_Specialized_IOrderedDictionary_get_Item_m4834 (JsonData_t537 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.set_Item(System.Int32,System.Object)
 void JsonData_System_Collections_Specialized_IOrderedDictionary_set_Item_m4835 (JsonData_t537 * __this, int32_t ___idx, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.IList.get_Item(System.Int32)
 Object_t * JsonData_System_Collections_IList_get_Item_m4836 (JsonData_t537 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.set_Item(System.Int32,System.Object)
 void JsonData_System_Collections_IList_set_Item_m4837 (JsonData_t537 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void JsonData_System_Collections_ICollection_CopyTo_m4838 (JsonData_t537 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Add(System.Object,System.Object)
 void JsonData_System_Collections_IDictionary_Add_m4839 (JsonData_t537 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Clear()
 void JsonData_System_Collections_IDictionary_Clear_m4840 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.Contains(System.Object)
 bool JsonData_System_Collections_IDictionary_Contains_m4841 (JsonData_t537 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.IDictionary.GetEnumerator()
 Object_t * JsonData_System_Collections_IDictionary_GetEnumerator_m4842 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Remove(System.Object)
 void JsonData_System_Collections_IDictionary_Remove_m4843 (JsonData_t537 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LitJson.JsonData::System.Collections.IEnumerable.GetEnumerator()
 Object_t * JsonData_System_Collections_IEnumerable_GetEnumerator_m4844 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.GetBoolean()
 bool JsonData_LitJson_IJsonWrapper_GetBoolean_m4845 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double LitJson.JsonData::LitJson.IJsonWrapper.GetDouble()
 double JsonData_LitJson_IJsonWrapper_GetDouble_m4846 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::LitJson.IJsonWrapper.GetInt()
 int32_t JsonData_LitJson_IJsonWrapper_GetInt_m4847 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 LitJson.JsonData::LitJson.IJsonWrapper.GetLong()
 int64_t JsonData_LitJson_IJsonWrapper_GetLong_m4848 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::LitJson.IJsonWrapper.GetString()
 String_t* JsonData_LitJson_IJsonWrapper_GetString_m4849 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetBoolean(System.Boolean)
 void JsonData_LitJson_IJsonWrapper_SetBoolean_m4850 (JsonData_t537 * __this, bool ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetDouble(System.Double)
 void JsonData_LitJson_IJsonWrapper_SetDouble_m4851 (JsonData_t537 * __this, double ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetInt(System.Int32)
 void JsonData_LitJson_IJsonWrapper_SetInt_m4852 (JsonData_t537 * __this, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetLong(System.Int64)
 void JsonData_LitJson_IJsonWrapper_SetLong_m4853 (JsonData_t537 * __this, int64_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetString(System.String)
 void JsonData_LitJson_IJsonWrapper_SetString_m4854 (JsonData_t537 * __this, String_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::LitJson.IJsonWrapper.ToJson()
 String_t* JsonData_LitJson_IJsonWrapper_ToJson_m4855 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.ToJson(LitJson.JsonWriter)
 void JsonData_LitJson_IJsonWrapper_ToJson_m4856 (JsonData_t537 * __this, JsonWriter_t885 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.IList.Add(System.Object)
 int32_t JsonData_System_Collections_IList_Add_m4857 (JsonData_t537 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Clear()
 void JsonData_System_Collections_IList_Clear_m4858 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.Contains(System.Object)
 bool JsonData_System_Collections_IList_Contains_m4859 (JsonData_t537 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.IList.IndexOf(System.Object)
 int32_t JsonData_System_Collections_IList_IndexOf_m4860 (JsonData_t537 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Insert(System.Int32,System.Object)
 void JsonData_System_Collections_IList_Insert_m4861 (JsonData_t537 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Remove(System.Object)
 void JsonData_System_Collections_IList_Remove_m4862 (JsonData_t537 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.RemoveAt(System.Int32)
 void JsonData_System_Collections_IList_RemoveAt_m4863 (JsonData_t537 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.GetEnumerator()
 Object_t * JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_m4864 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.Insert(System.Int32,System.Object,System.Object)
 void JsonData_System_Collections_Specialized_IOrderedDictionary_Insert_m4865 (JsonData_t537 * __this, int32_t ___idx, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.RemoveAt(System.Int32)
 void JsonData_System_Collections_Specialized_IOrderedDictionary_RemoveAt_m4866 (JsonData_t537 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::get_Count()
 int32_t JsonData_get_Count_m4867 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsArray()
 bool JsonData_get_IsArray_m4868 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsBoolean()
 bool JsonData_get_IsBoolean_m4869 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsDouble()
 bool JsonData_get_IsDouble_m4870 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsInt()
 bool JsonData_get_IsInt_m4871 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsLong()
 bool JsonData_get_IsLong_m4872 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsObject()
 bool JsonData_get_IsObject_m4873 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsString()
 bool JsonData_get_IsString_m4874 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::get_Item(System.String)
 JsonData_t537 * JsonData_get_Item_m2780 (JsonData_t537 * __this, String_t* ___prop_name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
 void JsonData_set_Item_m4875 (JsonData_t537 * __this, String_t* ___prop_name, JsonData_t537 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::get_Item(System.Int32)
 JsonData_t537 * JsonData_get_Item_m4876 (JsonData_t537 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
 void JsonData_set_Item_m4877 (JsonData_t537 * __this, int32_t ___index, JsonData_t537 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
 Object_t * JsonData_EnsureCollection_m4878 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
 Object_t * JsonData_EnsureDictionary_m4879 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList LitJson.JsonData::EnsureList()
 Object_t * JsonData_EnsureList_m4880 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
 JsonData_t537 * JsonData_ToJsonData_m4881 (JsonData_t537 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::WriteJson(LitJson.IJsonWrapper,LitJson.JsonWriter)
 void JsonData_WriteJson_m4882 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t885 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::Add(System.Object)
 int32_t JsonData_Add_m4883 (JsonData_t537 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::Clear()
 void JsonData_Clear_m4884 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::Equals(LitJson.JsonData)
 bool JsonData_Equals_m4885 (JsonData_t537 * __this, JsonData_t537 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonType LitJson.JsonData::GetJsonType()
 int32_t JsonData_GetJsonType_m4886 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::SetJsonType(LitJson.JsonType)
 void JsonData_SetJsonType_m4887 (JsonData_t537 * __this, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::ToJson()
 String_t* JsonData_ToJson_m4888 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::ToJson(LitJson.JsonWriter)
 void JsonData_ToJson_m4889 (JsonData_t537 * __this, JsonWriter_t885 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::ToString()
 String_t* JsonData_ToString_m2781 (JsonData_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Boolean)
 JsonData_t537 * JsonData_op_Implicit_m4890 (Object_t * __this/* static, unused */, bool ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Double)
 JsonData_t537 * JsonData_op_Implicit_m4891 (Object_t * __this/* static, unused */, double ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int32)
 JsonData_t537 * JsonData_op_Implicit_m4892 (Object_t * __this/* static, unused */, int32_t ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int64)
 JsonData_t537 * JsonData_op_Implicit_m4893 (Object_t * __this/* static, unused */, int64_t ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.String)
 JsonData_t537 * JsonData_op_Implicit_m4894 (Object_t * __this/* static, unused */, String_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::op_Explicit(LitJson.JsonData)
 bool JsonData_op_Explicit_m4895 (Object_t * __this/* static, unused */, JsonData_t537 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double LitJson.JsonData::op_Explicit(LitJson.JsonData)
 double JsonData_op_Explicit_m4896 (Object_t * __this/* static, unused */, JsonData_t537 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::op_Explicit(LitJson.JsonData)
 int32_t JsonData_op_Explicit_m4897 (Object_t * __this/* static, unused */, JsonData_t537 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 LitJson.JsonData::op_Explicit(LitJson.JsonData)
 int64_t JsonData_op_Explicit_m4898 (Object_t * __this/* static, unused */, JsonData_t537 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::op_Explicit(LitJson.JsonData)
 String_t* JsonData_op_Explicit_m4899 (Object_t * __this/* static, unused */, JsonData_t537 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
