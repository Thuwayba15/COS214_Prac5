#include <exception>
using namespace std;

#ifndef __Room_h__
#define __Room_h__

#include "SmartDevice.h"
// #include "DeviceIterator.h"
#include "SmartDeviceIterator.h"
#include "DeviceCollection.h"

class SmartDevice;
class DeviceIterator;
class SmartDeviceIterator;
// class DeviceCollection;
class Room;

class Room: public DeviceCollection
{
	private: List<SmartDevice> _devices;
	public: DeviceIterator* _unnamed_DeviceIterator_;

	public: SmartDeviceIterator createIterator();
};

#endif
