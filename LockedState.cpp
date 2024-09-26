#include <exception>
#include <string>
using namespace std;

#include "LockedState.h"
#include "SmartDevice.h"
#include "DeviceState.h"

string LockedState::getStatus() {
	throw "Not yet implemented";
}

void LockedState::performAction(SmartDevice aDevice, string aAction) {
	throw "Not yet implemented";
}

