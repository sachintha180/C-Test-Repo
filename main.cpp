#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"

#define MAX_VEHICLES 6

int main(void)
{
    Vehicle *vehicles = static_cast<Vehicle*>(malloc(sizeof(Vehicle) * MAX_VEHICLES));

    for (int i = 0; i < MAX_VEHICLES; i++)
    {
        new (&vehicles[i]) Vehicle("Simple Vehicle", "My Vehicle");
    }

    for (int i = 0; i < MAX_VEHICLES; i++)
    {
        vehicles[i].go();
    }

    free(vehicles);
    
    return 0;
}