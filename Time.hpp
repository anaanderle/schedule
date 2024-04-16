#ifndef SCHEDULE_TIME_HPP
#define SCHEDULE_TIME_HPP

#include <iostream>

using namespace std;

class Time {
public:
    Time(int hour, int minute, int second){
        if(validTime(hour, minute, second)){
            this->hour = hour;
            this->minute = minute;
            this->second = second;
            return;
        }

        cout << "Horário criado com valor padrão." << endl;
    }

    Time()
    {
        this->hour = 0;
        this->minute = 0;
        this->second = 0;
    }

    int getHour();
    int getMinute();
    int getSecond();
    bool setTime(int hour, int minute, int second);
    void print();
    bool validTime(int hour, int minute, int second);
    int convertToSecond(Time &time);
    Time convertSecondToTime(int seconds);

    bool operator==(Time &otherTime);
    bool operator<(Time &otherTime);
    bool operator>(Time &otherTime);
    Time operator+(Time &otherTime);
    Time operator-(Time &otherTime);
    Time operator*(int num);
private:
    int hour=0;
    int minute=0;
    int second=0;
};


#endif
