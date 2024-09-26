#include <exception>
using namespace std;

#ifndef __MacroRoutine_h__
#define __MacroRoutine_h__

#include "SmartCommand.h"

class SmartCommand;
class MacroRoutine;

class MacroRoutine
{
	private: List<SmartCommand> _commands;
	public: SmartCommand* _unnamed_SmartCommand_;

	public: void execute();

	public: void addProcedure(SmartCommand aCommand);

	public: void removeProcedure(SmartCommand aCommand);
};

#endif
