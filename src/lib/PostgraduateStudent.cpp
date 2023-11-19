#include "PostgraduateStudent.h"
#include <iostream>

namespace University {

PostgraduateStudent::PostgraduateStudent(std::string n, int a, int numberGrades, double *g)
    : Student(n, a, numberGrades, g) {
    std::cout << "Postgraduate student created: " << n << std::endl;
}

void PostgraduateStudent::displayDetails() {
    std::cout << "Postgraduate student details:" << std::endl;
    std::cout << "Name: " << getName() << ", Age: " << getAge() << std::endl;
    std::cout << "Grades: ";
    double *grades = getGrades();
    if (grades != nullptr) {
        for (int i = 0; i < getNumberGrades(); i++) {
            std::cout << grades[i] << " ";
        }
        std::cout << ", Average Grade: " << calculateAverageGrade();
    } else {
        std::cout << "The student has no grade!";
    }
    std::cout << std::endl;
}

double PostgraduateStudent::calculateGradePointAverage() {
    double sum = 0.0;
    double *grades = getGrades();
    if (grades != nullptr) {
        for (int i = 0; i < getNumberGrades(); i++) {
            sum += grades[i];
        }
        return sum / getNumberGrades();
    } else {
        return 0.0;
    }
  }

  bool PostgraduateStudent::hasPassed() {
    double averageGrade= calculateGradePointAverage();
    return (averageGrade >= 5.0);
  }
}
