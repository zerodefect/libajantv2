/* SPDX-License-Identifier: MIT */
/**
	@file		ntv2devicefeatures.cpp
	@brief		Implementations of non-auto-generated device capability functions.
	@copyright	(C) 2004-2022 AJA Video Systems, Inc.
	@note		The functions in this module are those that aren't auto-generated by a Python script from CSV
				files that were exported from a spreadsheet. The mechanically-generated functions are placed
				in the 'ntv2devicefeatures.hpp' file that's included below. See the README in 'ntv2projects/sdkgen'
				for more details.
**/

#include "ntv2devicefeatures.h"

//	Most of the device features functions are generated using a Python script from files inside 'ntv2projects/sdkgen/device'.
//	The script writes the declarations into 'ntv2devicefeatures.hh', and implementations into 'ntv2devicefeatures.hpp'...
#include "ntv2devicefeatures.hpp"

///////////////////////////////////////////////////////////////////////////
//	The rest of the non-sdkgen-generated function implementations follow...
///////////////////////////////////////////////////////////////////////////

bool NTV2DeviceCanDoAudioOut(const NTV2DeviceID inDeviceID)
{
	UWord outputs = 0;
	outputs += NTV2DeviceGetNumVideoOutputs(inDeviceID);
	outputs += NTV2DeviceGetNumHDMIAudioOutputChannels(inDeviceID);
	outputs += NTV2DeviceGetNumAnalogAudioOutputChannels(inDeviceID);
	return outputs > 0 ? true : false;
}

bool NTV2DeviceCanDoAudioIn(const NTV2DeviceID inDeviceID)
{
	UWord inputs = 0;
	inputs += NTV2DeviceGetNumVideoInputs(inDeviceID);
	inputs += NTV2DeviceGetNumHDMIAudioInputChannels(inDeviceID);
	inputs += NTV2DeviceGetNumAnalogAudioInputChannels(inDeviceID);
	return inputs > 0 ? true : false;
}

bool NTV2DeviceCanDo292Out(NTV2DeviceID boardID, UWord index0)
{
	switch (index0)
	{
	case 0:		return NTV2DeviceCanDoWidget(boardID, NTV2_WgtSDIOut1);
	case 1:		return NTV2DeviceCanDoWidget(boardID, NTV2_WgtSDIOut2);
	case 2:		return NTV2DeviceCanDoWidget(boardID, NTV2_WgtSDIOut3);
	case 3:		return NTV2DeviceCanDoWidget(boardID, NTV2_WgtSDIOut4);
	default:	return false;
	}
}	//	NTV2DeviceCanDo292Out

bool NTV2DeviceCanDo3GOut (NTV2DeviceID boardID, UWord index0)
{
	switch (index0)
	{
		case 0:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIOut1);
		case 1:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIOut2);
		case 2:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIOut3);
		case 3:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIOut4);
		case 4:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIOut5);
		case 5:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIOut6);
		case 6:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIOut7);
		case 7:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIOut8);
		default:	return false;
	}
}	//	NTV2DeviceCanDo3GOut

bool NTV2DeviceCanDo12GOut(NTV2DeviceID boardID, UWord index0)
{
	switch (index0)
	{
		case 0:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt12GSDIOut1);
		case 1:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt12GSDIOut2);
		case 2:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt12GSDIOut3);
		case 3:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt12GSDIOut4);
		default:	return false;
	}
}	//	NTV2DeviceCanDo12GOut

bool NTV2DeviceCanDo292In(NTV2DeviceID boardID, UWord index0)
{
	switch (index0)
	{
		case 0:		return NTV2DeviceCanDoWidget(boardID, NTV2_WgtSDIIn1);
		case 1:		return NTV2DeviceCanDoWidget(boardID, NTV2_WgtSDIIn2);
		default:	return false;
	}
}	//	NTV2DeviceCanDo292In

bool NTV2DeviceCanDo3GIn(NTV2DeviceID boardID, UWord index0)
{
	switch (index0)
	{
		case 0:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIIn1);
		case 1:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIIn2);
		case 2:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIIn3);
		case 3:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIIn4);
		case 4:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIIn5);
		case 5:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIIn6);
		case 6:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIIn7);
		case 7:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIIn8);
		default:	return false;
	}
}	//	NTV2DeviceCanDo3GIn

bool NTV2DeviceCanDo12GIn(NTV2DeviceID boardID, UWord index0)
{
	switch (index0)
	{
		case 0:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt12GSDIIn1);
		case 1:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt12GSDIIn2);
		case 2:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt12GSDIIn3);
		case 3:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt12GSDIIn4);
		default:	return false;
	}
}	//	NTV2DeviceCanDo12GIn

bool NTV2DeviceCanDoLTCEmbeddedN (NTV2DeviceID boardID, UWord index0)
{
	switch (index0)
	{
		case 0:		return (NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIIn1) || NTV2DeviceCanDoWidget(boardID, NTV2_WgtSDIIn1) || NTV2DeviceCanDoWidget(boardID, NTV2_Wgt12GSDIIn1));
		case 1:		return (NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIIn2) || NTV2DeviceCanDoWidget(boardID, NTV2_WgtSDIIn2) || NTV2DeviceCanDoWidget(boardID, NTV2_Wgt12GSDIIn2));
		case 2:		return (NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIIn3) || NTV2DeviceCanDoWidget(boardID, NTV2_Wgt12GSDIIn3));
		case 3:		return (NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIIn4) || NTV2DeviceCanDoWidget(boardID, NTV2_Wgt12GSDIIn4));
		case 4:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIIn5);
		case 5:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIIn6);
		case 6:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIIn7);
		case 7:		return NTV2DeviceCanDoWidget(boardID, NTV2_Wgt3GSDIIn8);
		default:	return false;
	}
}	//	NTV2DeviceCanDoLTCEmbeddedN

bool NTV2DeviceCanDoOutputDestination (const NTV2DeviceID inDeviceID, const NTV2OutputDestination inOutputDest)
{
	const UWord numSDIs = NTV2DeviceGetNumVideoOutputs(inDeviceID);
	switch(inOutputDest)
	{
		case NTV2_OUTPUTDESTINATION_ANALOG: return NTV2DeviceGetNumAnalogVideoOutputs(inDeviceID) > 0;
		case NTV2_OUTPUTDESTINATION_HDMI:	return NTV2DeviceGetNumHDMIVideoOutputs(inDeviceID) > 0;
		case NTV2_OUTPUTDESTINATION_SDI1:	return numSDIs > 0;
		case NTV2_OUTPUTDESTINATION_SDI2:	return numSDIs > 1;
		case NTV2_OUTPUTDESTINATION_SDI3:	return numSDIs > 2;
		case NTV2_OUTPUTDESTINATION_SDI4:	return numSDIs > 3;
		case NTV2_OUTPUTDESTINATION_SDI5:	return numSDIs > 4;
		case NTV2_OUTPUTDESTINATION_SDI6:	return numSDIs > 5;
		case NTV2_OUTPUTDESTINATION_SDI7:	return numSDIs > 6;
		case NTV2_OUTPUTDESTINATION_SDI8:	return numSDIs > 7;
		default:							break;
	}
	return false;
}


