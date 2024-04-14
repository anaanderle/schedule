#include <iostream>
#include "Date.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Date date1 = Date(31, 9, 2003);
    date1.print();
    date1.setDate(25, 9, 2003);
    date1.print();
    date1.setDate(29, 2, 2023);
    date1.print();
    return 0;
}
