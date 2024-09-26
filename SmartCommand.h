#include <exception>
using namespace std;

#ifndef __SmartCommand_h__
#define __SmartCommand_h__

// #include "MacroRoutine.h"

class MacroRoutine;
class SmartCommand;

__abstract class SmartCommand
{
	public: MacroRoutine* _unnamed_MacroRoutine_;

	public: virtual void execute() = 0;
};

#endif
