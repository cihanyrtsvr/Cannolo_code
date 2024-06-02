#include <iostream>
using namespace std; 


class Vehicle {
public:

    Vehicle(const int& s, const int& t, int b, int f) {
        setSteering(s);

    }

    void  setSteering(int st){
        steering = st;
    }

    void  setThrottle(int th){
        throttle = th;
    }

private: 
    int steering;
    int throttle;
    int brake;
    int fuel;
};