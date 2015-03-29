#pragma once
#include <stdint.h>
// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile)
struct CultureInfo_t872;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile)
struct NumberFormatInfo_t870;
// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile)
struct DateTimeFormatInfo_t954;
// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile)
struct TextInfo_t3219;
// System.String
struct String_t;
// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile)
struct CompareInfo_t3286;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3318;
// System.Globalization.CultureInfo
struct CultureInfo_t872;
// System.Globalization.Calendar
struct Calendar_t3313;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Collections.Hashtable
struct Hashtable_t48;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t57;
// System.Object
#include "mscorlib_System_Object.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Globalization.CultureInfo
struct CultureInfo_t872  : public Object_t
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t870 * ___numInfo;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t954 * ___dateTimeInfo;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3219 * ___textInfo;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t3286 * ___compareInfo;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3318* ___optional_calendars;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t872 * ___parent_culture;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3313 * ___calendar;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t21* ___cached_serialized_form;
};
struct CultureInfo_t872_StaticFields{
	// System.Int32 System.Globalization.CultureInfo::NumOptionalCalendars
	int32_t ___NumOptionalCalendars;
	// System.Int32 System.Globalization.CultureInfo::GregorianTypeMask
	int32_t ___GregorianTypeMask;
	// System.Int32 System.Globalization.CultureInfo::CalendarTypeBits
	int32_t ___CalendarTypeBits;
	// System.Int32 System.Globalization.CultureInfo::InvariantCultureId
	int32_t ___InvariantCultureId;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t872 * ___invariant_culture_info;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	Object_t * ___shared_table_lock;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t48 * ___shared_by_number;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t48 * ___shared_by_name;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t57 * ___U3CU3Ef__switch$map19;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t57 * ___U3CU3Ef__switch$map1A;
};
