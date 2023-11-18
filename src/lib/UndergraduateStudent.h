#pragma once
#include "Student.h"
#include <iostream> 

namespace University {

class UndergraduateStudent : public Student {
public:
    UndergraduateStudent(std::string n, int a, int numberGrades, double *g);
   
    void introduce() override {
        std::cout << "Hello, I'm an undergraduate student." << std::endl;
    }

    // Suprascrierea funcțiilor virtuale pure
    void displayDetails() override;
    double calculateGradePointAverage() override;
   };
}