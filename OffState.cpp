#include <exception>
#include <iostream>
#include <string>
using namespace std;

#include "OffState.h"
#include "SmartDevice.h"
#include "DeviceState.h"
#include "OnState.h"

string OffState::getStatus() {
	return "Off";
}

void OffState::performAction(SmartDevice& device, string action) {
	if (action == "ToggleOn") {
        device.setState(new OnState());
    } else if (action == "Toggle") {
        device.setState(new OnState());
    } else {
        
    }
}

