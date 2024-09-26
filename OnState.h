#include <exception>
#include <string>
using namespace std;

#ifndef __OnState_h__
#define __OnState_h__

#include "SmartDevice.h"
#include "DeviceState.h"

class SmartDevice;
// class DeviceState;
class OnState;

class OnState: public DeviceState
{

	public: string getStatus();

	public: void performAction(SmartDevice aDevice, string aAction);
};

#endif
