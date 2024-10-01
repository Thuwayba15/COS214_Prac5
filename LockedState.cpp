#include <exception>
#include <string>
#include <iostream>
using namespace std;

#include "LockedState.h"
#include "SmartDevice.h"
#include "DeviceState.h"
#include "UnlockedState.h"

string LockedState::getStatus() {
	return "Locked";
}

void LockedState::performAction(SmartDevice& device, string action) {
	if (action == "Unlock") {
        device.setState(new UnlockedState());
    } else if (action == "Lock") {
        std::cout<<"Device is already locked"<<std::endl;
    } else {

    }
}

