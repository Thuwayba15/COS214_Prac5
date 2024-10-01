#include <exception>
#include <string>
#include <iostream>
using namespace std;

#include "UnlockedState.h"
#include "SmartDevice.h"
#include "DeviceState.h"
#include "LockedState.h"

string UnlockedState::getStatus() {
	throw "Not yet implemented";
}

void UnlockedState::performAction(SmartDevice& device, string action) {
	if (action == "Lock") {
        device.setState(new LockedState());
    } else if (action == "Unlock") {
        std::cout<<"Device is already unlocked"<<std::endl;
    } else {

    }
}

