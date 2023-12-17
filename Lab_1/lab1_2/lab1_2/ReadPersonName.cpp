#include <iostream>
#include "Header.h"
using namespace std;

string ReadPersonName() {
    string personName;
    
    cout << "Введите имя: ";
    getline(cin, personName);
    
    return personName;
}
