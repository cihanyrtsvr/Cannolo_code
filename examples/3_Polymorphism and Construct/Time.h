#include <string>
using namespace std;

#ifndef TIME_H
#define TIME_H


class Time{
public: 
    void setTime(int,int,int);
    string toUniversalString() const;
    string toStandartString() const;

    Time(unsigned int s , unsigned int m) : second{s}, minute{m}{

    }

private: 
    unsigned int second{0};
    unsigned int minute{0};
    unsigned int hour{0};
};

#endif