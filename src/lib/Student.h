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
  Student(std::string n, int a, int numberGrades, double *g);
  ~Student();
  std::string getName() const;
  void setName(const std::string &n);
  int getAge() const;
  void setAge(int a);
  double *getGrades() const;
  void setGrades(double *g, int numberGrades);
  Student(const Student &other);
  Student(Student &&other);
  double calculateAverageGrade();
  void printStudentInfo();
  virtual void displayDetails() const = 0;
  virtual double calculateGradePointAverage() const = 0;
};
