#include "lib/Student.h"
#include <iostream> 
#include <string>

int main() {
  // Exemplu de folosire a constructorului cu parametri
    double grades[] = { 9.5, 8.7, 7.2 };
    Student student1("Alice", 20, 3, grades);

    // Exemplu de folosire a constructorului de copiere
    Student student2 = student1;

    // Exemplu de folosire a operatorului de atribuire pentru copiere
    Student student3("Bob", 22, 2, grades);
    student3 = student1;

    // Exemplu de folosire a constructorului de mutare
    Student student4 = std::move(student3);

    // Exemplu de folosire a operatorului de atribuire pentru mutare
    Student student5("Charlie", 21, 1, grades);
    student5 = std::move(student4);

    // Afisare informatii despre studenti
    student1.printStudentInfo();
    student2.printStudentInfo();
    student3.printStudentInfo();
    student4.printStudentInfo();
    student5.printStudentInfo();

    return 0; 
  
  return 0;
}