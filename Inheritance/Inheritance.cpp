// Landon Dunkerly
// 11/25/23
// CIS 1202

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>

int main() {
    // Vehicle
    std::string manufacturer;
    int yearBuilt;

    std::cout << "Enter manufacturer and year built for Vehicle: ";
    std::cin >> manufacturer >> yearBuilt;

    Vehicle vehicle(manufacturer, yearBuilt);
    vehicle.displayInfo();

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Car
    int numberOfDoors;

    std::cout << "\nEnter manufacturer, year built, and number of doors for Car: ";
    std::cin >> manufacturer >> yearBuilt >> numberOfDoors;

    Car car(manufacturer, yearBuilt, numberOfDoors);
    car.displayInfo();


    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Truck
    int towingCapacity;

    std::cout << "\nEnter manufacturer, year built, and towing capacity for Truck: ";
    std::cin >> manufacturer >> yearBuilt >> towingCapacity;

    Truck truck(manufacturer, yearBuilt, towingCapacity);
    truck.displayInfo();

    return 0;
}