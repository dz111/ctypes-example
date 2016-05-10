#include "public.h"
#include "student.h"

Student student_create(const char* name) {
  return new StudentImpl(name);
}

const char* student_name(Student student) {
  return student->get_name().c_str();
}

void student_delete(Student student) {
  delete student;
}
