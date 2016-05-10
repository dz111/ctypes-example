#ifndef _public_h_
#define _public_h_

class StudentImpl;

extern "C" {

typedef StudentImpl* Student;
// typedef void* Student;

Student student_create(const char* name);

const char* student_name(Student student);

void student_delete(Student student);

};  // extern "C"

#endif  // _public_h_
