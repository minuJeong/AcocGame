#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Uri
struct Uri_t80;
// System.IO.Stream
struct Stream_t990;
// Parse.Internal.TaskQueue
struct TaskQueue_t1076;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t123;
// System.Object
#include "mscorlib_System_Object.h"
// Parse.ParseFile
struct ParseFile_t1113  : public Object_t
{
	// System.Object Parse.ParseFile::mutex
	Object_t * ___mutex;
	// System.String Parse.ParseFile::name
	String_t* ___name;
	// System.String Parse.ParseFile::mimeType
	String_t* ___mimeType;
	// System.Uri Parse.ParseFile::uri
	Uri_t80 * ___uri;
	// System.IO.Stream Parse.ParseFile::dataStream
	Stream_t990 * ___dataStream;
	// Parse.Internal.TaskQueue Parse.ParseFile::taskQueue
	TaskQueue_t1076 * ___taskQueue;
};
struct ParseFile_t1113_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Parse.ParseFile::MIMETypesDictionary
	Dictionary_2_t123 * ___MIMETypesDictionary;
};
