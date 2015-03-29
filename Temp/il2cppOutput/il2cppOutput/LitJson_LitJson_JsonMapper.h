#pragma once
#include <stdint.h>
// System.IFormatProvider
struct IFormatProvider_t905;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>
struct IDictionary_2_t906;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t907;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>
struct IDictionary_2_t908;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct IDictionary_2_t909;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>
struct IDictionary_2_t910;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct IDictionary_2_t911;
// LitJson.JsonWriter
struct JsonWriter_t885;
// LitJson.WrapperFactory
struct WrapperFactory_t902;
// LitJson.ExporterFunc
struct ExporterFunc_t898;
// LitJson.ImporterFunc
struct ImporterFunc_t900;
// System.Object
#include "mscorlib_System_Object.h"
// LitJson.JsonMapper
struct JsonMapper_t536  : public Object_t
{
};
struct JsonMapper_t536_StaticFields{
	// System.Int32 LitJson.JsonMapper::max_nesting_depth
	int32_t ___max_nesting_depth;
	// System.IFormatProvider LitJson.JsonMapper::datetime_format
	Object_t * ___datetime_format;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::base_exporters_table
	Object_t* ___base_exporters_table;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::custom_exporters_table
	Object_t* ___custom_exporters_table;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::base_importers_table
	Object_t* ___base_importers_table;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::custom_importers_table
	Object_t* ___custom_importers_table;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata> LitJson.JsonMapper::array_metadata
	Object_t* ___array_metadata;
	// System.Object LitJson.JsonMapper::array_metadata_lock
	Object_t * ___array_metadata_lock;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>> LitJson.JsonMapper::conv_ops
	Object_t* ___conv_ops;
	// System.Object LitJson.JsonMapper::conv_ops_lock
	Object_t * ___conv_ops_lock;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata> LitJson.JsonMapper::object_metadata
	Object_t* ___object_metadata;
	// System.Object LitJson.JsonMapper::object_metadata_lock
	Object_t * ___object_metadata_lock;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>> LitJson.JsonMapper::type_properties
	Object_t* ___type_properties;
	// System.Object LitJson.JsonMapper::type_properties_lock
	Object_t * ___type_properties_lock;
	// LitJson.JsonWriter LitJson.JsonMapper::static_writer
	JsonWriter_t885 * ___static_writer;
	// System.Object LitJson.JsonMapper::static_writer_lock
	Object_t * ___static_writer_lock;
	// LitJson.WrapperFactory LitJson.JsonMapper::<>f__am$cache10
	WrapperFactory_t902 * ___U3CU3Ef__am$cache10;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache11
	ExporterFunc_t898 * ___U3CU3Ef__am$cache11;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache12
	ExporterFunc_t898 * ___U3CU3Ef__am$cache12;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache13
	ExporterFunc_t898 * ___U3CU3Ef__am$cache13;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache14
	ExporterFunc_t898 * ___U3CU3Ef__am$cache14;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache15
	ExporterFunc_t898 * ___U3CU3Ef__am$cache15;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache16
	ExporterFunc_t898 * ___U3CU3Ef__am$cache16;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache17
	ExporterFunc_t898 * ___U3CU3Ef__am$cache17;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache18
	ExporterFunc_t898 * ___U3CU3Ef__am$cache18;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache19
	ExporterFunc_t898 * ___U3CU3Ef__am$cache19;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1A
	ImporterFunc_t900 * ___U3CU3Ef__am$cache1A;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1B
	ImporterFunc_t900 * ___U3CU3Ef__am$cache1B;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1C
	ImporterFunc_t900 * ___U3CU3Ef__am$cache1C;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1D
	ImporterFunc_t900 * ___U3CU3Ef__am$cache1D;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1E
	ImporterFunc_t900 * ___U3CU3Ef__am$cache1E;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1F
	ImporterFunc_t900 * ___U3CU3Ef__am$cache1F;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache20
	ImporterFunc_t900 * ___U3CU3Ef__am$cache20;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache21
	ImporterFunc_t900 * ___U3CU3Ef__am$cache21;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache22
	ImporterFunc_t900 * ___U3CU3Ef__am$cache22;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache23
	ImporterFunc_t900 * ___U3CU3Ef__am$cache23;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache24
	ImporterFunc_t900 * ___U3CU3Ef__am$cache24;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache25
	ImporterFunc_t900 * ___U3CU3Ef__am$cache25;
	// LitJson.WrapperFactory LitJson.JsonMapper::<>f__am$cache26
	WrapperFactory_t902 * ___U3CU3Ef__am$cache26;
	// LitJson.WrapperFactory LitJson.JsonMapper::<>f__am$cache27
	WrapperFactory_t902 * ___U3CU3Ef__am$cache27;
	// LitJson.WrapperFactory LitJson.JsonMapper::<>f__am$cache28
	WrapperFactory_t902 * ___U3CU3Ef__am$cache28;
};
