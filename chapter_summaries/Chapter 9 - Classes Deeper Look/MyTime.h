#include <string>

#ifndef TIME_H
#define TIME_H

class Time{
    public:

    Time(int =0, int=0,int=0);

    Time& setTime(int, int, int);
    Time& setHour(int);
    Time& setMinute(int);
    Time& setSecond(int);

    int getHour() const;
    int getMinute() const;
    int getSecond() const;

    std::string toUniversalString() const;
    std::string toStandardString() const;

    private:
    unsigned int sec{0}, min{0}, hour{0};
};

#endif 