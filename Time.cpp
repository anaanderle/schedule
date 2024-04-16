#include "Time.hpp"

using namespace std;

Time::Time(int hour, int minute, int second){
    if(validTime(hour, minute, second)){
        this->hour = hour;
        this->minute = minute;
        this->second = second;
        return;
    }else{
        cout << "ERRO : Horário inválido" << endl;
    }
}

Time::Time(){
    this->hour = 0;
    this->minute = 0;
    this->second = 0;
}


int Time::getHour(){
    return this->hour;
}

int Time::getMinute(){
    return this->minute;
}

int Time::getSecond(){
    return this->second;
}

bool Time::setTime(int hour, int minute, int second) {
    if(this->validTime(hour, minute, second)){
        this->hour = hour;
        this->minute = minute;
        this->second = second;
        return true;
    }

    cout << "Horário inválido" << endl;

    return false;
}

void Time::print() {
    cout << this->hour << ":" << this->minute << ":" << this->second << endl;
}

bool Time::validTime(int hour, int minute, int second) {
    return hour >= 0 && hour <= 24 && minute >= 0 && minute <= 59 && second >= 0 && second <= 59;
}

int Time::convertToSecond(Time &time){
    return time.getSecond() + (time.getHour() * 60 + time.getMinute()) * 60;
}

Time Time::convertSecondToTime(int seconds) {
    int hour = seconds % (60 * 60);
    int minute = (seconds - hour) % 60;
    int second = seconds - hour - minute;

    return Time(hour, minute, second);
}

bool Time::operator==(const Time& other) const {
    return hour == other.hour && minute == other.minute && second == other.second;
}

bool Time::operator<(const Time &other) const {
    return hour < other.hour && minute < other.minute && second < other.second;
}

bool Time::operator>(const Time &other) const {
    return hour > other.hour && minute > other.minute && second > other.second;
}
