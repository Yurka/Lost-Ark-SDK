#pragma once

// Lost Ark (1.12.11.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LA_Basic.hpp"
#include "LA_Core_classes.hpp"
#include "LA_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GFxUI.SwfMovie.FlashTextureRescale
enum class EFlashTextureRescale : uint8_t
{
	FlashTextureScale_High         = 0,
	FlashTextureScale_Low          = 1,
	FlashTextureScale_NextLow      = 2,
	FlashTextureScale_Mult4        = 3,
	FlashTextureScale_None         = 4,
	FlashTextureScale_MAX          = 5
};


// Enum GFxUI.GFxMoviePlayer.ASType
enum class EASType : uint8_t
{
	AS_Undefined                   = 0,
	AS_Null                        = 1,
	AS_Number                      = 2,
	AS_Int                         = 3,
	AS_String                      = 4,
	AS_Boolean                     = 5,
	AS_Object                      = 6,
	AS_Slot                        = 7,
	AS_MAX                         = 8
};


// Enum GFxUI.GFxMoviePlayer.GFxAlign
enum class EGFxAlign : uint8_t
{
	Align_Center                   = 0,
	Align_TopCenter                = 1,
	Align_BottomCenter             = 2,
	Align_CenterLeft               = 3,
	Align_CenterRight              = 4,
	Align_TopLeft                  = 5,
	Align_TopRight                 = 6,
	Align_BottomLeft               = 7,
	Align_BottomRight              = 8,
	Align_MAX                      = 9
};


// Enum GFxUI.GFxMoviePlayer.GFxScaleMode
enum class EGFxScaleMode : uint8_t
{
	SM_NoScale                     = 0,
	SM_ShowAll                     = 1,
	SM_ExactFit                    = 2,
	SM_NoBorder                    = 3,
	SM_MAX                         = 4
};


// Enum GFxUI.GFxMoviePlayer.GFxTimingMode
enum class EGFxTimingMode : uint8_t
{
	TM_Game                        = 0,
	TM_Real                        = 1,
	TM_MAX                         = 2
};


// Enum GFxUI.GFxMoviePlayer.GFxRenderTextureMode
enum class EGFxRenderTextureMode : uint8_t
{
	RTM_Opaque                     = 0,
	RTM_Alpha                      = 1,
	RTM_AlphaComposite             = 2,
	RTM_MAX                        = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GFxUI.GFxEngine.GCReference
// 0x0010
struct FGCReference
{
	class UObject*                                     m_object;                                                 // 0x0000(0x0008)
	int                                                m_count;                                                  // 0x0008(0x0004)
	int                                                m_statid;                                                 // 0x000C(0x0004)
};

// ScriptStruct GFxUI.GFxMoviePlayer.ASValue
// 0x0028
struct FASValue
{
	TEnumAsByte<EASType>                               Type;                                                     // 0x0000(0x0001) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned long                                      B : 1;                                                    // 0x0004(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	float                                              N;                                                        // 0x0008(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	int                                                I;                                                        // 0x000C(0x0004) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	struct FString                                     S;                                                        // 0x0010(0x0010) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	class UGFxObject*                                  O;                                                        // 0x0020(0x0008) (NonTransactional, EditorOnly, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
};

// ScriptStruct GFxUI.GFxMoviePlayer.ExternalTexture
// 0x0018
struct FExternalTexture
{
	struct FString                                     Resource;                                                 // 0x0000(0x0010) (Interp, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	class UTexture*                                    Texture;                                                  // 0x0010(0x0008) (Interp, RepRetry, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
};

// ScriptStruct GFxUI.GFxMoviePlayer.SoundThemeBinding
// 0x0020
struct FSoundThemeBinding
{
	struct FName                                       ThemeName;                                                // 0x0000(0x0008) (RepNotify, Interp, NonTransactional, NotForConsole, PrivateWrite, CrossLevelActive)
	class UUISoundTheme*                               Theme;                                                    // 0x0008(0x0008) (RepNotify, Interp, NonTransactional, NotForConsole, PrivateWrite, CrossLevelActive)
	struct FString                                     ThemeClassName;                                           // 0x0010(0x0010) (RepNotify, Interp, NonTransactional, NotForConsole, PrivateWrite, CrossLevelActive)
};

// ScriptStruct GFxUI.GFxMoviePlayer.GFxWidgetBinding
// 0x0010
struct FGFxWidgetBinding
{
	struct FName                                       WidgetName;                                               // 0x0000(0x0008) (NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	class UClass*                                      WidgetClass;                                              // 0x0008(0x0008) (NonTransactional, EditorOnly, NotForConsole, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
};

// ScriptStruct GFxUI.GFxObject.ASColorTransform
// 0x0020
struct FASColorTransform
{
	struct FLinearColor                                Multiply;                                                 // 0x0000(0x0010) (Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	struct FLinearColor                                Add;                                                      // 0x0010(0x0010) (Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
};

// ScriptStruct GFxUI.GFxObject.ASDisplayInfo
// 0x002C
struct FASDisplayInfo
{
	float                                              X;                                                        // 0x0000(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	float                                              Y;                                                        // 0x0004(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	float                                              Z;                                                        // 0x0008(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	float                                              Rotation;                                                 // 0x000C(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	float                                              XRotation;                                                // 0x0010(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	float                                              YRotation;                                                // 0x0014(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	float                                              XScale;                                                   // 0x0018(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	float                                              YScale;                                                   // 0x001C(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	float                                              ZScale;                                                   // 0x0020(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	float                                              Alpha;                                                    // 0x0024(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      Visible : 1;                                              // 0x0028(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      hasX : 1;                                                 // 0x0028(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      hasY : 1;                                                 // 0x0028(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      hasZ : 1;                                                 // 0x0028(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      hasRotation : 1;                                          // 0x0028(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      hasXRotation : 1;                                         // 0x0028(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      hasYRotation : 1;                                         // 0x0028(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      hasXScale : 1;                                            // 0x0028(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      hasYScale : 1;                                            // 0x0028(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      hasZScale : 1;                                            // 0x0028(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      hasAlpha : 1;                                             // 0x0028(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	unsigned long                                      hasVisible : 1;                                           // 0x0028(0x0004) (RepNotify, Interp, NonTransactional, RepRetry, PrivateWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
};

// ScriptStruct GFxUI.GFxClikWidget.EventData
// 0x0034
struct FEventData
{
	class UGFxObject*                                  _this;                                                    // 0x0000(0x0008)
	class UGFxObject*                                  Target;                                                   // 0x0008(0x0008)
	struct FString                                     Type;                                                     // 0x0010(0x0010)
	int                                                Data;                                                     // 0x0020(0x0004)
	int                                                mouseIndex;                                               // 0x0024(0x0004)
	int                                                Button;                                                   // 0x0028(0x0004)
	int                                                Index;                                                    // 0x002C(0x0004)
	int                                                lastIndex;                                                // 0x0030(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
