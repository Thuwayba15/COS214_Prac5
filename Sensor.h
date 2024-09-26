#include <exception>
using namespace std;

#ifndef __Sensor_h__
#define __Sensor_h__

#include "SmartDevice.h"

class SmartDevice;
class Sensor;

__abstract class Sensor
{
	private: SmartDevice* _deviceList;
	public: SmartDevice* _unnamed_SmartDevice_;

	public: void addDevice(SmartDevice aDevice);

	public: void removeDevice(SmartDevice aDevice);

	public: void notifyDevices();
};

#endif
