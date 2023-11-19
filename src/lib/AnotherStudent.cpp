#pragma once
#include "Student.h"

namespace University {

class AnotherStudent : public Student {
public:
    // Constructor care apelează constructorul din clasa de bază
    
    AnotherStudent(std::string n, int a, int numberGrades, double *g)
        : Student(n, a, numberGrades, g) {
        std::cout << "Another student created: " << n << std::endl;
    }

    // Nu suprascrie funcțiile virtuale pure
  };
}
