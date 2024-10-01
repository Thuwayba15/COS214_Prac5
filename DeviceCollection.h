#include <exception>
using namespace std;

#ifndef __DeviceCollection_h__
#define __DeviceCollection_h__

#include "SmartDevice.h"
// #include "Client.h"
#include "SmartDeviceIterator.h"
#include <list>
#include "DeviceIterator.h"

class SmartDevice;
class Client;
class SmartDeviceIterator;
class DeviceIterator;

class DeviceCollection
{
	private: 
		std::list<SmartDevice> devices;

	public: 
		virtual DeviceIterator createIterator() = 0;
};

#endif
