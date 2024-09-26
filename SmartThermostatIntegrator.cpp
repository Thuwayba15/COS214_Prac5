#include <exception>
#include <string>
using namespace std;
#include <iostream>

#include "SmartThermostatIntegrator.h"
#include "LegacyThermostat.h"
#include "Client.h"
#include "SmartThermostat.h"
#include "SmartDevice.h"

void SmartThermostatIntegrator::setTemperature(int temp) {
	throw "Not yet implemented";
}

int SmartThermostatIntegrator::getTemperature() {
	throw "Not yet implemented";
}

void SmartThermostatIntegrator::update(string condition) {
	std::cout<<"waiting"<<std::endl;
}

