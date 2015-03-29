#pragma once
#include <stdint.h>
// System.Text.DecoderFallback
struct DecoderFallback_t3638;
// System.Text.EncoderFallback
struct EncoderFallback_t3645;
// System.Reflection.Assembly
struct Assembly_t147;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.String
struct String_t;
// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile)
struct Encoding_t1422;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.Encoding
struct Encoding_t1422  : public Object_t
{
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3638 * ___decoder_fallback;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t3645 * ___encoder_fallback;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name;
};
struct Encoding_t1422_StaticFields{
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t147 * ___i18nAssembly;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t5* ___encodings;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1422 * ___asciiEncoding;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1422 * ___bigEndianEncoding;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1422 * ___defaultEncoding;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1422 * ___utf7Encoding;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1422 * ___utf8EncodingWithMarkers;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1422 * ___utf8EncodingWithoutMarkers;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1422 * ___unicodeEncoding;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1422 * ___isoLatin1Encoding;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1422 * ___utf8EncodingUnsafe;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1422 * ___utf32Encoding;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1422 * ___bigEndianUTF32Encoding;
	// System.Object System.Text.Encoding::lockobj
	Object_t * ___lockobj;
};
