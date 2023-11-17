#include "UndergraduateStudent.h"
#include <iostream>

UndergraduateStudent::UndergraduateStudent(std::string n, int a, int numberGrades, double *g)
    : Student(n, a, numberGrades, g) {
    // Implementare constructor
    std::cout << "Undergraduate student created: " << n << std::endl;
}

void UndergraduateStudent::displayDetails() {
    std::cout << "Undergraduate student details:" << std::endl;
    std::cout << "Name: " << getName() << ", Age: " << getAge() << std::endl;
    std::cout << "Grades: ";
    double *grades = getGrades();
    if (grades != nullptr) {
        for (int i = 0; i < numberGrades; i++) {
            std::cout << grades[i] << " ";
        }
        std::cout << ", Average Grade: " << calculateAverageGrade();
    } else {
        std::cout << "The student has no grade!";
    }
    std::cout << std::endl;
}

double UndergraduateStudent::calculateGradePointAverage() {
    // Calcularea mediei pentru studentul pre-universitar
    double sum = 0.0;
    double *grades = getGrades();
    if (grades != nullptr) {
        for (int i = 0; i < numberGrades; i++) {
            sum += grades[i];
        }
        return sum / numberGrades;
    } else {
        return 0.0;
    }
}
