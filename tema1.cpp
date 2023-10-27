#include <iostream>
#include <string>

class Student {
private:
  std::string firstname, lastname;
  int age;
  int numberGrades;
  double *grades;
  double averageGrade;

public:
  Student(std::string firstname, std::string lastname, int age,
          int numberGrades, double *grades, double averageGrade)
      : firstname(firstname), lastname(lastname), age(age),
        numberGrades(numberGrades), averageGrade(0.0) {

    grades = new double[numberGrades];

    if (numberGrades > 0) {
      for (int i = 0; i < numberGrades; i++) {
        grades[i] = grades[i];
      }
    } else {
      grades = nullptr;
    }
  }
};

int main() {}