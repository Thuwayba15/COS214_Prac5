#include <exception>
using namespace std;
#include <iostream>

#include "UnlockDoorCommand.h"
#include "SmartDevice.h"
#include "SmartCommand.h"

void UnlockDoorCommand::execute() {
	cout << "Executing UnlockDoorCommand." << endl;
    smartDevice.performAction("Unlock Doors"); // Call the receiver's method
}
