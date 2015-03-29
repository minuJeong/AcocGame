#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseGeoPoint
struct ParseGeoPoint_t1117;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// Parse.ParseGeoDistance
#include "Parse_Unity_Parse_ParseGeoDistance.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void Parse.ParseGeoPoint::.ctor(System.Double,System.Double)
 void ParseGeoPoint__ctor_m5685 (ParseGeoPoint_t1117 * __this, double ___latitude, double ___longitude, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Parse.ParseGeoPoint::get_Latitude()
 double ParseGeoPoint_get_Latitude_m5686 (ParseGeoPoint_t1117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseGeoPoint::set_Latitude(System.Double)
 void ParseGeoPoint_set_Latitude_m5687 (ParseGeoPoint_t1117 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Parse.ParseGeoPoint::get_Longitude()
 double ParseGeoPoint_get_Longitude_m5688 (ParseGeoPoint_t1117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseGeoPoint::set_Longitude(System.Double)
 void ParseGeoPoint_set_Longitude_m5689 (ParseGeoPoint_t1117 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseGeoDistance Parse.ParseGeoPoint::DistanceTo(Parse.ParseGeoPoint)
 ParseGeoDistance_t1116  ParseGeoPoint_DistanceTo_m5690 (ParseGeoPoint_t1117 * __this, ParseGeoPoint_t1117  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseGeoPoint::ToJSON()
 Object_t* ParseGeoPoint_ToJSON_m5691 (ParseGeoPoint_t1117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
