#include <exception>
using namespace std;

#include "LockDoorCommand.h"
#include "SmartDevice.h"
#include "SmartCommand.h"
#include <iostream>


void LockDoorCommand::execute() {
  	cout << "Executing LockDoorCommand." << endl;
    smartDevice.performAction("Lock Doors"); // Call the receiver's method
}

