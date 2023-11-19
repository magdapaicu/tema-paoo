#include "Student.h"
#include "IStudent.h"
#include <iostream>

namespace University{

Student::Student(std::string n, int a, int numberGrades, double *g)
    : name(n), age(a), numberGrades(numberGrades), grades(nullptr) {
    if (numberGrades > 0 && g != nullptr) {
        grades = new double[numberGrades];
        for (int i = 0; i < numberGrades; i++) {
            grades[i] = g[i];
        }
    }
    std::cout << "Constructor cu parametri apelat." << std::endl;
}

//Destructor 
Student::~Student() {
    delete[] grades;
    std::cout << "Destructor apelat." << std::endl;
}

Student::Student(const Student& other)
    : name(other.name), age(other.age), numberGrades(other.numberGrades), grades(nullptr) {
    if (other.numberGrades > 0 && other.grades != nullptr) {
        grades = new double[other.numberGrades];
        for (int i = 0; i < other.numberGrades; i++) {
            grades[i] = other.grades[i];
        }
    }
    std::cout << "Constructor de copiere apelat." << std::endl;
}

Student::Student(Student&& other)
    : name(std::move(other.name)), age(std::move(other.age)), numberGrades(other.numberGrades), grades(other.grades) {
    other.numberGrades = 0;
    other.grades = nullptr;
    std::cout << "Constructor de mutare apelat." << std::endl;
}

//Supraincarcarea operatorului de atribuire 
Student& Student::operator=(const Student& other) {
    if (this != &other) {
        name = other.name;
        age = other.age;
        numberGrades = other.numberGrades;

        delete[] grades;

        if (other.numberGrades > 0 && other.grades != nullptr) {
            grades = new double[other.numberGrades];
            for (int i = 0; i < other.numberGrades; ++i) {
                grades[i] = other.grades[i];
            }
        } else {
            grades = nullptr;
        }
        std::cout << "Operatorul de atribuire '=' (copiere) a fost apelat." << std::endl;
    }
    return *this;
}

//Supraincarcarea operatorului de atribuire pentru move
Student& Student::operator=(Student&& other) {
    if (this != &other) {
        name = std::move(other.name);
        age = other.age;
        numberGrades = other.numberGrades;

        delete[] grades;

        grades = other.grades;
        other.numberGrades = 0;
        other.grades = nullptr;
    }
    std::cout << "Operatorul de atribuire '=' (mutare) a fost apelat." << std::endl;
    return *this;
}

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
    delete[] grades;

    if (g != nullptr && numberGrades > 0) {
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

int Student::getNumberGrades() const {
    return numberGrades;
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

void Student::introduce(){
  std::cout<<"Hello, I'm student."<<std::endl; 
  } 
}