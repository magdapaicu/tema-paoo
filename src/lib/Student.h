#pragma once
#include <string>

class Student {
private:
    std::string name;
    int age;
    int numberGrades;
    double *grades;
    double averageGrade;

public:
    // Constructori
    Student(std::string n, int a, int numberGrades, double *g);
    Student(const Student &other);
    Student(Student &&other);

    // Destructor
    virtual ~Student();

    // Operatori de asignare
    Student& operator=(const Student& other);
    Student& operator=(Student&& other);

    // Getters și setters
    std::string getName() const;
    void setName(const std::string &n);
    int getAge() const;
    void setAge(int a);
    double *getGrades() const;
    void setGrades(double *g, int numberGrades);

    double calculateAverageGrade();
    void printStudentInfo();

    // Functii virtuale pure
    virtual void displayDetails() = 0;
    virtual double calculateGradePointAverage() = 0;
};
