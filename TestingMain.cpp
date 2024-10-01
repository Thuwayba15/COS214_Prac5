#include <iostream>
#include "SmartDevice.h"
#include "OnState.h"
#include "OffState.h"
#include "LockedState.h"
#include "UnlockedState.h"

using namespace std;

void testLightDevice() {
    cout << "Testing Light Device:" << endl;
    SmartDevice light("Light", "Living Room");
    light.setState(new OffState());
    cout << "Initial light status: " << light.getStatus() << endl;
    light.performAction("ToggleOn");
    cout << "After turning on: " << light.getStatus() << endl;
    light.performAction("ToggleOff");
    cout << "After turning off: " << light.getStatus() << endl; 
    light.performAction("Toggle");
    cout << "After toggle (on): " << light.getStatus() << endl;
    light.performAction("Toggle");
    cout << "After toggle (off): " << light.getStatus() << endl;
    cout << "Light Device Test Completed.\n" << endl;
}

void testDoorLockDevice() {
    cout << "Testing Door Lock Device:" << endl;
    SmartDevice doorLock("DoorLock", "Front Door");
    doorLock.setState(new UnlockedState());
    cout << "Initial door lock status: " << doorLock.getStatus() << endl;
    doorLock.performAction("Lock");
    cout << "After locking: " << doorLock.getStatus() << endl;
    doorLock.performAction("Unlock");
    cout << "After unlocking: " << doorLock.getStatus() << endl;
    doorLock.performAction("Lock");
    cout << "After locking again: " << doorLock.getStatus() << endl;
    cout << "Door Lock Device Test Completed.\n" << endl;
}

void testState(){
    testLightDevice();
    testDoorLockDevice();
}

int main() {
    cout<<"**********Testing State Pattern**********"<<endl;
    testState();
    
    return 0;
}
