#ifndef SCHEDULE_DATE_HPP
#define SCHEDULE_DATE_HPP

#include <iostream>

using namespace std;

class Date {
public:
    
    Date(int day, int month, int year);
    Date();

    int getDay();
    int getMonth();
    int getYear();
    bool setDate(int day, int month, int year);
    void print();
    bool validDate(int day, int month, int year);

    bool operator==(const Date& other) const;
    bool operator!=(const Date& other) const;
private:
    int day=1;
    int month=1;
    int year=2000;
};




#endif
