#include <exception>
using namespace std;

#ifndef __TurnOnLightCommand_h__
#define __TurnOnLightCommand_h__

#include "SmartDevice.h"
#include "SmartCommand.h"

class SmartDevice;
// class SmartCommand;
class TurnOnLightCommand;

class TurnOnLightCommand: public SmartCommand
{
	private: SmartDevice _smartDevice;
	public: SmartDevice* _unnamed_SmartDevice_;

	public: void execute();
};

#endif
