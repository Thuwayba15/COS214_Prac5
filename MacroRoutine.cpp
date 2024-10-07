#include "MacroRoutine.h"
#include <iostream>
#include <algorithm> // Include for std::remove

void MacroRoutine::execute() {
    for (SmartCommand* command : commands) {
        if (command) { // Ensure command is not null
            command->execute();
        }
    }
}

void MacroRoutine::addProcedure(SmartCommand* command) {
    commands.push_back(command);
}

void MacroRoutine::removeProcedure(SmartCommand* command) {
    // Find and remove the command from the vector
    auto it = std::remove(commands.begin(), commands.end(), command);
    if (it != commands.end()) {
        commands.erase(it, commands.end()); // Correctly erase the commands
    }
}
