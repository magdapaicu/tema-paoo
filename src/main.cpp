#include "lib/Student.h"
#include "lib/UndergraduateStudent.h"
#include "lib/PostgraduateStudent.h"
#include <iostream>
#include <string>

int main() {
    double undergraduateStudentGrades[] = {8.5, 7.9, 9.2};
    std::string subjects[] = {"Subject1", "Subject2", "Subject3"};
    University::UndergraduateStudent undergraduateStudent("Magda", 22, 3, undergraduateStudentGrades, subjects, 3);

    University::PostgraduateStudent postgrad("Alice", 25, 4, new double[4]{8.0, 7.5, 9.0, 9.5});

    undergraduateStudent.displayDetails();
    std::cout << "Grade Point Average: " << undergraduateStudent.calculateGradePointAverage() << std::endl;

    undergraduateStudent.introduce();
    postgrad.introduce();

    University::Student* studentPtr = new University::UndergraduateStudent("John", 20, 4, new double[4]{9.0, 8.5, 7.0, 9.5},subjects, 3);
    studentPtr->displayDetails(); 
    delete studentPtr;

   if(undergraduateStudent.hasPassed()){
    std::cout<<"Studentul a trecut cu media " << postgrad.calculateAverageGrade()<<" !\n";
   } else
   {
   std::cout<<"Studentul nu a trecut cu media " << postgrad.calculateAverageGrade()<<" !\n";
   }

      if(postgrad.hasPassed()){
    std::cout<<"Studentul a trecut cu media " << postgrad.calculateAverageGrade()<<" !\n";
   } else
   {
   std::cout<<"Studentul nu a trecut cu media " << postgrad.calculateAverageGrade()<<" !\n";
   }

   undergraduateStudent.printStudentInfo();

//Utilizarea operatorului de atribuire pentru copierea informatiilor
   University::PostgraduateStudent copyOfPostgrad= postgrad;
 
//Verific daca sunt identici
   if (postgrad.getName() == copyOfPostgrad.getName() && postgrad.getAge() == copyOfPostgrad.getAge() &&
        postgrad.getNumberGrades() == copyOfPostgrad.getNumberGrades()) {
        std::cout << "Studentul postuniversitar și copia sa au aceleași informații.\n";
    } else {
        std::cout << "Studentul postuniversitar și copia sa nu au aceleași informații.\n";
    }

    return 0;
}
