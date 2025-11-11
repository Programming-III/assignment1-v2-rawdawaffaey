#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class Course{
private:
 string courseCode;
 string courseName;
 int maxStudent;
 Student* students;
 int currentStudents;
public:
    Course(string courseCode,
 string courseName,
 int maxStudent,
 Student* students,
 int currentStudents);
    addStudent(const Student& s);
    displayCourseInfo();
    ~Course;
    
    };


#endif
//#write your code here














#endif