UWord Get8MBFrameSizeFactor (const NTV2FrameGeometry inFG, const NTV2FrameBufferFormat inFBF)
{
	UWord	factor = 1; //	default
	switch (inFG)
	{
		case NTV2_FG_4x1920x1080:
		case NTV2_FG_1920x1080:
			if (inFBF == NTV2_FBF_10BIT_ARGB  ||  inFBF == NTV2_FBF_16BIT_ARGB	||	inFBF == NTV2_FBF_48BIT_RGB || inFBF == NTV2_FBF_12BIT_RGB_PACKED )
				factor = 2;
			break;

		case NTV2_FG_2048x1556:
		case NTV2_FG_2048x1588:
			factor = (inFBF == NTV2_FBF_10BIT_ARGB	||	inFBF == NTV2_FBF_16BIT_ARGB  ||  inFBF == NTV2_FBF_48BIT_RGB || inFBF == NTV2_FBF_12BIT_RGB_PACKED)  ?	 4	:  2;
			break;

		case NTV2_FG_4x2048x1080:
		case NTV2_FG_2048x1080:
		case NTV2_FG_1920x1112:
		case NTV2_FG_1920x1114:
		case NTV2_FG_2048x1112:
		case NTV2_FG_2048x1114:
			factor = (inFBF == NTV2_FBF_16BIT_ARGB)	 ?	4  :  2;
			break;

		case NTV2_FG_4x3840x2160:
			switch (inFBF)
			{
				case NTV2_FBF_12BIT_RGB_PACKED:
				case NTV2_FBF_48BIT_RGB:	return 24;
				case NTV2_FBF_10BIT_ARGB:	return 22;
				case NTV2_FBF_16BIT_ARGB:	factor = 2; break;
				default:					break;
			}
			break;

		case NTV2_FG_4x4096x2160:
			switch (inFBF)
			{
				case NTV2_FBF_ARGB:
				case NTV2_FBF_RGBA:
				case NTV2_FBF_ABGR:
				case NTV2_FBF_10BIT_RGB:
				case NTV2_FBF_10BIT_DPX:
				case NTV2_FBF_10BIT_YCBCRA:
				case NTV2_FBF_10BIT_DPX_LE:
				case NTV2_FBF_10BIT_RGB_PACKED: return 17;
				case NTV2_FBF_12BIT_RGB_PACKED:
				case NTV2_FBF_48BIT_RGB:		return 26;
				case NTV2_FBF_10BIT_ARGB:		return 23;
				case NTV2_FBF_16BIT_ARGB:		return 34;
				default:						break;
			}
			break;

#if defined(_DEBUG)
		case NTV2_FG_1280x720:
		case NTV2_FG_720x486:
		case NTV2_FG_720x576:
		case NTV2_FG_720x508:
		case NTV2_FG_720x598:
		case NTV2_FG_1280x740:
		case NTV2_FG_720x514:
		case NTV2_FG_720x612:
		case NTV2_FG_INVALID:
			break;
#else
		default:	break;
#endif
	}
	if (inFG == NTV2_FG_4x1920x1080 || inFG == NTV2_FG_4x2048x1080)
		factor *= 4;
	if (inFG == NTV2_FG_4x3840x2160 || inFG == NTV2_FG_4x4096x2160)
		factor *= 16;
	return factor;
}


// Overloading not supported by the ANSI C compiler used for Linux drivers.
#if (defined(__CPLUSPLUS__) || defined(__cplusplus)) && !defined(NTV2_BUILDING_DRIVER)
ULWord NTV2DeviceGetFrameBufferSize(NTV2DeviceID boardID)
#else
ULWord NTV2DeviceGetFrameBufferSize_Ex(NTV2DeviceID boardID)
#endif
{
	(void) boardID;
	return XENA2_FRAMEBUFFER_SIZE;
}


