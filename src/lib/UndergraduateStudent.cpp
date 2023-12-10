#include "UndergraduateStudent.h"
#include <iostream>
#include <mutex>

namespace University {

UndergraduateStudent::UndergraduateStudent(std::string n, int a, int numberGrades, double *g, std::string *subjects, int numSubjects)
    : Student(n, a, numberGrades, g), subjects(nullptr), numSubjects(0) {
    if (numSubjects > 0 && subjects != nullptr) {
        this->subjects = new std::string[numSubjects];
        for (int i = 0; i < numSubjects; ++i) {
            this->subjects[i] = subjects[i];
        }
        this->numSubjects = numSubjects;
    }
    std::cout << "Undergraduate student created: " << n << std::endl;
}


UndergraduateStudent::UndergraduateStudent(UndergraduateStudent&& other)
    : Student(std::move(other)), subjects(nullptr), numSubjects(other.numSubjects) {
    subjects = other.subjects;
    other.subjects = nullptr;
    other.numSubjects = 0;
    std::cout << "Constructor de mutare pentru UndergraduateStudent apelat." << std::endl;
}


// Implementarea destructorului suprascris
UndergraduateStudent::~UndergraduateStudent() {
    delete[] subjects;
    std::cout << "Destructorul pentru UndergraduateStudent a fost apelat." << std::endl;
}

void UndergraduateStudent::displayDetails() {

    std::lock_guard<std::mutex> lock(dataMutex);
    std::cout << "Undergraduate student details:" << std::endl;
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

    std::cout << ", Subjects: ";
    if (subjects != nullptr) {
        for (int i = 0; i < numSubjects; i++) {
            std::cout << subjects[i] << " ";
        }
    } else {
        std::cout << "No subjects available.";
    }

    std::cout << std::endl;
}


 double UndergraduateStudent::calculateGradePointAverage() {
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

  bool UndergraduateStudent::hasPassed() {  
     double averageGrade = calculateGradePointAverage();
     return (averageGrade >= 5);
  }
}