#pragma once
#include "Student.h"

namespace University {

class UndergraduateStudent :public Student {

UndergraduateStudent();
UndergraduateStudent(std::string name, int age, int numberGRades, double *grades);

void displayDEtails() const override;
double calculateGRadePointAverage() const override;

   };
}
