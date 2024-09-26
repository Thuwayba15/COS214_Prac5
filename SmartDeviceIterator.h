#include <exception>
using namespace std;

#ifndef __SmartDeviceIterator_h__
#define __SmartDeviceIterator_h__

// #include "Client.h"
#include "SmartDevice.h"

class Client;
class SmartDevice;
class SmartDeviceIterator;

class SmartDeviceIterator
{
	public: 
		virtual SmartDevice first() = 0;
		virtual SmartDevice next() = 0;
		virtual bool hasNext() = 0;
		virtual bool isDone() = 0;
		virtual SmartDevice currentItem() = 0;
};

#endif
