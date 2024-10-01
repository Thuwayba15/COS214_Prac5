#include <exception>
using namespace std;

#ifndef __DeviceIterator_h__
#define __DeviceIterator_h__

#include "DeviceCollection.h"
// #include "HouseSection.h"
// #include "Room.h"
#include "SmartDevice.h"
#include "SmartDeviceIterator.h"

class DeviceCollection;
class HouseSection;
class Room;
class SmartDevice;
// class SmartDeviceIterator;


class DeviceIterator: public SmartDeviceIterator
{
	private: 
		DeviceCollection* deviceCollection;
	 	int currentIndex;

	public: 
		SmartDevice first();
		SmartDevice currentItem();
		bool isDone();
		SmartDevice next();
		bool hasNext();
};

#endif
