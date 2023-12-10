#pragma once
#include "Student.h"
#include <mutex>
#include <memory>

namespace University {

class PostgraduateStudent : public Student {

private: 
    std::unique_ptr<std::mutex> dataMutex;

public:
    PostgraduateStudent(std::string n, int a, int numberGrades, double *g);
    PostgraduateStudent(PostgraduateStudent&& other); // Declarare constructor de mutare
    PostgraduateStudent(const PostgraduateStudent& other) = delete;

    // Funcțiile virtuale suprascrise
    void displayDetails() override;
    double calculateGradePointAverage() override;
    bool hasPassed() override;
};
}
