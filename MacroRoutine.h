#include <exception>
using namespace std;

#ifndef __MacroRoutine_h__
#define __MacroRoutine_h__

#include "SmartCommand.h"
#include <list>

class SmartCommand;
class MacroRoutine;

class MacroRoutine
{
	private: 
		std::list<SmartCommand> commands;

	public: 
		void execute();
		void addProcedure(SmartCommand command);
		void removeProcedure(SmartCommand* command);
};

#endif
