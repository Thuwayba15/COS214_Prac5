
#include "SmartThermostat.h"
void SmartThermostat::setTemperature(int temp) {
	this->temperature = temp;
}

int SmartThermostat::getTemperature() {
	return this->temperature;
}

