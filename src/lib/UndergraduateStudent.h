#pragma once
#include "Student.h"

namespace University {

class UndergraduateStudent : public Student {
public:
    UndergraduateStudent(std::string n, int a, int numberGrades, double *g);
    virtual void introduce();

    // Suprascrierea funcțiilor virtuale pure
    void displayDetails() override;
    double calculateGradePointAverage() override;
   };
}