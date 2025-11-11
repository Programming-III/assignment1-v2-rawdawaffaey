#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class Instructor : Person{
private:
    string department;
    int experienceYears;
public:
    Instructor(string department,int experienceYears) : Person(string name,int id); 
    display();
    ~Instructor;
 };

#endif
//#write Instructor class here












#endif
