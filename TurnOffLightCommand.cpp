#include <exception>
using namespace std;

#include "TurnOffLightCommand.h"
#include "SmartDevice.h"
#include "SmartCommand.h"
#include <iostream>

void TurnOffLightCommand::execute() {
	cout << "Executing TurnOffLightCommand." << endl;
    smartDevice.performAction("Turn Off Lights"); // Call the receiver's method
}

