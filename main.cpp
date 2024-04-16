#include <iostream>
#include "Appointment.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;

    /*Date date1 = Date(31, 9, 2003);
    date1.print();
    date1.setDate(25, 9, 2003);
    date1.print();
    date1.setDate(29, 2, 2023);
    date1.print();*/

    Appointment appointment1 = Appointment("Reunião", "João", Time(14, 30, 0), Time(16, 0, 0), Date(25, 9, 2003));
    appointment1.print();
    return 0;
}