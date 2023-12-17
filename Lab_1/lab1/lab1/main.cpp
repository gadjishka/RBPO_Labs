#include <iostream>
#include <string>
using namespace std;


unsigned short height = 0;
string salary;




unsigned short ReadPersonAge() {
    unsigned short age;
    
    cout << "Введите возраст: ";
    cin >> age;
    
    return age;
}

string ReadPersonName() {
    string personName;
    
    cout << "Введите имя: ";
    getline(cin, personName);
    
    return personName;
}

void ReadPersonHeight() {
    cout << "Введите рост (в сантиметрах): ";
    cin >> height;
}

void ReadPersonWeight(unsigned short &weight) {
    std::cout << "Введите вес (в килограммах): ";
    std::cin >> weight;
}

void ReadPersonSalary(double *salary) {
    std::cout << "Введите заработную плату: ";
    std::cin >> *salary;
}



void ReadPersonData(std::string &name, unsigned short &age, double &salary) {
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonSalary(&salary);
}

void ReadPersonData(std::string &name, unsigned short &age, unsigned short &height, unsigned short &weight) {
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonHeight();
    ReadPersonWeight(weight);
}

void WritePersonData(
                     const std::string &name,
                     const unsigned short *age,
                     const std::string &height = "",
                     const std::string &weight = ""
                     ) {
    std::cout << "Имя: " << name << std::endl;
    
    if (age != nullptr) {
        std::cout << "Возраст: " << *age << " лет" << std::endl;
    } else {
        std::cout << "Возраст не указан" << std::endl;
    }
    
    if (!height.empty()) {
        std::cout << "Рост: " << height << " см" << std::endl;
    }
    
    if (!weight.empty()) {
        std::cout << "Вес: " << weight << " кг" << std::endl;
    }
    
    std::cout << "Заработная плата: " << salary << " рублей" << std::endl;
}

int main() {
    string personName;
    unsigned short personAge;
    unsigned short personHeight;
    unsigned short personWeight;
    
    ReadPersonData(personName, personAge, personHeight, personWeight);
    
    return 0;
}
