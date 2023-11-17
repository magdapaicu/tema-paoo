#pragma once
#include "Student.h"

class PostgraduateStudent : public Student {
public:
    PostgraduateStudent(std::string n, int a, int numberGrades, double *g);
    // Alți constructori, destructor și alte funcții specifice

    // Suprascrierea funcțiilor virtuale pure
    void displayDetails() override;
    double calculateGradePointAverage() override;
};
