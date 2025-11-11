#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
Person::Person(string name, int id){
this->name = name; 
this->id = id; 

string getName(){
  return name; 
}

int getId(){
  return id; 
}

void display(){
    cout<< getName << " "<< getId<< endl; 
}
}


// ==================== Student Class Implementation ====================
Student::Student(int yearLevel, string major){
this->yearLevel = yearLevel; 
this->major = major; 

  string getMajor(){
  return major; 
}

int getyearLevel(){
  return yearLevel; 
}
  void display(){
    cout<< yearLevel << " "<< major << endl; 
}
}

// ==================== Instructor Class Implementation ====================
Instructor::Instructor(string department, int experienceYears){
this->department = department; 
this->experienceYears = experienceYears; 

  string getDepartment(){
  return department; 
}

int getexperienceYears(){
  return experienceYears; 
}
void display(){
cout<< department << " "<< experienceYears << endl; 
}
}

// ==================== Course Class Implementation ====================
Course::Course(string courseCode, string courseName, int maxStudents, Student* students, int currentStudents){
this->courseCode = courseCode; 
this->courseName = courseName; 
this->maxStudents = maxStudents; 
this->students=students; 
this->currentStudents=currentStudents;
}







// ==================== Main Function ====================
int main() {
   cout<<"Course: "<< Course<< endl; 
    cout<<"Max Students: "<< maxStudents << endl; 
    cout<< "Currently Enrolled: "<< name << " "<< id<< endl; 
    cout<< "Instructor info:"<<endl; 
    
    return 0;
}
