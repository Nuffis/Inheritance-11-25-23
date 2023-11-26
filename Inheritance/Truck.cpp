#include "Truck.h"
#include <iostream>

#include "Truck.h"
#include <iostream>

Truck::Truck(const std::string& manufacturer, int yearBuilt, int towingCapacity)
    : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {}

int Truck::getTowingCapacity() const {
    return towingCapacity;
}

void Truck::setTowingCapacity(int towingCapacity) {
    this->towingCapacity = towingCapacity;
}

void Truck::displayInfo() const {
    Vehicle::displayInfo();
    std::cout << "Towing Capacity: " << towingCapacity << " tons" << std::endl;
}