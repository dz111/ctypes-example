#ifndef _student_h_
#define _student_h_

#include <string>

class StudentImpl {
public:
  explicit StudentImpl(std::string name);
  ~StudentImpl();
  const std::string& get_name();
private:
  std::string name;
};

#endif  // _student_h_
