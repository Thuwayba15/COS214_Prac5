#include <exception>
#include <algorithm>
using namespace std;

#include "Sensor.h"
#include "SmartDevice.h"

void Sensor::addDevice(SmartDevice* device) {
    deviceList.push_back(device);
}

void Sensor::removeDevice(SmartDevice* device) {
    auto it = std::find(deviceList.begin(), deviceList.end(), device);
    if (it != deviceList.end()) {
        deviceList.erase(it);
    }
}


void Sensor::notifyDevices(string condition) {
    for (SmartDevice* device : deviceList) {
        device->update(condition);  
    }
}

