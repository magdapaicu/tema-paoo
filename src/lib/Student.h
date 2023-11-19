#pragma once
#include <string>

namespace University {

class Student {
private:
    std::string name;
    int age;
    int numberGrades;
    double *grades;

protected:
   
public:
    Student(std::string n, int a, int numberGrades, double *g);
    Student(const Student &other);
    Student(Student &&other);
    virtual ~Student();

    Student& operator=(const Student& other);
    Student& operator=(Student&& other);

    std::string getName() const;
    void setName(const std::string &n);
    int getAge() const;
    void setAge(int a);
    double *getGrades() const;
    void setGrades(double *g, int numberGrades);
    int getNumberGrades() const;

    double calculateAverageGrade();
    void printStudentInfo();

    virtual void introduce();
    virtual void displayDetails() = 0;
    virtual double calculateGradePointAverage() = 0;
    virtual bool hasPassed() = 0;
  };
} 
