#include <exception>
using namespace std;
#include <iostream>

#include "LegacyThermostat.h"
#include "SmartThermostatIntegrator.h"

void LegacyThermostat::setTemp(int temp) {
	currentTemperature = temp;
    std::cout << "Legacy thermostat temperature set to: " << currentTemperature << "°C" << std::endl;
}

int LegacyThermostat::getTemp() {
	std::cout << "LegacyThermostat: Returning current temperature." << std::endl;
    return currentTemperature;
}

