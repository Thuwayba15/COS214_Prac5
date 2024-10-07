#include <exception>
using namespace std;

#include "TemperatureSensor.h"
#include "Sensor.h"

void TemperatureSensor::senseTemperature() {
	notifyDevices("temperature changed");
}

