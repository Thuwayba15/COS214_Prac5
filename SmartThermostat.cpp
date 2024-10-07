
#include "SmartThermostat.h"

SmartThermostat::SmartThermostat() {
	temperature=30;
}
void SmartThermostat::setTemperature(int temp) {
	this->temperature = temp;
}

int SmartThermostat::getTemperature() {
	return this->temperature;
}

