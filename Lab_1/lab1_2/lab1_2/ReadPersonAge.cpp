#include <iostream>
#include "Header.h"
using namespace std;

unsigned short ReadPersonAge() {
    unsigned short age;
    
    cout << "Введите возраст: ";
    cin >> age;
    
    return age;
}
