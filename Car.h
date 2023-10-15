#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car: public Vehicle
{
private:
    string color;
    int seats;

public:
    void go()
    {
        cout << "Car is being driven, " << Vehicle::vehicleCount << " cars." << endl;
    }
};

#endif