#include <exception>
using namespace std;

#ifndef __LegacyThermostat_h__
#define __LegacyThermostat_h__

// #include "SmartThermostatIntegrator.h"

class SmartThermostatIntegrator;
class LegacyThermostat;

class LegacyThermostat
{
	private: int _currentTemperature;
	public: SmartThermostatIntegrator* _unnamed_SmartThermostatIntegrator_;

	public: void setTemp(int aTemp);

	public: int getTemp();
};

#endif
