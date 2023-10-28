#include "Student.h"

int main() {
  double studentGrades[] = {2, 9.0, 3};
  Student student("Magda", 21, 3, studentGrades);

  student.setAge(22);

  student.printStudentInfo();

  return 0;
}