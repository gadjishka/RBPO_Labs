#include <iostream>
#include <string>
#include "Header.h"
using namespace std;
extern string salary;

int main() {
    
    string personName;
    unsigned short personAge;
    unsigned short personHeight;
    unsigned short personWeight;
    
    ReadPersonData(personName, personAge, personHeight, personWeight);
    
    return 0;
}
