
#ifndef __SmartThermostat_h__
#define __SmartThermostat_h__

class SmartThermostat;

__abstract class SmartThermostat
{
	private: int _temperature;

	public: virtual void setTemperature(int aTemp) = 0;

	public: virtual int getTemperature() = 0;
};

#endif
