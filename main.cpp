#include <iostream>
#include "Schedule.hpp"


int main() {
    std::cout << "Hello, World!" << std::endl;

//     date1.print();
//     date1.setDate(25, 9, 2003);
//     date1.print();
//     date1.setDate(29, 2, 2023);
//     date1.print();



    Schedule schedule = Schedule();
    Appointment appointment1 = Appointment("Reunião", "João", Time(16, 0, 0), Time(16, 30, 0), Date(30, 9, 2003));
    Appointment appointment3 = Appointment("academia", "marcos", Time(14, 30, 0), Time(15, 30, 0), Date(30, 9, 2003));

    schedule.addAppointment(appointment1);


    Appointment appointment2 = Appointment("festa", "carol", Time(16, 0, 0), Time(16, 30, 0), Date(30, 9, 2003));
    schedule.addAppointment(appointment2);
    schedule.addAppointment(appointment3);
    schedule.printAppointments();
    
    return 0;
}