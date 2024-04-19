#include "Time.hpp"

using namespace std;

Time::Time(int hour, int minute, int second){
    if(validTime(hour, minute, second)){
        this->hour = hour;
        this->minute = minute;
        this->second = second;
        return;
    }

    cout << "ERRO : Horário inválido" << endl;
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

int Time::getSecond() {
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

Time Time::convertSecondToTime(int seconds) const {
    int hour = seconds / (60 * 60);
    int minuteRest = seconds % (60 * 60);
    int minute = minuteRest / 60;
    int secondRest = minuteRest % 60;
    return Time(hour, minute, secondRest);
}

int Time::convertToSecond() const {
    return this->second + (this->hour * 60 + this->minute) * 60;
}

bool Time::operator==(const Time& other) const {
    return this->convertToSecond() == other.convertToSecond();
}

bool Time::operator!=(const Time& other) const {
    return this->convertToSecond() != other.convertToSecond();
}

bool Time::operator<(const Time &other) const {
    return this->convertToSecond() < other.convertToSecond();
}

bool Time::operator<=(const Time &other) const {
    return this->convertToSecond() <= other.convertToSecond();
}

bool Time::operator>(const Time &other) const {
    return this->convertToSecond() > other.convertToSecond();
}

bool Time::operator>=(const Time &other) const {
    return this->convertToSecond() >= other.convertToSecond();
}

Time Time::operator+(const Time &otherTime) const {
    return convertSecondToTime(this->convertToSecond() + otherTime.convertToSecond());
}

Time Time::operator-(const Time &otherTime) const {
    return convertSecondToTime(this->convertToSecond() - otherTime.convertToSecond());
}

Time Time::operator*(const int num) const {
    return convertSecondToTime(this->convertToSecond() * num);
}