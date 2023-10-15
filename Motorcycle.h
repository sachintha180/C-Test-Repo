#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

class Motorcycle: public Vehicle
{
private:
    float horsepower;

public:
    void go()
    {
        cout << "Motorcycle is being ridden, " << Vehicle::vehicleCount << " motorcycles." << endl;
    }
};

#endif