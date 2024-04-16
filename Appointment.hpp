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
    Appointment();
    Appointment(string title, string responsiblePerson, Time startTime, Time endTime, Date eventDate);
    string getTitle();
    string getResponsiblePerson();
    Time getStartTime();
    Time getEndTime();
    Date getEventDate();
    Time getDuration();
    void setTitle(string title);
    void setResponsiblePerson(string responsiblePerson);
    void setStartTime(Time startTime);
    void setEndTime(Time endTime);
    void setEventDate(Date eventDate);
    void print();
private:
    string title;
    string responsiblePerson;
    Time startTime;
    Time endTime;
    Date eventDate;
};

#endif