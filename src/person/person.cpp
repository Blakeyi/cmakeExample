#include "person.h"

Person::Person(){}
Person::Person(std::string _name, std::string _sex,
        unsigned int _age,  std::string _country):
        name(_name), 
        sex(_sex),
        age(_age),
        country(_country){}
std::string Person::getName()
{
    return name;
}
bool Person::setName(std::string newName)
{
    if (newName != name) {
        name = newName;
        return true;
    } else {
        return false;
    }
}

std::string Person::getSex()
{
    return sex;
}

bool Person::setSex(std::string newSex)
{
    if (newSex != sex) {
        sex = newSex;
        return true;
    } else {
        return false;
    }
}

Person::~Person()
{
}
