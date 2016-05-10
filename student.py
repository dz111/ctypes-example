#!/usr/bin/env python
import sys
from os import path
from ctypes import *

#print path.abspath(sys.modules['__main__'].__file__)

try:
    _lib = CDLL("student.dll")
except OSError:
    try:
        _lib = CDLL("./libstudent.so")
    except OSError:
        raise OSError("Could not load student.dll or libstudent.so")

# Student student_create(const char* name)
_lib.student_create.argtypes = [c_char_p]
_lib.student_create.restype = c_void_p

# const char* student_name(Student student)
_lib.student_name.argtypes = [c_void_p]
_lib.student_name.restype = c_char_p

# void student_delete(Student student)
_lib.student_delete.argtypes = [c_void_p]
_lib.student_delete.restype = None

class Student(object):
    def __init__(self, name):
        # type: (str) -> None
        self._as_parameter_ = _lib.student_create(name)

    def __del__(self):
        _lib.student_delete(self)

    def name(self):
        # type: () -> str
        return _lib.student_name(self)

if __name__ == "__main__":
    bob = Student("Robert")
    name = bob.name()
    print "The student's name is:", name
    del bob
