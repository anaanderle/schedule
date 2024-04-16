/*
Uma classe para representar a agenda, que recebe as instâncias dos 
compromissos e realiza operações como listar compromissos, e verificar conflito 
de compromissos. Dois compromissos não podem estar sobrepostos (usar 
sobrecarga de operadores para comparar)
*/

#include <iostream>
#include "Schedule.hpp"
#include <vector>
#include "Appointment.hpp"
#include "Date.hpp"
#include "Time.hpp"
using namespace std;


Schedule::Schedule(){
    vector<Appointment> appointments = {};
}

void Schedule::addAppointment(const Appointment& newAppointment) {
    if(appointments.size() == 0){
        appointments.push_back(newAppointment);
        return;
    }

    for(const auto& appointment : appointments){
        if(!Schedule::hasConflict(appointments, newAppointment)){
            appointments.push_back(newAppointment);
            break;
        }

        cout << "O compromisso tem um conflito com outro existente." << endl;
    }
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
        if(appointment.getEventDate() == date && appointment.getStartTime() == time){
            appointment.print();
        }
    }
}

bool Schedule::hasConflict(vector<Appointment> appointments, Appointment newAppointment){
    for(Appointment& appointment1 : appointments){
        for(Appointment& appointment2 : appointments){
            if(appointment1.getEventDate() != appointment2.getEventDate()) {
                break;
            }

            if(appointment1.getEndTime() < appointment2.getStartTime() || appointment1.getStartTime() > appointment2.getEndTime()){
                break;
            }

            return false;
        }
    }

    return true;
}
