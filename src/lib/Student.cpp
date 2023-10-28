#include "Student.h"
#include <iostream> 

Student::Student(std::string n, int a, int numberGrades, double *g)
    : name(n), age(a), numberGrades(numberGrades) {
  if (g != nullptr) {
    grades = new double[numberGrades];
    for (int i = 0; i < numberGrades; i++) {
      grades[i] = g[i];
    }
  } else {
    this->grades = nullptr; 
  }
  std::cout << "Constructor cu parametri apelat." << std::endl;
}

// Destructor

Student::~Student() {
  delete[] grades;
  std::cout << "Destructor apelat." << std::endl;
}

// Setters and Getters

std::string Student::getName() const {
  return name;
}

void Student::setName(const std::string &n) {
  name = n;
}

int Student::getAge() const {
  return age;
}

void Student::setAge(int a) {
  age = a;
}

double *Student::getGrades() const {
  return grades;
}

void Student::setGrades(double *g, int numberGrades) {
  if (grades != nullptr) {
    delete[] grades;
  }
  if (g != nullptr) {
    grades = new double[numberGrades];
    this->numberGrades = numberGrades;
    for (int i = 0; i < numberGrades; i++) {
      grades[i] = g[i];
    }
  } else {
    grades = nullptr;
    this->numberGrades = 0;
  }
}

// Copy constructor

Student::Student(const Student& other)
    : name(other.name), age(other.age), numberGrades(other.numberGrades) {
  if (other.grades != nullptr) {
    this->grades = new double[numberGrades];
    for (int i = 0; i < numberGrades; i++) {
      this->grades[i] = other.grades[i];
    }
  } else {
    this->grades = nullptr;
  }
  std::cout << "Constructor de copiere apelat." << std::endl;
}

// Move Constructor

Student::Student(Student&& other)
    : name(std::move(other.name)), age(other.age), grades(other.grades) {
  other.grades = nullptr; 
  std::cout << "Constructor de mutare apelat." << std::endl;
}
double Student::calculateAverageGrade() {
  if (grades == nullptr || numberGrades == 0) {
    return 0.0;
  }
  double sum = 0.0;
  for (int i = 0; i < numberGrades; i++) {
    sum += grades[i];
  }
  return sum / numberGrades;
}

void Student::printStudentInfo() {
  std::cout << "Name: " << name << ", Age: " << age << ", Grades: ";
  if (grades != nullptr) {
    for (int i = 0; i < numberGrades; i++) {
      std::cout << grades[i] << " ";
    }
    std::cout << ", Average Grade: " << calculateAverageGrade();
  } else {
    std::cout << "The student has no grade! ";
  }
  std::cout << std::endl;
}
