#include "lib/Student.h"
#include "lib/UndergraduateStudent.h"
#include "lib/PostgraduateStudent.h"
#include <iostream>
#include <string>

using namespace University;
using namespace std;

int main() {
    double undergraduateStudentGrades[] = {8.5, 7.9, 9.2};
    double undergraduateStudentGrades1[] = {2, 4, 3};
    string subjects[] = {"Subject1", "Subject2", "Subject3"};
    string subjects1[] = {"PAOO", "CHS", "OOP"};
    UndergraduateStudent undergraduateStudent1("Magda", 22, 3, undergraduateStudentGrades, subjects, 3);
    PostgraduateStudent postgrad("Alice", 25, 4, new double[4]{8.0, 7.5, 9.0, 9.5});
    Student* studentPtr = new UndergraduateStudent("John", 20, 4, new double[4]{9.0, 8.5, 7.0, 9.5},subjects, 3);
    UndergraduateStudent undergraduateStudent2("Lidia", 19, 3, undergraduateStudentGrades1, subjects1, 3); 
    PostgraduateStudent postgrad2("Maria", 25, 4, new double[4]{8.0, 7.5, 9.0, 9.5});
    UndergraduateStudent undergraduateStudent3("Marius", 19, 3, undergraduateStudentGrades1, subjects1, 3); 

//Constructor de mutare apelat

 UndergraduateStudent student3 = std::move(undergraduateStudent1);

 PostgraduateStudent copyStudent=postgrad2;
  
//Supraincarcarea operatorului de atribuire
//    postgrad=postgrad2;

// Supraincarcarea move constructorului
//     postgrad = std::move(postgrad2);

    student3.displayDetails();

    undergraduateStudent1.displayDetails();

    studentPtr->displayDetails();

    cout << "Grade Point Average: " << undergraduateStudent1.calculateGradePointAverage() << endl;

    postgrad.introduce();

    studentPtr->displayDetails(); 
    delete studentPtr;

    cout << "---------------------------------------------------------"<<endl;

// Constructor de copiere apelat
// PostgraduateStudent copyOfPostgrad = postgrad;

//Constructor de mutare apelat
 PostgraduateStudent moveOfPostgrad = std::move(postgrad);


   if(undergraduateStudent1.hasPassed()){
    cout<<"Studentul a trecut cu media " << postgrad.calculateAverageGrade()<<" !\n";
   } else
   {
    cout<<"Studentul nu a trecut cu media " << postgrad.calculateAverageGrade()<<" !\n";
   }

      if(postgrad.hasPassed()){
        cout<<"Studentul a trecut cu media " << postgrad.calculateAverageGrade()<<" !\n";
   } else
   {
        cout<<"Studentul nu a trecut cu media " << postgrad.calculateAverageGrade()<<" !\n";
   }
 
// Verific daca sunt identici
//    if (postgrad.getName() == copyOfPostgrad.getName() && postgrad.getAge() == copyOfPostgrad.getAge() &&
//         postgrad.getNumberGrades() == copyOfPostgrad.getNumberGrades()) {
//              cout << "Studentul postuniversitar și copia sa au aceleași informații.\n";
//     } else {
//             cout << "Studentul postuniversitar și copia sa nu au aceleași informații.\n";
//     }

    return 0;
}
