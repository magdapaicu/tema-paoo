#pragma once
#include "Student.h"
#include <iostream> 

namespace University {

class UndergraduateStudent : public Student {
private:
    std::string *subjects;
    int numSubjects;

public:
     UndergraduateStudent(std::string n, int a, int numberGrades, double *g, std::string *subjects, int numSubjects);
    ~UndergraduateStudent() override;
   
    void introduce() override {
        std::cout << "Hello, I'm an undergraduate student." << std::endl;
    }

    // Suprascrierea funcțiilor virtuale pure
    void displayDetails() override;
    double calculateGradePointAverage() override;
    bool hasPassed() override;
   };
}