#include "lib/Student.h"
#include <iostream> 

int main() {

  //Exemplu de utilizare a constructorului

  double studentGrades[] = {2, 9.0, 3};
  double grades2[] ={2.1,2.5,7.4};
  Student student("Magda", 21, 3, studentGrades);
  Student student1("Alice", 20, 3, grades2);

  student.printStudentInfo();

// Exemplu de utilizare a constructorului de copiere

  Student studentCopy(student);
  studentCopy.setName("Ana");
  studentCopy.printStudentInfo();
  student.printStudentInfo();

  Student studentMove(std::move(student));
  studentMove.printStudentInfo();

  // toti destructorii vo fi apelati la final pentru ca inainte de a iesi din main se distrug toate obiectele create 
  return 0;
}