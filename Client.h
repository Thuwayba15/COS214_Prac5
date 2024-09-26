
#ifndef __Client_h__
#define __Client_h__

// #include "SmartDevice.h"
// #include "SmartThermostatIntegrator.h"
// #include "DeviceCollection.h"
// #include "SmartDeviceIterator.h"

class SmartDevice;
class SmartThermostatIntegrator;
class DeviceCollection;
class SmartDeviceIterator;
class Client;

class Client
{
	public: SmartDevice* _unnamed_SmartDevice_;
	public: SmartThermostatIntegrator* _unnamed_SmartThermostatIntegrator_;
	public: DeviceCollection* _unnamed_DeviceCollection_;
	public: SmartDeviceIterator* _unnamed_SmartDeviceIterator_;
};

#endif
