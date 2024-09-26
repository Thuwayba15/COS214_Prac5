#include <exception>
using namespace std;

#ifndef __DeviceCollection_h__
#define __DeviceCollection_h__

#include "SmartDevice.h"
// #include "Client.h"
#include "SmartDeviceIterator.h"

class SmartDevice;
class Client;
class SmartDeviceIterator;
class DeviceCollection;

__abstract class DeviceCollection
{
	private: List<SmartDevice> _devices;
	public: Client* _unnamed_Client_;

	public: virtual SmartDeviceIterator createIterator() = 0;
};

#endif
