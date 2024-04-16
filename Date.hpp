#ifndef SCHEDULE_DATE_HPP
#define SCHEDULE_DATE_HPP

#include <iostream>

using namespace std;

class Date {
public:
    Date(int day, int month, int year){
        if(validDate(day, month, year)){
            this->day = day;
            this->month = month;
            this->year = year;
            return;
        }

        cout << "Data criada com valor padrão." << endl;
    }

    Date()
    {
        this->day = 1;
        this->month = 1;
        this->year = 2000;
    }

    int getDay();
    int getMonth();
    int getYear();
    bool setDate(int day, int month, int year);
    void print();
    bool validDate(int day, int month, int year);
private:
    int day=1;
    int month=1;
    int year=2000;
};


#endif
