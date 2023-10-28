#include "Student.h"

int main() {
  double studentGrades[] = {5, 9.0, 5.5};
  Student student("Magda", 21, 3, studentGrades);

  student.setAge(22);

  student.printStudentInfo();

  return 0;
}