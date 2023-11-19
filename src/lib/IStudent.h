#pragma once

namespace University {

class IStudent {
public:
    virtual ~IStudent() {}

    virtual void displayDetails() = 0;
    virtual double calculateGradePointAverage() = 0;
    virtual bool hasPassed() = 0;
 };

}
