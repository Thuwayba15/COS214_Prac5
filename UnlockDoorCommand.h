#include <exception>
using namespace std;

#ifndef __UnlockDoorCommand_h__
#define __UnlockDoorCommand_h__

#include "SmartDevice.h"
#include "SmartCommand.h"

class SmartDevice;
// class SmartCommand;
class UnlockDoorCommand;

class UnlockDoorCommand: public SmartCommand
{
	private: SmartDevice _smartDevice;
	public: SmartDevice* _unnamed_SmartDevice_;

	public: void execute();
};

#endif
