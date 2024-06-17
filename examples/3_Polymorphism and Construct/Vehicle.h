#include <iostream>
using namespace std; 


class Vehicle {
public:

    Vehicle(const int& s, const int& t, int b, int f) {
        setSteering(s);
        setThrottle(t);

    }

    void  setSteering(int st){
        steering = st;
    }

    void  setThrottle(int th){
        throttle = th;
    }

    int getThrottle()const{
        return throttle;
    }

    void virtual voice(){ cout<<" General voice!"<<endl;}

private: 
    int steering;
    int throttle;
    int brake;
    int fuel;
};