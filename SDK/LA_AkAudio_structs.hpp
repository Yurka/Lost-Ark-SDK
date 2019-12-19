#pragma once

// Lost Ark (1.2.0.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LA_Basic.hpp"
#include "LA_Engine_classes.hpp"
#include "LA_Core_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AkAudio.InterpTrackAkEvent.AkEventTrackKey
// 0x000C
struct FAkEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004)
	class UAkEvent*                                    Event;                                                    // 0x0000(0x0008)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
