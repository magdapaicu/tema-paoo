#pragma once
#include "Student.h"
#include <iostream> 
#include <mutex>

namespace University {

class UndergraduateStudent : public Student {
private:
    std::string *subjects;
    int numSubjects;
    std::mutex dataMutex;

public:
     UndergraduateStudent(std::string n, int a, int numberGrades, double *g, std::string *subjects, int numSubjects);
    ~UndergraduateStudent() override;
    UndergraduateStudent(UndergraduateStudent&& other);
   
    void introduce() override {
        std::cout << "Hello, I'm an undergraduate student." << std::endl;
    }

    // Suprascrierea funcțiilor virtuale pure
    void displayDetails() override;
    double calculateGradePointAverage() override;
    bool hasPassed() override;
   };
}