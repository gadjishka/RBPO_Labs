#include <iostream>
#include "Header.h"
using namespace std;


void ReadPersonData(string &name, unsigned short &age, double &salary) {
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonSalary(&salary);
}

void ReadPersonData(string &name, unsigned short &age, unsigned short &height, unsigned short &weight) {
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonHeight();
    ReadPersonWeight(weight);
}
