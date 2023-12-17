#include <iostream>
#include "Header.h"
using namespace std;


void ReadPersonWeight(unsigned short &weight) {
    std::cout << "Введите вес (в килограммах): ";
    std::cin >> weight;
}
