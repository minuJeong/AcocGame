#pragma once
#include <stdint.h>
// UnityEngine.UI.FontData
struct FontData_t638;
// System.String
struct String_t;
// UnityEngine.TextGenerator
struct TextGenerator_t682;
// UnityEngine.Material
struct Material_t108;
// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
// UnityEngine.UI.Text
struct Text_t532  : public MaskableGraphic_t666
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t638 * ___m_FontData;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t682 * ___m_TextCache;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t682 * ___m_TextCacheForLayout;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback;
};
struct Text_t532_StaticFields{
	// System.Single UnityEngine.UI.Text::kEpsilon
	float ___kEpsilon;
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t108 * ___s_DefaultText;
};
