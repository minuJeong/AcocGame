#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseObject
struct ParseObject_t534;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct IDictionary_2_t1120;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// Parse.ParseACL
struct ParseACL_t1080;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1003;
// System.Type
struct Type_t;
// System.Func`1<Parse.ParseObject>
struct Func_1_t1169;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>
struct IEnumerable_1_t1056;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>
struct IDictionary_2_t1170;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1125;
// System.Collections.Generic.IList`1<Parse.ParseObject>
struct IList_1_t1171;
// System.Collections.Generic.ICollection`1<Parse.ParseObject>
struct ICollection_1_t1172;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1040;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1173;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// Parse.ParseQuery`1<Parse.ParseObject>
struct ParseQuery_1_t1174;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t1010;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t1175;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1099;
// Parse.ParseFile
struct ParseFile_t1113;
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_3.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void Parse.ParseObject::.ctor()
 void ParseObject__ctor_m5731 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::.ctor(System.String)
 void ParseObject__ctor_m5732 (ParseObject_t534 * __this, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::GetFieldForPropertyName(System.Type,System.String)
 String_t* ParseObject_GetFieldForPropertyName_m5733 (Object_t * __this/* static, unused */, Type_t * ___type, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::SetDefaultValues()
 void ParseObject_SetDefaultValues_m5734 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::GetClassName(System.Type)
 String_t* ParseObject_GetClassName_m5735 (Object_t * __this/* static, unused */, Type_t * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`1<Parse.ParseObject> Parse.ParseObject::GetFactory(System.String)
 Func_1_t1169 * ParseObject_GetFactory_m5736 (Object_t * __this/* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::Create(System.String)
 ParseObject_t534 * ParseObject_Create_m5737 (Object_t * __this/* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::CreateWithoutData(System.String,System.String)
 ParseObject_t534 * ParseObject_CreateWithoutData_m5738 (Object_t * __this/* static, unused */, String_t* ___className, String_t* ___objectId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::UnregisterSubclass(System.String)
 void ParseObject_UnregisterSubclass_m5739 (Object_t * __this/* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.ParseObject::GetType(System.String)
 Type_t * ParseObject_GetType_m5740 (Object_t * __this/* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Revert()
 void ParseObject_Revert_m5741 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeAfterFetch(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParseObject_MergeAfterFetch_m5742 (ParseObject_t534 * __this, Object_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeAfterFailedSave(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>)
 void ParseObject_MergeAfterFailedSave_m5743 (ParseObject_t534 * __this, Object_t* ___operationsBeforeSave, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeAfterSave(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParseObject_MergeAfterSave_m5744 (ParseObject_t534 * __this, Object_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeMagicFields(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParseObject_MergeMagicFields_m5745 (ParseObject_t534 * __this, Object_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeFromServer(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParseObject_MergeFromServer_m5746 (ParseObject_t534 * __this, Object_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeFromObject(Parse.ParseObject)
 void ParseObject_MergeFromObject_m5747 (ParseObject_t534 * __this, ParseObject_t534 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_HasDirtyChildren()
 bool ParseObject_get_HasDirtyChildren_m5748 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckpointMutableContainer(System.Object)
 void ParseObject_CheckpointMutableContainer_m5749 (ParseObject_t534 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckForChangesToMutableContainer(System.String,System.Object)
 void ParseObject_CheckForChangesToMutableContainer_m5750 (ParseObject_t534 * __this, String_t* ___key, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckForChangesToMutableContainers()
 void ParseObject_CheckForChangesToMutableContainers_m5751 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject> Parse.ParseObject::FindUnsavedChildren()
 Object_t* ParseObject_FindUnsavedChildren_m5752 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject> Parse.ParseObject::CollectFetchedObjects()
 Object_t* ParseObject_CollectFetchedObjects_m5753 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseObject::ToJSONObjectForSaving(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>)
 Object_t* ParseObject_ToJSONObjectForSaving_m5754 (ParseObject_t534 * __this, Object_t* ___operations, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseObject::ServerDataToJSONObjectForSerialization()
 Object_t* ParseObject_ServerDataToJSONObjectForSerialization_m5755 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation> Parse.ParseObject::StartSave()
 Object_t* ParseObject_StartSave_m5756 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
 Task_t390 * ParseObject_SaveAsync_m5757 (ParseObject_t534 * __this, Task_t390 * ___toAwait, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync()
 Task_t390 * ParseObject_SaveAsync_m2774 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync(System.Threading.CancellationToken)
 Task_t390 * ParseObject_SaveAsync_m5758 (ParseObject_t534 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
 Task_1_t1125 * ParseObject_FetchAsyncInternal_m5759 (ParseObject_t534 * __this, Task_t390 * ___toAwait, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchAsyncInternal(System.Threading.CancellationToken)
 Task_1_t1125 * ParseObject_FetchAsyncInternal_m5760 (ParseObject_t534 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchIfNeededAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
 Task_1_t1125 * ParseObject_FetchIfNeededAsyncInternal_m5761 (ParseObject_t534 * __this, Task_t390 * ___toAwait, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchIfNeededAsyncInternal(System.Threading.CancellationToken)
 Task_1_t1125 * ParseObject_FetchIfNeededAsyncInternal_m5762 (ParseObject_t534 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
 Task_t390 * ParseObject_DeleteAsync_m5763 (ParseObject_t534 * __this, Task_t390 * ___toAwait, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync()
 Task_t390 * ParseObject_DeleteAsync_m5764 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync(System.Threading.CancellationToken)
 Task_t390 * ParseObject_DeleteAsync_m5765 (ParseObject_t534 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CollectDirtyChildren(System.Object,System.Collections.Generic.IList`1<Parse.ParseObject>,System.Collections.Generic.ICollection`1<Parse.ParseObject>,System.Collections.Generic.ICollection`1<Parse.ParseObject>)
 void ParseObject_CollectDirtyChildren_m5766 (Object_t * __this/* static, unused */, Object_t * ___node, Object_t* ___dirtyChildren, Object_t* ___seen, Object_t* ___seenNew, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CollectDirtyChildren(System.Object,System.Collections.Generic.IList`1<Parse.ParseObject>)
 void ParseObject_CollectDirtyChildren_m5767 (Object_t * __this/* static, unused */, Object_t * ___node, Object_t* ___dirtyChildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CanBeSerializedAsValue(System.Object)
 bool ParseObject_CanBeSerializedAsValue_m5768 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_CanBeSerialized()
 bool ParseObject_get_CanBeSerialized_m5769 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeepSaveAsync(System.Object,System.String,System.Threading.CancellationToken)
 Task_t390 * ParseObject_DeepSaveAsync_m5770 (Object_t * __this/* static, unused */, Object_t * ___obj, String_t* ___sessionToken, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Remove(System.String)
 void ParseObject_Remove_m5771 (ParseObject_t534 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::ApplyOperations(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParseObject_ApplyOperations_m5772 (ParseObject_t534 * __this, Object_t* ___operations, Object_t* ___map, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::RebuildEstimatedData()
 void ParseObject_RebuildEstimatedData_m5773 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::PerformOperation(System.String,Parse.Internal.IParseFieldOperation)
 void ParseObject_PerformOperation_m5774 (ParseObject_t534 * __this, String_t* ___key, Object_t * ___operation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnSettingValue(System.String&,System.Object&)
 void ParseObject_OnSettingValue_m5775 (ParseObject_t534 * __this, String_t** ___key, Object_t ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseObject::get_Item(System.String)
 Object_t * ParseObject_get_Item_m5776 (ParseObject_t534 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_Item(System.String,System.Object)
 void ParseObject_set_Item_m2773 (ParseObject_t534 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Set(System.String,System.Object)
 void ParseObject_Set_m5777 (ParseObject_t534 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String)
 void ParseObject_Increment_m5778 (ParseObject_t534 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String,System.Int64)
 void ParseObject_Increment_m5779 (ParseObject_t534 * __this, String_t* ___key, int64_t ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String,System.Double)
 void ParseObject_Increment_m5780 (ParseObject_t534 * __this, String_t* ___key, double ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::AddToList(System.String,System.Object)
 void ParseObject_AddToList_m5781 (ParseObject_t534 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::AddUniqueToList(System.String,System.Object)
 void ParseObject_AddUniqueToList_m5782 (ParseObject_t534 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::ContainsKey(System.String)
 bool ParseObject_ContainsKey_m5783 (ParseObject_t534 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsDataAvailable()
 bool ParseObject_get_IsDataAvailable_m5784 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CheckIsDataAvailable(System.String)
 bool ParseObject_CheckIsDataAvailable_m5785 (ParseObject_t534 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckGetAccess(System.String)
 void ParseObject_CheckGetAccess_m5786 (ParseObject_t534 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckKeyIsMutable(System.String)
 void ParseObject_CheckKeyIsMutable_m5787 (ParseObject_t534 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::IsKeyMutable(System.String)
 bool ParseObject_IsKeyMutable_m5788 (ParseObject_t534 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::HasSameId(Parse.ParseObject)
 bool ParseObject_HasSameId_m5789 (ParseObject_t534 * __this, ParseObject_t534 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation> Parse.ParseObject::get_CurrentOperations()
 Object_t* ParseObject_get_CurrentOperations_m5790 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.ParseObject::get_Keys()
 Object_t* ParseObject_get_Keys_m5791 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::AddToHashedObjects(System.Object)
 void ParseObject_AddToHashedObjects_m5792 (ParseObject_t534 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseACL Parse.ParseObject::get_ACL()
 ParseACL_t1080 * ParseObject_get_ACL_m5793 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_ACL(Parse.ParseACL)
 void ParseObject_set_ACL_m5794 (ParseObject_t534 * __this, ParseACL_t1080 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsNew()
 bool ParseObject_get_IsNew_m5795 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_IsNew(System.Boolean)
 void ParseObject_set_IsNew_m5796 (ParseObject_t534 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParseObject::get_UpdatedAt()
 Nullable_1_t1168  ParseObject_get_UpdatedAt_m5797 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_UpdatedAt(System.Nullable`1<System.DateTime>)
 void ParseObject_set_UpdatedAt_m5798 (ParseObject_t534 * __this, Nullable_1_t1168  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParseObject::get_CreatedAt()
 Nullable_1_t1168  ParseObject_get_CreatedAt_m5799 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_CreatedAt(System.Nullable`1<System.DateTime>)
 void ParseObject_set_CreatedAt_m5800 (ParseObject_t534 * __this, Nullable_1_t1168  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsDirty()
 bool ParseObject_get_IsDirty_m5801 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_IsDirty(System.Boolean)
 void ParseObject_set_IsDirty_m5802 (ParseObject_t534 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::IsKeyDirty(System.String)
 bool ParseObject_IsKeyDirty_m5803 (ParseObject_t534 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CheckIsDirty(System.Boolean)
 bool ParseObject_CheckIsDirty_m5804 (ParseObject_t534 * __this, bool ___considerChildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::get_ObjectId()
 String_t* ParseObject_get_ObjectId_m5805 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_ObjectId(System.String)
 void ParseObject_set_ObjectId_m5806 (ParseObject_t534 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::SetObjectIdInternal(System.String)
 void ParseObject_SetObjectIdInternal_m5807 (ParseObject_t534 * __this, String_t* ___objectId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::get_ClassName()
 String_t* ParseObject_get_ClassName_m5808 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_ClassName(System.String)
 void ParseObject_set_ClassName_m5809 (ParseObject_t534 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Add(System.String,System.Object)
 void ParseObject_Add_m5810 (ParseObject_t534 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Parse.ParseObject::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator()
 Object_t* ParseObject_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_GetEnumerator_m5811 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.ParseObject::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ParseObject_System_Collections_IEnumerable_GetEnumerator_m5812 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseObject> Parse.ParseObject::GetQuery(System.String)
 ParseQuery_1_t1174 * ParseObject_GetQuery_m5813 (Object_t * __this/* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Parse.ParseObject::get_PropertyMappings()
 Object_t* ParseObject_get_PropertyMappings_m5814 (ParseObject_t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnFieldsChanged(System.Collections.Generic.IEnumerable`1<System.String>)
 void ParseObject_OnFieldsChanged_m5815 (ParseObject_t534 * __this, Object_t* ___fieldNames, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnPropertyChanged(System.String)
 void ParseObject_OnPropertyChanged_m5816 (ParseObject_t534 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
 void ParseObject_add_PropertyChanged_m5817 (ParseObject_t534 * __this, PropertyChangedEventHandler_t1175 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
 void ParseObject_remove_PropertyChanged_m5818 (ParseObject_t534 * __this, PropertyChangedEventHandler_t1175 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::<MergeFromObject>b__5(System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>)
 String_t* ParseObject_U3CMergeFromObjectU3Eb__5_m5819 (Object_t * __this/* static, unused */, KeyValuePair_2_t1176  ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.ParseObject::<MergeFromObject>b__6(System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>)
 Object_t * ParseObject_U3CMergeFromObjectU3Eb__6_m5820 (Object_t * __this/* static, unused */, KeyValuePair_2_t1176  ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<FindUnsavedChildren>b__9(Parse.ParseObject)
 bool ParseObject_U3CFindUnsavedChildrenU3Eb__9_m5821 (Object_t * __this/* static, unused */, ParseObject_t534 * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<CollectFetchedObjects>b__b(Parse.ParseObject)
 bool ParseObject_U3CCollectFetchedObjectsU3Eb__b_m5822 (Object_t * __this/* static, unused */, ParseObject_t534 * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::<CollectFetchedObjects>b__c(Parse.ParseObject)
 String_t* ParseObject_U3CCollectFetchedObjectsU3Eb__c_m5823 (Object_t * __this/* static, unused */, ParseObject_t534 * ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::<CollectFetchedObjects>b__d(Parse.ParseObject)
 ParseObject_t534 * ParseObject_U3CCollectFetchedObjectsU3Eb__d_m5824 (Object_t * __this/* static, unused */, ParseObject_t534 * ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::<FetchAsyncInternal>b__1b(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 ParseObject_t534 * ParseObject_U3CFetchAsyncInternalU3Eb__1b_m5825 (ParseObject_t534 * __this, Task_1_t1099 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<DeleteAsync>b__25(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 bool ParseObject_U3CDeleteAsyncU3Eb__25_m5826 (ParseObject_t534 * __this, Task_1_t1099 * ____, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<CanBeSerializedAsValue>b__2b(Parse.ParseObject)
 bool ParseObject_U3CCanBeSerializedAsValueU3Eb__2b_m5827 (Object_t * __this/* static, unused */, ParseObject_t534 * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<DeepSaveAsync>b__38(Parse.ParseFile)
 bool ParseObject_U3CDeepSaveAsyncU3Eb__38_m5828 (Object_t * __this/* static, unused */, ParseFile_t1113 * ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::.cctor()
 void ParseObject__cctor_m5829 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<.cctor>b__8b()
 bool ParseObject_U3C_cctorU3Eb__8b_m5830 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
