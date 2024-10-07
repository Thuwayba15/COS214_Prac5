#include <exception>
#include <string>
using namespace std;
#include <iostream>

#include "SmartThermostatIntegrator.h"
#include "LegacyThermostat.h"
#include "Client.h"
#include "SmartThermostat.h"
#include "SmartDevice.h"

SmartThermostatIntegrator::SmartThermostatIntegrator() {}

void SmartThermostatIntegrator::setTemperature(int temp) {
	legacyThermostat.setTemp(temp);
    std::cout << "SmartThermostatIntegrator: Set temperature to " << temp << "°C" << std::endl;
}

int SmartThermostatIntegrator::getTemperature() {
	int temp = legacyThermostat.getTemp();
    std::cout << "SmartThermostatIntegrator: Current temperature is " << temp << "°C" << std::endl;
    return temp;
}

void SmartThermostatIntegrator::update(string condition) {
    if (condition == "temperature changed") {
        int newTemp = 22; 
        setTemperature(newTemp);
        std::cout << "SmartThermostatIntegrator: Adjusting thermostat based on temperature change to " 
                  << newTemp << "°C" << std::endl;
    } else {
        std::cout << "SmartThermostatIntegrator: No action for condition: " << condition << std::endl;
    }
}

