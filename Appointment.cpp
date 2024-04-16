/*
Uma classe para representar um compromisso, contendo as informações 
relevantes ao compromisso como título, pessoa responsável, horário de início, 
horário de fim (ambos representados por outra classe) e data (também representado por outra classe). Esta classe deve ter um método para calcular o tempo de duração do compromisso. 
*/

#include <iostream>
#include <string>
#include "Appointment.hpp"

using namespace std;

Appointment::Appointment(){
    this->title = "";
    this->responsiblePerson = "";
    this->startTime = Time();
    this->endTime = Time();
    this->eventDate = Date();
}

Appointment::Appointment(string title, string responsiblePerson, Time startTime, Time endTime, Date eventDate){
    this->title = title;
    this->responsiblePerson = responsiblePerson;
    this->startTime = startTime;
    this->endTime = endTime;
    this->eventDate = eventDate;

    if(this->startTime.getHour() > this->endTime.getHour() || (this->startTime.getHour() == this->endTime.getHour() && this->startTime.getMinute() > this->endTime.getMinute())){
        cout << "ERRO : Horário de início maior que horário de fim" << endl;
    }
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

Date Appointment::getEventDate(){
    return this->eventDate;
}

Time Appointment::getDuration(){
    return  this->getEndTime() - this->getStartTime();
}

//setters
void Appointment::setTitle(string title){
    this->title = title;
}

void Appointment::setResponsiblePerson(string responsiblePerson){
    this->responsiblePerson = responsiblePerson;
}

void Appointment::setStartTime(Time startTime){
    this->startTime = startTime;
}

void Appointment::setEndTime(Time endTime){
    this->endTime = endTime;
}

void Appointment::setEventDate(Date eventDate){
    this->eventDate = eventDate;
}

void Appointment::print(){
    cout << "Título: " << this->title << endl;
    cout << "Responsável: " << this->responsiblePerson << endl;
    cout << "Data: ";
    this->eventDate.print();
    cout << "Horário de início: ";
    this->startTime.print();
    cout << "Horário de fim: ";
    this->endTime.print();
    cout << "Duração: ";
    this->getDuration().print();
}

