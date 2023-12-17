#include <iostream>
#include "Header.h"
using namespace std;

void ReadPersonSalary(double *salary) {
    std::cout << "Введите заработную плату: ";
    std::cin >> *salary;
}
