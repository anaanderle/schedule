#include <iostream>
#include "Schedule.hpp"
#include <vector>
#include "Appointment.hpp"
#include "Date.hpp"
#include "Time.hpp"

using namespace std;


Schedule::Schedule(){
    this->appointments = {};
}

Schedule::Schedule(vector<Appointment> appointments){
    this->appointments = appointments;
}

void Schedule::addAppointment(const Appointment& newAppointment) {
    if(!Schedule::hasConflict(newAppointment)){
        this->appointments.push_back(newAppointment);
        return;
    }

    cout << "O compromisso tem um conflito com outro existente." << endl;
}

void Schedule::printAppointments(){
    cout << "Compromissos: " << endl;
    for(auto& appointment : appointments){
        appointment.print();
        cout << "=======================" << endl;
    }
    cout << "Fim dos compromissos." << endl;
}

void Schedule::printAppointments(Date date){
    for(auto& appointment : appointments){
        if(appointment.getEventDate() == date){
            appointment.print();
        }
    }
}

void Schedule::printAppointments(Date date, Time time){
    for(auto& appointment : appointments){
        if(appointment.getEventDate() == date && appointment.getStartTime() <= time && appointment.getEndTime() >= time){
            appointment.print();
        }
    }
}

bool Schedule::hasConflict(Appointment newAppointment){
    for(Appointment& appointment : appointments){
        if(appointment.getEventDate() != newAppointment.getEventDate()){
            break;
        }
        if(appointment.getEndTime() <= newAppointment.getStartTime() || appointment.getStartTime() >= newAppointment.getEndTime()){
            break;
        }
        return true;
    }

    return false;
}
