#include <iostream>
#include <string>

class Student {
private:
  std::string name;
  int age;
  int numberGrades;
  double *grades;
  double averageGrade;

  // Constructorul

public:
  Student(std::string n, int a, int numberGrades, double *g)
      : name(n), age(a), numberGrades(numberGrades) {
    if (g != nullptr) {
      grades = new double[numberGrades];
      for (int i = 0; i < numberGrades; i++) {
        grades[i] = g[i];
      }
    } else {
      grades = nullptr;
    }
  }

  // Deconstructor

  ~Student() { delete[] grades; }

  // Setters and Getters

  std::string getName() const { return name; }

  void setName(const std::string &n) { name = n; }

  int getAge() const { return age; }

  void setAge(int a) { age = a; }

  double *getGrades() const { return grades; }

  void setGrades(double *g, int numberGrades) {
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

  Student(const Student &other)
      : name(other.name), age(other.age), numberGrades(other.numberGrades) {
    if (other.grades != nullptr) {
      grades = new double[numberGrades];
      for (int i = 0; i < numberGrades; i++) {
        grades[i] = other.grades[i];
      }
    } else {
      grades = nullptr;
    }
  }

  // Move Constructor

  Student(Student &&other)
      : name(std::move(other.name)), age(other.age), grades(other.grades) {
    other.grades = nullptr;
  }

  double calculateAverageGrade() {
    if (grades == nullptr || numberGrades == 0) {
      return 0.0;
    }
    double sum = 0.0;
    for (int i = 0; i < numberGrades; i++) {
      sum += grades[i];
    }
    return sum / numberGrades;
  }

  void printStudentInfo() {
    std::cout << "Name: " << name << ", Age: " << age << ", Grades: ";
    if (grades != nullptr) {
      for (int i = 0; i < numberGrades; i++) {
        std::cout << grades[i] << " ";
      }
      std::cout << ", Average Grade: " << calculateAverageGrade();
    } else {
      std::cout << "N/A";
    }
    std::cout << std::endl;
  }
};

