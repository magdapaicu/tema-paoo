#include "lib/Student.h"
#include <iostream> 
#include <string>
#include <UndergraduateStudent.h>
#include <PostgraduateStudent.h>

int main() {
  double undergraduateStudentGrades[]={8.5, 7.9, 9.2};
  UndergraduateStudent undergraduateStudent("Magda", 22, 3 ,undergraduateStudentGrades);
  
  undergraduateStudent.displayDetails();
  std::cout<<"Grade Point Average: "<< undergraduateStudent.calculateGradePointAverage()<< std::endl;

  return 0;
}