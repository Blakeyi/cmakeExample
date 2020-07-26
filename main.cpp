// A simple program that computes the square root of a number
#include <iostream>
#include <string>
#include "stock.h"
#include "student.h"
#include "person.h"
// should we include the MathFunctions header?


int main(int argc, char* argv[])
{
  Stock s1;
  Student s2;
  Person p;
  
  p.setName("blake");
  std::cout << p.getName() << std::endl;
  s1.acquire("blake", 1000, 10);
  s1.show();

  s2.acquire("yi", 1000, 10);
  s2.show();
  return 0;
}
