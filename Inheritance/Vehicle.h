// Vehicle.h
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
private:
    std::string manufacturer;
    int yearBuilt;

public:
    Vehicle(const std::string& manufacturer, int yearBuilt);
    std::string getManufacturer() const;
    int getYearBuilt() const;
    void setManufacturer(const std::string& manufacturer);
    void setYearBuilt(int yearBuilt);
    virtual void displayInfo() const;
};

#endif