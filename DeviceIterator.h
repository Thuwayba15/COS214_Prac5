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
class DeviceIterator;

class DeviceIterator: public SmartDeviceIterator
{
	private: DeviceCollection _deviceCollection;
	private: int _currentIndex;
	public: HouseSection* _unnamed_HouseSection_;
	public: Room* _unnamed_Room_;

	public: SmartDevice first();

	public: SmartDevice currentItem();

	public: bool isDone();

	public: SmartDevice next();

	public: bool hasNext();
};

#endif
