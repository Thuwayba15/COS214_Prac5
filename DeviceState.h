#include <exception>
#include <string>
using namespace std;

#ifndef __DeviceState_h__
#define __DeviceState_h__

#include "SmartDevice.h"

class SmartDevice;
class DeviceState;

__abstract class DeviceState
{
	public: SmartDevice* _unnamed_SmartDevice_;

	public: virtual string getStatus() = 0;

	public: virtual void performAction(SmartDevice aDevice, string aAction) = 0;
};

#endif
