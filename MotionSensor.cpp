#include <exception>
using namespace std;

#include "MotionSensor.h"
#include "Sensor.h"

void MotionSensor::detectMovement() {
	notifyDevices("motion detected");
}