ULWord NTV2DeviceGetFrameBufferSize (NTV2DeviceID boardID, NTV2FrameGeometry inFrameGeometry, NTV2FrameBufferFormat frameFormat)
{
	ULWord multiplier = 1; // default

	switch (boardID)
	{
	case DEVICE_ID_TTAP:
		break;
	// based on FrameGeometry
	case DEVICE_ID_KONALHIDVI:
	case DEVICE_ID_KONALHI:
	case DEVICE_ID_KONALHEPLUS:
	case DEVICE_ID_IOEXPRESS:
	case DEVICE_ID_CORVID1:
	case DEVICE_ID_CORVID22:
	case DEVICE_ID_CORVID3G:
	case DEVICE_ID_IOXT:
	case DEVICE_ID_KONA1:
	case DEVICE_ID_IOX3:
		switch (inFrameGeometry)
		{
		case NTV2_FG_2048x1080:
		case NTV2_FG_2048x1556:
		case NTV2_FG_2048x1588:
		case NTV2_FG_1920x1112:
		case NTV2_FG_2048x1112:
			multiplier = 2;
			break;
		default:
			break;
		}
		break;
	case DEVICE_ID_KONA3G:
	case DEVICE_ID_KONA3GQUAD:
	case DEVICE_ID_CORVID24:
	case DEVICE_ID_IO4K:
	case DEVICE_ID_IO4KUFC:
	case DEVICE_ID_KONA4:
	case DEVICE_ID_KONA4UFC:
	case DEVICE_ID_CORVID88:
	case DEVICE_ID_CORVID44:
	case DEVICE_ID_CORVIDHEVC:
	case DEVICE_ID_CORVIDHBR:
	case DEVICE_ID_KONAIP_2022:
	case DEVICE_ID_KONAIP_4CH_2SFP:
	case DEVICE_ID_KONAIP_1RX_1TX_1SFP_J2K:
	case DEVICE_ID_KONAIP_2TX_1SFP_J2K:
	case DEVICE_ID_KONAIP_1RX_1TX_2110:
	case DEVICE_ID_IO4KPLUS:
	case DEVICE_ID_IOIP_2022:
	case DEVICE_ID_IOIP_2110:
	case DEVICE_ID_IOIP_2110_RGB12:
	case DEVICE_ID_KONAIP_2110:
	case DEVICE_ID_KONAIP_2110_RGB12:
	case DEVICE_ID_KONAHDMI:
	case DEVICE_ID_KONA5:
	case DEVICE_ID_KONA5_8KMK:
	case DEVICE_ID_KONA5_8K:
	case DEVICE_ID_KONA5_2X4K:
	case DEVICE_ID_KONA5_3DLUT:
	case DEVICE_ID_KONA5_OE1:
	case DEVICE_ID_KONA5_OE2:
	case DEVICE_ID_KONA5_OE3:
	case DEVICE_ID_KONA5_OE4:
	case DEVICE_ID_KONA5_OE5:
	case DEVICE_ID_KONA5_OE6:
	case DEVICE_ID_KONA5_OE7:
	case DEVICE_ID_KONA5_OE8:
	case DEVICE_ID_KONA5_OE9:
	case DEVICE_ID_KONA5_OE10:
	case DEVICE_ID_KONA5_OE11:
	case DEVICE_ID_KONA5_OE12:
	case DEVICE_ID_SOJI_OE1:
	case DEVICE_ID_SOJI_OE2:
	case DEVICE_ID_SOJI_OE3:
	case DEVICE_ID_SOJI_OE4:
	case DEVICE_ID_SOJI_OE5:
	case DEVICE_ID_SOJI_OE6:
	case DEVICE_ID_SOJI_OE7:
	case DEVICE_ID_SOJI_3DLUT:
	case DEVICE_ID_SOJI_DIAGS:
	case DEVICE_ID_KONA5_8K_MV_TX:
	case DEVICE_ID_CORVID44_8KMK:
	case DEVICE_ID_CORVID44_8K:
	case DEVICE_ID_CORVID44_2X4K:
	case DEVICE_ID_CORVID44_PLNR:
	case DEVICE_ID_TTAP_PRO:
		switch (inFrameGeometry)
		{
		case NTV2_FG_4x3840x2160:
			if(frameFormat == NTV2_FBF_48BIT_RGB || frameFormat == NTV2_FBF_12BIT_RGB_PACKED || frameFormat == NTV2_FBF_10BIT_ARGB)
				multiplier = 32;
			else
				multiplier = 16;
			break;
		case NTV2_FG_4x4096x2160:
			switch(frameFormat)
			{
			case NTV2_FBF_48BIT_RGB:
			case NTV2_FBF_12BIT_RGB_PACKED:
			case NTV2_FBF_10BIT_ARGB:
			case NTV2_FBF_ARGB:
			case NTV2_FBF_RGBA:
			case NTV2_FBF_10BIT_RGB:
			case NTV2_FBF_ABGR:
			case NTV2_FBF_10BIT_DPX:
			case NTV2_FBF_10BIT_DPX_LE:
				multiplier = 32;
				break;
			default:
				multiplier = 16;
				break;
			}
			break;
		case NTV2_FG_4x1920x1080:
			if(frameFormat == NTV2_FBF_48BIT_RGB || frameFormat == NTV2_FBF_12BIT_RGB_PACKED || frameFormat == NTV2_FBF_10BIT_ARGB)
				multiplier = 8;
			else
				multiplier = 4;
			break;
		case NTV2_FG_1920x1080:
			if( frameFormat == NTV2_FBF_10BIT_ARGB || 
				frameFormat == NTV2_FBF_16BIT_ARGB ||
				frameFormat == NTV2_FBF_48BIT_RGB ||
				frameFormat == NTV2_FBF_12BIT_RGB_PACKED)
				multiplier = 2;
			break;
		case NTV2_FG_4x2048x1080:
			switch(frameFormat)
			{
			case NTV2_FBF_48BIT_RGB:
			case NTV2_FBF_12BIT_RGB_PACKED:
			case NTV2_FBF_10BIT_ARGB:
			case NTV2_FBF_ARGB:
			case NTV2_FBF_RGBA:
			case NTV2_FBF_10BIT_RGB:
			case NTV2_FBF_ABGR:
			case NTV2_FBF_10BIT_DPX:
			case NTV2_FBF_10BIT_DPX_LE:
				multiplier = 8;
				break;
			default:
				multiplier = 4;
				break;
			}
			break;
		case NTV2_FG_2048x1080:
		case NTV2_FG_2048x1556:
		case NTV2_FG_2048x1588:
		case NTV2_FG_1920x1112:
		case NTV2_FG_1920x1114:
		case NTV2_FG_2048x1112:
		case NTV2_FG_2048x1114:
			if(frameFormat == NTV2_FBF_16BIT_ARGB)
				multiplier = 4;
			else
				multiplier = 2;
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}

#if (defined(__CPLUSPLUS__) || defined(__cplusplus)) && !defined(NTV2_BUILDING_DRIVER)
	return (NTV2DeviceGetFrameBufferSize(boardID)* multiplier);
#else
	return (NTV2DeviceGetFrameBufferSize_Ex(boardID)* multiplier);
#endif
}


#if (defined(__CPLUSPLUS__) || defined(__cplusplus)) && !defined(NTV2_BUILDING_DRIVER)
ULWord NTV2DeviceGetNumberFrameBuffers(NTV2DeviceID boardID)
#else
ULWord NTV2DeviceGetNumberFrameBuffers_Ex(NTV2DeviceID boardID)
#endif
{
	if(NTV2DeviceCanDoStackedAudio(boardID))
	{
		ULWord totalFrames = NTV2DeviceGetActiveMemorySize(boardID)/0x800000;
		totalFrames -= NTV2DeviceGetNumAudioSystems(boardID)*(NTV2DeviceCanDo12gRouting(boardID) ? 4 : 1);
		if(boardID == DEVICE_ID_IOX3 || boardID == DEVICE_ID_KONA5_8K_MV_TX)
			totalFrames -= 6;
		return totalFrames;
	}
	else
	{
		switch (boardID)
		{
		case DEVICE_ID_IOEXPRESS:
		case DEVICE_ID_KONALHEPLUS:
		case DEVICE_ID_TTAP:
			return 16;
		case DEVICE_ID_KONALHIDVI:
		case DEVICE_ID_KONALHI:
		case DEVICE_ID_CORVID1:
		case DEVICE_ID_CORVID3G:
			return 32;
		case DEVICE_ID_IOXT:
			return 24;
		case DEVICE_ID_CORVID22:
		case DEVICE_ID_KONA3GQUAD: //Took this from below quad has no ufc but it still reserves 8 buffers for 3D feature.
		case DEVICE_ID_CORVID24:
			return 64;
		case DEVICE_ID_IO4K:
		case DEVICE_ID_IO4KUFC:
		case DEVICE_ID_KONA4:
		case DEVICE_ID_KONA4UFC:
		case DEVICE_ID_CORVID88:
		case DEVICE_ID_CORVID44:
		case DEVICE_ID_CORVIDHEVC:
		case DEVICE_ID_KONAIP_2022:
		case DEVICE_ID_KONAIP_4CH_2SFP:
		case DEVICE_ID_KONAIP_1RX_1TX_1SFP_J2K:
		case DEVICE_ID_KONAIP_2TX_1SFP_J2K:
		case DEVICE_ID_KONAIP_1RX_1TX_2110:
		case DEVICE_ID_IO4KPLUS:
		case DEVICE_ID_IOIP_2022:
		case DEVICE_ID_IOIP_2110:
		case DEVICE_ID_IOIP_2110_RGB12:
		case DEVICE_ID_KONAIP_2110:
		case DEVICE_ID_KONAIP_2110_RGB12:
		case DEVICE_ID_KONA1:
		case DEVICE_ID_KONAHDMI:
		case DEVICE_ID_KONA5:
			return 111;
		case DEVICE_ID_KONA3G:
			return 56; // ufc uses 8 
		case DEVICE_ID_CORVIDHBR:
			return 56;
		default:
			return 0;
		}
	}
}


ULWord NTV2DeviceGetNumberFrameBuffers (NTV2DeviceID boardID, NTV2FrameGeometry inFrameGeometry, NTV2FrameBufferFormat frameFormat)
{
	ULWord divisor = 1; // default
	switch (boardID)
	{
	case DEVICE_ID_TTAP:
		break;
	// based on FrameGeometry
	case DEVICE_ID_KONALHIDVI:
	case DEVICE_ID_KONALHI:
	case DEVICE_ID_KONALHEPLUS:
	case DEVICE_ID_IOEXPRESS:
	case DEVICE_ID_CORVID1:
	case DEVICE_ID_CORVID22:
	case DEVICE_ID_CORVID3G:
	case DEVICE_ID_IOXT:
	case DEVICE_ID_KONA1:
	case DEVICE_ID_IOX3:
		switch (inFrameGeometry)
		{
		case NTV2_FG_2048x1080:
		case NTV2_FG_2048x1556:
		case NTV2_FG_2048x1588:
		case NTV2_FG_1920x1112:
		case NTV2_FG_2048x1112:
			divisor = 2;
			break;
		default:
			break;
		}
		break;
	case DEVICE_ID_KONA3G:
	case DEVICE_ID_KONA3GQUAD:
	case DEVICE_ID_CORVID24:
	case DEVICE_ID_IO4K:
	case DEVICE_ID_IO4KUFC:
	case DEVICE_ID_KONA4:
	case DEVICE_ID_KONA4UFC:
	case DEVICE_ID_CORVID88:
	case DEVICE_ID_CORVID44:
	case DEVICE_ID_CORVIDHEVC:
	case DEVICE_ID_KONAIP_2022:
	case DEVICE_ID_KONAIP_4CH_2SFP:
	case DEVICE_ID_KONAIP_1RX_1TX_1SFP_J2K:
	case DEVICE_ID_KONAIP_2TX_1SFP_J2K:
	case DEVICE_ID_CORVIDHBR:
	case DEVICE_ID_KONAIP_1RX_1TX_2110:
	case DEVICE_ID_IO4KPLUS:
	case DEVICE_ID_IOIP_2022:
	case DEVICE_ID_IOIP_2110:
	case DEVICE_ID_IOIP_2110_RGB12:
	case DEVICE_ID_KONAIP_2110:
	case DEVICE_ID_KONAIP_2110_RGB12:
	case DEVICE_ID_KONAHDMI:
	case DEVICE_ID_KONA5:
	case DEVICE_ID_KONA5_8KMK:
	case DEVICE_ID_KONA5_8K:
	case DEVICE_ID_KONA5_2X4K:
	case DEVICE_ID_KONA5_3DLUT:
	case DEVICE_ID_KONA5_OE1:
	case DEVICE_ID_KONA5_OE2:
	case DEVICE_ID_KONA5_OE3:
	case DEVICE_ID_KONA5_OE4:
	case DEVICE_ID_KONA5_OE5:
	case DEVICE_ID_KONA5_OE6:
	case DEVICE_ID_KONA5_OE7:
	case DEVICE_ID_KONA5_OE8:
	case DEVICE_ID_KONA5_OE9:
	case DEVICE_ID_KONA5_OE10:
	case DEVICE_ID_KONA5_OE11:
	case DEVICE_ID_KONA5_OE12:
	case DEVICE_ID_SOJI_OE1:
	case DEVICE_ID_SOJI_OE2:
	case DEVICE_ID_SOJI_OE3:
	case DEVICE_ID_SOJI_OE4:
	case DEVICE_ID_SOJI_OE5:
	case DEVICE_ID_SOJI_OE6:
	case DEVICE_ID_SOJI_OE7:
	case DEVICE_ID_SOJI_3DLUT:
	case DEVICE_ID_SOJI_DIAGS:
	case DEVICE_ID_KONA5_8K_MV_TX:
	case DEVICE_ID_CORVID44_8KMK:
	case DEVICE_ID_CORVID44_8K:
	case DEVICE_ID_CORVID44_2X4K:
	case DEVICE_ID_CORVID44_PLNR:
	case DEVICE_ID_TTAP_PRO:
		switch (inFrameGeometry)
		{
		case NTV2_FG_4x1920x1080:
		case NTV2_FG_1920x1080:
			if(frameFormat == NTV2_FBF_10BIT_ARGB || frameFormat == NTV2_FBF_16BIT_ARGB
				|| frameFormat == NTV2_FBF_48BIT_RGB || frameFormat == NTV2_FBF_12BIT_RGB_PACKED)
				divisor = 2;
			break;
		case NTV2_FG_4x2048x1080:
		case NTV2_FG_2048x1080:
		case NTV2_FG_2048x1556:
		case NTV2_FG_2048x1588:
		case NTV2_FG_1920x1112:
		case NTV2_FG_1920x1114:
		case NTV2_FG_2048x1112:
		case NTV2_FG_2048x1114:
			if(frameFormat == NTV2_FBF_16BIT_ARGB)
				divisor = 4;
			else
				divisor = 2;
			break;
		default:
			break;
		}
		if(inFrameGeometry == NTV2_FG_4x1920x1080 || inFrameGeometry == NTV2_FG_4x2048x1080)
			divisor *= 4;
		if(inFrameGeometry == NTV2_FG_4x3840x2160 || inFrameGeometry == NTV2_FG_4x4096x2160)
			divisor *= 16;
		break;
	default:
		break;
	}

	if ( frameFormat == NTV2_FBF_48BIT_RGB || frameFormat == NTV2_FBF_12BIT_RGB_PACKED )
	{
		divisor *= 2;
	}

#if (defined(__CPLUSPLUS__) || defined(__cplusplus)) && !defined(NTV2_BUILDING_DRIVER)
	return (NTV2DeviceGetNumberFrameBuffers(boardID)/divisor);
#else
	return (NTV2DeviceGetNumberFrameBuffers_Ex(boardID)/divisor);
#endif
}


#if (defined(__CPLUSPLUS__) || defined(__cplusplus)) && !defined(NTV2_BUILDING_DRIVER)
ULWord NTV2DeviceGetAudioFrameBuffer(NTV2DeviceID boardID)
#else
ULWord NTV2DeviceGetAudioFrameBuffer_Ex(NTV2DeviceID boardID)
#endif
{
#if (defined(__CPLUSPLUS__) || defined(__cplusplus)) && !defined(NTV2_BUILDING_DRIVER)

	return (NTV2DeviceGetNumberFrameBuffers(boardID) - NTV2DeviceGetNumAudioSystems(boardID));		// audio base is 2 MB buffer at top - 2MB (16 - 1 for 2 MB buffers)

#else		// #if defined(__CPLUSPLUS__) || defined(__cplusplus)

	return (NTV2DeviceGetNumberFrameBuffers_Ex(boardID) - NTV2DeviceGetNumAudioSystems(boardID));		// audio base is 2 MB buffer at top - 2MB (16 - 1 for 2 MB buffers)

#endif		// #if defined(__CPLUSPLUS__) || defined(__cplusplus)
}


#if (defined(__CPLUSPLUS__) || defined(__cplusplus)) && !defined(NTV2_BUILDING_DRIVER)
ULWord NTV2DeviceGetAudioFrameBuffer2(NTV2DeviceID boardID)
#else
ULWord NTV2DeviceGetAudioFrameBuffer2_Ex(NTV2DeviceID boardID)
#endif
{
#if (defined(__CPLUSPLUS__) || defined(__cplusplus)) && !defined(NTV2_BUILDING_DRIVER)
	return (NTV2DeviceGetNumberFrameBuffers(boardID)-2);

#else		// #if defined(__CPLUSPLUS__) || defined(__cplusplus)
	return (NTV2DeviceGetNumberFrameBuffers_Ex(boardID)-2);

#endif		// #if defined(__CPLUSPLUS__) || defined(__cplusplus)
}


ULWord NTV2DeviceGetAudioFrameBuffer (NTV2DeviceID boardID, NTV2FrameGeometry inFrameGeometry, NTV2FrameBufferFormat frameFormat)
{
	return (NTV2DeviceGetNumberFrameBuffers (boardID, inFrameGeometry, frameFormat) - 1);	// audio base is 2 MB buffer at top	 -2MB (16-1 for 2MB buffers)
}


ULWord NTV2DeviceGetAudioFrameBuffer2 (NTV2DeviceID boardID, NTV2FrameGeometry inFrameGeometry, NTV2FrameBufferFormat frameFormat)
{
	return (NTV2DeviceGetNumberFrameBuffers (boardID, inFrameGeometry, frameFormat) - 2);
}


AJAExport bool NTV2DeviceGetVideoFormatFromState (	NTV2VideoFormat *		pOutValue,
													const NTV2FrameRate		inFrameRate,
													const NTV2FrameGeometry inFrameGeometry,
													const NTV2Standard		inStandard,
													const ULWord			inIsSMPTE372Enabled)
{
	return NTV2DeviceGetVideoFormatFromState_Ex (pOutValue, inFrameRate, inFrameGeometry, inStandard, inIsSMPTE372Enabled, false);
}

bool NTV2DeviceGetVideoFormatFromState_Ex(	NTV2VideoFormat *		pOutValue,
											const NTV2FrameRate		inFrameRate,
											const NTV2FrameGeometry inFrameGeometry,
											const NTV2Standard		inStandard,
											const ULWord			inIsSMPTE372Enabled,
											const bool				inIsProgressivePicture)
{
	return NTV2DeviceGetVideoFormatFromState_Ex2 (pOutValue, inFrameRate, inFrameGeometry, inStandard, inIsSMPTE372Enabled, inIsProgressivePicture, true);
}

bool NTV2DeviceGetVideoFormatFromState_Ex2( NTV2VideoFormat *		pOutValue,
											const NTV2FrameRate		inFrameRate,
											const NTV2FrameGeometry inFrameGeometry,
											const NTV2Standard		inStandard,
											const ULWord			inIsSMPTE372Enabled,
											const bool				inIsProgressivePicture,
											const bool				inIsSquareDivision)
{
	if (!pOutValue)
		return false;

	*pOutValue = NTV2_FORMAT_UNKNOWN;

	switch (inStandard)
	{
	case NTV2_STANDARD_525:
		switch (inFrameRate)
		{
		case NTV2_FRAMERATE_2398:	*pOutValue = NTV2_FORMAT_525_2398;		break;
		case NTV2_FRAMERATE_2400:	*pOutValue = NTV2_FORMAT_525_2400;		break;
		case NTV2_FRAMERATE_2997:	*pOutValue = inIsProgressivePicture ? NTV2_FORMAT_525psf_2997 : NTV2_FORMAT_525_5994;	break;
		default:					return false;
		}
		break;

	case NTV2_STANDARD_625:
		*pOutValue = inIsProgressivePicture ? NTV2_FORMAT_625psf_2500 : NTV2_FORMAT_625_5000;
		break;

	case NTV2_STANDARD_720:
		switch (inFrameRate)
		{
		case NTV2_FRAMERATE_2398:	*pOutValue = NTV2_FORMAT_720p_2398;		break;
		case NTV2_FRAMERATE_2500:	*pOutValue = NTV2_FORMAT_720p_2500;		break;
		case NTV2_FRAMERATE_5000:	*pOutValue = NTV2_FORMAT_720p_5000;		break;
		case NTV2_FRAMERATE_5994:	*pOutValue = NTV2_FORMAT_720p_5994;		break;
		case NTV2_FRAMERATE_6000:	*pOutValue = NTV2_FORMAT_720p_6000;		break;
		default:					return false;
		}
		break;

	case NTV2_STANDARD_1080:
	case NTV2_STANDARD_3840i:
	case NTV2_STANDARD_4096i:
		switch (inFrameRate)
		{
		case NTV2_FRAMERATE_2398:
			if (inIsSMPTE372Enabled)
				*pOutValue = NTV2_FORMAT_1080p_2K_4795_B;
			else if ( inFrameGeometry == NTV2_FG_2048x1080 || inFrameGeometry == NTV2_FG_2048x1112 || inFrameGeometry == NTV2_FG_2048x1114)
				*pOutValue = NTV2_FORMAT_1080psf_2K_2398;
			else if (inFrameGeometry == NTV2_FG_4x1920x1080)
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x1920x1080psf_2398 : NTV2_FORMAT_3840x2160psf_2398;
			else if (inFrameGeometry == NTV2_FG_4x2048x1080)
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x2048x1080psf_2398 : NTV2_FORMAT_4096x2160psf_2398;
			else
				*pOutValue = NTV2_FORMAT_1080psf_2398;
			break;
		case NTV2_FRAMERATE_2400:
			if (inIsSMPTE372Enabled)
				*pOutValue = NTV2_FORMAT_1080p_2K_4800_B;
			else if ( inFrameGeometry == NTV2_FG_2048x1080 || inFrameGeometry == NTV2_FG_2048x1112 || inFrameGeometry == NTV2_FG_2048x1114)
				*pOutValue = NTV2_FORMAT_1080psf_2K_2400;
			else if (inFrameGeometry == NTV2_FG_4x1920x1080)
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x1920x1080psf_2400 : NTV2_FORMAT_3840x2160psf_2400;
			else if (inFrameGeometry == NTV2_FG_4x2048x1080)
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x2048x1080psf_2400 : NTV2_FORMAT_4096x2160psf_2400;
			else
				*pOutValue = NTV2_FORMAT_1080psf_2400;
			break;
		case NTV2_FRAMERATE_2500:
			if (inIsSMPTE372Enabled)
			{
				if (inFrameGeometry == NTV2_FG_2048x1080)
					*pOutValue = NTV2_FORMAT_1080p_2K_5000_B;
				else
					*pOutValue = NTV2_FORMAT_1080p_5000_B;
			}
			else if (inFrameGeometry == NTV2_FG_2048x1080 || inFrameGeometry == NTV2_FG_2048x1112 || inFrameGeometry == NTV2_FG_2048x1114)
				*pOutValue = NTV2_FORMAT_1080psf_2K_2500;
			else if (inFrameGeometry == NTV2_FG_4x1920x1080)
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x1920x1080psf_2500 : NTV2_FORMAT_3840x2160psf_2500;
			else if (inFrameGeometry == NTV2_FG_4x2048x1080)
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x2048x1080psf_2500 : NTV2_FORMAT_4096x2160psf_2500;
			else
				*pOutValue = inIsProgressivePicture ? NTV2_FORMAT_1080psf_2500_2 : NTV2_FORMAT_1080i_5000;
			break;
		case NTV2_FRAMERATE_2997:
			if (inIsSMPTE372Enabled)
			{
				if (inFrameGeometry == NTV2_FG_2048x1080)
					*pOutValue = NTV2_FORMAT_1080p_2K_5994_B;
				else
					*pOutValue = NTV2_FORMAT_1080p_5994_B;
			}
			else if (inFrameGeometry == NTV2_FG_4x1920x1080)
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x1920x1080psf_2997 : NTV2_FORMAT_3840x2160psf_2997;
			else if (inFrameGeometry == NTV2_FG_4x2048x1080)
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x2048x1080psf_2997 : NTV2_FORMAT_4096x2160psf_2997;
			else
				*pOutValue = inIsProgressivePicture ? NTV2_FORMAT_1080psf_2997_2: NTV2_FORMAT_1080i_5994;
			break;
		case NTV2_FRAMERATE_3000:
			if (inIsSMPTE372Enabled)
			{
				if (inFrameGeometry == NTV2_FG_2048x1080)
					*pOutValue = NTV2_FORMAT_1080p_2K_6000_B;
				else
					*pOutValue = NTV2_FORMAT_1080p_6000_B;
			}
			else if (inFrameGeometry == NTV2_FG_4x1920x1080)
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x1920x1080psf_3000 : NTV2_FORMAT_3840x2160psf_3000;
			else if (inFrameGeometry == NTV2_FG_4x2048x1080)
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x2048x1080psf_3000 : NTV2_FORMAT_4096x2160psf_3000;
			else
				*pOutValue = inIsProgressivePicture ? NTV2_FORMAT_1080psf_3000_2 : NTV2_FORMAT_1080i_6000;
			break;
		default:
			return false;
		}
		break;

	case NTV2_STANDARD_2K:
		switch (inFrameRate)
		{
		case NTV2_FRAMERATE_1498:	*pOutValue = NTV2_FORMAT_2K_1498;	break;
		case NTV2_FRAMERATE_1500:	*pOutValue = NTV2_FORMAT_2K_1500;	break;
		case NTV2_FRAMERATE_2398:	*pOutValue = NTV2_FORMAT_2K_2398;	break;
		case NTV2_FRAMERATE_2400:	*pOutValue = NTV2_FORMAT_2K_2400;	break;
		case NTV2_FRAMERATE_2500:	*pOutValue = NTV2_FORMAT_2K_2500;	break;
		default:					return false;
		}
		break;

	case NTV2_STANDARD_1080p:
	case NTV2_STANDARD_3840x2160p:
	case NTV2_STANDARD_4096x2160p:
	case NTV2_STANDARD_3840HFR:
	case NTV2_STANDARD_4096HFR:
	case NTV2_STANDARD_7680:
	case NTV2_STANDARD_8192:
		switch (inFrameRate)
		{
		case NTV2_FRAMERATE_2398:
			if ( inFrameGeometry == NTV2_FG_2048x1080 || inFrameGeometry == NTV2_FG_2048x1112 || inFrameGeometry == NTV2_FG_2048x1114)
				*pOutValue = NTV2_FORMAT_1080p_2K_2398;
			else if (inFrameGeometry == NTV2_FG_4x1920x1080)
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x1920x1080p_2398 : NTV2_FORMAT_3840x2160p_2398;
			else if (inFrameGeometry == NTV2_FG_4x2048x1080)
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x2048x1080p_2398 : NTV2_FORMAT_4096x2160p_2398;
			else if (inFrameGeometry == NTV2_FG_4x3840x2160)
				*pOutValue = NTV2_FORMAT_4x3840x2160p_2398;
			else if (inFrameGeometry == NTV2_FG_4x4096x2160)
				*pOutValue = NTV2_FORMAT_4x4096x2160p_2398;
			else
				*pOutValue = NTV2_FORMAT_1080p_2398;
			break;
		case NTV2_FRAMERATE_2400:
			if ( inFrameGeometry == NTV2_FG_2048x1080 || inFrameGeometry == NTV2_FG_2048x1112 || inFrameGeometry == NTV2_FG_2048x1114)
				*pOutValue = NTV2_FORMAT_1080p_2K_2400;
			else if (inFrameGeometry == NTV2_FG_4x1920x1080)
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x1920x1080p_2400 : NTV2_FORMAT_3840x2160p_2400;
			else if (inFrameGeometry == NTV2_FG_4x2048x1080)
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x2048x1080p_2400 : NTV2_FORMAT_4096x2160p_2400;
			else if (inFrameGeometry == NTV2_FG_4x3840x2160)
				*pOutValue = NTV2_FORMAT_4x3840x2160p_2400;
			else if (inFrameGeometry == NTV2_FG_4x4096x2160)
				*pOutValue = NTV2_FORMAT_4x4096x2160p_2400;
			else
				*pOutValue = NTV2_FORMAT_1080p_2400;
			break;
		case NTV2_FRAMERATE_2500:
			if ( inFrameGeometry == NTV2_FG_2048x1080 || inFrameGeometry == NTV2_FG_2048x1112 || inFrameGeometry == NTV2_FG_2048x1114)
				*pOutValue = NTV2_FORMAT_1080p_2K_2500;
			else if (inFrameGeometry == NTV2_FG_4x1920x1080)
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x1920x1080p_2500 : NTV2_FORMAT_3840x2160p_2500;
			else if (inFrameGeometry == NTV2_FG_4x2048x1080)
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x2048x1080p_2500 : NTV2_FORMAT_4096x2160p_2500;
			else if (inFrameGeometry == NTV2_FG_4x3840x2160)
				*pOutValue = NTV2_FORMAT_4x3840x2160p_2500;
			else if (inFrameGeometry == NTV2_FG_4x4096x2160)
				*pOutValue = NTV2_FORMAT_4x4096x2160p_2500;
			else
				*pOutValue = NTV2_FORMAT_1080p_2500;
			break;
		case NTV2_FRAMERATE_2997:
			if ( inFrameGeometry == NTV2_FG_2048x1080 || inFrameGeometry == NTV2_FG_2048x1112 || inFrameGeometry == NTV2_FG_2048x1114)
				*pOutValue = NTV2_FORMAT_1080p_2K_2997;
			else if (inFrameGeometry == NTV2_FG_4x1920x1080)
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x1920x1080p_2997 : NTV2_FORMAT_3840x2160p_2997;
			else if (inFrameGeometry == NTV2_FG_4x2048x1080)
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x2048x1080p_2997 : NTV2_FORMAT_4096x2160p_2997;
			else if (inFrameGeometry == NTV2_FG_4x3840x2160)
				*pOutValue = NTV2_FORMAT_4x3840x2160p_2997;
			else if (inFrameGeometry == NTV2_FG_4x4096x2160)
				*pOutValue = NTV2_FORMAT_4x4096x2160p_2997;
			else
				*pOutValue = NTV2_FORMAT_1080p_2997;
			break;
		case NTV2_FRAMERATE_3000:
			if ( inFrameGeometry == NTV2_FG_2048x1080 || inFrameGeometry == NTV2_FG_2048x1112 || inFrameGeometry == NTV2_FG_2048x1114)
				*pOutValue = NTV2_FORMAT_1080p_2K_3000;
			else if (inFrameGeometry == NTV2_FG_4x1920x1080)
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x1920x1080p_3000 : NTV2_FORMAT_3840x2160p_3000;
			else if (inFrameGeometry == NTV2_FG_4x2048x1080)
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x2048x1080p_3000 : NTV2_FORMAT_4096x2160p_3000;
			else if (inFrameGeometry == NTV2_FG_4x3840x2160)
				*pOutValue = NTV2_FORMAT_4x3840x2160p_3000;
			else if (inFrameGeometry == NTV2_FG_4x4096x2160)
				*pOutValue = NTV2_FORMAT_4x4096x2160p_3000;
			else
				*pOutValue = NTV2_FORMAT_1080p_3000;
			break;
		case NTV2_FRAMERATE_4795:
			if ( inFrameGeometry == NTV2_FG_4x2048x1080 )
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x2048x1080p_4795 : NTV2_FORMAT_4096x2160p_4795;
			else if (inFrameGeometry == NTV2_FG_4x4096x2160)
				*pOutValue = NTV2_FORMAT_4x4096x2160p_4795;
			else
				*pOutValue = NTV2_FORMAT_1080p_2K_4795_A;
			break;
		case NTV2_FRAMERATE_4800:
			if ( inFrameGeometry == NTV2_FG_4x2048x1080 )
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x2048x1080p_4800 : NTV2_FORMAT_4096x2160p_4800;
			else if (inFrameGeometry == NTV2_FG_4x4096x2160)
				*pOutValue = NTV2_FORMAT_4x4096x2160p_4800;
			else
				*pOutValue = NTV2_FORMAT_1080p_2K_4800_A;
			break;
		case NTV2_FRAMERATE_5000:
			if ( inFrameGeometry == NTV2_FG_4x1920x1080 )
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x1920x1080p_5000 : NTV2_FORMAT_3840x2160p_5000;
			else if ( inFrameGeometry == NTV2_FG_4x2048x1080 )
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x2048x1080p_5000 : NTV2_FORMAT_4096x2160p_5000;
			else if ( inFrameGeometry == NTV2_FG_2048x1080 || inFrameGeometry == NTV2_FG_2048x1112 || inFrameGeometry == NTV2_FG_2048x1114)
				*pOutValue = NTV2_FORMAT_1080p_2K_5000_A;
			else if (inFrameGeometry == NTV2_FG_4x3840x2160)
				*pOutValue = NTV2_FORMAT_4x3840x2160p_5000;
			else if (inFrameGeometry == NTV2_FG_4x4096x2160)
				*pOutValue = NTV2_FORMAT_4x4096x2160p_5000;
			else
				*pOutValue = NTV2_FORMAT_1080p_5000_A;
			break;
		case NTV2_FRAMERATE_5994:
			if ( inFrameGeometry == NTV2_FG_4x1920x1080 )
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x1920x1080p_5994 : NTV2_FORMAT_3840x2160p_5994;
			else if ( inFrameGeometry == NTV2_FG_4x2048x1080 )
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x2048x1080p_5994 : NTV2_FORMAT_4096x2160p_5994;
			else if ( inFrameGeometry == NTV2_FG_2048x1080 || inFrameGeometry == NTV2_FG_2048x1112 || inFrameGeometry == NTV2_FG_2048x1114)
				*pOutValue = NTV2_FORMAT_1080p_2K_5994_A;
			else if (inFrameGeometry == NTV2_FG_4x3840x2160)
				*pOutValue = NTV2_FORMAT_4x3840x2160p_5994;
			else if (inFrameGeometry == NTV2_FG_4x4096x2160)
				*pOutValue = NTV2_FORMAT_4x4096x2160p_5994;
			else
				*pOutValue = NTV2_FORMAT_1080p_5994_A;
			break;
		case NTV2_FRAMERATE_6000:
			if ( inFrameGeometry == NTV2_FG_4x1920x1080 )
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x1920x1080p_6000 : NTV2_FORMAT_3840x2160p_6000;
			else if ( inFrameGeometry == NTV2_FG_4x2048x1080 )
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x2048x1080p_6000 : NTV2_FORMAT_4096x2160p_6000;
			else if ( inFrameGeometry == NTV2_FG_2048x1080 || inFrameGeometry == NTV2_FG_2048x1112 || inFrameGeometry == NTV2_FG_2048x1114)
				*pOutValue = NTV2_FORMAT_1080p_2K_6000_A;
			else if (inFrameGeometry == NTV2_FG_4x3840x2160)
				*pOutValue = NTV2_FORMAT_4x3840x2160p_6000;
			else if (inFrameGeometry == NTV2_FG_4x4096x2160)
				*pOutValue = NTV2_FORMAT_4x4096x2160p_6000;
			else
				*pOutValue = NTV2_FORMAT_1080p_6000_A;
			break;
		case NTV2_FRAMERATE_11988:
			if ( inFrameGeometry == NTV2_FG_4x2048x1080 )
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x2048x1080p_11988 : NTV2_FORMAT_4096x2160p_11988;
			break;
		case NTV2_FRAMERATE_12000:
			if ( inFrameGeometry == NTV2_FG_4x2048x1080 )
				*pOutValue = inIsSquareDivision ? NTV2_FORMAT_4x2048x1080p_12000 : NTV2_FORMAT_4096x2160p_12000;
			break;
		default:
			return false;
		}
		break;

	case NTV2_STANDARD_2Kx1080p:
	case NTV2_STANDARD_2Kx1080i:	return false;

#if defined(_DEBUG)
	case NTV2_NUM_STANDARDS:	return false;
#else
	default:					return false;
#endif
	}

	return true;
}

#if !defined(NTV2_DEPRECATE_15_6)
	//	Starting in SDK 15.6, CNTV2Card::HasCanConnectROM returns true if device firmware has ROM that lists valid xpt connections
	bool NTV2DeviceCanConnect (const NTV2DeviceID inDeviceID, const NTV2InputCrosspointID inInputXpt, const NTV2OutputCrosspointID inOutputXpt)
	{	(void) inDeviceID;	(void) inInputXpt;	(void) inOutputXpt;
		return false;
	}
#endif	//	NTV2_DEPRECATE_15_6


#define MAX_OF(__a__,__b__)		((__a__) > (__b__) ? (__a__) : (__b__))

bool NTV2DeviceCanDoTCIndex (const NTV2DeviceID inDeviceID, const NTV2TCIndex inTCIndex)
{
	UWord	maxNumLTCs	= MAX_OF(NTV2DeviceGetNumLTCInputs(inDeviceID), NTV2DeviceGetNumLTCOutputs(inDeviceID));
	UWord	maxNumSDIs	= MAX_OF(NTV2DeviceGetNumVideoInputs(inDeviceID), NTV2DeviceGetNumVideoOutputs(inDeviceID));

	if (NTV2_IS_ATC_VITC2_TIMECODE_INDEX(inTCIndex)	 &&	 !NTV2DeviceCanDoVITC2(inDeviceID))
		return false;	//	Can't do VITC2

	switch (inTCIndex)
	{
		case NTV2_TCINDEX_DEFAULT:		return true;	//	All devices support this index

		case NTV2_TCINDEX_LTC1:			return maxNumLTCs > 0;
		case NTV2_TCINDEX_LTC2:			return maxNumLTCs > 1;

		case NTV2_TCINDEX_SDI1:
		case NTV2_TCINDEX_SDI1_LTC:
		case NTV2_TCINDEX_SDI1_2:		return maxNumSDIs > 0;

		case NTV2_TCINDEX_SDI2:
		case NTV2_TCINDEX_SDI2_LTC:
		case NTV2_TCINDEX_SDI2_2:		return maxNumSDIs > 1;

		case NTV2_TCINDEX_SDI3:
		case NTV2_TCINDEX_SDI3_LTC:
		case NTV2_TCINDEX_SDI3_2:		return maxNumSDIs > 2;

		case NTV2_TCINDEX_SDI4:
		case NTV2_TCINDEX_SDI4_LTC:
		case NTV2_TCINDEX_SDI4_2:		return maxNumSDIs > 3;

		case NTV2_TCINDEX_SDI5:
		case NTV2_TCINDEX_SDI5_LTC:
		case NTV2_TCINDEX_SDI5_2:		return maxNumSDIs > 4;

		case NTV2_TCINDEX_SDI6:
		case NTV2_TCINDEX_SDI6_LTC:
		case NTV2_TCINDEX_SDI6_2:
		case NTV2_TCINDEX_SDI7:
		case NTV2_TCINDEX_SDI7_LTC:
		case NTV2_TCINDEX_SDI7_2:
		case NTV2_TCINDEX_SDI8:
		case NTV2_TCINDEX_SDI8_LTC:
		case NTV2_TCINDEX_SDI8_2:		return maxNumSDIs > 5;

		default:						break;
	}
	return false;
}

bool NTV2DeviceCanDoInputTCIndex (const NTV2DeviceID inDeviceID, const NTV2TCIndex inTCIndex)
{
	const UWord maxNumLTCs = NTV2DeviceGetNumLTCInputs(inDeviceID);
	const UWord maxNumSDIs = NTV2DeviceGetNumVideoInputs(inDeviceID);

	if (NTV2_IS_ATC_VITC2_TIMECODE_INDEX(inTCIndex)	 &&	 !NTV2DeviceCanDoVITC2(inDeviceID))
		return false;	//	Can't do VITC2

	switch (inTCIndex)
	{
		case NTV2_TCINDEX_DEFAULT:		return true;	//	All devices support this index

		case NTV2_TCINDEX_LTC1:			return maxNumLTCs > 0;
		case NTV2_TCINDEX_LTC2:			return maxNumLTCs > 1;

		case NTV2_TCINDEX_SDI1:
		case NTV2_TCINDEX_SDI1_LTC:
		case NTV2_TCINDEX_SDI1_2:		return maxNumSDIs > 0;

		case NTV2_TCINDEX_SDI2:
		case NTV2_TCINDEX_SDI2_LTC:
		case NTV2_TCINDEX_SDI2_2:		return maxNumSDIs > 1;

		case NTV2_TCINDEX_SDI3:
		case NTV2_TCINDEX_SDI3_LTC:
		case NTV2_TCINDEX_SDI3_2:		return maxNumSDIs > 2;

		case NTV2_TCINDEX_SDI4:
		case NTV2_TCINDEX_SDI4_LTC:
		case NTV2_TCINDEX_SDI4_2:		return maxNumSDIs > 3;

		case NTV2_TCINDEX_SDI5:
		case NTV2_TCINDEX_SDI5_LTC:
		case NTV2_TCINDEX_SDI5_2:		return maxNumSDIs > 4;

		case NTV2_TCINDEX_SDI6:
		case NTV2_TCINDEX_SDI6_LTC:
		case NTV2_TCINDEX_SDI6_2:
		case NTV2_TCINDEX_SDI7:
		case NTV2_TCINDEX_SDI7_LTC:
		case NTV2_TCINDEX_SDI7_2:
		case NTV2_TCINDEX_SDI8:
		case NTV2_TCINDEX_SDI8_LTC:
		case NTV2_TCINDEX_SDI8_2:		return maxNumSDIs > 5;

		default:						break;
	}
	return false;
}


bool NTV2DeviceCanDoLTCInN (NTV2DeviceID boardID, UWord index0)
{
	return index0 < NTV2DeviceGetNumLTCInputs (boardID);

}	//	NTV2DeviceCanDoLTCInN


bool NTV2DeviceCanDoLTCOutN(NTV2DeviceID boardID, UWord index0)
{
	return index0 < NTV2DeviceGetNumLTCOutputs (boardID);
}	//	NTV2DeviceCanDoLTCOutN


bool NTV2DeviceCanDoAudioN (NTV2DeviceID boardID, UWord index0)
{
	return index0 < NTV2DeviceGetNumAudioSystems (boardID);

}	//	NTV2DeviceCanDoAudioN

UWord NTV2DeviceGetNumAudioStreams (NTV2DeviceID boardID)
{
	return NTV2DeviceGetNumAudioSystems (boardID);
}

bool NTV2DeviceCanDoRS422N (const NTV2DeviceID inDeviceID, const NTV2Channel inChannel)
{
	return inChannel < NTV2DeviceGetNumSerialPorts (inDeviceID);
}

NTV2AudioSystem NTV2DeviceGetAudioMixerSystem(const NTV2DeviceID inDeviceID)
{
	if (NTV2DeviceGetNumAudioSystems(inDeviceID))
		return (NTV2AudioSystem)(NTV2DeviceGetNumAudioSystems(inDeviceID) + 1);
	return NTV2_AUDIOSYSTEM_INVALID;
}

NTV2AudioSystem NTV2DeviceGetHostAudioSystem(const NTV2DeviceID inDeviceID)
{
	if (NTV2DeviceGetNumAudioSystems(inDeviceID))
		return (NTV2AudioSystem)(NTV2DeviceGetNumAudioSystems(inDeviceID));
	else
		return NTV2_AUDIOSYSTEM_INVALID;
}

bool NTV2DeviceROMHasBankSelect (const NTV2DeviceID inDeviceID)
{
	if (NTV2DeviceHasSPIv3(inDeviceID) || NTV2DeviceHasSPIv4(inDeviceID) || NTV2DeviceHasSPIv5(inDeviceID))
		return true;
	else
		return false;
}

bool NTV2DeviceCanDoColorCorrection (const NTV2DeviceID inDeviceID)
{
	if (NTV2DeviceGetNumLUTs(inDeviceID) > 0)
		return true;
	return false;
}

bool NTV2DeviceCanDoProgrammableCSC (const NTV2DeviceID inDeviceID)
{
	if (NTV2DeviceGetNumCSCs(inDeviceID) > 0)
		return true;
	return false;
}

#if !defined (NTV2_DEPRECATE_14_3)
	bool NTV2DeviceCanDoFreezeOutput (const NTV2DeviceID inDeviceID)
	{
		(void) inDeviceID;
		return false;
	}
#endif	//	!defined (NTV2_DEPRECATE_14_3)