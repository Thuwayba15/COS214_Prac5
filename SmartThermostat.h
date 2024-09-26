
#ifndef __SmartThermostat_h__
#define __SmartThermostat_h__

class SmartThermostat;

class SmartThermostat
{
	private: 
		int temperature;

	public: 
		virtual void setTemperature(int temp) = 0;
		virtual int getTemperature() = 0;
};

#endif
