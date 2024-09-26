#include <exception>
#include <string>
using namespace std;

#include "SmartDevice.h"
#include "DeviceState.h"
#include "TurnOffLightCommand.h"
#include "Sensor.h"
#include "UnlockDoorCommand.h"
#include "TurnOnLightCommand.h"
#include "LockDoorCommand.h"
#include "Client.h"

void SmartDevice::performAction(string aAction) {
	throw "Not yet implemented";
}

string SmartDevice::getStatus() {
	throw "Not yet implemented";
}

string SmartDevice::getDeviceType() {
	return this->_deviceType;
}

void SmartDevice::setState(DeviceState aState) {
	this->_state = aState;
}

void SmartDevice::update(string aCondition) {
	throw "Not yet implemented";
}

