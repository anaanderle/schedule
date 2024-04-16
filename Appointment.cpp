/*
Uma classe para representar um compromisso, contendo as informações 
relevantes ao compromisso como título, pessoa responsável, horário de início, 
horário de fim (ambos representados por outra classe) e data (também representado por outra classe). Esta classe deve ter um método para calcular o tempo de duração do compromisso. 
*/

#include <iostream>
#include <string>
#include "Appointment.hpp"

using namespace std;



Appointment::Appointment(string title, string responsiblePerson, Time startTime, Time endTime, Date date){
    this->title = title;
    this->responsiblePerson = responsiblePerson;
    this->startTime = startTime;
    this->endTime = endTime;
    this->date = date;
}

string Appointment::getTitle(){
    return this->title;
}

string Appointment::getResponsiblePerson(){
    return this->responsiblePerson;
}

Time Appointment::getStartTime(){
    return this->startTime;
}

Time Appointment::getEndTime(){
    return this->endTime;
}

Date Appointment::getDate(){
    return this->date;
}

Time Appointment::getDuration(){
    int hours = this->endTime.getHour() - this->startTime.getHour();
    int minutes = this->endTime.getMinute() - this->startTime.getMinute();

    if(minutes < 0){
        hours--;
        minutes += 60;
    }
    
    Time duration = Time(hours, minutes, 0);
    return duration;
}

void Appointment::print(){
    cout << "Título: " << this->title << endl;
    cout << "Responsável: " << this->responsiblePerson << endl;
    cout << "Data: ";
    this->date.print();
    cout << "Horário de início: ";
    this->startTime.print();
    cout << "Horário de fim: ";
    this->endTime.print();
    cout << "Duração: ";
    this->getDuration().print();
}



