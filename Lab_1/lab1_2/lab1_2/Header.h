#ifndef Header_h
#define Header_h


#include <string>

unsigned short ReadPersonAge();
std::string ReadPersonName();
void ReadPersonHeight();
void ReadPersonWeight(unsigned short &weight);
void ReadPersonSalary(double *salary);

extern std::string salary;

void WritePersonData(
    const std::string &name,
    const unsigned short *age,
    const std::string &height = "",
    const std::string &weight = ""
);

void ReadPersonData(std::string &name, unsigned short &age, double &salary);
void ReadPersonData(std::string &name, unsigned short &age, unsigned short &height, unsigned short &weight);

#endif
