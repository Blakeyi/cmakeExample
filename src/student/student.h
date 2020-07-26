#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
class Student
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_total() {total_val = share_val * shares;}
public:
    void acquire(const std::string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
    ~Student();
};

#endif 
