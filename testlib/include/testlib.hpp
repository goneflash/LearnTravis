#include <iostream>

class TestLib {
 public:
  TestLib() = delete;
  explicit TestLib(int a);

  int Add(int a);

 private:
  int a_;
};
