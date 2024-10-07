#include <exception>
#include <string>
using namespace std;
#include <iostream>

#include "SmartDevice.h"
#include "DeviceState.h"
#include "TurnOffLightCommand.h"
#include "Sensor.h"
#include "UnlockDoorCommand.h"
#include "TurnOnLightCommand.h"
#include "LockDoorCommand.h"
#include "Client.h"


SmartDevice::SmartDevice() {
	this->deviceType = "monitor";
	this->location = "kitchen";
	this->state = nullptr;  
}
SmartDevice::SmartDevice(string deviceType, string location) {
	this->deviceType = deviceType;
	this->location = location;
	this->state = nullptr;  
}

void SmartDevice::performAction(string action) {
	if (state) {
		state->performAction(*this, action); 
	}
	if (action == "Turn Off Lights") {
            std::cout << "Lights are now OFF." << std::endl;
        } else if (action == "Turn On Lights") {
            std::cout << "Lights are now ON." << std::endl;
        } else if (action == "Lock Doors") {
            std::cout << "Doors are now LOCKED." << std::endl;
        } else if (action == "Unlock Doors") {
            std::cout << "Doors are now UNLOCKED." << std::endl;
        } else {
            std::cout << "Unknown action: " << action << std::endl;
        }
    }


string SmartDevice::getStatus() {
	if (state) {
		return state->getStatus();  
	}
	return "Unknown"; 
}

string SmartDevice::getDeviceType() {
	return this->deviceType;
}

void SmartDevice::setState(DeviceState* state) {
	this->state = state;
}

DeviceState* SmartDevice::getState() {
    return this->state;
}

void SmartDevice::update(string condition) {
    if (condition == "motion detected") {
        if (deviceType == "Light") {
            performAction("Turn On Lights");
        } else if (deviceType == "Alarm") {
            std::cout << "Alarm activated due to motion detection!" << std::endl;
        }
    } else if (condition == "temperature changed") {
        if (deviceType == "Thermostat") {
            std::cout << "Adjusting thermostat based on temperature change." << std::endl;
        }
    } else {
        std::cout << "No specific response for condition: " << condition << std::endl;
    }
}

