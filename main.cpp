#include <iostream>
#include "Schedule.hpp"

using namespace std;

int main() {
    // Date tests
    Date defaultDate = Date();
    Date customDate = Date(25, 1, 2003);
    Date invalidDate = Date(29, 2, 2023);

    // Test get and set Date
    cout << "Dia: " << defaultDate.getDay() << endl;
    cout << "Mês: " << defaultDate.getMonth() << endl;
    cout << "Ano: " << defaultDate.getYear() << endl;

    defaultDate.setDate(10, 11, 2002);

    cout << "Dia: " << defaultDate.getDay() << endl;
    cout << "Mês: " << defaultDate.getMonth() << endl;
    cout << "Ano: " << defaultDate.getYear() << endl;

    // Time tests
    Time defaultTime = Time();
    Time customTime = Time(12, 55, 26);
    Time invalidTime = Time(5, 36, 98);

    // Test get and set Time
    cout << "Hora: " << defaultTime.getHour() << endl;
    cout << "Minuto: " << defaultTime.getMinute() << endl;
    cout << "Segundo: " << defaultTime.getSecond() << endl;

    // Ajustando horário default
    defaultTime.setTime(10, 11, 55);

    cout << "Hora: " << defaultTime.getHour() << endl;
    cout << "Minuto: " << defaultTime.getMinute() << endl;
    cout << "Segundo: " << defaultTime.getSecond() << endl;

    cout << "Soma:" << endl;
    customTime.print();
    defaultTime.print();
    cout << "Resultado:" << endl;
    (customTime + defaultTime).print();

    cout << "Subtração:" << endl;
    customTime.print();
    defaultTime.print();
    cout << "Resultado:" << endl;
    (customTime - defaultTime).print();

    cout << "Multiplicação por 2:" << endl;
    defaultTime.print();
    cout << "Resultado:" << endl;
    (defaultTime * 2).print();

    cout << "Comparação de igualdade com valores padrão:" << endl;
    defaultTime.print();
    cout << "Resultado:" << endl;
    cout << "Os horários são " << (defaultTime == Time() ? "iguais" : "diferentes") << endl;
    invalidTime.print();
    cout << "Resultado:" << endl;
    cout << "Os horários são " << (invalidTime == Time() ? "iguais" : "diferentes") << endl;

    cout << "Comparação de igualdade com valores padrão:" << endl;
    defaultTime.print();
    cout << "Resultado:" << endl;
    cout << "Os horários são " << (defaultTime == Time() ? "iguais" : "diferentes") << endl;
    cout << "Os horários são realmente " << (defaultTime != Time() ? "diferentes" : "iguais") << endl;
    invalidTime.print();
    cout << "Resultado:" << endl;
    cout << "Os horários são " << (invalidTime == Time() ? "iguais" : "diferentes") << endl;
    cout << "Os horários são realmente " << (invalidTime == Time() ? "diferentes" : "iguais") << endl;

    cout << "Comparação de igualdade entre:" << endl;
    defaultTime.print();
    customTime.print();
    cout << "Resultado:" << endl;
    cout << "O primeiro é " << (defaultTime > customTime ? "maior" : "menor ou igual") << " que o segundo" << endl;
    cout << "O primeiro é " << (defaultTime < customTime ? "menor" : "maior ou igual") << " que o segundo" << endl;

    // Appointment tests
    Appointment appointment1 = Appointment("Reunião", "João", Time(16, 0, 0), Time(16, 30, 0), Date(30, 9, 2003));
    Appointment appointment2 = Appointment("Festa", "Carol", Time(15, 45, 0), Time(17, 30, 0), Date(30, 9, 2003));
    Appointment appointment3 = Appointment("Academia", "Marcos", Time(14, 30, 0), Time(15, 30, 0), Date(30, 10, 2003));

    // Test get Appointment
    cout << "Título: " << appointment1.getTitle() << endl;
    cout << "Pessoa responsável: " << appointment1.getResponsiblePerson() << endl;
    cout << "Horário de início: ";
    appointment1.getStartTime().print();
    cout << "Horário de fim: ";
    appointment1.getEndTime().print();
    cout << "Data: ";
    appointment1.getEventDate().print();
    cout << "Duração: ";
    appointment1.getDuration().print();

    // Schedule tests
    Schedule schedule = Schedule({appointment1});
    schedule.addAppointment(appointment2);
    schedule.addAppointment(appointment3);

    schedule.printAppointments();
    schedule.printAppointments(Date(30, 10, 2003));
    schedule.printAppointments(Date(30, 10, 2003), Time(15, 0, 0));

    return 0;
}