#include <iostream>
#include "Date.hpp"
#include "Date.cpp"
#include "Time.hpp"
#include "Time.cpp"
#include "Appointment.hpp"
#include "Appointment.cpp"
#include "Schedule.hpp"
#include "Schedule.cpp"


int main() {
    //std::cout << "Hello, World!" << std::endl;

    // date1.print();
    // date1.setDate(25, 9, 2003);
    // date1.print();
    // date1.setDate(29, 2, 2023);
    // date1.print();



    Schedule schedule = Schedule();
    Appointment appointment1 = Appointment("Reunião", "João", Time(16, 0, 0), Time(16, 30, 0), Date(30, 9, 2003));
    appointment1.print();

    schedule.addAppointment(appointment1);
    schedule.printAppointments();

    Appointment appointment2 = Appointment("Reunião", "João", Time(16, 0, 0), Time(16, 30, 0), Date(30, 9, 2003));
    schedule.addAppointment(appointment2);
    schedule.printAppointments();
    
    return 0;
}