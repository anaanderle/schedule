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

    bool operator==(const Time &otherTime) const;
    bool operator<(const Time &otherTime) const;
    bool operator>(const Time &otherTime) const;
    Time operator+(const Time &otherTime) const;
    Time operator-(const Time &otherTime) const;
    Time operator*(int num) const;
private:
    int hour=0;
    int minute=0;
    int second=0;
    int convertToSecond() const;
    Time convertSecondToTime(int seconds) const;
    bool validTime(int hour, int minute, int second);
};


#endif
