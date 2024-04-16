#ifndef SCHEDULE_APPOINTMENT_HPP
#define SCHEDULE_APPOINTMENT_HPP

#include <iostream>
#include <string>
#include "Time.hpp"
#include "Date.hpp"

using namespace std;

class Appointment
{
public:
    Appointment(string title, string responsiblePerson, Time startTime, Time endTime, Date eventDate);
    string getTitle();
    string getResponsiblePerson();
    Time getStartTime();
    Time getEndTime();
    Date getEventDate();
    Time getDuration();
    void print();
private:
    string title;
    string responsiblePerson;
    Time startTime;
    Time endTime;
    Date eventDate;
};

#endif