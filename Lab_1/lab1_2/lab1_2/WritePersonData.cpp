#include <iostream>
#include "Header.h"
using namespace std;

string salary;

void WritePersonData(
                     const std::string &name,
                     const unsigned short *age,
                     const std::string &height,
                     const std::string &weight
                     ) {
    cout << "Имя: " << name << std::endl;
    
    if (age != nullptr) {
        cout << "Возраст: " << *age << " лет" << std::endl;
    } else {
        cout << "Возраст не указан" << std::endl;
    }
    
    if (!height.empty()) {
        cout << "Рост: " << height << " см" << std::endl;
    }
    
    if (!weight.empty()) {
        cout << "Вес: " << weight << " кг" << std::endl;
    }
    
    cout << "Заработная плата: " << salary << " рублей" << std::endl;
}
