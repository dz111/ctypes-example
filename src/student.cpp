#include "student.h"
#include <iostream>
#include <string>

StudentImpl::StudentImpl(std::string name) : name(name) {
  std::cout << "lib: creating a student called " << this->name << std::endl;
}

StudentImpl::~StudentImpl() {
  std::cout << "lib: deleting a student called " << this->name << std::endl;
}

const std::string& StudentImpl::get_name() {
  std::cout << "lib: called get_name on student " << this->name << std::endl;
  return this->name;
}
