#include <exception>
using namespace std;

#ifndef __SmartDeviceIterator_h__
#define __SmartDeviceIterator_h__

// #include "Client.h"
#include "SmartDevice.h"

class Client;
class SmartDevice;
class SmartDeviceIterator;

__abstract class SmartDeviceIterator
{
	public: Client* _unnamed_Client_;

	public: virtual SmartDevice first() = 0;

	public: virtual SmartDevice next() = 0;

	public: virtual bool hasNext() = 0;

	public: virtual bool isDone() = 0;

	public: virtual SmartDevice currentItem() = 0;
};

#endif
