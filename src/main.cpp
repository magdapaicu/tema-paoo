#include "lib/Student.h"
#include "lib/UndergraduateStudent.h"
#include "lib/PostgraduateStudent.h"
#include <iostream>
#include <string>

int main() {
    double undergraduateStudentGrades[] = {8.5, 7.9, 9.2};
    University::UndergraduateStudent undergraduateStudent("Magda", 22, 3, undergraduateStudentGrades);

    undergraduateStudent.displayDetails();
    std::cout << "Grade Point Average: " << undergraduateStudent.calculateGradePointAverage() << std::endl;

    return 0;
}
