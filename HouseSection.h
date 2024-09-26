#include <exception>
using namespace std;

#ifndef __HouseSection_h__
#define __HouseSection_h__

#include "Room.h"
// #include "DeviceIterator.h"
#include "SmartDeviceIterator.h"
#include "DeviceCollection.h"

class Room;
class DeviceIterator;
class SmartDeviceIterator;
// class DeviceCollection;
class HouseSection;

class HouseSection: public DeviceCollection
{
	private: List<Room> _rooms;
	public: DeviceIterator* _unnamed_DeviceIterator_;

	public: SmartDeviceIterator createIterator();
};

#endif
