#ifndef VEHICLE_H
#define VEHICLE_H

#include "libraries.h"

class Vehicle
{
protected:
    string type;
    string name;
    static int vehicleCount;

public:
    Vehicle(){
        vehicleCount += 1;
    };

    Vehicle(string type, string name)
    {
        this->type = type;
        this->name = name;
        vehicleCount += 1;
    }

    virtual void go()
    {
        cout << "Driving, currently " << vehicleCount << " cars." << endl;
    }

    ~Vehicle()
    {
        cout << "Vehicle was destroyed." << endl;
    }
};

int Vehicle::vehicleCount = 0;

#endif