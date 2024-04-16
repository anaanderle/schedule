#ifndef SCHEDULE_TIME_HPP
#define SCHEDULE_TIME_HPP

#include <iostream>

using namespace std;

class Time {
public:
    Time(int hour, int minute, int second);
    Time();
    
    int getHour();
    int getMinute();
    int getSecond();
    bool setTime(int hour, int minute, int second);
    void print();
    bool validTime(int hour, int minute, int second);
    int convertToSecond(Time &time);
    Time convertSecondToTime(int seconds);

    bool operator==(const Time &otherTime) const;
    bool operator<(const Time &otherTime) const;
    bool operator>(const Time &otherTime) const;
private:
    int hour=0;
    int minute=0;
    int second=0;
};


#endif
