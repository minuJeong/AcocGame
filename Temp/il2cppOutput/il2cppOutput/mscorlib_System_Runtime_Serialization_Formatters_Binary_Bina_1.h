#pragma once
#include <stdint.h>
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3526;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3491;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterTy.h"
// System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "mscorlib_System_Runtime_Serialization_Formatters_TypeFilterL.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t3514  : public Object_t
{
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::assembly_format
	int32_t ___assembly_format;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::binder
	SerializationBinder_t3526 * ___binder;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::context
	StreamingContext_t2615  ___context;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::surrogate_selector
	Object_t * ___surrogate_selector;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::type_format
	int32_t ___type_format;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::filter_level
	int32_t ___filter_level;
};
struct BinaryFormatter_t3514_StaticFields{
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::<DefaultSurrogateSelector>k__BackingField
	Object_t * ___U3CDefaultSurrogateSelectorU3Ek__BackingField;
};
