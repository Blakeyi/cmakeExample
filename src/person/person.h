#ifndef _PERSON_H_
#define _PERSON_H_
#include <string>
class Person
{
private:
    std::string name;
    std::string sex;
    unsigned int age;
    std::string country;
public:
    Person();
    Person(std::string _name, std::string _sex,
           unsigned int _age,  std::string _country);
    std::string getName();
    bool setName(std::string newName);
    std::string getSex();
    bool setSex(std::string newSex);
    ~Person();
};


#endif // !_PERSON_H_
