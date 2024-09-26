#include <exception>
#include <string>
using namespace std;

#ifndef __SmartThermostatIntegrator_h__
#define __SmartThermostatIntegrator_h__

#include "LegacyThermostat.h"
// #include "Client.h"
#include "SmartThermostat.h"
#include "SmartDevice.h"

class LegacyThermostat;
class Client;
// class SmartThermostat;
// class SmartDevice;
class SmartThermostatIntegrator;

class SmartThermostatIntegrator: public SmartThermostat, public SmartDevice
{
	private: LegacyThermostat _legacyThermostat;
	public: Client* _unnamed_Client_;
	public: LegacyThermostat* _unnamed_LegacyThermostat_;

	public: void setTemperature(int aTemp);

	public: int getTemperature();

	public: void update(string aCondition);
};

#endif
