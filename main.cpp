#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "ElectricCar.h"

using namespace std;




int main() {
    
    Vehicle vehicleClassObj(10,20,22,12);
    ElectricCar electricCar(10,78,40,45,11);
    cout<<" the battery level: "<< electricCar.getBatteryLevel()<<endl;
    electricCar.setBatteryLevel(22);
    cout<<" After the assignment batery level: "<<electricCar.getBatteryLevel()<<endl;
    cout<<"Get the throttle from electric: "<< electricCar.getThrottle()<<endl;

    cout << " The vehicle obj Throttle: " << vehicleClassObj.getThrottle()<<endl;
    return 0;
}