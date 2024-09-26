
#include "SmartThermostat.h"
void SmartThermostat::setTemperature(int aTemp) {
	this->_temperature = aTemp;
}

int SmartThermostat::getTemperature() {
	return this->_temperature;
}

