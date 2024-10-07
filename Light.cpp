#include <exception>
#include <string>
using namespace std;
#include <iostream>

#include "Light.h"
#include "SmartDevice.h"

Light::Light() {
    setState(nullptr); 
}




void Light::update(string condition) {
    if (condition == "motion detected") {
        std::cout << "Light: Motion detected, turning on the light." << std::endl;
        performAction("Turn On Lights");
    } else if (condition == "no motion") {
        std::cout << "Light: No motion detected, turning off the light." << std::endl;
        performAction("Turn Off Lights");
    } else {
        std::cout << "Light: No action for condition: " << condition << std::endl;
    }
}

string Light::getStatus() {
    if (getState()) {
        return getState()->getStatus();
    }
    return "off";
}
