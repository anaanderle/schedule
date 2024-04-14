#include "Time.hpp"

using namespace std;

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

bool Time::operator==(Time &otherTime) {
    return convertToSecond(*this) == this->convertToSecond(otherTime);
}

bool Time::operator<(Time &otherTime) {
    return convertToSecond(*this) < this->convertToSecond(otherTime);
}

bool Time::operator>(Time &otherTime) {
    return convertToSecond(*this) > this->convertToSecond(otherTime);
}

Time Time::operator+(Time &otherTime) {
    return convertSecondToTime(convertToSecond(*this) + convertToSecond(otherTime));
}

Time Time::operator-(Time &otherTime) {
    return convertSecondToTime(convertToSecond(*this) - convertToSecond(otherTime));
}

Time Time::operator*(int num) {
    return convertSecondToTime(convertToSecond(*this) * num);
}
