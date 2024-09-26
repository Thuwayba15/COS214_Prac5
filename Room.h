#include <exception>
using namespace std;

#ifndef __Room_h__
#define __Room_h__

#include "SmartDevice.h"
// #include "DeviceIterator.h"
#include "SmartDeviceIterator.h"
#include "DeviceCollection.h"

#include <list>	

class SmartDevice;
class DeviceIterator;
class SmartDeviceIterator;
// class DeviceCollection;
class Room;

class Room: public DeviceCollection
{
	private: 
		std::list<SmartDevice> devices;

	public: 
		DeviceIterator createIterator();
};

#endif
