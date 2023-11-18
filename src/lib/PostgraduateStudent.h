#pragma once
#include "Student.h"

namespace University {

class PostgraduateStudent : public Student {
public:
    PostgraduateStudent(std::string n, int a, int numberGrades, double *g);

    virtual void introduce();

    // Suprascrierea funcțiilor virtuale pure
    void displayDetails() override;
    double calculateGradePointAverage() override;
  };
}