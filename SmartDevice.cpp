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

void SmartDevice::performAction(string action) {
	throw "Not yet implemented";
}

string SmartDevice::getStatus() {
	throw "Not yet implemented";
}

string SmartDevice::getDeviceType() {
	return this->deviceType;
}

void SmartDevice::setState(DeviceState* state) {
	this->state = state;
}

void SmartDevice::update(string condition) {
	throw "Not yet implemented";
}

