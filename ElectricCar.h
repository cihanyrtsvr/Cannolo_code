#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include <string>
#include "Vehicle.h"

class ElectricCar : public Vehicle {
public:
    ElectricCar(const int& st, const int& th, const int& br, int fu, const int& el_bat) 
    : Vehicle(st, th, br,fu){
        setBatteryLevel(el_bat);

    }

    void setBatteryLevel(const int& bat){
        electric_batery = bat;
    }

    int getBatteryLevel () const{
        return electric_batery;
    }
private:
    int electric_batery;


};



#endif