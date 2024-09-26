#include <exception>
#include <string>
using namespace std;

#ifndef __SmartDevice_h__
#define __SmartDevice_h__

#include "DeviceState.h"
// #include "TurnOffLightCommand.h"
// #include "Sensor.h"
// #include "UnlockDoorCommand.h"
// #include "TurnOnLightCommand.h"
// #include "LockDoorCommand.h"
// #include "Client.h"

class DeviceState;
class TurnOffLightCommand;
class Sensor;
class UnlockDoorCommand;
class TurnOnLightCommand;
class LockDoorCommand;
class Client;
class SmartDevice;

class SmartDevice
{
	private: 
		DeviceState* state;
		string deviceType;
		string location;

	public: 
		void performAction(string action);
		string getStatus();
		string getDeviceType();
		void setState(DeviceState* state);
		virtual void update(string condition);
};

#endif
