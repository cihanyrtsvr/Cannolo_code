#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "ElectricCar.h"
#include "ComplexNumber.h"

using namespace std;




int main() {
    
    Vehicle vehicleClassObj(10,20,22,12);
    ElectricCar electricCar(10,78,40,45,11);
    ComplexNumbers comp_num1(2,4), comp_num2(5,-2), comp_num3;

    comp_num3 = comp_num1 + comp_num2;

    comp_num3.programout();

    comp_num3.Addition(3.5);
    comp_num3.programout();
    comp_num3.Addition(0,5.2);
    comp_num3.programout();

    
    cout<<" the battery level: "<< electricCar.getBatteryLevel()<<endl;
    electricCar.setBatteryLevel(22);
    cout<<" After the assignment batery level: "<<electricCar.getBatteryLevel()<<endl;
    cout<<"Get the throttle from electric: "<< electricCar.getThrottle()<<endl;

    cout << " The vehicle obj Throttle: " << vehicleClassObj.getThrottle()<<endl;


    electricCar.voice();
    vehicleClassObj.voice();
    return 0;
}