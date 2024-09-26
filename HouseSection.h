#include <exception>
using namespace std;

#ifndef __HouseSection_h__
#define __HouseSection_h__

#include "Room.h"
// #include "DeviceIterator.h"
#include "SmartDeviceIterator.h"
#include "DeviceCollection.h"
#include <list>

class Room;
class DeviceIterator;
class SmartDeviceIterator;
// class DeviceCollection;
class HouseSection;

class HouseSection: public DeviceCollection
{
	private: 
		std::list<Room> rooms;

	public: 
		DeviceIterator createIterator();
};

#endif
