#include <exception>
using namespace std;

#include "TurnOnLightCommand.h"
#include "SmartDevice.h"
#include "SmartCommand.h"
#include <iostream>

void TurnOnLightCommand::execute() {
 	cout << "Executing TurnOnLightCommand." << endl;
    smartDevice.performAction("Turn On Lights"); // Call the receiver's method
}

