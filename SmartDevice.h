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

__abstract class SmartDevice
{
	private: DeviceState _state;
	private: string _deviceType;
	private: string _location;
	public: TurnOffLightCommand* _unnamed_TurnOffLightCommand_;
	public: Sensor* _unnamed_Sensor_;
	public: DeviceState* _unnamed_DeviceState_;
	public: UnlockDoorCommand* _unnamed_UnlockDoorCommand_;
	public: TurnOnLightCommand* _unnamed_TurnOnLightCommand_;
	public: LockDoorCommand* _unnamed_LockDoorCommand_;
	public: Client* _unnamed_Client_;

	public: void performAction(string aAction);

	public: string getStatus();

	public: string getDeviceType();

	public: void setState(DeviceState aState);

	public: virtual void update(string aCondition) = 0;
};

#endif
