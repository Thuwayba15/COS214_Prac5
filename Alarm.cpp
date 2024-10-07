#include <exception>
#include <string>
using namespace std;
#include <iostream>

#include "Alarm.h"
#include "SmartDevice.h"

Alarm::Alarm() {
    isActive = false; 
}

void Alarm::update(string condition) {
    if (condition == "motion detected") {
        isActive = true;
        std::cout << "Alarm: Motion detected! Alarm is now active." << std::endl;
    } else if (condition == "no motion") {
        isActive = false;
        std::cout << "Alarm: No motion detected. Alarm is now inactive." << std::endl;
    } else {
        std::cout << "Alarm: No action for condition: " << condition << std::endl;
    }
}

string Alarm::getStatus() {
    return isActive ? "active" : "inactive";
}

