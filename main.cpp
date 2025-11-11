#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;
 Person :: Person(string name,int id){
   this->name=name;
   this->id=id;
   
   }
   void Person :: display(){
   cout<<"name="<<name<<endl;
   cout<<"("<<"ID:"<<id<<endl;
   
   }
   void Person :: ~Person{
   void  Person :: setName(){
   this->>name=name;
   
   }
   void Person:: setId(){
   this->>id=id;
   
   }
   string Person :: getName(){
    return name;}
    int Person :: getId(){
    return id;}
   }
   Student :: Student(int yearLevel,string major){
   this->yearLevel=yearLevel;
   this-> major=major;
   }
   void Student :: display(){
   cout<<"Student Info:"<<endl;
   cout<<"Year:"<<yearLevel<<endl;
   cout<<"Major:"<<major<<endl;
   
   }
   void Student::~Student{}
   Instructor :: Instructor(string department,int experienceYears){
   this->department=department;
   this->experience=experience;
   
   
   }
   void Instructor :: display(){
   cout<<"Instructor Info:"<<endl;
   cout<<"Department:"<<department<<endl;
   cout<<"Experience:"<<experienceYears<<endl;
   
   
   
   }
   void Instructor :: ~Instructor{};
   
   
  Course:: Course(string courseCode,string courseName,int maxStudent,Student* students,int currentStudents){
  this->courseCode=Coursecode;
  this->courseName=courseName;
  this->currentStudents=currentStudents;
  this->maxStudent=maxStudent;
  this->students=students;
  
  
  }
  void Course :: addStudent(const Student& s){
  Student* newStudents =new students[maxStudent+1];
  for(i=0;i<=maxStudent;i++){
    
    newStudents[i]=students[i];
  }
  newStudents[maxStudent+1]=s;
  
  }
  void Course :: displayCourseInfo(){
  cout<<"Course:"<<courseName<<endl;
  cout<<"Currently Enrolled:"<<Students<<"("<<"ID:"<<id<<")"<<endl;
  
  
  
  
  }
  void Course::~Course{
  delete[]Students;
  int main(){
  Person p1(rawda,16009445);
   Student s1(2,cs);
    Student s2(2,cs);
   Instructor i1(informatics,6);
   Course c1(c104,cs,4,students);
   p1.display();
   s1.display();
   c1.display();
  c1.addStudents(s2);
  
  
  return 0;}
  }
   
   
// ==================== Person Class Implementation =========================








// ==================== Student Class Implementation ====================






// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
