#include "lib/Student.h"
#include "lib/UndergraduateStudent.h"
#include "lib/PostgraduateStudent.h"
#include <iostream>
#include <string>

int main() {
    double undergraduateStudentGrades[] = {8.5, 7.9, 9.2};
    University::UndergraduateStudent undergraduateStudent("Magda", 22, 3, undergraduateStudentGrades);
    University::PostgraduateStudent postgrad("Alice", 25, 4, new double[4]{8.0, 7.5, 9.0, 9.5});

    undergraduateStudent.displayDetails();
    std::cout << "Grade Point Average: " << undergraduateStudent.calculateGradePointAverage() << std::endl;

    undergraduateStudent.introduce();
    postgrad.introduce();

    University::Student* studentPtr = new University::UndergraduateStudent("John", 20, 4, new double[4]{9.0, 8.5, 7.0, 9.5});
    studentPtr->displayDetails(); 
    delete studentPtr;

    return 0;
}
