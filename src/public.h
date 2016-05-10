#ifndef _public_h_
#define _public_h_

class StudentImpl;

#if _WIN32
#define STUDENT_API __declspec(dllexport)
#else  // !_WIN32
#define STUDENT_API
#endif  // _WIN32

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

typedef StudentImpl* Student;
// typedef void* Student;

STUDENT_API Student student_create(const char* name);

STUDENT_API const char* student_name(Student student);

STUDENT_API void student_delete(Student student);

#ifdef __cplusplus
};  // extern "C"
#endif  // __cplusplus

#endif  // _public_h_
