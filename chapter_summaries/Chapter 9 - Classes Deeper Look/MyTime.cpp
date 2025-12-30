#include <iostream>
#include <sstream>
#include <iomanip>
#include "MyTime.h"



using namespace std; 


Time::Time(int h, int m, int s) {setTime(s, m, h);}

Time& Time::setTime(int input_second, int input_minute, int input_hour)
{   
    sec = input_second; 
    min = input_minute; 
    hour= input_hour;
    return *this;
}

Time&  Time::setHour(int hr){
    if(hr>=0 && hr<24)
        hour = hr;
    else{
        throw invalid_argument("hour must be between 0-23");
    }
    return *this;
}

Time& Time::setMinute(int mn){
    if( mn>0 && mn<60){
        min = mn;
    }
    else{
        throw invalid_argument("Minute should be between 0-59");
    }   
    return *this; 
}



Time& Time::setSecond(int second){
    sec=second;
    return *this;
}


int Time::getHour() const { return hour; }

int Time::getMinute() const { return min; }

int Time::getSecond() const { return sec; }

std::string Time::toUniversalString() const {
    ostringstream os;
    os<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<endl;

    return os.str();
}

std::string Time::toStandardString() const{
    ostringstream os; 
    os<< ((getHour()== 0 || getHour() ==12) ? 12 : getHour() % 12 ) << ":" 
    << setfill('0') << setw(2) << getMinute() << ":"<< setw(2) << getSecond() << ((getHour() < 12) ? " AM" : " PM") <<endl;

    return os.str();
}



