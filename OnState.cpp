#include <exception>
#include <string>
using namespace std;

#include "OnState.h"
#include "SmartDevice.h"
#include "DeviceState.h"
#include "OffState.h"

string OnState::getStatus() {
	return "On";
}

void OnState::performAction(SmartDevice& device, string action) {
	if (action == "ToggleOff") {
        device.setState(new OffState());
    } else if (action == "Toggle") {
        device.setState(new OffState());
    } else {
        
    }
}

