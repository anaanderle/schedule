#ifndef SCHEDULE_SCHEDULE_HPP
#define SCHEDULE_SCHEDULE_HPP

#include <iostream>
#include "Date.hpp"
#include "Time.hpp"
#include "Appointment.hpp"
#include <vector>

using namespace std;

class Schedule {
public:
    Schedule();
    Schedule(vector<Appointment> appointments);
    void printAppointments();
    void printAppointments(Date date);
    void printAppointments(Date date, Time time);
    bool hasConflict(Appointment newAppointment);
    void addAppointment(const Appointment& newAppointment);
private:
    vector<Appointment> appointments;
};

#endif