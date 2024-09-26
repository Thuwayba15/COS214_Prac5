#include <exception>
#include <string>
using namespace std;

#include "OffState.h"
#include "SmartDevice.h"
#include "DeviceState.h"

string OffState::getStatus() {
	throw "Not yet implemented";
}

void OffState::performAction(SmartDevice device, string action) {
	throw "Not yet implemented";
}

