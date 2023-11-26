// Car.h
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    Car(const std::string& manufacturer, int yearBuilt, int numberOfDoors);
    int getNumberOfDoors() const;
    void setNumberOfDoors(int numberOfDoors);
    void displayInfo() const override;
};

#endif