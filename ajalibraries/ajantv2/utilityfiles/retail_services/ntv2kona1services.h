//
//  ntv2kona1services.h
//
//  Copyright (c) 2018 AJA Video, Inc. All rights reserved.
//

#ifndef _Kona1Services_
#define _Kona1Services_

#include "ntv2deviceservices.h"

//-------------------------------------------------------------------------------------------------------
//	class Corvid3GServices
//-------------------------------------------------------------------------------------------------------
class Kona1Services : public DeviceServices
{
	
public:
	Kona1Services();
	~Kona1Services() {}
	
	virtual void SetDeviceXPointPlayback ();
	virtual void SetDeviceXPointCapture ();
	virtual void SetDeviceMiscRegisters ();
};


#endif