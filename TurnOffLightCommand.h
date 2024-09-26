#include <exception>
using namespace std;

#ifndef __TurnOffLightCommand_h__
#define __TurnOffLightCommand_h__

#include "SmartDevice.h"
#include "SmartCommand.h"

class SmartDevice;
// class SmartCommand;
class TurnOffLightCommand;

class TurnOffLightCommand: public SmartCommand
{
	private: SmartDevice _smartDevice;
	public: SmartDevice* _unnamed_SmartDevice_;

	public: void execute();
};

#endif
